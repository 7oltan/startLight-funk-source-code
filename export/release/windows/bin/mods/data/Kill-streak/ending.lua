local alreadyPlayedTheDamnVideo = false

function onEndSong()
    if not isStoryMode then return end
    if not alreadyPlayedTheDamnVideo then
        startVideo('sussyLittleBaka')
        alreadyPlayedTheDamnVideo = true
        return Function_Stop
    end
end