package states;

import backend.Song;
import backend.WeekData;

class GalamixMenuState extends MusicBeatState{  
    var items:FlxTypedGroup<FlxSprite>; 
    var oldMouse:Bool;
	override function create(){
        super.create();

        oldMouse = FlxG.mouse.visible;
        
        FlxG.mouse.visible = true;

		/*Paths.clearStoredMemory();
		Paths.clearUnusedMemory();*/

		PlayState.isStoryMode = true;
		WeekData.reloadWeekFiles(true);

        items = new FlxTypedGroup<FlxSprite>();
        add(items);

        var amountSkipped:Int = 0;

		for (i in 0...WeekData.weeksList.length)
		{
			var weekFile:WeekData = WeekData.weeksLoaded.get(WeekData.weeksList[i]);
			if(!weekFile.galamix){
                amountSkipped++;
				continue;// skip
            }

            var character:FlxSprite = new FlxSprite(((i-amountSkipped)*300)+(FlxG.width/2)-300,0).loadGraphic(Paths.image('galamixMenu/'+weekFile.weekCharacter));
            character.loadGraphic(Paths.image('galamixMenu/'+weekFile.weekCharacter),true,Std.int(character.width/2),Std.int(character.height));
            character.animation.add('idle',[0],0,false);
            character.animation.add('selected',[1],0,false);
            character.animation.play('idle');
            character.setGraphicSize(Std.int(character.width*0.3));
            character.updateHitbox();
            character.ID = i;
            character.y = FlxG.height-character.height;
            items.add(character);
            amountSkipped = 0;
        }
    }
    override function update(elapsed:Float) {
        super.update(elapsed);

        items.forEach(function(item:FlxSprite){
            if(FlxG.mouse.overlaps(item)){
                item.animation.play('selected');

                if(FlxG.mouse.justPressed){
                    var leWeek:WeekData = WeekData.weeksLoaded.get(WeekData.weeksList[item.ID]);
                    WeekData.setDirectoryFromWeek(leWeek);

		            PlayState.storyWeek = item.ID;
		            Difficulty.loadFromWeek();
            
                    var songArray:Array<String> = [];
                    var leSongs:Array<Dynamic> = leWeek.songs;
                    for (i in 0...leSongs.length)
                        songArray.push(leSongs[i][0]);

                    PlayState.storyPlaylist = songArray;
        
                    var diffic = Difficulty.getFilePath(0/*difficuilty*/);
                    if(diffic == null) diffic = '';
        
                    PlayState.storyDifficulty = 0/*difficuilty*/;
        
                    PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0].toLowerCase() + diffic, PlayState.storyPlaylist[0].toLowerCase());
                    PlayState.campaignScore = 0;
                    PlayState.campaignMisses = 0;
                    
				    LoadingState.loadAndSwitchState(new PlayState(), true);
				    FreeplayState.destroyFreeplayVocals();
                }
            }
            else
                item.animation.play('idle');
        });

        if(controls.BACK){
            MusicBeatState.switchState(new MainMenuState());
            FlxG.sound.play(Paths.sound('cancelMenu'));
            FlxG.mouse.visible = oldMouse;
        }
    }
}