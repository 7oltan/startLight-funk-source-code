function onCreate()
    precacheImage('noteSplashes/noteSplashes-glove')
end

function onCountdownStarted()
    for i = 0, getProperty('unspawnNotes.length') - 1 do
        if getPropertyFromGroup('unspawnNotes', i, 'noteType') == 'press_note' then
            setPropertyFromGroup('unspawnNotes', i, 'rgbShader.enabled', false)
            setPropertyFromGroup('unspawnNotes', i, 'missHealth', 0.25)
            setPropertyFromGroup('unspawnNotes', i, 'noteSplashData.texture', 'noteSplashes/noteSplashes-glove')
            setPropertyFromGroup('unspawnNotes', i, 'splashEveryTime', true)
        end
    end
end