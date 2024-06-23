package states;

import sys.io.File;
import openfl.utils.ByteArray;
import flixel.graphics.frames.FlxAtlasFrames;
import sys.io.FileOutput;
import openfl.net.URLLoader;
import openfl.events.IOErrorEvent;
import openfl.events.ProgressEvent;
import openfl.events.Event;
import flixel.graphics.FlxGraphic;
import openfl.display.BitmapData;
import openfl.net.URLRequest;
import tea.SScript;

using StringTools;

class GalleryMenuState extends MusicBeatState{

    var oldMouse:Bool;
    var itemGroup:FlxTypedGroup<FlxSprite>;
    var nastyaGroup:FlxTypedGroup<FlxSprite>;
    var otherGroup:FlxTypedGroup<FlxSprite>;
    var conceptGroup:FlxTypedGroup<FlxSprite>;

    var items:Array<String>=['nastya','concepts','other'];

    var itemOffsets:Array<Array<Int>>=[
        [36,24],
        [3,14],
        [0,21]
    ];

    var URL:String = 'https://raw.githack.com/1Etoile1/eee/main/';

    var curSelectedButton:Int = 0;
    var curSelected:Int = 0;
    var ready:Bool = false;

    var nameMap:Map<Int,Array<Dynamic>> = new Map<Int,Array<Dynamic>>();

    var arrowUP:FlxSprite;
    var arrowDOWN:FlxSprite;

    var imagesText:FlxText;
    var nastya:FlxSprite;

    var loadingBar:GalleryBar;
    var progressBar:GalleryBar;
    var progressText:FlxText;
    var GYAT:FlxText;

    var lurpLoadingBar:Float = 0.0;

    public static var thisStateIsDestroyed:Bool = true;

    var imageList:Array<String> = [];
    var imageListLength:Int = 0;

    public static var instance:GalleryMenuState;

    var script:psychlua.HScript;

    override public function create() {
        super.create();
        thisStateIsDestroyed = false;

        instance = this;

        oldMouse = FlxG.mouse.visible;

		var bg:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('gallery/gallery-bg'));
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.scrollFactor.set();
		bg.screenCenter();
		add(bg);


		nastya = new FlxSprite(0,0).loadGraphic(Paths.image(FlxG.random.bool(10) ? 'gallery/nastya-funky' : 'gallery/nastya-gallery'));
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
            button.frames = Paths.getSparrowAtlas('gallery/gallery-ui');
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

        var black:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('gallery/loadingScreen'));
        black.screenCenter();
        add(black);

        progressBar = new GalleryBar((FlxG.width-FlxG.width*0.85)/2,FlxG.height-100,FlxG.width*0.85,30,FlxColor.GREEN,FlxColor.BLACK);
        add(progressBar);

        loadingBar = new GalleryBar((FlxG.width-FlxG.width*0.6)/2,progressBar.y+progressBar.height,FlxG.width*0.6,15,FlxColor.WHITE,FlxColor.BLACK);
        add(loadingBar);
        
        progressText = new FlxText(-5000,loadingBar.y,(progressBar.width-loadingBar.width)/2," ",20);
		progressText.setFormat(Paths.font("vcr.ttf"), 15, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		progressText.borderSize = 2;
        add(progressText);
        
        var shitAhhText:String = '| this Gallery is online! so it takes time to load the images, if it freezes then please restart the menu. if you want to submit fanart, post it on twitter/X tagging @___etoiles___ |';

        var blackBG:FlxSprite = new FlxSprite(0,(FlxG.height/2)+100).makeGraphic(FlxG.width,30,FlxColor.BLACK);
        blackBG.alpha = 0.7;
        add(blackBG);

        GYAT = new FlxText(0,(FlxG.height/2)+100,0,shitAhhText+shitAhhText,30);
		GYAT.setFormat(Paths.font("vcr.ttf"), 30, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		GYAT.borderSize = 2;
        add(GYAT);
        FlxTween.tween(GYAT,{x:-GYAT.width/2},30,{onComplete:function(t) GYAT.x = 0,type:LOOPING});

        errorText = new FlxText(0,0,FlxG.width*0.8,"slay",20);
        errorText.alpha = 0;
        errorText.setFormat("VCR OSD Mono", 32, FlxColor.WHITE, CENTER);
        add(errorText);

        FlxTween.tween(FlxG.sound.music,{volume:0.5},0.3,{ease : FlxEase.linear});

        addGroupImages('nastya',nastyaGroup,function(){
            addGroupImages('concepts',conceptGroup,function(){
                addGroupImages('other',otherGroup,function(){           
                    callHScript('onReady');
                    ready = true;
                    FlxTween.tween(black,{alpha:0},0.2,{ease : FlxEase.linear,onComplete:function(t)remove(black)});
                    FlxTween.tween(FlxG.sound.music,{volume:1},0.2,{ease : FlxEase.linear});
                    FlxG.mouse.visible = true;
                    blackBG.alpha = 0;
                    GYAT.alpha = 0;
                    loadingBar.alpha = 0;
                    progressBar.alpha = 0;
                    progressText.alpha = 0;
                    errorText.alpha = 0;
                });
            });
        });

        call(URL+'code.hx',function(dataText){
            trace(dataText);
            script = new psychlua.HScript(null,dataText);
            callHScript('onCreate');
        },TEXT);
        
        /*call(URL+'image-list.txt',function(dataText){
            imageList = CoolUtil.listFromString(dataText);

            for(i in 0...imageList.length){
                var name:String = imageList[i].split('>')[0];
                var type:String = imageList[i].split('>')[1];
                call(URL+name,function(data) {
                    //trace(name);
                    var dataBYTE:ByteArray = new ByteArray();
                    data.readBytes(dataBYTE, 0, data.length - data.position);
                    
                    var image:FlxSprite = new FlxSprite(790,160).loadGraphic(FlxGraphic.fromBitmapData(BitmapData.fromBytes(data),false,name));
                    image.updateHitbox();
                    if(image.width > image.height)
                        image.setGraphicSize(400);
                    else
                        image.setGraphicSize(-1,400);
                    image.updateHitbox();

                    image.x += (400-image.width)/2;
                    image.y += (400-image.height)/2;

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
                        FlxG.mouse.visible = true;
                        blackBG.alpha = 0;
                        GYAT.alpha = 0;
                        loadingBar.alpha = 0;
                        progressBar.alpha = 0;
                        progressText.alpha = 0;
                        errorText.alpha = 0;
                    }
                    progressBar.percent = (nastyaGroup.members.length+conceptGroup.members.length+otherGroup.members.length)/imageList.length;
                    progressText.text = (nastyaGroup.members.length+conceptGroup.members.length+otherGroup.members.length)+' / '+imageList.length+' || '+Std.int(((nastyaGroup.members.length+conceptGroup.members.length+otherGroup.members.length)/imageList.length)*100)+'%';
                    progressText.x = (loadingBar.x+loadingBar.width+((progressBar.width-loadingBar.width)/4))-(progressText.width/2);
                },BINARY);
            }
        },TEXT);*/
    }

    function addGroupImages(groupName:String,group:FlxTypedGroup<FlxSprite>,callBack:Void->Void){     
        call(URL+groupName+'/image-list.txt',function(dataText){
            var groupImageList:Array<String> = CoolUtil.listFromString(dataText);
            imageListLength += groupImageList.length;

            for(i in 0...groupImageList.length){
                var item:String = groupImageList[i];
                var split:Array<String> = [];
                var hasSplits:Bool = false;
                var fps:Int = 24;
                if (item.contains('>')){
                    split = item.split('>');
                    item = split[0];
                    hasSplits = true;
                }
                var name:String = item;
                var isAnimated:Bool = false;
                if(name.endsWith('.spriteSheet')){
                    isAnimated  = true;
                    name = name.replace('.spriteSheet','.png');
                }

                for(b in 0...split.length){
                    if(split[b]!=null){
                        if(b==0) continue;
                        if(isAnimated&&Std.string(Std.parseInt(split[b]))== split[b])
                            fps = Std.parseInt(split[b]);
                        else
                            nameMap.set(i,[groupName,split[b]]);
                        trace(split[b]);
                    }
                }

                call(URL+groupName+'/'+name,function(data) {

                    //trace(name);
                    var dataBYTE:ByteArray = new ByteArray();
                    data.readBytes(dataBYTE, 0, data.length - data.position);
                    
                    var image:FlxSprite = new FlxSprite(790,160);
                    var graphic:FlxGraphic = FlxGraphic.fromBitmapData(BitmapData.fromBytes(data),false,name);
                    if(!isAnimated){
                        image.loadGraphic(graphic);
                        image.updateHitbox();
                        if(image.width > image.height)
                            image.setGraphicSize(400);
                        else
                            image.setGraphicSize(-1,400);
                        image.updateHitbox();
                        
                        image.x += (400-image.width)/2;
                        image.y += (400-image.height)/2;
                    }else{
                        var xmlString:String = name;
                        xmlString = xmlString.replace('.png','.xml');
                        call(URL+groupName+'/'+xmlString,function(data) {
                            var xml:String = data;
                            xml = xml.replace("\uFEFF", "");
                            trace(xml);
                            image.frames = FlxAtlasFrames.fromSparrow(graphic,xml);
                            image.animation.addByPrefix('normal','',fps,true);
                            image.animation.play('normal');
                            image.updateHitbox();
                            if(image.width > image.height)
                                image.setGraphicSize(400);
                            else
                                image.setGraphicSize(-1,400);
                            image.updateHitbox();

                            image.x += (400-image.width)/2;
                            image.y += (400-image.height)/2;
                        },TEXT);
                    }

                    image.antialiasing = ClientPrefs.data.antialiasing;
                    image.alpha = 0.00000000000001;

                    image.ID = i;
                    group.add(image);

                    if(groupImageList.length == group.members.length)
                        callBack();
                    
                    progressBar.percent = (nastyaGroup.members.length+conceptGroup.members.length+otherGroup.members.length)/imageListLength;
                    progressText.text = (nastyaGroup.members.length+conceptGroup.members.length+otherGroup.members.length)+' / '+imageListLength+' || '+Std.int(((nastyaGroup.members.length+conceptGroup.members.length+otherGroup.members.length)/imageList.length)*100)+'%';
                    progressText.x = (loadingBar.x+loadingBar.width+((progressBar.width-loadingBar.width)/4))-(progressText.width/2);
                },BINARY);
            }
        },TEXT);
    }


    var errorText:FlxText;

    function call(url:String,callBack:Dynamic->Void,dataFormat:openfl.net.URLLoaderDataFormat){  
        var request = new URLRequest(url);

        var file:URLLoader = new URLLoader();
        file.dataFormat = dataFormat;
        
        file.addEventListener(Event.COMPLETE, function(e){
            if(GalleryMenuState.thisStateIsDestroyed) return; //ugh took me long enough to get, thanks winn/whatify <3
            callBack(file.data);
            errorText.alpha = 0;
        });
        file.addEventListener(ProgressEvent.PROGRESS,function(e){ //idk if i should add this later... update added it xxx
            lurpLoadingBar = e.bytesLoaded/e.bytesTotal;
            //trace(e);
        });
        file.addEventListener(IOErrorEvent.IO_ERROR, function(e){ // error handler is killing me
            //trace(e);  

            new FlxTimer().start(1, function(tmr:FlxTimer)
                call(url,callBack,dataFormat)
            );

            var shortText:String = e.text;
            if(shortText == "Couldn't resolve host name")
                shortText = 'no internet';
            if(shortText.contains('404')) // not workin???
                shortText = 'file not found, please contact _etoile_ on discord about this if you can';

            errorText.alpha = 1;
            errorText.text = "ERROR CAUGHT : "+shortText+"\nrestart the menu or wait one seconed\nthis menu is very rushed so please be patient";
            errorText.screenCenter(X);
        });

        file.load(request);
    }

    function callHScript(name:String,?args:Null<Array<Dynamic>>=null){
        if(script != null){
            if(script.exists(name))
                script.call(name,args);
        }
    }

    function changeSelection(num:Int){
        if(!ready) return;
        
        callHScript('onChangeSelection',[num]);

        nastya.visible = false;
        
        arrowUP.visible = true;
        arrowDOWN.visible = true;

        FlxG.sound.play(Paths.sound('scrollMenu'));
        curSelected += num;

        var curGroup:FlxTypedGroup<FlxSprite>=new FlxTypedGroup<FlxSprite>();
        switch(items[curSelectedButton]){
            case 'nastya':
                curGroup = nastyaGroup;
            case 'concepts':
                curGroup = conceptGroup;           
            case 'other':
                curGroup = otherGroup;
        }

        if(curSelected > curGroup.members.length-1)
            curSelected = 0;
        if(curSelected < 0)
            curSelected = Std.int(curGroup.members.length-1);

        var extra:String = '';


        nastyaGroup.forEach(function(image:FlxSprite) image.visible = false);
        conceptGroup.forEach(function(image:FlxSprite) image.visible = false);
        otherGroup.forEach(function(image:FlxSprite) image.visible = false);
        curGroup.forEach(function(image:FlxSprite){
            if(image.ID == curSelected){
                image.visible = true;
                image.alpha = 0.6;
                image.y = 160-10;
                image.y += (400-image.height)/2;
                FlxTween.tween(image, {y: image.y+10, alpha: 1}, 0.07);

                if(nameMap.exists(curSelected)){
                    var leInfo = nameMap.get(curSelected);
                    if(leInfo[0] == items[curSelectedButton])
                        extra = ' by '+leInfo[1];
                }
            }
            else
                image.visible = false;
        });

        imagesText.text = "("+(curSelected+1)+" / "+curGroup.members.length+")"+extra;
        imagesText.screenCenter(X);

        callHScript('onChangeSelectionPost',[num]);
    }

    override public function update(elapsed:Float) {
        super.update(elapsed);
        
        callHScript('onUpdate',[elapsed]);

        if(lurpLoadingBar >= loadingBar.percent)
            loadingBar.percent = FlxMath.lerp(loadingBar.percent, lurpLoadingBar, FlxMath.bound(elapsed * 30, 0, 1));
        else
            loadingBar.percent = lurpLoadingBar;

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

        callHScript('onUpdatePost',[elapsed]);
    }
    
    override public function destroy(){
        super.destroy(); 
        callHScript('onDestory');
        GalleryMenuState.thisStateIsDestroyed = true;
        callHScript('onDestoryPost');
    }
}

class GalleryBar extends FlxSprite{
    var barWidth:Float = 0;
    var barHeight:Float = 0;
    var colorA:FlxColor;
    var colorB:FlxColor;

    public var percent:Float = 0; //0 to 1
    override public function new(x,y,barWidth:Float,barHeight:Float,colorA:FlxColor,colorB:FlxColor) {
        super(x,y);
        this.barWidth = barWidth;
        this.barHeight = barHeight;
        this.colorA = colorA;
        this.colorB = colorB;
        makeGraphic(Std.int(barWidth),Std.int(barHeight),colorB);
    }

    override function draw(){
        super.draw();
        var barA:FlxSprite = new FlxSprite(x,y).makeGraphic(Std.int(barWidth*percent),Std.int(barHeight),colorA);
        barA.alpha = alpha;
        barA.draw();
        
        var UP:FlxSprite = new FlxSprite(x,y).makeGraphic(Std.int(barWidth),Std.int(barHeight*0.3),FlxColor.BLACK);
        UP.alpha = alpha;
        UP.draw();
        var DOWN:FlxSprite = new FlxSprite(x,y+barHeight-Std.int(barHeight*0.3)).makeGraphic(Std.int(barWidth),Std.int(barHeight*0.3),FlxColor.BLACK);
        DOWN.alpha = alpha;
        DOWN.draw();
        var UP:FlxSprite = new FlxSprite(x,y).makeGraphic(Std.int(barWidth*0.01),Std.int(barHeight),FlxColor.BLACK);
        UP.alpha = alpha;
        UP.draw();
        var UP:FlxSprite = new FlxSprite(x+barWidth-Std.int(barWidth*0.01),y).makeGraphic(Std.int(barWidth*0.01),Std.int(barHeight),FlxColor.BLACK);
        UP.alpha = alpha;
        UP.draw();
    }
}