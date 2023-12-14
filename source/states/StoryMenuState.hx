package states;

import backend.WeekData;
import backend.Highscore;
import backend.Song;

import flixel.group.FlxGroup;
import flixel.graphics.FlxGraphic;

import objects.MenuItem;
import objects.MenuCharacter;

import substates.GameplayChangersSubstate;
import substates.ResetScoreSubState;

class StoryMenuState extends MusicBeatState
{
	public static var weekCompleted:Map<String, Bool> = new Map<String, Bool>();

	var scoreText:FlxText;

	private static var lastDifficultyName:String = '';
	var curDifficulty:Int = 1;

	var txtWeekTitle:FlxText;

	private static var curWeek:Int = 0;

	var txtTracklist:FlxText;

	var grpWeekText:FlxTypedGroup<MenuItem>;

	var grpLocks:FlxTypedGroup<FlxSprite>;

	var difficultySelectors:FlxTypedGroup<FlxSprite>;
	var sprDifficulty:FlxSprite;
	var leftArrow:FlxSprite;
	var rightArrow:FlxSprite;
	var leftArrow2:FlxSprite;
	var rightArrow2:FlxSprite;

	var loadedWeeks:Array<WeekData> = [];

	var win:FlxSprite;
	var phillyLightsColors:Array<FlxColor>;
	var curLight:Int = -1;

	var clouds1:FlxSprite;
	var clouds2:FlxSprite;

	var difficultyXY:Array<Float> = [200,300];
	var hat:FlxSprite;

	override function create()
	{
		Paths.clearStoredMemory();
		Paths.clearUnusedMemory();

		PlayState.isStoryMode = true;
		WeekData.reloadWeekFiles(true);
		if(curWeek >= WeekData.weeksList.length) curWeek = 0;
		persistentUpdate = persistentDraw = true;

		var bg:FlxSprite = new FlxSprite().loadGraphic(Paths.image('storymenu/storymenu_bg'));
		bg.antialiasing = ClientPrefs.data.antialiasing;
		add(bg);

		win = new FlxSprite().loadGraphic(Paths.image('storymenu/win'));
		win.antialiasing = ClientPrefs.data.antialiasing;
		win.alpha = 0;
		add(win);
		
		phillyLightsColors = [0xFF31A2FD, 0xFF31FD8C, 0xFFFB33F5, 0xFFFD4531, 0xFFFBA633];

		clouds1 = new FlxSprite().loadGraphic(Paths.image('storymenu/clouds'));
		clouds1.antialiasing = ClientPrefs.data.antialiasing;
		add(clouds1);

		clouds2 = new FlxSprite(-FlxG.width).loadGraphic(Paths.image('storymenu/clouds'));
		clouds2.antialiasing = ClientPrefs.data.antialiasing;
		clouds2.flipX = true;
		add(clouds2);

		add(new FlxSprite(0,0).loadGraphic(Paths.image('storymenu/frame')));

		scoreText = new FlxText(10, 10, 0, "SCORE: 49324858", 36);
		scoreText.setFormat("Schluber.ttf", 60,FlxColor.WHITE,FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		scoreText.borderSize = 1.25;

		txtWeekTitle = new FlxText(0,FlxG.height, 0, "upcoming week!", 32);
		txtWeekTitle.setFormat("Schluber.ttf", 60, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		txtWeekTitle.y -= txtWeekTitle.height;
		txtWeekTitle.borderSize = 1.25;
		txtWeekTitle.screenCenter(X);

		var ui_tex = Paths.getSparrowAtlas('campaign_menu_UI_assets');

		grpWeekText = new FlxTypedGroup<MenuItem>();
		add(grpWeekText);

		grpLocks = new FlxTypedGroup<FlxSprite>();
		add(grpLocks);

		#if desktop
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		var num:Int = 0;

		WeekData.weeksList.reverse();

		var fakeWeekMap:Map<String,WeekData> = new Map<String,WeekData>();
		var fakeWeekList:Array<String> = [];

		for (i in 0...WeekData.weeksList.length)
		{
			var weekFile:WeekData = WeekData.weeksLoaded.get(WeekData.weeksList[i]);
			if(weekFile.galamix)
				continue;// skip
			
			var isLocked:Bool = weekIsLocked(WeekData.weeksList[i]);
			if(!isLocked || !weekFile.hiddenUntilUnlocked)
			{
				loadedWeeks.push(weekFile);
				fakeWeekMap.set(WeekData.weeksList[i],weekFile);
				fakeWeekList.push(WeekData.weeksList[i]);
				WeekData.setDirectoryFromWeek(weekFile);
				var weekThing:MenuItem = new MenuItem(0, 0, WeekData.weeksList[i]);
				weekThing.targetY = num;
				grpWeekText.add(weekThing);

				weekThing.screenCenter(Y);
				// weekThing.updateHitbox();

				// Needs an offset thingie
				if (isLocked)
				{
					var lock:FlxSprite = new FlxSprite(weekThing.width + 10 + weekThing.x);
					lock.antialiasing = ClientPrefs.data.antialiasing;
					lock.frames = ui_tex;
					lock.animation.addByPrefix('lock', 'lock');
					lock.animation.play('lock');
					lock.ID = i;
					grpLocks.add(lock);
				}
				num++;
			}
		}
		WeekData.weeksLoaded = fakeWeekMap;
		WeekData.weeksList = fakeWeekList;

		WeekData.setDirectoryFromWeek(loadedWeeks[0]);
	
		var portSize:Int = 258;

		leftArrow2 = new FlxSprite((FlxG.width/2)-(portSize/2),0).loadGraphic(Paths.image('storymenu/arrows2'),true,363,711);
		leftArrow2.antialiasing = ClientPrefs.data.antialiasing;
		leftArrow2.setGraphicSize(Std.int(leftArrow2.width*0.15));
		leftArrow2.updateHitbox();
		leftArrow2.animation.add('idle',[0],0);
		leftArrow2.animation.add('press',[1],0);
		leftArrow2.animation.play('idle');
		leftArrow2.screenCenter(Y);
		leftArrow2.x -= leftArrow2.width;
		add(leftArrow2);

		rightArrow2 = new FlxSprite((FlxG.width/2)+(portSize/2)-50,0).loadGraphic(Paths.image('storymenu/arrows2'),true,363,711);
		rightArrow2.antialiasing = ClientPrefs.data.antialiasing;
		rightArrow2.setGraphicSize(Std.int(rightArrow2.width*0.15));
		rightArrow2.updateHitbox();
		rightArrow2.animation.add('idle',[0],0);
		rightArrow2.animation.add('press',[1],0);
		rightArrow2.animation.play('idle');
		rightArrow2.screenCenter(Y);
		rightArrow2.x += rightArrow2.width;
		rightArrow2.flipX = true;
		add(rightArrow2);

		difficultySelectors = new FlxTypedGroup<FlxSprite>();
		add(difficultySelectors);

		sprDifficulty = new FlxSprite(difficultyXY[0], difficultyXY[1]);
		sprDifficulty.antialiasing = ClientPrefs.data.antialiasing;
		difficultySelectors.add(sprDifficulty);

		leftArrow = new FlxSprite(difficultyXY[0], difficultyXY[1]).loadGraphic(Paths.image('storymenu/arrows2'),true,363,711);
		leftArrow.antialiasing = ClientPrefs.data.antialiasing;
		leftArrow.setGraphicSize(Std.int(leftArrow.width*0.15));
		leftArrow.animation.add('idle',[0],0);
		leftArrow.animation.add('press',[1],0);
		leftArrow.animation.play('idle');
		leftArrow.angle = -90;
		leftArrow.updateHitbox();
		difficultySelectors.add(leftArrow);

		/*Difficulty.resetList();*/
		if(lastDifficultyName == '')
			lastDifficultyName = 'Hard';
		curDifficulty = Math.round(Math.max(0, Difficulty.defaultList.indexOf(lastDifficultyName)));
		
		rightArrow = new FlxSprite(difficultyXY[0], difficultyXY[1]).loadGraphic(Paths.image('storymenu/arrows2'),true,363,711);
		rightArrow.antialiasing = ClientPrefs.data.antialiasing;
		rightArrow.setGraphicSize(Std.int(rightArrow.width*0.15));
		rightArrow.animation.add('idle',[0],0);
		rightArrow.animation.add('press',[1],0);
		rightArrow.animation.play('idle');
		rightArrow.angle = 90;
		rightArrow.updateHitbox();
		difficultySelectors.add(rightArrow);

		var tracksSprite:FlxSprite = new FlxSprite(FlxG.width * 0.07, 56 + 425).loadGraphic(Paths.image('Menu_Tracks'));
		tracksSprite.antialiasing = ClientPrefs.data.antialiasing;
		//add(tracksSprite);

		txtTracklist = new FlxText(FlxG.width * 0.05, 500, 0, "TRACKS:", 32);
		txtTracklist.alignment = CENTER;
		txtTracklist.setFormat(Paths.font("Schluber.ttf"), 50);
		txtTracklist.color = FlxColor.WHITE;
		txtTracklist.y -= txtTracklist.height;
		add(txtTracklist);
		add(scoreText);
		add(txtWeekTitle);


		hat = new FlxSprite(0,0).loadGraphic(Paths.image('storymenu/lock'));
		hat.loadGraphic(Paths.image('storymenu/hat'));
		hat.antialiasing = ClientPrefs.data.antialiasing;
		hat.setGraphicSize(Std.int(hat.width*0.2));
		hat.updateHitbox();
		hat.setPosition(FlxG.width-hat.width,FlxG.height-hat.height);
		add(hat);

		changeWeek();
		changeDifficulty();

		super.create();
	}

	override function closeSubState() {
		persistentUpdate = true;
		changeWeek();
		super.closeSubState();
	}

	override function update(elapsed:Float)
	{
		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

		clouds1.x += 1;
		clouds2.x += 1;
		if(clouds1.x>=FlxG.width)
			clouds1.x = -FlxG.width;
		if(clouds2.x>=FlxG.width)
			clouds2.x = -FlxG.width;

		win.alpha -= (Conductor.crochet / 1000) * FlxG.elapsed * 1.5;

		// scoreText.setFormat('VCR OSD Mono', 32);
		lerpScore = Math.floor(FlxMath.lerp(lerpScore, intendedScore, FlxMath.bound(elapsed * 30, 0, 1)));
		if(Math.abs(intendedScore - lerpScore) < 10) lerpScore = intendedScore;

		scoreText.text = "WEEK SCORE:" + lerpScore;
		scoreText.screenCenter(X);

		// FlxG.watch.addQuick('font', scoreText.font);

		if (!movedBack && !selectedWeek)
		{
			var upP = controls.UI_RIGHT_P;
			var downP = controls.UI_LEFT_P;
			if (upP)
			{
				changeWeek(-1);
				FlxG.sound.play(Paths.sound('scrollMenu'));
			}

			if (downP)
			{
				changeWeek(1);
				FlxG.sound.play(Paths.sound('scrollMenu'));
			}

			if(FlxG.mouse.wheel != 0)
			{
				FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);
				changeWeek(-FlxG.mouse.wheel);
				changeDifficulty();
			}

			if(loadedWeeks[curWeek].songs.length > 0){		
				difficultySelectors.forEach(function(obj:FlxSprite) obj.alpha = 1);	
				if (controls.UI_UP)
					{rightArrow.animation.play('press');rightArrow.alpha = 1;}
				else
					{rightArrow.animation.play('idle');rightArrow.alpha = 0.7;}

				if (controls.UI_DOWN)
					{leftArrow.animation.play('press');leftArrow.alpha = 1;}
				else
					{leftArrow.animation.play('idle');leftArrow.alpha = 0.7;}
			}
			else
				difficultySelectors.forEach(function(obj:FlxSprite) obj.alpha = 0.00000000000000000001);
	
			if (controls.UI_RIGHT)
				{rightArrow2.animation.play('press');rightArrow2.alpha = 1;}
			else
				{rightArrow2.animation.play('idle');rightArrow2.alpha = 0.7;}

			if (controls.UI_LEFT)
				{leftArrow2.animation.play('press');leftArrow2.alpha = 1;}
			else
				{leftArrow2.animation.play('idle');leftArrow2.alpha = 0.7;}
			


			if (controls.UI_UP_P)
				changeDifficulty(1);
			else if (controls.UI_DOWN_P)
				changeDifficulty(-1);
			else if (upP || downP)
				changeDifficulty();

			if(FlxG.keys.justPressed.CONTROL)
			{
				persistentUpdate = false;
				openSubState(new GameplayChangersSubstate());
			}
			else if(controls.RESET)
			{
				persistentUpdate = false;
				openSubState(new ResetScoreSubState('', curDifficulty, '', curWeek));
				//FlxG.sound.play(Paths.sound('scrollMenu'));
			}
			else if (controls.ACCEPT)
			{
				selectWeek();
			}
		}

		if (controls.BACK && !movedBack && !selectedWeek)
		{
			FlxG.sound.play(Paths.sound('cancelMenu'));
			movedBack = true;
			MusicBeatState.switchState(new MainMenuState());
		}

		super.update(elapsed);

		grpLocks.forEach(function(lock:FlxSprite)
		{
			lock.y = grpWeekText.members[lock.ID].y;
			lock.visible = (lock.y > FlxG.height / 2);
		});
	}

	override function beatHit()
	{
		if(curBeat%2 == 0){
			curLight = FlxG.random.int(0, phillyLightsColors.length - 1, [curLight]);
			win.color = phillyLightsColors[curLight];
			win.alpha = 1;
		}
	}

	var movedBack:Bool = false;
	var selectedWeek:Bool = false;
	var stopspamming:Bool = false;

	function selectWeek()
	{
		if(loadedWeeks[curWeek].songs.length <= 0)
			return null;
		if (!weekIsLocked(loadedWeeks[curWeek].fileName))
		{
					FlxTween.tween(FlxG.camera, {zoom: 3}, 1.2, {ease: FlxEase.circIn});
					FlxTween.tween(FlxG.camera, {angle: 120}, 0.7, {ease: FlxEase.cubeInOut});
			FlxTween.tween(FlxG.camera, {alpha: -0.2}, 0.9, {ease: FlxEase.circIn});
			// We can't use Dynamic Array .copy() because that crashes HTML5, here's a workaround.
			var songArray:Array<String> = [];
			if(loadedWeeks[curWeek].songs.length > 0){
				var leWeek:Array<Dynamic> = loadedWeeks[curWeek].songs;
				for (i in 0...leWeek.length) {
					songArray.push(leWeek[i][0]);
				}

			}
			// Nevermind that's stupid lmao
			try
			{
				PlayState.storyPlaylist = songArray;
				PlayState.isStoryMode = true;
				selectedWeek = true;
	
				var diffic = Difficulty.getFilePath(curDifficulty);
				if(diffic == null) diffic = '';
	
				PlayState.storyDifficulty = curDifficulty;
	
				PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0].toLowerCase() + diffic, PlayState.storyPlaylist[0].toLowerCase());
				PlayState.campaignScore = 0;
				PlayState.campaignMisses = 0;
			}
			catch(e:Dynamic)
			{
				trace('ERROR! $e');
				return;
			}
			
			if (stopspamming == false)
			{
				FlxG.sound.play(Paths.sound('confirmMenu'));

				stopspamming = true;
			}

			new FlxTimer().start(0.4, function(tmr:FlxTimer)
			{
				LoadingState.loadAndSwitchState(new PlayState(), true);
				FreeplayState.destroyFreeplayVocals();
			});
			
			#if MODS_ALLOWED
			DiscordClient.loadModRPC();
			#end
		} else {
			FlxG.sound.play(Paths.sound('cancelMenu'));
		}
	}

	var tweenDifficulty:FlxTween;
	function changeDifficulty(change:Int = 0):Void
	{
		curDifficulty += change;

		if (curDifficulty < 0)
			curDifficulty = Difficulty.list.length-1;
		if (curDifficulty >= Difficulty.list.length)
			curDifficulty = 0;

		WeekData.setDirectoryFromWeek(loadedWeeks[curWeek]);
		var diff:String = Difficulty.getString(curDifficulty);
		var newImage:FlxGraphic = Paths.image('menudifficulties/' + Paths.formatToSongPath(diff));
		
		trace(Difficulty.list+'   '+loadedWeeks[curWeek].fileName);

		if(sprDifficulty.graphic != newImage)
		{
			sprDifficulty.loadGraphic(newImage);
			sprDifficulty.scale.set(0.3,0.3);
			sprDifficulty.updateHitbox();

			sprDifficulty.x = difficultyXY[0]-(sprDifficulty.width/2);
			sprDifficulty.y = difficultyXY[1]-(sprDifficulty.height/2);

			leftArrow.x = 0-(leftArrow.width/2)+(leftArrow.height/2)+sprDifficulty.x+(sprDifficulty.width/2)-(leftArrow.height/2);
			leftArrow.y = 0-(leftArrow.height/2)+(leftArrow.width/2)+sprDifficulty.y+sprDifficulty.height+10;

			rightArrow.x = 0-(rightArrow.width/2)+(rightArrow.height/2)+sprDifficulty.x+(sprDifficulty.width/2)-(rightArrow.height/2);
			rightArrow.y = 0-(rightArrow.height/2)+(rightArrow.width/2)+sprDifficulty.y-rightArrow.width-10;

			sprDifficulty.alpha = 0;
			sprDifficulty.y -= 15;

			if(tweenDifficulty != null) tweenDifficulty.cancel();
			tweenDifficulty = FlxTween.tween(sprDifficulty, {y: difficultyXY[1]-(sprDifficulty.height/2), alpha: 1}, 0.07, {onComplete: function(twn:FlxTween)
				tweenDifficulty = null
			});
		}
		lastDifficultyName = diff;

		#if !switch
		if(loadedWeeks[curWeek].songs.length > 0)
			intendedScore = Highscore.getWeekScore(loadedWeeks[curWeek].fileName, curDifficulty);
		#end
	}

	var lerpScore:Int = 0;
	var intendedScore:Int = 0;

	function changeWeek(change:Int = 0):Void
	{
		curWeek += change;

		if (curWeek >= loadedWeeks.length)
			curWeek = 0;
		if (curWeek < 0)
			curWeek = loadedWeeks.length - 1;

		var leWeek:WeekData = loadedWeeks[curWeek];
		WeekData.setDirectoryFromWeek(leWeek);

		var leName:String = leWeek.storyName;
		txtWeekTitle.visible = !(leWeek.songs.length > 0);

		var bullShit:Int = 0;

		var unlocked:Bool = !weekIsLocked(leWeek.fileName);
		for (item in grpWeekText.members)
		{
			item.targetY = bullShit - curWeek;
			if (item.targetY == Std.int(0) && unlocked)
				item.alphaTO = 1;
			else
				item.alphaTO = 0.6;

			bullShit++;
		}

		PlayState.storyWeek = curWeek;

		//trace(WeekData.getCurrentWeek().fileName);

		Difficulty.loadFromWeek();
		difficultySelectors.visible = unlocked;

		if(Difficulty.list.contains(Difficulty.getDefault()))
			curDifficulty = Math.round(Math.max(0, Difficulty.defaultList.indexOf(Difficulty.getDefault())));
		else
			curDifficulty = 0;

		var newPos:Int = Difficulty.list.indexOf(lastDifficultyName);
		//trace('Pos of ' + lastDifficultyName + ' is ' + newPos);
		if(newPos > -1)
			curDifficulty = newPos;
		updateText();

		if(leWeek.songs.length > 0)
			hat.loadGraphic(Paths.image('storymenu/hat'));
		else
			hat.loadGraphic(Paths.image('storymenu/lock'));
	}

	function weekIsLocked(name:String):Bool {
		var leWeek:WeekData = WeekData.weeksLoaded.get(name);
		return (!leWeek.startUnlocked && leWeek.weekBefore.length > 0 && (!weekCompleted.exists(leWeek.weekBefore) || !weekCompleted.get(leWeek.weekBefore)));
	}

	function updateText()
	{
		var leWeek:WeekData = loadedWeeks[curWeek];
		var stringThing:Array<String> = ['TRACKS:'];
		if(leWeek.songs.length>0){
			txtTracklist.alpha = 1;
			for (i in 0...leWeek.songs.length) {
				stringThing.push(leWeek.songs[i][0]);
			}
		}else
			txtTracklist.alpha = 0.000000000000000001;
		txtTracklist.text = '';
		for (i in 0...stringThing.length)
			txtTracklist.text += stringThing[i] + '\n';

		txtTracklist.text = txtTracklist.text.toUpperCase();

		txtTracklist.x = difficultyXY[0]-(txtTracklist.width/2);

		#if !switch
			scoreText.alpha = 1;
			intendedScore = Highscore.getWeekScore(loadedWeeks[curWeek].fileName, curDifficulty);
			if(leWeek.songs.length<=0){
				intendedScore = 0;
				scoreText.alpha = 0.00000000001;
			}
		#end
	}
}
