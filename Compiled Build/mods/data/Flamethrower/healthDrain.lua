function opponentNoteHit()
    health = getProperty('health')
	drainAmount = 0.015
    if getProperty('health') > 0.15 then
        setProperty('health', health - drainAmount);
    end
end