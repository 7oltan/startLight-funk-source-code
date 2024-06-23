function onCreate()
	precacheImage('characters/dog_ded')
	precacheImage('dog_sad')
	precacheImage('fx_explosion')
	makeLuaSprite('white', nil, 0, 0);
	makeGraphic('white',screenWidth*2,screenHeight*2)
	screenCenter('white')
	setScrollFactor('white', 0,0);
	addLuaSprite('white', false);
end

	