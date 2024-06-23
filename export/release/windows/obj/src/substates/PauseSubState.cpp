#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_Difficulty
#include <backend/Difficulty.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_Highscore
#include <backend/Highscore.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_backend_Song
#include <backend/Song.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_states_FreeplayState
#include <states/FreeplayState.h>
#endif
#ifndef INCLUDED_states_GalamixMenuState
#include <states/GalamixMenuState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_StoryMenuState
#include <states/StoryMenuState.h>
#endif
#ifndef INCLUDED_substates_PauseSubState
#include <substates/PauseSubState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_15_new,"substates.PauseSubState","new",0x29f7dd2d,"substates.PauseSubState.new","substates/PauseSubState.hx",15,0x1bd278e4)
static const ::String _hx_array_data_f0c4c2bb_2[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Change Difficulty",eb,7e,37,a6),HX_("Options",3e,5b,4f,ad),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_144_update,"substates.PauseSubState","update",0x71f1b75c,"substates.PauseSubState.update","substates/PauseSubState.hx",144,0x1bd278e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_313_deleteSkipTimeText,"substates.PauseSubState","deleteSkipTimeText",0x93e5bb97,"substates.PauseSubState.deleteSkipTimeText","substates/PauseSubState.hx",313,0x1bd278e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_339_destroy,"substates.PauseSubState","destroy",0xc8452447,"substates.PauseSubState.destroy","substates/PauseSubState.hx",339,0x1bd278e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_346_changeSelection,"substates.PauseSubState","changeSelection",0x39602509,"substates.PauseSubState.changeSelection","substates/PauseSubState.hx",346,0x1bd278e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_382_regenMenu,"substates.PauseSubState","regenMenu",0x71c16789,"substates.PauseSubState.regenMenu","substates/PauseSubState.hx",382,0x1bd278e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_414_updateSkipTextStuff,"substates.PauseSubState","updateSkipTextStuff",0x1b66d78c,"substates.PauseSubState.updateSkipTextStuff","substates/PauseSubState.hx",414,0x1bd278e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_424_updateSkipTimeText,"substates.PauseSubState","updateSkipTimeText",0xdf92d675,"substates.PauseSubState.updateSkipTimeText","substates/PauseSubState.hx",424,0x1bd278e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_325_restartSong,"substates.PauseSubState","restartSong",0xef99cd11,"substates.PauseSubState.restartSong","substates/PauseSubState.hx",325,0x1bd278e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7f6c2f9964c51edc_33_boot,"substates.PauseSubState","boot",0x8702aac5,"substates.PauseSubState.boot","substates/PauseSubState.hx",33,0x1bd278e4)
namespace substates{

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_15_new)
HXLINE( 142)		this->cantUnpause = ((Float)0.1);
HXLINE( 141)		this->holdTime = ((Float)0);
HXLINE(  28)		this->curTime = ::Math_obj::max(( (Float)(0) ),::backend::Conductor_obj::songPosition);
HXLINE(  22)		this->curSelected = 0;
HXLINE(  21)		this->difficultyChoices = ::Array_obj< ::String >::__new(0);
HXLINE(  20)		this->menuItemsOG = ::Array_obj< ::String >::fromData( _hx_array_data_f0c4c2bb_2,5);
HXLINE(  19)		this->menuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  37)		super::__construct();
HXLINE(  38)		if ((::backend::Difficulty_obj::list->length < 2)) {
HXLINE(  38)			this->menuItemsOG->remove(HX_("Change Difficulty",eb,7e,37,a6));
            		}
HXLINE(  40)		if (::states::PlayState_obj::chartingMode) {
HXLINE(  42)			this->menuItemsOG->insert(2,HX_("Leave Charting Mode",36,c5,86,71));
HXLINE(  44)			int num = 0;
HXLINE(  45)			if (!(::states::PlayState_obj::instance->startingSong)) {
HXLINE(  47)				num = 1;
HXLINE(  48)				this->menuItemsOG->insert(3,HX_("Skip Time",4e,65,49,c7));
            			}
HXLINE(  50)			this->menuItemsOG->insert((3 + num),HX_("End Song",7a,be,85,e8));
HXLINE(  51)			this->menuItemsOG->insert((4 + num),HX_("Toggle Practice Mode",7c,8b,b4,6b));
HXLINE(  52)			this->menuItemsOG->insert((5 + num),HX_("Toggle Botplay",ef,6e,ca,1a));
            		}
HXLINE(  54)		this->menuItems = this->menuItemsOG;
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			int _g1 = ::backend::Difficulty_obj::list->length;
HXDLIN(  56)			while((_g < _g1)){
HXLINE(  56)				_g = (_g + 1);
HXDLIN(  56)				int i = (_g - 1);
HXLINE(  57)				 ::Dynamic diff;
HXDLIN(  57)				if (::hx::IsNull( i )) {
HXLINE(  57)					diff = ::states::PlayState_obj::storyDifficulty;
            				}
            				else {
HXLINE(  57)					diff = i;
            				}
HXDLIN(  57)				::String diff1 = ::backend::Difficulty_obj::list->__get(( (int)(diff) ));
HXLINE(  58)				this->difficultyChoices->push(diff1);
            			}
            		}
HXLINE(  60)		this->difficultyChoices->push(HX_("BACK",27,a2,d1,2b));
HXLINE(  63)		this->pauseMusic =  ::flixel::sound::FlxSound_obj::__alloc( HX_CTX );
HXLINE(  64)		 ::flixel::sound::FlxSound _hx_tmp = this->pauseMusic;
HXDLIN(  64)		::String library = null();
HXDLIN(  64)		 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("breakfast",db,b2,0c,49),library);
HXDLIN(  64)		_hx_tmp->loadEmbedded(file,true,true,null());
HXLINE(  65)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  66)		 ::flixel::sound::FlxSound _hx_tmp1 = this->pauseMusic;
HXDLIN(  66)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  66)		_hx_tmp1->play(false,_hx_tmp2->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  68)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::sound::FlxSound >();
HXLINE(  70)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  71)		bg->set_alpha(( (Float)(0) ));
HXLINE(  72)		{
HXLINE(  72)			 ::flixel::math::FlxBasePoint this1 = bg->scrollFactor;
HXDLIN(  72)			this1->set_x(( (Float)(0) ));
HXDLIN(  72)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  73)		this->add(bg);
HXLINE(  75)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ),32,null());
HXLINE(  76)		{
HXLINE(  76)			 ::flixel::math::FlxBasePoint this2 = levelInfo->scrollFactor;
HXDLIN(  76)			this2->set_x(( (Float)(0) ));
HXDLIN(  76)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  77)		::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  77)		::String _hx_tmp3;
HXDLIN(  77)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE(  77)			_hx_tmp3 = file1;
            		}
            		else {
HXLINE(  77)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  77)		levelInfo->setFormat(_hx_tmp3,32,null(),null(),null(),null(),null());
HXLINE(  78)		levelInfo->updateHitbox();
HXLINE(  79)		this->add(levelInfo);
HXLINE(  81)		 ::Dynamic num = null();
HXDLIN(  81)		 ::Dynamic levelDifficulty;
HXDLIN(  81)		if (::hx::IsNull( num )) {
HXLINE(  81)			levelDifficulty = ::states::PlayState_obj::storyDifficulty;
            		}
            		else {
HXLINE(  81)			levelDifficulty = num;
            		}
HXDLIN(  81)		 ::flixel::text::FlxText levelDifficulty1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,::backend::Difficulty_obj::list->__get(( (int)(levelDifficulty) )).toUpperCase(),32,null());
HXLINE(  82)		{
HXLINE(  82)			 ::flixel::math::FlxBasePoint this3 = levelDifficulty1->scrollFactor;
HXDLIN(  82)			this3->set_x(( (Float)(0) ));
HXDLIN(  82)			this3->set_y(( (Float)(0) ));
            		}
HXLINE(  83)		::String file2 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  83)		::String _hx_tmp4;
HXDLIN(  83)		if (::sys::FileSystem_obj::exists(file2)) {
HXLINE(  83)			_hx_tmp4 = file2;
            		}
            		else {
HXLINE(  83)			_hx_tmp4 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  83)		levelDifficulty1->setFormat(_hx_tmp4,32,null(),null(),null(),null(),null());
HXLINE(  84)		levelDifficulty1->updateHitbox();
HXLINE(  85)		this->add(levelDifficulty1);
HXLINE(  87)		 ::flixel::text::FlxText blueballedTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,79,0,(HX_("Blueballed: ",fe,a6,48,b4) + ::states::PlayState_obj::deathCounter),32,null());
HXLINE(  88)		{
HXLINE(  88)			 ::flixel::math::FlxBasePoint this4 = blueballedTxt->scrollFactor;
HXDLIN(  88)			this4->set_x(( (Float)(0) ));
HXDLIN(  88)			this4->set_y(( (Float)(0) ));
            		}
HXLINE(  89)		::String file3 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  89)		::String _hx_tmp5;
HXDLIN(  89)		if (::sys::FileSystem_obj::exists(file3)) {
HXLINE(  89)			_hx_tmp5 = file3;
            		}
            		else {
HXLINE(  89)			_hx_tmp5 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  89)		blueballedTxt->setFormat(_hx_tmp5,32,null(),null(),null(),null(),null());
HXLINE(  90)		blueballedTxt->updateHitbox();
HXLINE(  91)		this->add(blueballedTxt);
HXLINE(  93)		this->practiceText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("PRACTICE MODE",e8,14,ba,86),32,null());
HXLINE(  94)		{
HXLINE(  94)			 ::flixel::math::FlxBasePoint this5 = this->practiceText->scrollFactor;
HXDLIN(  94)			this5->set_x(( (Float)(0) ));
HXDLIN(  94)			this5->set_y(( (Float)(0) ));
            		}
HXLINE(  95)		 ::flixel::text::FlxText _hx_tmp6 = this->practiceText;
HXDLIN(  95)		::String file4 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  95)		::String _hx_tmp7;
HXDLIN(  95)		if (::sys::FileSystem_obj::exists(file4)) {
HXLINE(  95)			_hx_tmp7 = file4;
            		}
            		else {
HXLINE(  95)			_hx_tmp7 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  95)		_hx_tmp6->setFormat(_hx_tmp7,32,null(),null(),null(),null(),null());
HXLINE(  96)		 ::flixel::text::FlxText _hx_tmp8 = this->practiceText;
HXDLIN(  96)		int _hx_tmp9 = ::flixel::FlxG_obj::width;
HXDLIN(  96)		_hx_tmp8->set_x((( (Float)(_hx_tmp9) ) - (this->practiceText->get_width() + 20)));
HXLINE(  97)		this->practiceText->updateHitbox();
HXLINE(  98)		this->practiceText->set_visible(::states::PlayState_obj::instance->practiceMode);
HXLINE(  99)		this->add(this->practiceText);
HXLINE( 101)		 ::flixel::text::FlxText chartingText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("CHARTING MODE",3f,46,f9,44),32,null());
HXLINE( 102)		{
HXLINE( 102)			 ::flixel::math::FlxBasePoint this6 = chartingText->scrollFactor;
HXDLIN( 102)			this6->set_x(( (Float)(0) ));
HXDLIN( 102)			this6->set_y(( (Float)(0) ));
            		}
HXLINE( 103)		::String file5 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 103)		::String _hx_tmp10;
HXDLIN( 103)		if (::sys::FileSystem_obj::exists(file5)) {
HXLINE( 103)			_hx_tmp10 = file5;
            		}
            		else {
HXLINE( 103)			_hx_tmp10 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 103)		chartingText->setFormat(_hx_tmp10,32,null(),null(),null(),null(),null());
HXLINE( 104)		int _hx_tmp11 = ::flixel::FlxG_obj::width;
HXDLIN( 104)		chartingText->set_x((( (Float)(_hx_tmp11) ) - (chartingText->get_width() + 20)));
HXLINE( 105)		int _hx_tmp12 = ::flixel::FlxG_obj::height;
HXDLIN( 105)		chartingText->set_y((( (Float)(_hx_tmp12) ) - (chartingText->get_height() + 20)));
HXLINE( 106)		chartingText->updateHitbox();
HXLINE( 107)		chartingText->set_visible(::states::PlayState_obj::chartingMode);
HXLINE( 108)		this->add(chartingText);
HXLINE( 110)		blueballedTxt->set_alpha(( (Float)(0) ));
HXLINE( 111)		levelDifficulty1->set_alpha(( (Float)(0) ));
HXLINE( 112)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE( 114)		int _hx_tmp13 = ::flixel::FlxG_obj::width;
HXDLIN( 114)		levelInfo->set_x((( (Float)(_hx_tmp13) ) - (levelInfo->get_width() + 20)));
HXLINE( 115)		int _hx_tmp14 = ::flixel::FlxG_obj::width;
HXDLIN( 115)		levelDifficulty1->set_x((( (Float)(_hx_tmp14) ) - (levelDifficulty1->get_width() + 20)));
HXLINE( 116)		int _hx_tmp15 = ::flixel::FlxG_obj::width;
HXDLIN( 116)		blueballedTxt->set_x((( (Float)(_hx_tmp15) ) - (blueballedTxt->get_width() + 20)));
HXLINE( 118)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 119)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 120)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty1->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 121)		::flixel::tweens::FlxTween_obj::tween(blueballedTxt, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(blueballedTxt->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.7))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 123)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 124)		this->add(this->grpMenuShit);
HXLINE( 126)		this->missingTextBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 127)		this->missingTextBG->set_alpha(((Float)0.6));
HXLINE( 128)		this->missingTextBG->set_visible(false);
HXLINE( 129)		this->add(this->missingTextBG);
HXLINE( 131)		this->missingText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,0,(::flixel::FlxG_obj::width - 100),HX_("",00,00,00,00),24,null());
HXLINE( 132)		 ::flixel::text::FlxText _hx_tmp16 = this->missingText;
HXDLIN( 132)		::String file6 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 132)		::String _hx_tmp17;
HXDLIN( 132)		if (::sys::FileSystem_obj::exists(file6)) {
HXLINE( 132)			_hx_tmp17 = file6;
            		}
            		else {
HXLINE( 132)			_hx_tmp17 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 132)		_hx_tmp16->setFormat(_hx_tmp17,24,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 133)		{
HXLINE( 133)			 ::flixel::math::FlxBasePoint this7 = this->missingText->scrollFactor;
HXDLIN( 133)			this7->set_x(( (Float)(0) ));
HXDLIN( 133)			this7->set_y(( (Float)(0) ));
            		}
HXLINE( 134)		this->missingText->set_visible(false);
HXLINE( 135)		this->add(this->missingText);
HXLINE( 137)		this->regenMenu();
HXLINE( 138)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x4a50e4e5) {
			if (inClassId<=(int)0x3c0818b8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x3c0818b8;
			} else {
				return inClassId==(int)0x4a50e4e5;
			}
		} else {
			return inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_144_update)
HXLINE( 145)		 ::substates::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 145)		_hx_tmp->cantUnpause = (_hx_tmp->cantUnpause - elapsed);
HXLINE( 146)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 147)			 ::flixel::sound::FlxSound fh = this->pauseMusic;
HXDLIN( 147)			fh->set_volume((fh->_volume + (((Float)0.1) * elapsed)));
            		}
HXLINE( 149)		this->super::update(elapsed);
HXLINE( 150)		this->updateSkipTextStuff();
HXLINE( 152)		bool upP = ::backend::Controls_obj::instance->get_UI_UP_P();
HXLINE( 153)		bool downP = ::backend::Controls_obj::instance->get_UI_DOWN_P();
HXLINE( 154)		bool accepted = ::backend::Controls_obj::instance->get_ACCEPT();
HXLINE( 156)		if (upP) {
HXLINE( 158)			this->changeSelection(-1);
            		}
HXLINE( 160)		if (downP) {
HXLINE( 162)			this->changeSelection(1);
            		}
HXLINE( 165)		::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 166)		if ((daSelected == HX_("Skip Time",4e,65,49,c7))) {
HXLINE( 169)			if (::backend::Controls_obj::instance->get_UI_LEFT_P()) {
HXLINE( 171)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 171)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 172)				 ::substates::PauseSubState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 172)				_hx_tmp1->curTime = (_hx_tmp1->curTime - ( (Float)(1000) ));
HXLINE( 173)				this->holdTime = ( (Float)(0) );
            			}
HXLINE( 175)			if (::backend::Controls_obj::instance->get_UI_RIGHT_P()) {
HXLINE( 177)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 177)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 178)				 ::substates::PauseSubState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 178)				_hx_tmp1->curTime = (_hx_tmp1->curTime + 1000);
HXLINE( 179)				this->holdTime = ( (Float)(0) );
            			}
HXLINE( 182)			bool _hx_tmp;
HXDLIN( 182)			if (!(::backend::Controls_obj::instance->get_UI_LEFT())) {
HXLINE( 182)				_hx_tmp = ::backend::Controls_obj::instance->get_UI_RIGHT();
            			}
            			else {
HXLINE( 182)				_hx_tmp = true;
            			}
HXDLIN( 182)			if (_hx_tmp) {
HXLINE( 184)				 ::substates::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
HXLINE( 185)				if ((this->holdTime > ((Float)0.5))) {
HXLINE( 187)					 ::substates::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 187)					Float _hx_tmp1 = _hx_tmp->curTime;
HXDLIN( 187)					int _hx_tmp2;
HXDLIN( 187)					if (::backend::Controls_obj::instance->get_UI_LEFT()) {
HXLINE( 187)						_hx_tmp2 = -1;
            					}
            					else {
HXLINE( 187)						_hx_tmp2 = 1;
            					}
HXDLIN( 187)					_hx_tmp->curTime = (_hx_tmp1 + ((( (Float)(45000) ) * elapsed) * ( (Float)(_hx_tmp2) )));
            				}
HXLINE( 190)				if ((this->curTime >= ::flixel::FlxG_obj::sound->music->_length)) {
HXLINE( 190)					 ::substates::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)					_hx_tmp->curTime = (_hx_tmp->curTime - ::flixel::FlxG_obj::sound->music->_length);
            				}
            				else {
HXLINE( 191)					if ((this->curTime < 0)) {
HXLINE( 191)						 ::substates::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)						_hx_tmp->curTime = (_hx_tmp->curTime + ::flixel::FlxG_obj::sound->music->_length);
            					}
            				}
HXLINE( 192)				this->updateSkipTimeText();
            			}
            		}
HXLINE( 196)		bool _hx_tmp1;
HXDLIN( 196)		if (accepted) {
HXLINE( 196)			if (!((this->cantUnpause <= 0))) {
HXLINE( 196)				_hx_tmp1 = !(::backend::Controls_obj::instance->controllerMode);
            			}
            			else {
HXLINE( 196)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 196)			_hx_tmp1 = false;
            		}
HXDLIN( 196)		if (_hx_tmp1) {
HXLINE( 198)			if (::hx::IsPointerEq( this->menuItems,this->difficultyChoices )) {
HXLINE( 200)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 201)					bool _hx_tmp;
HXDLIN( 201)					if (((this->menuItems->length - 1) != this->curSelected)) {
HXLINE( 201)						_hx_tmp = this->difficultyChoices->contains(daSelected);
            					}
            					else {
HXLINE( 201)						_hx_tmp = false;
            					}
HXDLIN( 201)					if (_hx_tmp) {
HXLINE( 203)						::String name = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXLINE( 204)						::String poop = ::backend::Highscore_obj::formatSong(name,this->curSelected);
HXLINE( 205)						::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(poop,name);
HXLINE( 206)						::states::PlayState_obj::storyDifficulty = this->curSelected;
HXLINE( 207)						::backend::MusicBeatState_obj::resetState();
HXLINE( 208)						::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 209)						::states::PlayState_obj::changedDifficulty = true;
HXLINE( 210)						::states::PlayState_obj::chartingMode = false;
HXLINE( 211)						return;
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 213)						{
HXLINE( 213)							null();
            						}
HXDLIN( 213)						 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 214)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 214)						::String _hx_tmp1 = (HX_("ERROR! ",87,5a,de,69) + ::Std_obj::string(e));
HXDLIN( 214)						_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/substates/PauseSubState.hx",d8,68,d9,08),214,HX_("substates.PauseSubState",bb,c2,c4,f0),HX_("update",09,86,05,87)));
HXLINE( 216)						::String errorStr = ( (::String)(e->toString()) );
HXLINE( 217)						if (::StringTools_obj::startsWith(errorStr,HX_("[file_contents,assets/data/",a3,60,54,a0))) {
HXLINE( 217)							errorStr = (HX_("Missing file: ",bc,9d,68,d4) + errorStr.substring(27,(errorStr.length - 1)));
            						}
HXLINE( 218)						this->missingText->set_text((HX_("ERROR WHILE LOADING CHART:\n",03,b4,d7,53) + errorStr));
HXLINE( 219)						{
HXLINE( 219)							 ::flixel::text::FlxText _this = this->missingText;
HXDLIN( 219)							int axes = 16;
HXDLIN( 219)							bool _hx_tmp2;
HXDLIN( 219)							if ((axes != 1)) {
HXLINE( 219)								_hx_tmp2 = (axes == 17);
            							}
            							else {
HXLINE( 219)								_hx_tmp2 = true;
            							}
HXDLIN( 219)							if (_hx_tmp2) {
HXLINE( 219)								int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 219)								_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            							}
HXDLIN( 219)							bool _hx_tmp3;
HXDLIN( 219)							if ((axes != 16)) {
HXLINE( 219)								_hx_tmp3 = (axes == 17);
            							}
            							else {
HXLINE( 219)								_hx_tmp3 = true;
            							}
HXDLIN( 219)							if (_hx_tmp3) {
HXLINE( 219)								int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 219)								_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            							}
            						}
HXLINE( 220)						this->missingText->set_visible(true);
HXLINE( 221)						this->missingTextBG->set_visible(true);
HXLINE( 222)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp4 = ::flixel::FlxG_obj::sound;
HXDLIN( 222)						_hx_tmp4->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 224)						this->super::update(elapsed);
HXLINE( 225)						return;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 229)				this->menuItems = this->menuItemsOG;
HXLINE( 230)				this->regenMenu();
            			}
HXLINE( 233)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("Change Difficulty",eb,7e,37,a6)) ){
HXLINE( 238)				this->menuItems = this->difficultyChoices;
HXLINE( 239)				this->deleteSkipTimeText();
HXLINE( 240)				this->regenMenu();
HXLINE( 237)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("End Song",7a,be,85,e8)) ){
HXLINE( 266)				this->close();
HXLINE( 267)				::states::PlayState_obj::instance->notes->clear();
HXLINE( 268)				::states::PlayState_obj::instance->unspawnNotes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 269)				::states::PlayState_obj::instance->finishSong(true);
HXLINE( 265)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 288)				::backend::DiscordClient_obj::resetClientID();
HXLINE( 289)				::states::PlayState_obj::deathCounter = 0;
HXLINE( 290)				::states::PlayState_obj::seenCutscene = false;
HXLINE( 292)				::backend::Mods_obj::loadTopMod();
HXLINE( 293)				if (::states::PlayState_obj::fromMenu) {
HXLINE( 294)					::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				else {
HXLINE( 295)					if (::states::PlayState_obj::isStoryMode) {
HXLINE( 296)						if (::states::PlayState_obj::galamix) {
HXLINE( 297)							::backend::MusicBeatState_obj::switchState( ::states::GalamixMenuState_obj::__alloc( HX_CTX ,null(),null()));
            						}
            						else {
HXLINE( 299)							::backend::MusicBeatState_obj::switchState( ::states::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            						}
            					}
            					else {
HXLINE( 301)						::backend::MusicBeatState_obj::switchState( ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            				}
HXLINE( 303)				::states::PlayState_obj::cancelMusicFadeTween();
HXLINE( 304)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 304)				::String library = null();
HXDLIN( 304)				 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 304)				_hx_tmp->playMusic(file,null(),null(),null());
HXLINE( 305)				::states::PlayState_obj::changedDifficulty = false;
HXLINE( 306)				::states::PlayState_obj::chartingMode = false;
HXLINE( 307)				::flixel::FlxG_obj::camera->set_followLerp(( (Float)(0) ));
HXLINE( 287)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Leave Charting Mode",36,c5,86,71)) ){
HXLINE( 248)				::substates::PauseSubState_obj::restartSong(null());
HXLINE( 249)				::states::PlayState_obj::chartingMode = false;
HXLINE( 247)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Options",3e,5b,4f,ad)) ){
HXLINE( 277)				::states::PlayState_obj::instance->paused = true;
HXLINE( 278)				::states::PlayState_obj::instance->vocals->set_volume(( (Float)(0) ));
HXLINE( 279)				::backend::MusicBeatState_obj::switchState( ::options::OptionsState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 280)				if ((::backend::ClientPrefs_obj::data->pauseMusic != HX_("None",d8,3e,e3,33))) {
HXLINE( 282)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 282)					::String path = ::backend::ClientPrefs_obj::data->pauseMusic;
HXDLIN( 282)					 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 282)					 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 282)					::String path1 = invalidChars->split(::StringTools_obj::replace(path,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 282)					::String library = null();
HXDLIN( 282)					 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),hideChars->split(path1)->join(HX_("",00,00,00,00)).toLowerCase(),library);
HXDLIN( 282)					_hx_tmp->playMusic(file,this->pauseMusic->_volume,null(),null());
HXLINE( 283)					::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("volume",da,29,53,5f),1)),((Float)0.8),null());
HXLINE( 284)					::flixel::FlxG_obj::sound->music->set_time(this->pauseMusic->_time);
            				}
HXLINE( 286)				::options::OptionsState_obj::onPlayState = true;
HXLINE( 276)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 246)				::substates::PauseSubState_obj::restartSong(null());
HXDLIN( 246)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 236)				this->close();
HXDLIN( 236)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Skip Time",4e,65,49,c7)) ){
HXLINE( 251)				if ((this->curTime < ::backend::Conductor_obj::songPosition)) {
HXLINE( 253)					::states::PlayState_obj::startOnTime = this->curTime;
HXLINE( 254)					::substates::PauseSubState_obj::restartSong(true);
            				}
            				else {
HXLINE( 258)					if ((this->curTime != ::backend::Conductor_obj::songPosition)) {
HXLINE( 260)						::states::PlayState_obj::instance->clearNotesBefore(this->curTime);
HXLINE( 261)						::states::PlayState_obj::instance->setSongTime(this->curTime);
            					}
HXLINE( 263)					this->close();
            				}
HXLINE( 251)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Botplay",ef,6e,ca,1a)) ){
HXLINE( 271)				::states::PlayState_obj::instance->cpuControlled = !(::states::PlayState_obj::instance->cpuControlled);
HXLINE( 272)				::states::PlayState_obj::changedDifficulty = true;
HXLINE( 273)				::states::PlayState_obj::instance->botplayTxt->set_visible(::states::PlayState_obj::instance->cpuControlled);
HXLINE( 274)				::states::PlayState_obj::instance->botplayTxt->set_alpha(( (Float)(1) ));
HXLINE( 275)				::states::PlayState_obj::instance->botplaySine = ( (Float)(0) );
HXLINE( 270)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Practice Mode",7c,8b,b4,6b)) ){
HXLINE( 242)				::states::PlayState_obj::instance->practiceMode = !(::states::PlayState_obj::instance->practiceMode);
HXLINE( 243)				::states::PlayState_obj::changedDifficulty = true;
HXLINE( 244)				this->practiceText->set_visible(::states::PlayState_obj::instance->practiceMode);
HXLINE( 241)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
            	}


void PauseSubState_obj::deleteSkipTimeText(){
            	HX_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_313_deleteSkipTimeText)
HXLINE( 314)		if (::hx::IsNotNull( this->skipTimeText )) {
HXLINE( 316)			this->skipTimeText->kill();
HXLINE( 317)			this->remove(this->skipTimeText,null());
HXLINE( 318)			this->skipTimeText->destroy();
            		}
HXLINE( 320)		this->skipTimeText = null();
HXLINE( 321)		this->skipTimeTracker = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,deleteSkipTimeText,(void))

void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_339_destroy)
HXLINE( 340)		this->pauseMusic->destroy();
HXLINE( 342)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_346_changeSelection)
HXLINE( 347)		 ::substates::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 347)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 349)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 349)		_hx_tmp1->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 351)		if ((this->curSelected < 0)) {
HXLINE( 352)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 353)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 354)			this->curSelected = 0;
            		}
HXLINE( 356)		int bullShit = 0;
HXLINE( 358)		{
HXLINE( 358)			int _g = 0;
HXDLIN( 358)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 358)			while((_g < _g1->length)){
HXLINE( 358)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 358)				_g = (_g + 1);
HXLINE( 360)				item->targetY = (bullShit - this->curSelected);
HXLINE( 361)				bullShit = (bullShit + 1);
HXLINE( 363)				item->set_alpha(((Float)0.6));
HXLINE( 366)				if ((item->targetY == 0)) {
HXLINE( 368)					item->set_alpha(( (Float)(1) ));
HXLINE( 371)					if (::hx::IsInstanceEq( item,this->skipTimeTracker )) {
HXLINE( 373)						this->curTime = ::Math_obj::max(( (Float)(0) ),::backend::Conductor_obj::songPosition);
HXLINE( 374)						this->updateSkipTimeText();
            					}
            				}
            			}
            		}
HXLINE( 378)		this->missingText->set_visible(false);
HXLINE( 379)		this->missingTextBG->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))

void PauseSubState_obj::regenMenu(){
            	HX_GC_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_382_regenMenu)
HXLINE( 383)		{
HXLINE( 383)			int _g = 0;
HXDLIN( 383)			int _g1 = this->grpMenuShit->members->get_length();
HXDLIN( 383)			while((_g < _g1)){
HXLINE( 383)				_g = (_g + 1);
HXDLIN( 383)				int i = (_g - 1);
HXLINE( 384)				 ::objects::Alphabet obj = Dynamic( this->grpMenuShit->members->__get(0)).StaticCast<  ::objects::Alphabet >();
HXLINE( 385)				obj->kill();
HXLINE( 386)				this->grpMenuShit->remove(obj,true).StaticCast<  ::objects::Alphabet >();
HXLINE( 387)				obj->destroy();
            			}
            		}
HXLINE( 390)		{
HXLINE( 390)			int _g2 = 0;
HXDLIN( 390)			int _g3 = this->menuItems->length;
HXDLIN( 390)			while((_g2 < _g3)){
HXLINE( 390)				_g2 = (_g2 + 1);
HXDLIN( 390)				int i = (_g2 - 1);
HXLINE( 391)				 ::objects::Alphabet item =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(90) ),( (Float)(320) ),this->menuItems->__get(i),true);
HXLINE( 392)				item->isMenuItem = true;
HXLINE( 393)				item->targetY = i;
HXLINE( 394)				this->grpMenuShit->add(item).StaticCast<  ::objects::Alphabet >();
HXLINE( 396)				if ((this->menuItems->__get(i) == HX_("Skip Time",4e,65,49,c7))) {
HXLINE( 398)					this->skipTimeText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("",00,00,00,00),64,null());
HXLINE( 399)					 ::flixel::text::FlxText _hx_tmp = this->skipTimeText;
HXDLIN( 399)					::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 399)					::String _hx_tmp1;
HXDLIN( 399)					if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 399)						_hx_tmp1 = file;
            					}
            					else {
HXLINE( 399)						_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            					}
HXDLIN( 399)					_hx_tmp->setFormat(_hx_tmp1,64,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 400)					{
HXLINE( 400)						 ::flixel::math::FlxBasePoint this1 = this->skipTimeText->scrollFactor;
HXDLIN( 400)						this1->set_x(( (Float)(0) ));
HXDLIN( 400)						this1->set_y(( (Float)(0) ));
            					}
HXLINE( 401)					this->skipTimeText->set_borderSize(( (Float)(2) ));
HXLINE( 402)					this->skipTimeTracker = item;
HXLINE( 403)					this->add(this->skipTimeText);
HXLINE( 405)					this->updateSkipTextStuff();
HXLINE( 406)					this->updateSkipTimeText();
            				}
            			}
            		}
HXLINE( 409)		this->curSelected = 0;
HXLINE( 410)		this->changeSelection(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,regenMenu,(void))

void PauseSubState_obj::updateSkipTextStuff(){
            	HX_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_414_updateSkipTextStuff)
HXLINE( 415)		bool _hx_tmp;
HXDLIN( 415)		if (::hx::IsNotNull( this->skipTimeText )) {
HXLINE( 415)			_hx_tmp = ::hx::IsNull( this->skipTimeTracker );
            		}
            		else {
HXLINE( 415)			_hx_tmp = true;
            		}
HXDLIN( 415)		if (_hx_tmp) {
HXLINE( 415)			return;
            		}
HXLINE( 417)		 ::flixel::text::FlxText _hx_tmp1 = this->skipTimeText;
HXDLIN( 417)		Float _hx_tmp2 = this->skipTimeTracker->x;
HXDLIN( 417)		_hx_tmp1->set_x(((_hx_tmp2 + this->skipTimeTracker->get_width()) + 60));
HXLINE( 418)		this->skipTimeText->set_y(this->skipTimeTracker->y);
HXLINE( 419)		this->skipTimeText->set_visible((this->skipTimeTracker->alpha >= 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,updateSkipTextStuff,(void))

void PauseSubState_obj::updateSkipTimeText(){
            	HX_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_424_updateSkipTimeText)
HXDLIN( 424)		 ::flixel::text::FlxText _hx_tmp = this->skipTimeText;
HXDLIN( 424)		::String _hx_tmp1 = (::flixel::util::FlxStringUtil_obj::formatTime(::Math_obj::max(( (Float)(0) ),( (Float)(::Math_obj::floor((this->curTime / ( (Float)(1000) )))) )),false) + HX_(" / ",31,71,18,00));
HXDLIN( 424)		_hx_tmp->set_text((_hx_tmp1 + ::flixel::util::FlxStringUtil_obj::formatTime(::Math_obj::max(( (Float)(0) ),( (Float)(::Math_obj::floor((::flixel::FlxG_obj::sound->music->_length / ( (Float)(1000) )))) )),false)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,updateSkipTimeText,(void))

::String PauseSubState_obj::songName;

void PauseSubState_obj::restartSong(::hx::Null< bool >  __o_noTrans){
            		bool noTrans = __o_noTrans.Default(false);
            	HX_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_325_restartSong)
HXLINE( 326)		::states::PlayState_obj::instance->paused = true;
HXLINE( 327)		::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 328)		::states::PlayState_obj::instance->vocals->set_volume(( (Float)(0) ));
HXLINE( 330)		if (noTrans) {
HXLINE( 332)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE( 333)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
            		}
HXLINE( 335)		::backend::MusicBeatState_obj::resetState();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,restartSong,(void))


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "substates.PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_MARK_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(practiceText,"practiceText");
	HX_MARK_MEMBER_NAME(skipTimeText,"skipTimeText");
	HX_MARK_MEMBER_NAME(skipTimeTracker,"skipTimeTracker");
	HX_MARK_MEMBER_NAME(curTime,"curTime");
	HX_MARK_MEMBER_NAME(missingTextBG,"missingTextBG");
	HX_MARK_MEMBER_NAME(missingText,"missingText");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(cantUnpause,"cantUnpause");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_VISIT_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(practiceText,"practiceText");
	HX_VISIT_MEMBER_NAME(skipTimeText,"skipTimeText");
	HX_VISIT_MEMBER_NAME(skipTimeTracker,"skipTimeTracker");
	HX_VISIT_MEMBER_NAME(curTime,"curTime");
	HX_VISIT_MEMBER_NAME(missingTextBG,"missingTextBG");
	HX_VISIT_MEMBER_NAME(missingText,"missingText");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(cantUnpause,"cantUnpause");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curTime") ) { return ::hx::Val( curTime ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"regenMenu") ) { return ::hx::Val( regenMenu_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { return ::hx::Val( menuItemsOG ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"missingText") ) { return ::hx::Val( missingText ); }
		if (HX_FIELD_EQ(inName,"cantUnpause") ) { return ::hx::Val( cantUnpause ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { return ::hx::Val( practiceText ); }
		if (HX_FIELD_EQ(inName,"skipTimeText") ) { return ::hx::Val( skipTimeText ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"missingTextBG") ) { return ::hx::Val( missingTextBG ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"skipTimeTracker") ) { return ::hx::Val( skipTimeTracker ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { return ::hx::Val( difficultyChoices ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"deleteSkipTimeText") ) { return ::hx::Val( deleteSkipTimeText_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSkipTimeText") ) { return ::hx::Val( updateSkipTimeText_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSkipTextStuff") ) { return ::hx::Val( updateSkipTextStuff_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PauseSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { outValue = ( songName ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restartSong") ) { outValue = restartSong_dyn(); return true; }
	}
	return false;
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curTime") ) { curTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::sound::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { menuItemsOG=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"missingText") ) { missingText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cantUnpause") ) { cantUnpause=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { practiceText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipTimeText") ) { skipTimeText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"missingTextBG") ) { missingTextBG=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"skipTimeTracker") ) { skipTimeTracker=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { difficultyChoices=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PauseSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { songName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("menuItemsOG",39,55,bf,30));
	outFields->push(HX_("difficultyChoices",f7,9c,00,1a));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("practiceText",08,73,28,84));
	outFields->push(HX_("skipTimeText",f9,38,2b,55));
	outFields->push(HX_("skipTimeTracker",ec,2a,bf,89));
	outFields->push(HX_("curTime",ad,3d,12,b8));
	outFields->push(HX_("missingTextBG",b8,0f,c8,d0));
	outFields->push(HX_("missingText",33,63,02,c1));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("cantUnpause",f9,af,0b,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItemsOG),HX_("menuItemsOG",39,55,bf,30)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,difficultyChoices),HX_("difficultyChoices",f7,9c,00,1a)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::sound::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,practiceText),HX_("practiceText",08,73,28,84)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,skipTimeText),HX_("skipTimeText",f9,38,2b,55)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(PauseSubState_obj,skipTimeTracker),HX_("skipTimeTracker",ec,2a,bf,89)},
	{::hx::fsFloat,(int)offsetof(PauseSubState_obj,curTime),HX_("curTime",ad,3d,12,b8)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PauseSubState_obj,missingTextBG),HX_("missingTextBG",b8,0f,c8,d0)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,missingText),HX_("missingText",33,63,02,c1)},
	{::hx::fsFloat,(int)offsetof(PauseSubState_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsFloat,(int)offsetof(PauseSubState_obj,cantUnpause),HX_("cantUnpause",f9,af,0b,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PauseSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &PauseSubState_obj::songName,HX_("songName",c0,d0,d7,36)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("menuItemsOG",39,55,bf,30),
	HX_("difficultyChoices",f7,9c,00,1a),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("practiceText",08,73,28,84),
	HX_("skipTimeText",f9,38,2b,55),
	HX_("skipTimeTracker",ec,2a,bf,89),
	HX_("curTime",ad,3d,12,b8),
	HX_("missingTextBG",b8,0f,c8,d0),
	HX_("missingText",33,63,02,c1),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("cantUnpause",f9,af,0b,c8),
	HX_("update",09,86,05,87),
	HX_("deleteSkipTimeText",c4,59,8b,81),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	HX_("regenMenu",fc,42,dc,26),
	HX_("updateSkipTextStuff",bf,a0,ab,1e),
	HX_("updateSkipTimeText",a2,74,38,cd),
	::String(null()) };

static void PauseSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseSubState_obj::songName,"songName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PauseSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseSubState_obj::songName,"songName");
};

#endif

::hx::Class PauseSubState_obj::__mClass;

static ::String PauseSubState_obj_sStaticFields[] = {
	HX_("songName",c0,d0,d7,36),
	HX_("restartSong",44,ab,b8,45),
	::String(null())
};

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("substates.PauseSubState",bb,c2,c4,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PauseSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &PauseSubState_obj::__SetStatic;
	__mClass->mMarkFunc = PauseSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PauseSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PauseSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7f6c2f9964c51edc_33_boot)
HXDLIN(  33)		songName = HX_("",00,00,00,00);
            	}
}

} // end namespace substates
