package states;

#if MODS_ALLOWED
import sys.FileSystem;
import sys.io.File;
#end

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
	override function create()
	{
		#if desktop
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		persistentUpdate = true;
		
		var bg:FlxSprite = new FlxSprite().loadGraphic(Paths.image('creditsMenu-bg'));
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.screenCenter();
		add(bg);

		
		roleText = new Alphabet(850, 30, 'when is this mod gonna be done im so sick of this', true);
		roleText.setScale(0.8);
		add(roleText);

		//add(new FlxSprite(0,0).makeGraphic(widthOFnames,FlxG.height));//testing -7oltan <3

		grpOptions = new FlxTypedGroup<Alphabet>();
		add(grpOptions);

		#if MODS_ALLOWED
		for (mod in Mods.parseList().enabled) pushModCreditsToList(mod);
		#end

		var defaultList:Array<Array<String>> = [ //Name - Icon name - Description - Link - BG Color
			['grimurex',				'Musician',			'Playing with matches is just a rite of passage for every child',		'http://grimurex.com/'],
			['L-C 380',			'Concept Artist',			'I love Coca Cola',		'https://twitter.com/Lord_380'],
			['TheWinterReaper',		'Concept Artist',		'Idk why im here.',										'https://twitter.com/ThWinterReaper'],
			['Nosk-Artist',		'Background Artist',		'speedrunned the bg art',							'https://twitter.com/nosk_artist/'],
			['spike',		'Charter\nMain Composer\nSprite Artist',	"i wasn't paid enough.",		'https://twitter.com/FunkinTraveller'],
			['etoile',				'Director',			'this went from heaven to hell',			'https://twitter.com/____etoiles____',],
			['ch33rymia',		'Artist',	"FUCKINGH BBBNNUUYYY",							'https://twitter.com/cheerymia'],
			['PhantomArcade',		'phantomarcade',	"Animator of Friday Night Funkin'",								'https://twitter.com/PhantomArcade3K',	'FADC45'],
			['evilsk8r',			'evilsk8r',			"Artist of Friday Night Funkin'",								'https://twitter.com/evilsk8r',			'5ABD4B'],
			['kawaisprite',			'kawaisprite',		"Composer of Friday Night Funkin'",								'https://twitter.com/kawaisprite',		'378FC7']
		];
		
		for(i in defaultList) 
			creditsStuff.push(i);
	
		for (i in 0...creditsStuff.length)
		{
			var optionText:Alphabet = new Alphabet(widthOFnames/2, ((i/creditsStuff.length)*(FlxG.height-100))+50, creditsStuff[i][0], true);
			optionText.setScale(0.6);
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

		changeSelection();
		super.create();
	}

	var quitting:Bool = false;
	var holdTime:Float = 0;
	override function update(elapsed:Float)
	{
		if (FlxG.sound.music.volume < 0.7)
		{
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;
		}

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

			if(controls.ACCEPT && (creditsStuff[curSelected][3] == null || creditsStuff[curSelected][3].length > 4)) {
				CoolUtil.browserLoad(creditsStuff[curSelected][3]);
			}
			if (controls.BACK)
			{
				FlxG.sound.play(Paths.sound('cancelMenu'));
				MusicBeatState.switchState(new MainMenuState());
				quitting = true;
			}
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
		roleText.x = 850-(roleText.width/2);

		descText.text = creditsStuff[curSelected][2];
		descText.x = 850-(descText.width/2);
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