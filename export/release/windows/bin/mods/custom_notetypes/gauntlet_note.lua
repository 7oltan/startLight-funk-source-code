local flashTimer = 0
local isFlashing = false
local flashingInt = 0
local fakeFramerate = 0

function onCreate()
    fakeFramerate = math.floor((1/getPropertyFromClass('flixel.FlxG', 'elapsed'))/7)

    makeLuaSprite('yellow',nil,0,0)
    makeGraphic('yellow',screenWidth,screenHeight,FlxColor('0xFFf8ff33'))
    setProperty('yellow.color',FlxColor('0xFFf8ff33'))
    setProperty('yellow.alpha',0.00001)
    setObjectCamera('yellow','other')
    addLuaSprite('yellow',true)
end

function onCountdownStarted()
    for i = 0, getProperty('unspawnNotes.length') - 1 do
        if getPropertyFromGroup('unspawnNotes', i, 'noteType') == 'gauntlet_note' then
            setPropertyFromGroup('unspawnNotes', i, 'rgbShader.enabled', false)
            setPropertyFromGroup('unspawnNotes', i, 'ignoreNote', true)
            setPropertyFromGroup('unspawnNotes', i, 'missHealth', 0.1)
            setPropertyFromGroup('unspawnNotes', i, 'noMissAnimation', true)
            setPropertyFromGroup('unspawnNotes', i, 'noAnimation', true)
            setPropertyFromGroup('unspawnNotes', i, 'hitCausesMiss', true)
        end
    end
end

function noteMiss(id,_,typee)
    if typee == 'gauntlet_note' then
        --debugPrint('waos')
        isFlashing = true
        flashTimer = getProperty('boyfriend.singDuration')
        flashingInt = 0
        setProperty('yellow.alpha',0.3)
        setProperty('vocals.volume',1)
    end
end

function onUpdate()
    if isFlashing then
        flashingInt = flashingInt + 1
    end

    if(flashingInt%fakeFramerate >= math.floor(fakeFramerate / 2)) then
        setProperty('boyfriend.color',FlxColor('0xFFf8ff33'))
        --[[setProperty('iconP1.color',FlxColor('0xFFf8ff33'))
        setProperty('player1Bar.color',FlxColor('0xFFf8ff33'))]]
    else
        setProperty('boyfriend.color',FlxColor('0xFFFFFFFF'))
       --[[setProperty('iconP1.color',FlxColor('0xFFFFFFFF'))
        setProperty('player1Bar.color',FlxColor('0xFFFFFFFF')) too much ]]
    end

    if flashTimer > 0 then
        flashTimer = flashTimer - 0.1
        setProperty('yellow.alpha',getProperty('yellow.alpha')-0.01)
    else
        flashingInt = 0
        isFlashing = false
    end
end