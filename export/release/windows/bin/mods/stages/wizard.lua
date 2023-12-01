function onCreate()

	makeLuaSprite('white', nil, -1500, -500);
	makeGraphic('white',screenWidth*2,screenHeight*2)
	screenCenter('white')
	setScrollFactor('white', 0, 0);
	addLuaSprite('white', false);

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

	