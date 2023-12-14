local loadingTimes = {{28.8,38.4},{144,153.6}}

function onCreate()
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
                        if(note.prevNote.isSustainNote){
                            note.prevNote.scale.y *= 1.19;
                            note.prevNote.scale.y *= (6 / note.height); //Auto adjust note size
                            note.prevNote.updateHitbox();
                        }
                        
                        note.scale.y *= PlayState.daPixelZoom*2;
                        note.updateHitbox();
                    }
                    //debugPrint(note.strumTime);
                }
            }

        }
    ]])
end

function onCreatePost()
    local val = 'pixel'
    setPropertyFromClass('states.PlayState','stageUI',val)
    setPropertyFromClass('states.PlayState','isPixelStage',(val == 'pixel'))
    runHaxeFunction('reloadNotes')
    val = 'normal'
    setPropertyFromClass('states.PlayState','stageUI',val)
    setPropertyFromClass('states.PlayState','isPixelStage',(val == 'pixel'))
end

function onEvent(name,val,val2)
    if name == 'pixelEvent' then
        setPropertyFromClass('states.PlayState','stageUI',val)
        setPropertyFromClass('states.PlayState','isPixelStage',(val == 'pixel'))
        runHaxeFunction('reloadStrumNotes')
    end
end