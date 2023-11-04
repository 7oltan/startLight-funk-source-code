
local u = false;
local r = 0;
local shot = false;
local agent = 1
local health = 0;
local xx =  470;
local yy =  250;
local xx2 = 820;
local yy2 = 250;
local ofs = 20;
local followchars = true;
local del = 0;
local del2 = 0;
function onCreate()

	makeLuaSprite('polus', 'polus', -800, -500);
	setScrollFactor('polus', 1, 1);
	addLuaSprite('polus', false);
        scaleObject('polus', 0.8, 0.8)  

	makeAnimatedLuaSprite('snowback','snowback',-800,-250)
	addAnimationByPrefix('snowback','snowback','Snow group instance',33,true)
	objectPlayAnimation('snowback','snowback',false)
	addLuaSprite('snowback',false)
        scaleObject('snowback', 4, 3)  	

	makeAnimatedLuaSprite('snowfront','snowfront',-700,-250)
	addAnimationByPrefix('snowfront','snowfront','snow fall front instanc',33,true)
	objectPlayAnimation('snowfront','snowfront',false)
	addLuaSprite('snowfront',true)
        scaleObject('snowfront', 4, 3)  
        
    doTweenAlpha('woah', 'snowfront', 0.6, 0.5, 'linear')
    doTweenAlpha('woah2', 'snowback', 0.6, 0.5, 'linear')
end
