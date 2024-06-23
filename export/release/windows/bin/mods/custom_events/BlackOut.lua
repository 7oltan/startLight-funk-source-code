function onEventPushed(name)
	if name == 'BlackOut' then
		debugPrint('aaaaaaaaaaaaaaaaa')
		makeLuaSprite('BlackFlash', nil, 0,0);
		makeGraphic('BlackFlash',screenWidth,screenHeight);
		screenCenter('BlackFlash')
		setObjectCamera('BlackFlash','other')
		addLuaSprite('BlackFlash', true)

		--setProperty('BlackFlash.alpha', 0.0000000000000000000001)
	end
end

function onEvent(name, value1, value2)
	if name == 'BlackOut' then
		if value1 == 'true' then
			setProperty('BlackFlash.alpha', 1)
		elseif value1 == 'false' then
			setProperty('BlackFlash.alpha', 0.0000000000000000000001)
		end
	end
end
