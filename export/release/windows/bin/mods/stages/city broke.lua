local sprites = {}

local pixel = {}

function makeBGsprite(name,scroll,typee)
	local plus = 0
	if typee == pixel then
		plus = 450
		if name == 'nastya/pixel/Sky' then
			plus = 200
		end
	end
	makeLuaSprite(name, name, -800, -500+plus);
	setScrollFactor(name, scroll, scroll);
	addLuaSprite(name, false);
	if typee == pixel then
		local pixelZoom = getPropertyFromClass('states.PlayState','daPixelZoom')
		scaleObject(name,pixelZoom*1.35, pixelZoom*1.35)
		setProperty(name..'.antialiasing',false)
	else
    	scaleObject(name, 0.8, 0.8)
	end
	table.insert(typee,name)
end

function onCreate()
	makeBGsprite('nastya/sky', 0.4,sprites)
	makeBGsprite('nastya/buildings1', 0.5,sprites)
	makeBGsprite('nastya/buildings2', 0.6,sprites)
	makeBGsprite('nastya/buildings3', 0.7,sprites) 
	makeBGsprite('nastya/city', 0.8,sprites)
	makeBGsprite('nastya/groundBroken', 1,sprites)

	makeBGsprite('nastya/pixel/Sky', 0.4,pixel)
	makeBGsprite('nastya/pixel/buildings', 0.5,pixel)
	makeBGsprite('nastya/pixel/city', 0.8,pixel)
	makeBGsprite('nastya/pixel/floor', 1,pixel)

	setAlpha(pixel,false)
end

function setAlpha(typee,alpha)
	for shit = 1,#typee do
		local actulAlpha = 0.0000000000000000000001
		if alpha then
			actulAlpha = 1
		end
		setProperty(typee[shit]..'.alpha',actulAlpha)
	end
end

function onEvent(name,val1,val2)
	if name == 'stage test' then
		setAlpha(sprites,(val1 == 'normal'))
		setAlpha(pixel,(val1 == 'pixel'))
	end
end