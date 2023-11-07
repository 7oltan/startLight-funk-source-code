package states;

import flixel.FlxState;
import flixel.FlxObject;
import backend.*;
import flixel.FlxG;
import flixel.math.FlxPoint;
import states.editors.MasterEditorMenu;
import options.OptionsState;

class MainMenuState extends MusicBeatState {
	public static var psychEngineVersion:String = '0.7.1h'; //This is also used for Discord RPC (og shit)

    var swmg:FlxSprite;
    var hand:FlxSprite;
    var items:Array<MenuItem>=[];
    var itemGroup:FlxTypedGroup<FlxSprite>;
    var curSelected:Int = 0;
	var camFollow:FlxObject;
    var selected:Bool = false;
    var oldMouse:Bool = true;

    override function create(){
        oldMouse = FlxG.mouse.visible;
        //og main menu shiz
		#if MODS_ALLOWED
		Mods.pushGlobalMods();
		#end
		Mods.loadTopMod();

		#if desktop
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end
		persistentUpdate = persistentDraw = true;

        FlxG.mouse.visible = true;
        FlxG.camera.zoom = 0.662;

		var bg:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('mainmenu/bg'));
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.scrollFactor.set();
		bg.screenCenter();bg.x -= 13;bg.y += 100;
		add(bg);

		swmg = new FlxSprite(200,200).loadGraphic(Paths.image('mainmenu/sin'));
		swmg.antialiasing = ClientPrefs.data.antialiasing;
		swmg.scrollFactor.set();
		add(swmg);

        addItem('Gallery',-100, 100,[54,90],new GalleryMenuState());
        addItem('storymode',500, 0,[64,69],new StoryMenuState());
        addItem('freeplay',1100, 0,[64,64],new FreeplayState());
        addItem('options',-300,660,[5,3],new OptionsState(),true);
        addItem('credits',-260,550,[22,12],new CreditsState(),true);
        addItem('G',1200,600,[22,224],new GalamixMenuState(),true);

        itemGroup = new FlxTypedGroup<FlxSprite>();
        add(itemGroup);

        for(i in 0...items.length){      
            var button:FlxSprite = new FlxSprite(items[i].x,items[i].y);
            button.frames = Paths.getSparrowAtlas('mainmenu/'+items[i].name);
            button.animation.addByPrefix('idle',items[i].name+' idle',24);
            button.animation.addByPrefix('selected',items[i].name+' selected',24);
            button.animation.play('idle');
            button.updateHitbox();
            button.antialiasing = ClientPrefs.data.antialiasing;
            if(items[i].isMouse)
                button.scrollFactor.set();
            button.ID = i;
            itemGroup.add(button);
        }

		hand = new FlxSprite(200,200).loadGraphic(Paths.image('mainmenu/handSelector'));
		hand.antialiasing = ClientPrefs.data.antialiasing;
		hand.scrollFactor.set();
		add(hand);
		FlxTween.tween(hand.offset, {y: 50}, 0.6, {ease: FlxEase.quadInOut, type: PINGPONG, startDelay: 0.1});

		camFollow = new FlxObject(0, 0, 1, 1);
        camFollow.screenCenter();
		add(camFollow);
        
		FlxG.camera.follow(camFollow, null, 0);

        changeSelection(0);
        super.create();
    }
    function addItem(name:String,x:Float,y:Float,offsetSelected:Array<Int>,state:Null<FlxState>,?isMouse:Bool=false,?lockText:String=''){
        var item:MenuItem=new MenuItem();
        item.name = name;
        item.x = x;
        item.y = y;
        item.offsetSelected = offsetSelected;
        item.state = state;
        item.isMouse = isMouse;
        item.lockText = lockText;
        item.isLocked = (lockText != '');
        items.push(item);
    }
    override function update(elapsed:Float){
		FlxG.camera.followLerp = FlxMath.bound(elapsed * 9 / (FlxG.updateFramerate / 60), 0, 1);
		if (controls.BACK)
        {
            FlxG.sound.play(Paths.sound('cancelMenu'));
            FlxG.mouse.visible = oldMouse;
            MusicBeatState.switchState(new TitleState());
        }
        
		if (controls.UI_LEFT_P)
            changeSelection(-1);
		if (controls.UI_RIGHT_P)
            changeSelection(1);

        if (controls.justPressed('debug_1'))
			MusicBeatState.switchState(new MasterEditorMenu());

		if (controls.ACCEPT)
            startSwitchin(items[curSelected].state);

        itemGroup.forEach(function(button:FlxSprite){
            if(items[button.ID].isMouse){
                if(FlxG.mouse.overlaps(button)){
                    button.offset.set(items[button.ID].offsetSelected[0],items[button.ID].offsetSelected[1]);
                    button.animation.play('selected');

                    hand.setPosition(button.x+((items[button.ID].x > FlxG.width/2) ? 0-hand.height : button.width+(hand.height/2)),button.y-25+(button.height/2)-(hand.height/2));
                    hand.angle = items[button.ID].x > FlxG.width/2 ? -90 : 90;
                    hand.scrollFactor.set();

                    if(FlxG.mouse.justPressed)
                        startSwitchin(items[button.ID].state);
                }else{
                    button.offset.set();
                    button.animation.play('idle');
                }
                
            }
        });

        //shadow wizard money gang shit
    
        if(FlxG.mouse.overlaps(swmg)){
            swmg.alpha = 1;
            if(FlxG.mouse.justPressed){
				PlayState.isStoryMode = false;
                persistentUpdate = false;
                WeekData.reloadWeekFiles(false);
                Mods.currentModDirectory = '';
                //trace(WeekData.weeksList);
                PlayState.storyWeek = WeekData.weeksList.indexOf("weekspells");
                Difficulty.loadFromWeek();
                var songLowercase:String = Paths.formatToSongPath('shadow-government');
                var poop:String = Highscore.formatSong(songLowercase, 0);
                
				PlayState.SONG = Song.loadFromJson(poop, songLowercase);
				PlayState.storyDifficulty = 0;
                startSwitchin(new PlayState());
            }
        }else
            swmg.alpha = 0.7;

        super.update(elapsed);
    }
    
    function startSwitchin(id:Null<FlxState>){
        if(selected)
            return;
        selected = true;
        FlxTween.tween(FlxG.camera, {zoom: 0.7}, 0.1, {
            ease: FlxEase.quintOut,
            onComplete: function(twn:FlxTween)
            {
                FlxTween.tween(FlxG.camera, {zoom: 3}, 1.2, {ease: FlxEase.circIn});
                FlxTween.tween(FlxG.camera, {angle: 120}, 0.7, {ease: FlxEase.cubeInOut});
            }
        });
        FlxTween.tween(FlxG.camera, {alpha: -0.2}, 0.9, {ease: FlxEase.circIn});
        new FlxTimer().start(0.4, function(tmr:FlxTimer)onlySwitchState(id));
    }

    function onlySwitchState(id:Null<FlxState>) {
        if(Std.isOfType(id,OptionsState)){//we love hard coded shit :heart:
            OptionsState.onPlayState = false;
            if (PlayState.SONG != null)
            {
                PlayState.SONG.arrowSkin = null;
                PlayState.SONG.splashSkin = null;
            }
        }
        if(Std.isOfType(id,PlayState))//we love hard coded shit :heart:
			LoadingState.loadAndSwitchState(new PlayState());
        else
            MusicBeatState.switchState(id);
        FlxG.mouse.visible = oldMouse;
    }

    function changeSelection(amount:Int){
        FlxG.sound.play(Paths.sound('scrollMenu'));
        curSelected += amount;
        var amountOfButtons:Int = -1;
        for(item in items)
            amountOfButtons += !item.isMouse ? 1 : 0;
        
        if(curSelected > amountOfButtons)
            curSelected = 0;
        if(curSelected < 0)
            curSelected = amountOfButtons;
        
        itemGroup.forEach(function(button:FlxSprite){
            if(button.ID == curSelected && !items[button.ID].isMouse){
                button.offset.set(items[button.ID].offsetSelected[0],items[button.ID].offsetSelected[1]);
                button.animation.play('selected');
                camFollow.x = button.getGraphicMidpoint().x-items[button.ID].offsetSelected[0];

                hand.setPosition(button.x+(button.width/2)-(hand.width/2),button.y-25-150);
                hand.angle = 0;
                hand.scrollFactor.set(button.scrollFactor.x,button.scrollFactor.y);
            }
            else{
                button.offset.set();
                button.animation.play('idle');
            }
        });
    }
}

class MenuItem{
    public var name:String;
    public var isMouse:Bool;
    public var x:Float;
    public var y:Float;
    public var isLocked:Bool;
    public var lockText:String;
    public var offsetSelected:Array<Int>=[0,0];
    public var state:Null<FlxState>;
    public function new(){}
}
