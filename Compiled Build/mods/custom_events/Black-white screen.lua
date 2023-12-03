

function onEvent(name, value1, value2)
	if name == 'Black-white screen' then
		if difficulty == 2 then

			runTimer('HealthDrain', 0.2, 0);
		
		elseif difficulty == 3 then
			function noteMiss(id, noteData, noteType, isSustainNote)
			health = getProperty('health')
				setProperty('health', health- 500);
			end
		end

		duration = tonumber(value1);
		if duration < 0 then
			duration = 0;
		end

		targetEase = value2;
		if duration == 0 then
			setProperty('boyfriend.color', targetEase);
			setProperty('dad.color', targetEase);
			setProperty('gf.color', targetEase);
		else
			doTweenColor('bfColorTween','boyfriend', '000000', duration, targetEase)
			doTweenColor('opponentColorTween','dad', '000000', duration, targetEase)
			doTweenColor('gfColorTween','gf', '000000', duration, targetEase)
			makeLuaSprite('flash', '', 0, 0);
			makeGraphic('flash',1280,720,'ffffff')
			  addLuaSprite('flash', false);
			  setProperty('flash.scale.x',2)
			  setProperty('flash.scale.y',2)
			  setProperty('flash.alpha',0)
			doTweenAlpha('white','flash',1, duration,targetEase)
			inEffect = true;
		end
		if inEffect == true and targetEase == 'reverse' then
			doTweenColor('bfColorTween', 'boyfriend', '0xffffffff', duration, targetEase)
			doTweenColor('opponentColorTween', 'dad', '0xffffffff', duration, targetEase)
			doTweenColor('gfColorTween', 'gf', '0xffffffff', duration, targetEase)
			setProperty('flash.alpha',1)
			doTweenAlpha('white','flash',0, duration,targetEase)
			inEffect = false;
			cancelTimer('HealthDrain');
		end
	end
	function onTimerCompleted(tag, loops, loopsLeft)
		if tag == "HealthDrain" then
		health = getProperty('health')
		if getProperty('health') > 0.1 then
			setProperty('health', health- 0.02);
		end
	end
end
end