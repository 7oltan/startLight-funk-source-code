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

	makeLuaSprite('nastya/sky', 'nastya/sky', -800, -500);
	setScrollFactor('nastya/sky', 0.4, 0.4);
	addLuaSprite('nastya/sky', false);
        scaleObject('nastya/sky', 0.8, 0.8)

makeLuaSprite('nastya/buildings1', 'nastya/buildings1', -800, -500);
	setScrollFactor('nastya/buildings1', 0.5, 0.5);
	addLuaSprite('nastya/buildings1', false);
        scaleObject('nastya/buildings1', 0.8, 0.8)   

makeLuaSprite('nastya/buildings2', 'nastya/buildings2', -800, -500);
	setScrollFactor('nastya/buildings2', 0.6, 0.6);
	addLuaSprite('nastya/buildings2', false);
        scaleObject('nastya/buildings2', 0.8, 0.8)   

makeLuaSprite('nastya/buildings3', 'nastya/buildings3', -800, -500);
	setScrollFactor('nastya/buildings3', 0.7, 0.7);
	addLuaSprite('nastya/buildings3', false);
        scaleObject('nastya/buildings3', 0.8, 0.8)   

makeLuaSprite('nastya/city', 'nastya/city', -800, -500);
	setScrollFactor('nastya/city', 0.8, 0.8);
	addLuaSprite('nastya/city', false);
        scaleObject('nastya/city', 0.8, 0.8) 

makeLuaSprite('nastya/ground', 'nastya/ground', -800, -500);
	setScrollFactor('nastya/ground', 1, 1);
	addLuaSprite('nastya/ground', false);
        scaleObject('nastya/ground', 0.8, 0.8)       
end
