function onCreate()

	makeLuaSprite('wizard/white', nil, -1500, -500);
	makeGraphic('wizard/white',screenWidth*3,screenHeight*3)
	setScrollFactor('wizard/white', 1, 1);
	addLuaSprite('wizard/white', false);

	makeAnimatedLuaSprite('wizard/sillies','wizard/sillies',-720,-170)
	addAnimationByPrefix('wizard/sillies','wizard/sillies','Idle',12,true)
	objectPlayAnimation('wizard/sillies','wizard/sillies',false)
	addLuaSprite('wizard/sillies',false)
    scaleObject('wizard/sillies', 1.2, 1.2)  	

	makeAnimatedLuaSprite('wizard/silliesFront','wizard/silliesFront',-1600,-280)
	addAnimationByPrefix('wizard/silliesFront','wizard/silliesFront','Idle',12,true)
	objectPlayAnimation('wizard/silliesFront','wizard/silliesFront',false)
	addLuaSprite('wizard/silliesFront',true)
    scaleObject('wizard/silliesFront', 1.9, 1.9)  	
end

	