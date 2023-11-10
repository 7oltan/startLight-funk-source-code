package states;

#if MODS_ALLOWED
import sys.FileSystem;
import sys.io.File;
#end
import backend.*;

import objects.AttachedSprite;

class CreditsState extends MusicBeatState
{
	var curSelected:Int = 0;

	private var grpOptions:FlxTypedGroup<Alphabet>;
	private var iconArray:Array<FlxSprite> = [];
	private var creditsStuff:Array<Array<String>> = [];

	var descText:FlxText;

	var offsetThing:Float = -35;

	var widthOFnames:Int = 420;

	var roleText:Alphabet;

	var dog:FlxSprite;

	var oldMouse:Bool;
	override function create()
	{
		#if desktop
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		persistentUpdate = true;
		oldMouse = FlxG.mouse.visible;
		FlxG.mouse.visible = true;
		
		var bg:FlxSprite = new FlxSprite().loadGraphic(Paths.image('creditsMenu-bg'));
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.screenCenter();
		add(bg);

		roleText = new Alphabet(850, 30, 'when is this mod gonna be done im so sick of this', true);
		roleText.setScale(0.57);
		add(roleText);

		//add(new FlxSprite(0,0).makeGraphic(widthOFnames,FlxG.height));//testing -7oltan <3

		grpOptions = new FlxTypedGroup<Alphabet>();
		add(grpOptions);

		#if MODS_ALLOWED
		for (mod in Mods.parseList().enabled) pushModCreditsToList(mod);
		#end
		
		var defaultList:Array<Array<String>> = [ //Name - Icon name - Description - Link - BG Color
			['etoile',				'Director',			'this went from heaven to hell',			'https://twitter.com/____etoiles____',],
			['aqua-spike',		'Charter/Main Composer/Artist',	"i wasn't paid enough.",		'https://twitter.com/FunkinTraveller'],
			['ch33rymia',		'Artist',	"FUCKINGH BBBNNUUYYY",							'https://twitter.com/cheerymia'],
			['chalice',			'Artist/Composer',		"My brain is The size of a squirrel :wawawa:"],
			['justCris',			'Charter',			"I am Cris it rhymes with piss",								'https://twitter.com/JustCris404'],
			['bycach_broy',		'Charter',	"lazy af charter",								'https://www.youtube.com/channel/UC9myx139gYlCuo0rKfq6zBA'],
			['7oltan',			'Main Coder',			"i made this mod hell <3",								'https://www.youtube.com/channel/UCw7UHX2WaBrNQnEyWENt92w'],
			['whatify',			'Coder',		"Hi, I'm Saul Goodman. Did you know that you have rights? The Constitution says you do. And so do I.",								'https://youtube.com/@whatify9636'],
			['grimurex',				'Composer',			'Playing with matches is just a rite of passage for every child',		'http://grimurex.com/'],
			['Nosk-Artist',		'Background Artist',		'speedrunned the bg art',							'https://twitter.com/nosk_artist/'],
			['TheWinterReaper',		'Concept Artist',		'Idk why im here.',										'https://twitter.com/ThWinterReaper'],
			['L-C 380',			'Concept Artist',			'I love Coca Cola',		'https://twitter.com/Lord_380']
		];

		for(i in defaultList) 
			creditsStuff.push(i);
	
		for (i in 0...creditsStuff.length)
		{
			var optionText:Alphabet = new Alphabet(widthOFnames/2, ((i/creditsStuff.length)*(FlxG.height-60))+30, creditsStuff[i][0], true);
			optionText.setScale(0.55);
			optionText.ID = i;
			optionText.alignment = CENTERED;
			grpOptions.add(optionText);

			var str:String = 'credits/missing_icon';
			if (Paths.image('credits/' + creditsStuff[i][0]) != null) str = 'credits/' + creditsStuff[i][0];

			var icon:FlxSprite = new FlxSprite(880,200).loadGraphic(Paths.image(str));
			icon.antialiasing = ClientPrefs.data.antialiasing;
			icon.setGraphicSize(Std.int(icon.width*0.5));
			icon.updateHitbox();
			icon.x -= icon.width/2;
			icon.ID = i;
			iconArray.push(icon);
			add(icon);

			Mods.currentModDirectory = '';
		}

		descText = new FlxText(850, 100, FlxG.width-(widthOFnames+45), "", 32);
		descText.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER/*, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK*/);
		descText.scrollFactor.set();
		//descText.borderSize = 2.4;
		add(descText);

		
		dog = new FlxSprite(880,200).loadGraphic(Paths.image('WOOF'),true,462,225);
		dog.antialiasing = ClientPrefs.data.antialiasing;
		dog.animation.add('idle',[0,1],1);
		dog.animation.play('idle');
		dog.updateHitbox();
		dog.x = FlxG.width+dog.width;
		dog.y = FlxG.height-dog.height;
		FlxTween.tween(dog,{x:0-dog.width},20);
		add(dog);

		changeSelection();
		super.create();
	}

	var quitting:Bool = false;
	var holdTime:Float = 0;
	override function update(elapsed:Float)
	{
		if (FlxG.sound.music.volume < 0.7)
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;

		if(!quitting)
		{
			if(creditsStuff.length > 1)
			{
				var shiftMult:Int = 1;
				if(FlxG.keys.pressed.SHIFT) shiftMult = 3;

				var upP = controls.UI_UP_P;
				var downP = controls.UI_DOWN_P;

				if (upP)
				{
					changeSelection(-shiftMult);
					holdTime = 0;
				}
				if (downP)
				{
					changeSelection(shiftMult);
					holdTime = 0;
				}

				if(controls.UI_DOWN || controls.UI_UP)
				{
					var checkLastHold:Int = Math.floor((holdTime - 0.5) * 10);
					holdTime += elapsed;
					var checkNewHold:Int = Math.floor((holdTime - 0.5) * 10);

					if(holdTime > 0.5 && checkNewHold - checkLastHold > 0)
					{
						changeSelection((checkNewHold - checkLastHold) * (controls.UI_UP ? -shiftMult : shiftMult));
					}
				}
			}

			if(controls.ACCEPT) {
				if(creditsStuff[curSelected][3] == null)
					FlxG.sound.play(Paths.sound('fart-with-reverb'));

				else
					CoolUtil.browserLoad(creditsStuff[curSelected][3]);
			}
			if (controls.BACK)
			{
				FlxG.sound.play(Paths.sound('cancelMenu'));
				MusicBeatState.switchState(new MainMenuState());
				FlxG.mouse.visible = oldMouse;
				quitting = true;
			}

			if(FlxG.mouse.overlaps(dog)){
				dog.alpha = 1;
				if(FlxG.mouse.justPressed){
					PlayState.isStoryMode = false;
					persistentUpdate = false;
					WeekData.reloadWeekFiles(false);
					Mods.currentModDirectory = '';
					//trace(WeekData.weeksList);
					PlayState.storyWeek = WeekData.weeksList.indexOf("boner");
					Difficulty.loadFromWeek();
					var songLowercase:String = Paths.formatToSongPath('boner');
					var poop:String = Highscore.formatSong(songLowercase, 0);
					
					PlayState.SONG = Song.loadFromJson(poop, songLowercase);
					PlayState.storyDifficulty = 0;
					LoadingState.loadAndSwitchState(new PlayState());
				}
			}else
				dog.alpha = 0.6;
		}
		
		super.update(elapsed);
	}

	var moveTween:FlxTween = null;
	function changeSelection(change:Int = 0)
	{
		FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);

		curSelected += change;
		if (curSelected < 0)
			curSelected = creditsStuff.length - 1;
		if (curSelected >= creditsStuff.length)
			curSelected = 0;

		for (item in grpOptions.members)
		{
			item.alpha = 0.6;
			if (item.ID == curSelected) 
				item.alpha = 1;
		}

		for (item in iconArray)
		{
			item.alpha = 0.000000000000000000000000000000000000000001;
			item.y = 200;
			if (item.ID == curSelected){
				item.alpha = 1;
				item.y = 200 + offsetThing;

				if(moveTween != null) moveTween.cancel();
				moveTween = FlxTween.tween(item, {y : 200}, 0.25, {ease: FlxEase.sineOut});

			}
		}

		roleText.text = creditsStuff[curSelected][1];
		roleText.x = 870-(roleText.width/2);

		descText.text = creditsStuff[curSelected][2];
		descText.x = 870-(descText.width/2);
	}

	#if MODS_ALLOWED
	function pushModCreditsToList(folder:String)
	{
		var creditsFile:String = null;
		if(folder != null && folder.trim().length > 0) creditsFile = Paths.mods(folder + '/data/credits.txt');
		else creditsFile = Paths.mods('data/credits.txt');

		if (FileSystem.exists(creditsFile))
		{
			var firstarray:Array<String> = File.getContent(creditsFile).split('\n');
			for(i in firstarray)
			{
				var arr:Array<String> = i.replace('\\n', '\n').split("::");
				if(arr.length >= 5) arr.push(folder);
				creditsStuff.push(arr);
			}
			creditsStuff.push(['']);
		}
	}
	#end
}