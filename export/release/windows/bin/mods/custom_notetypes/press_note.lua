function onCountdownStarted()
    for i = 0, getProperty('unspawnNotes.length') - 1 do
        if getPropertyFromGroup('unspawnNotes', i, 'noteType') == 'press_note' then
            setPropertyFromGroup('unspawnNotes', i, 'rgbShader.enabled', false)
            setPropertyFromGroup('unspawnNotes', i, 'missHealth', 1)
            setPropertyFromGroup('unspawnNotes', i, 'noAnimation', true)
        end
    end
end