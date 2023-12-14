function addBGsprite(name,sf)
	makeLuaSprite(name, 'nastya/'..name, -850, -290);
	setScrollFactor(name, sf, sf);
	addLuaSprite(name, false);
    --scaleObject(name, 0.8, 0.8)
end

function onCreate()
	addBGsprite('sky',0.4)
	addBGsprite('moon',0.4)
	addBGsprite('buildings1',0.5)
	addBGsprite('buildings2',0.6)
	addBGsprite('city',0.8)
	addBGsprite('ground',1)
end