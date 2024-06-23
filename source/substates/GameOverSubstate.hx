package substates;

import backend.WeekData;

import objects.Character;
import flixel.FlxObject;
import flixel.FlxSubState;
import flixel.math.FlxPoint;

import states.StoryMenuState;
import states.FreeplayState;

class GameOverSubstate extends MusicBeatSubstate
{
	public var boyfriend:Character;
	var camFollow:FlxObject;
	var updateCamera:Bool = false;
	var playingDeathSound:Bool = true;

	var stageSuffix:String = "";

	public static var characterName:String = 'bf-dead';
	public static var deathSoundName:String = 'fnf_loss_sfx';
	public static var loopSoundName:String = 'gameOver';
	public static var endSoundName:String = 'gameOverEnd';

	var deathSound:FlxSound;
	
	var coloredBG:FlxSprite;

	public static var instance:GameOverSubstate;

	var ogZoom:Float = 0;

	public static function resetVariables() {
		characterName = 'bf-dead';
		deathSoundName = 'fnf_loss_sfx';
		loopSoundName = 'gameOver';
		endSoundName = 'gameOverEnd';

		var _song = PlayState.SONG;
		if(_song != null)
		{
			if(_song.gameOverChar != null && _song.gameOverChar.trim().length > 0) characterName = _song.gameOverChar;
			if(_song.gameOverSound != null && _song.gameOverSound.trim().length > 0) deathSoundName = _song.gameOverSound;
			if(_song.gameOverLoop != null && _song.gameOverLoop.trim().length > 0) loopSoundName = _song.gameOverLoop;
			if(_song.gameOverEnd != null && _song.gameOverEnd.trim().length > 0) endSoundName = _song.gameOverEnd;
		}
	}

	override function create()
	{
		instance = this;
		PlayState.instance.callOnScripts('onGameOverStart', []);

		super.create();
	}

	public function new(x:Float, y:Float, camX:Float, camY:Float)
	{
		super();

		PlayState.instance.setOnScripts('inGameOver', true);

		Conductor.songPosition = 0;
		Conductor.bpm = 98;

		//preload
		Paths.music(loopSoundName);
		Paths.music(endSoundName);

		coloredBG = new FlxSprite(-FlxG.width,-FlxG.height);
		coloredBG.makeGraphic(FlxG.width*3,FlxG.height*3);
		coloredBG.scrollFactor.set();
		coloredBG.alpha = 0.0001;
		add(coloredBG);

		ogZoom = PlayState.instance.defaultCamZoom;

		boyfriend = new Character(x, y, characterName, true);
		boyfriend.x += boyfriend.positionArray[0];
		boyfriend.y += boyfriend.positionArray[1];

		if(boyfriend.curCharacter == 'dog-dead'){
			boyfriend.setGraphicSize(FlxG.width,FlxG.height);
			boyfriend.updateHitbox();
			boyfriend.alpha = 0.0001;
			ogZoom = 1;
			FlxG.camera.zoom = 1;
		}
		add(boyfriend);

		if(boyfriend.curCharacter == 'dog-dead'){
			var doggy:FlxSprite = new FlxSprite(boyfriend.x+(boyfriend.width/2),boyfriend.y+(boyfriend.height/2)+200);
			doggy.loadGraphic(Paths.image('dog_sad'));
			doggy.setGraphicSize(Std.int(doggy.width*1.3));
			doggy.updateHitbox();
			doggy.x -= doggy.width/2;
			doggy.y -= doggy.height/2;
			doggy.antialiasing = true;
			add(doggy);


			var gameoverText:FlxText = new FlxText(boyfriend.x+(boyfriend.width/2),boyfriend.y+(boyfriend.height/2)-200,0,'GAME\nOVER',80);
			gameoverText.setFormat(Paths.font('bonerDeathFont.ttf'),100,FlxColor.WHITE,CENTER);
			gameoverText.antialiasing = false;
			gameoverText.alpha = 0.00001;
			gameoverText.x -= gameoverText.width/2;
			gameoverText.y -= gameoverText.height/2;
			add(gameoverText);

			var explosion:FlxSprite = new FlxSprite(boyfriend.x+(boyfriend.width/2),boyfriend.y+(boyfriend.height/2)+160);
			explosion.loadGraphic(Paths.image('fx_explosion'),true,256,256);
			explosion.animation.add('boom',[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15],18,false);
			explosion.alpha = 0.0000001;
			new FlxTimer().start(0.5,function(timer){
				explosion.alpha = 1;
				explosion.animation.play('boom');
				explosion.updateHitbox();
				FlxG.sound.play(Paths.sound('boom'),0.6);
			});
			explosion.setGraphicSize(Std.int(explosion.width*1.3));
			explosion.updateHitbox();
			explosion.x -= explosion.width/2;
			explosion.y -= explosion.height/2;
			explosion.animation.finishCallback = function(name){
				explosion.alpha = 0.0000001;
				FlxTween.tween(gameoverText,{alpha:1},2);
			};
			explosion.animation.callback = function(name,index,frame){
				if(frame == 6)
					doggy.alpha = 0.000001;
			};
			add(explosion);
		}

		coloredBG.color = FlxColor.fromRGB(boyfriend.healthColorArray[0], boyfriend.healthColorArray[1], boyfriend.healthColorArray[2]);

		deathSound = FlxG.sound.play(Paths.sound(deathSoundName));
		FlxG.camera.scroll.set();
		FlxG.camera.target = null;

		boyfriend.playAnim('deathLoop',true);
		boyfriend.updateHitbox();
		boyfriend.playAnim('firstDeath');

		camFollow = new FlxObject(0, 0, 1, 1);
		camFollow.setPosition(boyfriend.getGraphicMidpoint().x-boyfriend.cameraPosition[0], boyfriend.getGraphicMidpoint().y+boyfriend.cameraPosition[1]);
		FlxG.camera.focusOn(new FlxPoint(FlxG.camera.scroll.x + (FlxG.camera.width / 2), FlxG.camera.scroll.y + (FlxG.camera.height / 2)));
		add(camFollow);

		beatHit();
	}

	override function beatHit(){
		if(boyfriend.curCharacter == 'dog-dead') return;
		if(curBeat%2 != 0) return;
		if (boyfriend.animation.curAnim.name == 'deathLoop')
			boyfriend.playAnim('deathLoop',true);
		FlxG.camera.zoom += 0.015;
		coloredBG.alpha += 0.1;
	}

	public var startedDeath:Bool = false;
	override function update(elapsed:Float)
	{
		super.update(elapsed);

		FlxG.camera.zoom = FlxMath.lerp(ogZoom, FlxG.camera.zoom, FlxMath.bound(1 - (elapsed * 3.125), 0, 1));

		coloredBG.alpha = FlxMath.lerp(0, coloredBG.alpha, FlxMath.bound(1 - (elapsed * 3.125), 0, 1));
		coloredBG.visible = true;

		if(deathSound != null)
			playingDeathSound = deathSound.playing;

		PlayState.instance.callOnScripts('onUpdate', [elapsed]);

		if (controls.ACCEPT)
		{
			endBullshit();
		}

		if (controls.BACK)
		{
			#if desktop DiscordClient.resetClientID(); #end
			FlxG.sound.music.stop();
			PlayState.deathCounter = 0;
			PlayState.seenCutscene = false;
			PlayState.chartingMode = false;

			Mods.loadTopMod();

			if(PlayState.fromMenu)
				MusicBeatState.switchState(new states.MainMenuState());
			else if(PlayState.isStoryMode){
				if(PlayState.galamix)
					MusicBeatState.switchState(new states.GalamixMenuState());
				else
					MusicBeatState.switchState(new StoryMenuState());
			}else 
				MusicBeatState.switchState(new FreeplayState());
			FlxG.sound.playMusic(Paths.music('freakyMenu'));
			PlayState.instance.callOnScripts('onGameOverConfirm', [false]);
		}
		
		if (boyfriend.animation.curAnim != null)
		{
			if (boyfriend.animation.curAnim.name == 'firstDeath' && boyfriend.animation.curAnim.finished && startedDeath)
				boyfriend.playAnim('deathLoop',true);

			if(boyfriend.animation.curAnim.name == 'firstDeath')
			{
				if((boyfriend.animation.curAnim.name == 'firstDeath' && boyfriend.animation.curAnim.finished) || boyfriend.curCharacter == 'dog-dead')
				{
					FlxG.camera.follow(camFollow, LOCKON, 0);
					updateCamera = true;
					if(boyfriend.curCharacter == 'dog-dead')
						FlxG.camera.snapToTarget();
				}

				if (boyfriend.animation.curAnim.finished && !playingDeathSound)
				{
					startedDeath = true;
					coolStartDeath();
				}
				else{
					Conductor.songPosition = -deathSound.length + deathSound.time;
				}
			}
		}
		
		if(updateCamera) FlxG.camera.followLerp = FlxMath.bound(elapsed * 0.6 / (FlxG.updateFramerate / 60), 0, 1);
		else FlxG.camera.followLerp = 0;

		if (FlxG.sound.music.playing&& !playingDeathSound)
		{
			Conductor.songPosition = FlxG.sound.music.time;
		}
		PlayState.instance.callOnScripts('onUpdatePost', [elapsed]);
	}

	var isEnding:Bool = false;

	function coolStartDeath(?volume:Float = 1):Void
	{
		FlxG.sound.playMusic(Paths.music(loopSoundName), volume);
	}

	function endBullshit():Void
	{
		if (!isEnding)
		{
			isEnding = true;
			boyfriend.playAnim('deathConfirm', true);
			FlxG.sound.music.stop();
			deathSound.stop();
			FlxG.sound.play(Paths.music(endSoundName));
			new FlxTimer().start(0.7, function(tmr:FlxTimer)
			{
				FlxG.camera.fade(FlxColor.BLACK, 2, false, function()
				{
					MusicBeatState.resetState();
				});
			});
			PlayState.instance.callOnScripts('onGameOverConfirm', [true]);
		}
	}

	override function destroy()
	{
		instance = null;
		super.destroy();
	}
}
