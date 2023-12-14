--unused shit <3 to whoever had the energy to go and find this... ily bbg <3  -7oltan(on discord)

function onCreate()
	initLuaShader('nastyaGlow')
end

function onCreatePost()
	--setProperty('dad.alpha',0.0000000000000000000000001)
	makeAnimatedLuaSprite('overDAD', getProperty('dad.imageFile'),getProperty('dad.x'),getProperty('dad.y'))
	setProperty('overDAD.alpha',1)
    setProperty('overDAD.scale.x',getProperty('dad.scale.x'))
	setProperty('overDAD.scale.y',getProperty('dad.scale.y'))
	addLuaSprite('overDAD',true)
	setSpriteShader('overDAD','nastyaGlow')
	debugPrint('ioabioab')
	debugPrint(getProperty('overDAD.frame.uv.width'))
	setBlendMode('overDAD','add')
end

function onUpdate(elapsed)
	setShaderFloat('overDAD','alpha',getShaderFloat('overDAD','alpha')+elapsed)
	debugPrint(getShaderFloat('overDAD','alpha'))
end

function onDraw()
	setProperty('overDAD.animation.frameName', getProperty('dad.animation.frameName'))
	setProperty('overDAD.offset.x',getProperty('dad.offset.x'))
	setProperty('overDAD.offset.y',getProperty('dad.offset.y'))

	setShaderFloatArray('overDAD','croppedUV',{getProperty('overDAD.frame.uv.x'),getProperty('overDAD.frame.uv.y')})
	setShaderFloatArray('overDAD','croppedUVSIZE',{getProperty('overDAD.frame.uv.width'),getProperty('overDAD.frame.uv.height')})
end