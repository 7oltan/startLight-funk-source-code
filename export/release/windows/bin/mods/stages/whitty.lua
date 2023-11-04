function onCreate()
	makeLuaSprite('whittyBack','whittyBack',-550,-125)
	addLuaSprite('whittyBack',false)

	makeAnimatedLuaSprite('BallisticBackground','BallisticBackground',-550,-125)
	addAnimationByPrefix('BallisticBackground','BallisticBackground','Background Whitty Moving',24,true)
	setProperty('BallisticBackground.alpha',0.0000000000000000000000000000000001)
	addLuaSprite('BallisticBackground',false)
	objectPlayAnimation('BallisticBackground','BallisticBackground',false)
end

function onEvent(name,val1,val2)
	if name == 'stage test' then
		setProperty('BallisticBackground.alpha',1)
	end
end