package states;

import backend.Song;
import backend.WeekData;

class GalamixMenuState extends MusicBeatState{  
    var items:FlxTypedGroup<FlxSprite>; 
    var oldMouse:Bool;
    var popTween:FlxTween;
    var curSelectedDiff:Int = 0;

    var diffText:FlxText;
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

        var amount:Int = -1;

        WeekData.weeksList.reverse();

		for (i in 0...WeekData.weeksList.length)
		{
			var weekFile:WeekData = WeekData.weeksLoaded.get(WeekData.weeksList[i]);
			if(!weekFile.galamix)
				continue;// skip
            else
                amount++;

            var character:FlxSprite = new FlxSprite(300+(amount*300),0).loadGraphic(Paths.image('galamixMenu/'+weekFile.weekCharacter));
            character.loadGraphic(Paths.image('galamixMenu/'+weekFile.weekCharacter),true,Std.int(character.width/2),Std.int(character.height));
            character.animation.add('idle',[0],0,false);
            character.animation.add('selected',[1],0,false);
            character.animation.play('idle');
            character.setGraphicSize(Std.int(character.width*0.3));
            character.updateHitbox();
            character.ID = i;
            character.y = FlxG.height-character.height;
            items.add(character);
        }

        diffText = new FlxText(FlxG.width,50,0,'',60);
        diffText.setFormat(Paths.font("vcr.ttf"),50,FlxColor.WHITE);
        add(diffText);
    }
    override function update(elapsed:Float) {
        super.update(elapsed);

        var ovarlapsAny:Bool = false;
        items.forEach(function(item:FlxSprite){
            if(FlxG.mouse.overlaps(item)){
                ovarlapsAny = true;
                if(item.animation.curAnim.name == 'idle'){
                    item.animation.play('selected');
                    if(popTween != null)
                        popTween.cancel();
                    popTween = FlxTween.tween(item,{y:FlxG.height-item.height},0.1,{ease: FlxEase.expoOut});
                    FlxG.sound.play(Paths.sound('scrollMenu'));
                }

                PlayState.storyWeek = item.ID;
                Difficulty.loadFromWeek();

                if(FlxG.mouse.justPressed){
                    var leWeek:WeekData = WeekData.weeksLoaded.get(WeekData.weeksList[item.ID]);
                    WeekData.setDirectoryFromWeek(leWeek);
            
                    var songArray:Array<String> = [];
                    var leSongs:Array<Dynamic> = leWeek.songs;
                    for (i in 0...leSongs.length)
                        songArray.push(leSongs[i][0]);

                    PlayState.storyPlaylist = songArray;
        
                    var diffic = Difficulty.getFilePath(curSelectedDiff);
                    if(diffic == null) diffic = '';
        
                    PlayState.storyDifficulty = curSelectedDiff;
        
                    PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0].toLowerCase() + diffic, PlayState.storyPlaylist[0].toLowerCase());
                    PlayState.campaignScore = 0;
                    PlayState.campaignMisses = 0;
                    PlayState.galamix = true;
                    
				    LoadingState.loadAndSwitchState(new PlayState(), true);
                }
            }
            else{
                item.animation.play('idle');
                item.y = FlxG.height-item.height+10;
            }
        });

        diffText.visible = ovarlapsAny;
        if(ovarlapsAny)
            changeDiff(0);

        if(controls.UI_LEFT_P){
            changeDiff(-1);
            FlxG.sound.play(Paths.sound('scrollMenu'));
        }

        if(controls.UI_RIGHT_P){
            changeDiff(1);
            FlxG.sound.play(Paths.sound('scrollMenu'));
        }

        if(controls.BACK){
            MusicBeatState.switchState(new MainMenuState());
            FlxG.sound.play(Paths.sound('cancelMenu'));
            FlxG.mouse.visible = oldMouse;
        }
    }

    function changeDiff(num:Int){
        curSelectedDiff += num;

        if(curSelectedDiff > Difficulty.list.length-1)
            curSelectedDiff = 0;
        if(curSelectedDiff < 0)
            curSelectedDiff = Difficulty.list.length-1;

        var thediff:String = Difficulty.getString(curSelectedDiff);
        diffText.text =  '< ' + thediff.toUpperCase() + ' >';
        diffText.x = FlxG.width - 250 - (diffText.width/2);
        diffText.visible = (Difficulty.list.length > 1);
    }
}