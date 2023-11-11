package states;

import sys.io.File;
import openfl.utils.ByteArray;
import sys.io.FileOutput;
import openfl.net.URLLoader;
import openfl.events.IOErrorEvent;
import openfl.events.ProgressEvent;
import openfl.events.Event;
import flixel.graphics.FlxGraphic;
import openfl.display.BitmapData;
import openfl.net.URLRequest;

using StringTools;

class GalleryMenuState extends MusicBeatState{

    var oldMouse:Bool;
    var itemGroup:FlxTypedGroup<FlxSprite>;
    var nastyaGroup:FlxTypedGroup<FlxSprite>;
    var otherGroup:FlxTypedGroup<FlxSprite>;
    var conceptGroup:FlxTypedGroup<FlxSprite>;

    var items:Array<String>=['nastya','concept','other'];

    var itemOffsets:Array<Array<Int>>=[
        [36,24],
        [3,14],
        [0,21]
    ];

    var URL:String = 'https://raw.githack.com/1Etoile1/eee/main/';

    var curSelectedButton:Int = 0;
    var curSelected:Int = 0;
    var ready:Bool = false;

    var arrowUP:FlxSprite;
    var arrowDOWN:FlxSprite;

    var imagesText:FlxText;
    var nastya:FlxSprite;
    override public function create() {
        super.create();

        oldMouse = FlxG.mouse.visible;
        FlxG.mouse.visible = true;

		var bg:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('gallery-bg'));
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.scrollFactor.set();
		bg.screenCenter();
		add(bg);

		nastya = new FlxSprite(0,0).loadGraphic(Paths.image(FlxG.random.bool(10) ? 'nastya-funky' : 'nastya-gallery'));
		nastya.antialiasing = ClientPrefs.data.antialiasing;
		nastya.scrollFactor.set();
        nastya.setGraphicSize(Std.int(nastya.width*0.4));
        nastya.updateHitbox();
        nastya.setPosition((FlxG.width/2)-100,FlxG.height-nastya.height);
		add(nastya);

        imagesText = new FlxText(0,0,FlxG.width*0.8,"( ? / ? )",20);
        imagesText.screenCenter(X);
		imagesText.setFormat(Paths.font("vcr.ttf"), 50, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		imagesText.borderSize = 2;
        add(imagesText);
        
        itemGroup = new FlxTypedGroup<FlxSprite>();
        add(itemGroup);

        for(i in 0...items.length){
            var button:FlxSprite = new FlxSprite(50+(i*100),200+(i*170));
            button.frames = Paths.getSparrowAtlas('gallery-ui');
            button.animation.addByPrefix('idle',items[i]+'0',24,true);
            button.animation.addByPrefix('selected',items[i]+' select',24,true);
            button.animation.play('idle');
            button.antialiasing = ClientPrefs.data.antialiasing;
            button.scrollFactor.set();
            button.ID = i;
            itemGroup.add(button);
        }
        
        nastyaGroup = new FlxTypedGroup<FlxSprite>();
        add(nastyaGroup);

        conceptGroup = new FlxTypedGroup<FlxSprite>();
        add(conceptGroup);

        otherGroup = new FlxTypedGroup<FlxSprite>();
        add(otherGroup);

        arrowUP = new FlxSprite(950,10);
        arrowUP.frames = Paths.getSparrowAtlas('campaign_menu_UI_assets');
        arrowUP.animation.addByPrefix('idle','arrow push left',24,true);
        arrowUP.animation.addByPrefix('pressed','arrow left',24,true);
        arrowUP.animation.play('idle');
        arrowUP.antialiasing = ClientPrefs.data.antialiasing;
        arrowUP.angle = 90;
        arrowUP.flipY = true;
        arrowUP.visible = false;
        add(arrowUP);

        arrowDOWN = new FlxSprite(950,FlxG.height-100);
        arrowDOWN.frames = Paths.getSparrowAtlas('campaign_menu_UI_assets');
        arrowDOWN.animation.addByPrefix('idle','arrow push left',24,true);
        arrowDOWN.animation.addByPrefix('pressed','arrow left',24,true);
        arrowDOWN.animation.play('idle');
        arrowDOWN.antialiasing = ClientPrefs.data.antialiasing;
        arrowDOWN.angle = -90;
        arrowDOWN.flipY = true;
        arrowDOWN.visible = false;
        add(arrowDOWN);

        var black:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('loadingScreen'));
        black.screenCenter();
        add(black);

        errorText = new FlxText(0,0,FlxG.width*0.8,"slay",20);
        errorText.alpha = 0;
        errorText.setFormat("VCR OSD Mono", 32, FlxColor.WHITE, CENTER);
        add(errorText);

        FlxTween.tween(FlxG.sound.music,{volume:0.5},0.3,{ease : FlxEase.linear});
        call(URL+'image-list.txt',function(dataText){
            var imageList:Array<String> = CoolUtil.listFromString(dataText);

            for(i in 0...imageList.length){
                var name:String = imageList[i].split('>')[0];
                var type:String = imageList[i].split('>')[1];
                call(URL+name,function(data) {
                    trace(name);
                    var dataBYTE:ByteArray = new ByteArray();
                    data.readBytes(dataBYTE, 0, data.length - data.position);
                    
                    var image:FlxSprite = new FlxSprite(770,160).loadGraphic(FlxGraphic.fromBitmapData(BitmapData.fromBytes(data),false,name));
                    image.setGraphicSize(400,400);
                    image.updateHitbox();
                    image.antialiasing = ClientPrefs.data.antialiasing;
                    image.alpha = 0.00000000000001;
                    switch(type){
                        case 'N':
                            image.ID = nastyaGroup.members.length;
                            nastyaGroup.add(image);
                        case 'C':
                            image.ID = conceptGroup.members.length;
                            conceptGroup.add(image);
                        case 'O':
                            image.ID = otherGroup.members.length;
                            otherGroup.add(image);
                    }
                    if(imageList.length == (nastyaGroup.members.length+conceptGroup.members.length+otherGroup.members.length)){
                        ready = true;
                        FlxTween.tween(black,{alpha:0},0.2,{ease : FlxEase.linear,onComplete:function(t)remove(black)});
                        FlxTween.tween(FlxG.sound.music,{volume:1},0.2,{ease : FlxEase.linear});
                        errorText.alpha = 0;
                    }
                },BINARY);
            }
        },TEXT);
    }


    var errorText:FlxText;

    function call(url:String,callBack:Dynamic->Void,dataFormat:openfl.net.URLLoaderDataFormat){  
        var request = new URLRequest(url);

        var file:URLLoader = new URLLoader();
        file.dataFormat = dataFormat;
        
        file.addEventListener(Event.COMPLETE, function(e){ callBack(file.data);errorText.alpha = 0;});
        /*file.addEventListener(ProgressEvent.PROGRESS,function(e){ //idk if i should add those later
            progressBar.width = (FlxG.width*0.8)*(e.bytesLoaded/e.bytesTotal);
            progressBar.screenCenter(X);
            trace(e);
        });*/
        file.addEventListener(IOErrorEvent.IO_ERROR, function(e){ // error handler is killing me
            trace(e);  
            new FlxTimer().start(1, function(tmr:FlxTimer)
                call(url,callBack,dataFormat)
            );

            var shortText:String = e.text;
            if(shortText == "Couldn't resolve host name")
                shortText = 'no internet';
            if(shortText.contains('404'))
                shortText = 'file not found, please contact _etoile_ on discord about this if you can';

            errorText.alpha = 1;
            errorText.text = "ERROR CAUGHT : "+shortText+"\nrestart the menu or wait one seconed\nthis menu is very rushed so please be patient";
            errorText.screenCenter(X);
        });

        file.load(request);
    }

    function changeSelection(num:Int){
        if(!ready) return;
        nastya.visible = false;
        
        arrowUP.visible = true;
        arrowDOWN.visible = true;

        FlxG.sound.play(Paths.sound('scrollMenu'));
        curSelected += num;

        var curGroup:FlxTypedGroup<FlxSprite>=new FlxTypedGroup<FlxSprite>();
        switch(items[curSelectedButton]){
            case 'nastya':
                curGroup = nastyaGroup;
            case 'concept':
                curGroup = conceptGroup;           
            case 'other':
                curGroup = otherGroup;
        }

        if(curSelected > curGroup.members.length-1)
            curSelected = 0;
        if(curSelected < 0)
            curSelected = Std.int(curGroup.members.length-1);

        imagesText.text = "("+(curSelected+1)+" / "+curGroup.members.length+")";
        imagesText.screenCenter(X);

        nastyaGroup.forEach(function(image:FlxSprite) image.visible = false);
        conceptGroup.forEach(function(image:FlxSprite) image.visible = false);
        otherGroup.forEach(function(image:FlxSprite) image.visible = false);
        curGroup.forEach(function(image:FlxSprite){
            if(image.ID == curSelected){
                image.visible = true;
                image.alpha = 0.6;
                image.y = 160-10;
                FlxTween.tween(image, {y: 160, alpha: 1}, 0.07);
            }
            else
                image.visible = false;
        });
    }

    override public function update(elapsed:Float) {
        super.update(elapsed);

        itemGroup.forEach(function(button:FlxSprite){
            if(FlxG.mouse.overlaps(button)){
                if(FlxG.mouse.justPressed){
                    curSelectedButton = button.ID;
                    curSelected = 0;
                    changeSelection(0);
                }
                button.alpha = 1;
            }else
                button.alpha = 0.9;

            if(button.ID == curSelectedButton){
                button.animation.play('selected');
                button.offset.set(itemOffsets[button.ID][0],itemOffsets[button.ID][1]);
                button.alpha = 1;
            }
            else{
                button.animation.play('idle');
                button.offset.set(0,0);
            }
        });

        if(controls.UI_UP_P)
            changeSelection(-1);
        if(controls.UI_DOWN_P)
            changeSelection(1);

        if(controls.UI_UP)
            arrowUP.animation.play('pressed');
        else
            arrowUP.animation.play('idle');

        if(controls.UI_DOWN)
            arrowDOWN.animation.play('pressed');
        else
            arrowDOWN.animation.play('idle');

        if(controls.BACK){
            MusicBeatState.switchState(new MainMenuState());
            FlxG.sound.play(Paths.sound('cancelMenu'));
            FlxG.mouse.visible = oldMouse;
            FlxG.sound.music.volume = 1;
        }
    }
}