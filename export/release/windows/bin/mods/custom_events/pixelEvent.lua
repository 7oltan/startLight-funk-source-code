--uhhh unused shader number 2 FUCK THAT WE BOTTA RELEASE IN 12 HOURS!!!!

local loadingTimes = {{28.8,38.4},{144,153.6}}

function onCreate()
    --initLuaShader('pixelZoomShader')
    runHaxeCode([[
        public function reloadStrumNotes(){
            for(note in game.strumLineNotes)
                note.reloadNote();
        }
        public function reloadNotes(){
            /*for(note in game.notes)
                note.reloadNote();*/

            for(note in game.unspawnNotes){
                if((note.strumTime/1000 >=28.8 && note.strumTime/1000 < 38.4)||(note.strumTime/1000>=144 && note.strumTime/1000 < 153.6)){
                    note.reloadNote();
                    note.defaultRGB();
                    if(note.isSustainNote){
                        note.offsetX = (note.parent.width / 2)-(note.width/2);

                        note.correctionOffset = note.parent.height / 2;
                        
				        note.scale.y *= PlayState.daPixelZoom;
				        note.updateHitbox();
                        if(note.prevNote.isSustainNote){
                            note.prevNote.scale.y *= 1.19;
                            /*note.prevNote.scale.y *= (6 / note.height); //Auto adjust note size
                            note.prevNote.scale.y /= Note.SUSTAIN_SIZE / note.prevNote.frameHeight;*/
                            note.prevNote.updateHitbox();
                        }
                    }
                    //debugPrint(note.strumTime);
                }
            }

        }
    ]])
end

local oldStageQuality = 0

function onCreatePost()
    local val = 'pixel'
    setPropertyFromClass('states.PlayState','stageUI',val)
    setPropertyFromClass('states.PlayState','isPixelStage',(val == 'pixel'))
    runHaxeFunction('reloadNotes')
    val = 'normal'
    setPropertyFromClass('states.PlayState','stageUI',val)
    setPropertyFromClass('states.PlayState','isPixelStage',(val == 'pixel'))

    oldStageQuality = getPropertyFromClass('flixel.FlxG','game.stage.quality')
end

function onEvent(name,val,val2)
    if name == 'pixelEvent' then
        setPropertyFromClass('states.PlayState','stageUI',val)
        setPropertyFromClass('states.PlayState','isPixelStage',(val == 'pixel'))

        setProperty('camGame.pixelPerfectRender',(val == 'pixel'))
        setProperty('camGame.antialiasing',not (val == 'pixel'))

        if val == 'pixel' then
            setPropertyFromClass('flixel.FlxG','game.stage.quality',2)
            --setCameraShader('camGame','pixelZoomShader')
            --setProperty('camGame.viewWidth',getProperty('camGame.viewWidth')*6)
            --[[setProperty('defaultCamZoom',getProperty('defaultCamZoom')*6)]]
            --setPropertyFromClass('flixel.FlxG','camera.zoom',6)--getPropertyFromClass('flixel.FlxG','camera.zoom')/(math.min(getPropertyFromClass('flixel.FlxG','scaleMode.scale.x'),getPropertyFromClass('flixel.FlxG','scaleMode.scale.y'))*6))
        else
            getPropertyFromClass('flixel.FlxG','game.stage.quality',oldStageQuality)
            --removeCameraShader('camGame')
            --[[setPropertyFromClass('flixel.FlxG','camera.scaleX',1)
            setPropertyFromClass('flixel.FlxG','camera.scaleY',1)]]
        end

        runHaxeFunction('reloadStrumNotes')
    end
end