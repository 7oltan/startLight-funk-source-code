function onCreate()
    runHaxeCode([[
        public function reloadNotes(){
            for(note in game.notes)
                note.reloadNote();

            for(note in game.unspawnNotes)
                note.reloadNote();

            for(note in game.strumLineNotes)
                note.reloadNote();
        }
    ]])
end

function onEvent(name,val,val2)
    if name == 'pixelEvent' then
        setPropertyFromClass('states.PlayState','stageUI',val)
        setPropertyFromClass('states.PlayState','isPixelStage',(val == 'pixel'))
        runHaxeFunction('reloadNotes')
    end
end