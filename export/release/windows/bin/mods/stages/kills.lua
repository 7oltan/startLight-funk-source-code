function onCreate()
	makeLuaSprite('polus', 'mongus/polus', -800, -500)
    scaleObject('polus', 0.8, 0.8)
	setScrollFactor('polus', 1, 1)
	addLuaSprite('polus', false)

	makeAnimatedLuaSprite('snowback','mongus/snowback',-800,-250)
	addAnimationByPrefix('snowback','snowback','Snow group instance',33,true)
	objectPlayAnimation('snowback','snowback',false)
	setProperty('snowback.alpha',0.6)
    scaleObject('snowback', 4, 3)
	addLuaSprite('snowback',false)

	makeAnimatedLuaSprite('snowfront','mongus/snowfront',-700,-250)
	addAnimationByPrefix('snowfront','snowfront','snow fall front instanc',33,true)
	objectPlayAnimation('snowfront','snowfront',false)
	setProperty('snowfront.alpha',0.6)
    scaleObject('snowfront', 4, 3)  
	addLuaSprite('snowfront',true)
end
