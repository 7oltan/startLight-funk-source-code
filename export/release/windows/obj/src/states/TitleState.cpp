#include <hxcpp.h>

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
#ifndef INCLUDED_backend_Highscore
#include <backend/Highscore.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_shaders_ColorSwap
#include <shaders/ColorSwap.h>
#endif
#ifndef INCLUDED_shaders_ColorSwapShader
#include <shaders/ColorSwapShader.h>
#endif
#ifndef INCLUDED_states_FlashingState
#include <states/FlashingState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_OutdatedState
#include <states/OutdatedState.h>
#endif
#ifndef INCLUDED_states_StoryMenuState
#include <states/StoryMenuState.h>
#endif
#ifndef INCLUDED_states_TitleState
#include <states/TitleState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4f54134d4f9e667_42_new,"states.TitleState","new",0x1a057497,"states.TitleState.new","states/TitleState.hx",42,0xa989be18)
static const Float _hx_array_data_81c3dd25_1[] = {
	(Float)1,.64,
};
static const int _hx_array_data_81c3dd25_2[] = {
	(int)-13369345,(int)-13421620,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_78_create,"states.TitleState","create",0x5256ff25,"states.TitleState.create","states/TitleState.hx",78,0xa989be18)
static const int _hx_array_data_81c3dd25_7[] = {
	(int)9,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_180_create,"states.TitleState","create",0x5256ff25,"states.TitleState.create","states/TitleState.hx",180,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_194_startIntro,"states.TitleState","startIntro",0x63990353,"states.TitleState.startIntro","states/TitleState.hx",194,0xa989be18)
static const int _hx_array_data_81c3dd25_10[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_81c3dd25_11[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_310_getIntroTextShit,"states.TitleState","getIntroTextShit",0xb448648c,"states.TitleState.getIntroTextShit","states/TitleState.hx",310,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_334_update,"states.TitleState","update",0x5d4d1e32,"states.TitleState.update","states/TitleState.hx",334,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_399_update,"states.TitleState","update",0x5d4d1e32,"states.TitleState.update","states/TitleState.hx",399,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_477_createCoolText,"states.TitleState","createCoolText",0x558b345b,"states.TitleState.createCoolText","states/TitleState.hx",477,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_491_addMoreText,"states.TitleState","addMoreText",0x3373315a,"states.TitleState.addMoreText","states/TitleState.hx",491,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_502_deleteCoolText,"states.TitleState","deleteCoolText",0x5d27d48a,"states.TitleState.deleteCoolText","states/TitleState.hx",502,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_512_beatHit,"states.TitleState","beatHit",0x1c627634,"states.TitleState.beatHit","states/TitleState.hx",512,0xa989be18)
static const ::String _hx_array_data_81c3dd25_26[] = {
	HX_("StarLight Funk by",6f,3d,05,ff),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_557_skipIntro,"states.TitleState","skipIntro",0x75bd5ee4,"states.TitleState.skipIntro","states/TitleState.hx",557,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_597_skipIntro,"states.TitleState","skipIntro",0x75bd5ee4,"states.TitleState.skipIntro","states/TitleState.hx",597,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_609_skipIntro,"states.TitleState","skipIntro",0x75bd5ee4,"states.TitleState.skipIntro","states/TitleState.hx",609,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_44_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",44,0xa989be18)
static const int _hx_array_data_81c3dd25_32[] = {
	(int)48,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_45_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",45,0xa989be18)
static const int _hx_array_data_81c3dd25_34[] = {
	(int)109,(int)189,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_46_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",46,0xa989be18)
static const int _hx_array_data_81c3dd25_36[] = {
	(int)107,(int)187,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_48_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",48,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_75_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",75,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_328_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",328,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_510_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",510,0xa989be18)
namespace states{

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_42_new)
HXLINE( 555)		this->increaseVolume = false;
HXLINE( 554)		this->skippedIntro = false;
HXLINE( 509)		this->sickBeats = 0;
HXLINE( 331)		this->titleTimer = ((Float)0);
HXLINE( 330)		this->newTitle = false;
HXLINE( 327)		this->transitioning = false;
HXLINE( 191)		this->swagShader = null();
HXLINE( 189)		this->danceLeft = false;
HXLINE(  71)		this->mustUpdate = false;
HXLINE(  59)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  57)		this->titleTextAlphas = ::Array_obj< Float >::fromData( _hx_array_data_81c3dd25_1,2);
HXLINE(  56)		this->titleTextColors = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_2,2);
HXLINE(  42)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x1b9a519f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1b9a519f;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void TitleState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_78_create)
HXDLIN(  78)		 ::states::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  79)		::backend::Paths_obj::clearStoredMemory(null());
HXLINE(  80)		::backend::Paths_obj::clearUnusedMemory();
HXLINE(  83)		{
HXLINE(  83)			::backend::Mods_obj::globalMods = ::Array_obj< ::String >::__new(0);
HXDLIN(  83)			{
HXLINE(  83)				int _g = 0;
HXDLIN(  83)				if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  83)					::backend::Mods_obj::updateModList();
            				}
HXDLIN(  83)				::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  83)				::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  83)				::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  83)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  83)					int _g = 0;
HXDLIN(  83)					::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  83)					::String daList = null();
HXDLIN(  83)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)					path = formatted->__get((formatted->length - 1));
HXLINE(  83)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXLINE(  83)					::Array< ::String > _g1;
HXDLIN(  83)					if (::hx::IsNotNull( daList )) {
HXLINE(  83)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  83)						{
HXLINE(  83)							int _g = 0;
HXDLIN(  83)							int _g2 = daList1->length;
HXDLIN(  83)							while((_g < _g2)){
HXLINE(  83)								_g = (_g + 1);
HXDLIN(  83)								int i = (_g - 1);
HXDLIN(  83)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN(  83)						_g1 = daList1;
            					}
            					else {
HXLINE(  83)						_g1 = ::Array_obj< ::String >::__new(0);
            					}
HXDLIN(  83)					while((_g < _g1->length)){
HXLINE(  83)						::String mod = _g1->__get(_g);
HXDLIN(  83)						_g = (_g + 1);
HXDLIN(  83)						if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  83)							continue;
            						}
HXDLIN(  83)						::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  83)						list_all->push(dat->__get(0));
HXDLIN(  83)						if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  83)							list_enabled->push(dat->__get(0));
            						}
            						else {
HXLINE(  83)							list_disabled->push(dat->__get(0));
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 172)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  83)						::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN(  83)				::Array< ::String > _g1 = list_enabled;
HXDLIN(  83)				while((_g < _g1->length)){
HXLINE(  83)					::String mod = _g1->__get(_g);
HXDLIN(  83)					_g = (_g + 1);
HXDLIN(  83)					 ::Dynamic pack = ::backend::Mods_obj::getPack(mod);
HXDLIN(  83)					bool _hx_tmp;
HXDLIN(  83)					if (::hx::IsNotNull( pack )) {
HXLINE(  83)						_hx_tmp = ( (bool)(pack->__Field(HX_("runsGlobally",98,2d,b5,06),::hx::paccDynamic)) );
            					}
            					else {
HXLINE(  83)						_hx_tmp = false;
            					}
HXDLIN(  83)					if (_hx_tmp) {
HXLINE(  83)						::backend::Mods_obj::globalMods->push(mod);
            					}
            				}
            			}
            		}
HXLINE(  85)		::backend::Mods_obj::loadTopMod();
HXLINE(  87)		::flixel::FlxG_obj::fixedTimestep = false;
HXLINE(  88)		::flixel::FlxG_obj::game->focusLostFramerate = 60;
HXLINE(  89)		::flixel::FlxG_obj::keys->preventDefaultKeys = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_7,1);
HXLINE(  91)		 ::flixel::math::FlxRandom _hx_tmp = ::flixel::FlxG_obj::random;
HXDLIN(  91)		this->curWacky = _hx_tmp->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE(  93)		this->super::create();
HXLINE(  95)		 ::flixel::util::FlxSave _hx_tmp1 = ::flixel::FlxG_obj::save;
HXDLIN(  95)		::String _hx_tmp2 = (::openfl::Lib_obj::get_current()->stage->application->meta->get(HX_("company",3d,15,69,83)) + HX_("/",2f,00,00,00));
HXDLIN(  95)		_hx_tmp1->bind(HX_("funkin",31,b2,4f,6f),(_hx_tmp2 + ::flixel::util::FlxSave_obj::validate(::openfl::Lib_obj::get_current()->stage->application->meta->get_string(HX_("file",7c,ce,bb,43)))));
HXLINE(  97)		::backend::ClientPrefs_obj::loadPrefs();
HXLINE( 123)		::backend::Highscore_obj::load();
HXLINE( 126)		this->titleJSON = ::tjson::TJSON_obj::parse(::backend::Paths_obj::getTextFromFile(HX_("images/title/gfDanceTitle.json",64,37,ad,0a),null()),null(),null());
HXLINE( 147)		if (!(::states::TitleState_obj::initialized)) {
HXLINE( 149)			bool _hx_tmp;
HXDLIN( 149)			if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE( 149)				_hx_tmp = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 149)				_hx_tmp = false;
            			}
HXDLIN( 149)			if (_hx_tmp) {
HXLINE( 151)				::flixel::FlxG_obj::set_fullscreen(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) ));
            			}
HXLINE( 154)			this->persistentUpdate = true;
HXLINE( 155)			this->persistentDraw = true;
            		}
HXLINE( 158)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic) )) {
HXLINE( 160)			::states::StoryMenuState_obj::weekCompleted = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic)) );
            		}
HXLINE( 163)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 169)		bool _hx_tmp3;
HXDLIN( 169)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE( 169)			_hx_tmp3 = !(::states::FlashingState_obj::leftState);
            		}
            		else {
HXLINE( 169)			_hx_tmp3 = false;
            		}
HXDLIN( 169)		if (_hx_tmp3) {
HXLINE( 170)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE( 171)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE( 172)			::backend::MusicBeatState_obj::switchState( ::states::FlashingState_obj::__alloc( HX_CTX ,null(),null()));
            		}
            		else {
HXLINE( 174)			if (::states::TitleState_obj::initialized) {
HXLINE( 175)				this->startIntro();
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::TitleState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_180_create)
HXLINE( 180)					_gthis->startIntro();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 178)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            			}
            		}
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_194_startIntro)
HXLINE( 195)		if (!(::states::TitleState_obj::initialized)) {
HXLINE( 197)			if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 198)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 198)				::String library = null();
HXDLIN( 198)				 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 198)				_hx_tmp->playMusic(file,0,null(),null());
            			}
            		}
HXLINE( 202)		::backend::Conductor_obj::set_bpm(( (Float)(this->titleJSON->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ));
HXLINE( 203)		this->persistentUpdate = true;
HXLINE( 205)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 206)		bg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 208)		bool _hx_tmp;
HXDLIN( 208)		bool _hx_tmp1;
HXDLIN( 208)		if (::hx::IsNotNull( this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic) )) {
HXLINE( 208)			_hx_tmp1 = (( (::String)(this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic)) ).length > 0);
            		}
            		else {
HXLINE( 208)			_hx_tmp1 = false;
            		}
HXDLIN( 208)		if (_hx_tmp1) {
HXLINE( 208)			_hx_tmp = ::hx::IsNotEq( this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic),HX_("none",b8,12,0a,49) );
            		}
            		else {
HXLINE( 208)			_hx_tmp = false;
            		}
HXDLIN( 208)		if (_hx_tmp) {
HXLINE( 209)			bg->loadGraphic(::backend::Paths_obj::image(( (::String)((HX_("title/",97,cf,77,23) + this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic))) ),null(),null()),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 211)			bg->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
            		}
HXLINE( 216)		this->add(bg);
HXLINE( 218)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("titlex",e0,cf,77,23),::hx::paccDynamic),this->titleJSON->__Field(HX_("titley",e1,cf,77,23),::hx::paccDynamic),null());
HXLINE( 219)		 ::flixel::FlxSprite _hx_tmp2 = this->logoBl;
HXDLIN( 219)		::String library = null();
HXDLIN( 219)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("title/logoBumpin",7d,9d,24,45),null(),true);
HXDLIN( 219)		bool xmlExists = false;
HXDLIN( 219)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("title/logoBumpin",7d,9d,24,45)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 219)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 219)			xmlExists = true;
            		}
HXDLIN( 219)		 ::Dynamic _hx_tmp3;
HXDLIN( 219)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 219)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE( 219)			_hx_tmp3 = ::backend::Paths_obj::image(HX_("title/logoBumpin",7d,9d,24,45),library,true);
            		}
HXDLIN( 219)		::String _hx_tmp4;
HXDLIN( 219)		if (xmlExists) {
HXLINE( 219)			_hx_tmp4 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 219)			_hx_tmp4 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("title/logoBumpin",7d,9d,24,45)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 219)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE( 220)		this->logoBl->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 222)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 223)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 224)		{
HXLINE( 224)			 ::flixel::math::FlxBasePoint this1 = this->logoBl->scale;
HXDLIN( 224)			this1->set_x(((Float)0.8));
HXDLIN( 224)			this1->set_y(((Float)0.8));
            		}
HXLINE( 225)		this->logoBl->updateHitbox();
HXLINE( 229)		if (::backend::ClientPrefs_obj::data->shaders) {
HXLINE( 229)			this->swagShader =  ::shaders::ColorSwap_obj::__alloc( HX_CTX );
            		}
HXLINE( 230)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("gfx",79,81,4e,00),::hx::paccDynamic),this->titleJSON->__Field(HX_("gfy",7a,81,4e,00),::hx::paccDynamic),null());
HXLINE( 231)		this->gfDance->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 233)		::String easterEgg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 234)		if (::hx::IsNull( easterEgg )) {
HXLINE( 234)			easterEgg = HX_("",00,00,00,00);
            		}
HXLINE( 236)		 ::flixel::FlxSprite _hx_tmp5 = this->gfDance;
HXDLIN( 236)		::String library1 = null();
HXDLIN( 236)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::backend::Paths_obj::image(HX_("title/gfDanceTitle",7b,ba,ce,3f),null(),true);
HXDLIN( 236)		bool xmlExists1 = false;
HXDLIN( 236)		::String xml1 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("title/gfDanceTitle",7b,ba,ce,3f)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 236)		if (::sys::FileSystem_obj::exists(xml1)) {
HXLINE( 236)			xmlExists1 = true;
            		}
HXDLIN( 236)		 ::Dynamic _hx_tmp6;
HXDLIN( 236)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE( 236)			_hx_tmp6 = imageLoaded1;
            		}
            		else {
HXLINE( 236)			_hx_tmp6 = ::backend::Paths_obj::image(HX_("title/gfDanceTitle",7b,ba,ce,3f),library1,true);
            		}
HXDLIN( 236)		::String _hx_tmp7;
HXDLIN( 236)		if (xmlExists1) {
HXLINE( 236)			_hx_tmp7 = ::sys::io::File_obj::getContent(xml1);
            		}
            		else {
HXLINE( 236)			_hx_tmp7 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("title/gfDanceTitle",7b,ba,ce,3f)) + HX_(".xml",69,3e,c3,1e)),null(),library1,null());
            		}
HXDLIN( 236)		_hx_tmp5->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp6,_hx_tmp7));
HXLINE( 237)		this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_81c3dd25_10,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 238)		this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_81c3dd25_11,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 240)		this->add(this->gfDance);
HXLINE( 241)		this->add(this->logoBl);
HXLINE( 242)		if (::hx::IsNotNull( this->swagShader )) {
HXLINE( 244)			this->gfDance->shader = this->swagShader->shader;
HXLINE( 245)			this->logoBl->shader = this->swagShader->shader;
            		}
HXLINE( 248)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("startx",d6,61,fa,05),::hx::paccDynamic),this->titleJSON->__Field(HX_("starty",d7,61,fa,05),::hx::paccDynamic),null());
HXLINE( 249)		 ::flixel::FlxSprite _hx_tmp8 = this->titleText;
HXDLIN( 249)		::String library2 = null();
HXDLIN( 249)		 ::flixel::graphics::FlxGraphic imageLoaded2 = ::backend::Paths_obj::image(HX_("title/titleEnter",b7,52,8d,1c),null(),true);
HXDLIN( 249)		bool xmlExists2 = false;
HXDLIN( 249)		::String xml2 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("title/titleEnter",b7,52,8d,1c)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 249)		if (::sys::FileSystem_obj::exists(xml2)) {
HXLINE( 249)			xmlExists2 = true;
            		}
HXDLIN( 249)		 ::Dynamic _hx_tmp9;
HXDLIN( 249)		if (::hx::IsNotNull( imageLoaded2 )) {
HXLINE( 249)			_hx_tmp9 = imageLoaded2;
            		}
            		else {
HXLINE( 249)			_hx_tmp9 = ::backend::Paths_obj::image(HX_("title/titleEnter",b7,52,8d,1c),library2,true);
            		}
HXDLIN( 249)		::String _hx_tmp10;
HXDLIN( 249)		if (xmlExists2) {
HXLINE( 249)			_hx_tmp10 = ::sys::io::File_obj::getContent(xml2);
            		}
            		else {
HXLINE( 249)			_hx_tmp10 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("title/titleEnter",b7,52,8d,1c)) + HX_(".xml",69,3e,c3,1e)),null(),library2,null());
            		}
HXDLIN( 249)		_hx_tmp8->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp9,_hx_tmp10));
HXLINE( 250)		::Array< ::Dynamic> animFrames = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 251)		{
HXLINE( 252)			this->titleText->animation->findByPrefix(animFrames,HX_("ENTER IDLE",3c,57,01,7a));
HXLINE( 253)			this->titleText->animation->findByPrefix(animFrames,HX_("ENTER FREEZE",7f,78,5c,d6));
            		}
HXLINE( 256)		if ((animFrames->length > 0)) {
HXLINE( 257)			this->newTitle = true;
HXLINE( 259)			this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("ENTER IDLE",3c,57,01,7a),24,null(),null(),null());
HXLINE( 260)			::String _hx_tmp;
HXDLIN( 260)			if (::backend::ClientPrefs_obj::data->flashing) {
HXLINE( 260)				_hx_tmp = HX_("ENTER PRESSED",5a,47,9f,63);
            			}
            			else {
HXLINE( 260)				_hx_tmp = HX_("ENTER FREEZE",7f,78,5c,d6);
            			}
HXDLIN( 260)			this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),_hx_tmp,24,null(),null(),null());
            		}
            		else {
HXLINE( 263)			this->newTitle = false;
HXLINE( 265)			this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 266)			this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
            		}
HXLINE( 269)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 270)		this->titleText->updateHitbox();
HXLINE( 272)		this->add(this->titleText);
HXLINE( 277)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 278)		this->add(this->credGroup);
HXLINE( 279)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 281)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 282)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 284)		this->credTextShit =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("",00,00,00,00),true);
HXLINE( 285)		{
HXLINE( 285)			 ::objects::Alphabet _this = this->credTextShit;
HXDLIN( 285)			int axes = 17;
HXDLIN( 285)			bool _hx_tmp11;
HXDLIN( 285)			if ((axes != 1)) {
HXLINE( 285)				_hx_tmp11 = (axes == 17);
            			}
            			else {
HXLINE( 285)				_hx_tmp11 = true;
            			}
HXDLIN( 285)			if (_hx_tmp11) {
HXLINE( 285)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 285)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 285)			bool _hx_tmp12;
HXDLIN( 285)			if ((axes != 16)) {
HXLINE( 285)				_hx_tmp12 = (axes == 17);
            			}
            			else {
HXLINE( 285)				_hx_tmp12 = true;
            			}
HXDLIN( 285)			if (_hx_tmp12) {
HXLINE( 285)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 285)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 289)		this->credTextShit->set_visible(false);
HXLINE( 291)		this->ngSpr =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.52)),null());
HXLINE( 292)		this->add(this->ngSpr);
HXLINE( 293)		this->ngSpr->set_visible(false);
HXLINE( 294)		 ::flixel::FlxSprite _hx_tmp13 = this->ngSpr;
HXDLIN( 294)		_hx_tmp13->setGraphicSize(::Std_obj::_hx_int((this->ngSpr->get_width() * ((Float)0.8))),null());
HXLINE( 295)		this->ngSpr->updateHitbox();
HXLINE( 296)		{
HXLINE( 296)			 ::flixel::FlxSprite _this1 = this->ngSpr;
HXDLIN( 296)			int axes1 = 1;
HXDLIN( 296)			bool _hx_tmp14;
HXDLIN( 296)			if ((axes1 != 1)) {
HXLINE( 296)				_hx_tmp14 = (axes1 == 17);
            			}
            			else {
HXLINE( 296)				_hx_tmp14 = true;
            			}
HXDLIN( 296)			if (_hx_tmp14) {
HXLINE( 296)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 296)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 296)			bool _hx_tmp15;
HXDLIN( 296)			if ((axes1 != 16)) {
HXLINE( 296)				_hx_tmp15 = (axes1 == 17);
            			}
            			else {
HXLINE( 296)				_hx_tmp15 = true;
            			}
HXDLIN( 296)			if (_hx_tmp15) {
HXLINE( 296)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 296)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 297)		this->ngSpr->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 299)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 301)		if (::states::TitleState_obj::initialized) {
HXLINE( 302)			this->skipIntro();
            		}
            		else {
HXLINE( 304)			::states::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_310_getIntroTextShit)
HXLINE( 312)		::String defaultDirectory = HX_("assets/",4c,2a,dc,36);
HXDLIN( 312)		bool allowDuplicates = false;
HXDLIN( 312)		if (::hx::IsNull( defaultDirectory )) {
HXLINE( 312)			defaultDirectory = HX_("assets/",4c,2a,dc,36);
            		}
HXDLIN( 312)		defaultDirectory = ::StringTools_obj::trim(defaultDirectory);
HXDLIN( 312)		if (!(::StringTools_obj::endsWith(defaultDirectory,HX_("/",2f,00,00,00)))) {
HXLINE( 312)			defaultDirectory = (defaultDirectory + HX_("/",2f,00,00,00));
            		}
HXDLIN( 312)		if (!(::StringTools_obj::startsWith(defaultDirectory,HX_("assets/",4c,2a,dc,36)))) {
HXLINE( 312)			defaultDirectory = (HX_("assets/",4c,2a,dc,36) + defaultDirectory);
            		}
HXDLIN( 312)		::Array< ::String > mergedList = ::Array_obj< ::String >::__new(0);
HXDLIN( 312)		::Array< ::String > foldersToCheck = ::Array_obj< ::String >::__new(0);
HXDLIN( 312)		if (::sys::FileSystem_obj::exists((defaultDirectory + HX_("data/introText.txt",d6,92,cf,a9)))) {
HXLINE( 312)			foldersToCheck->push((defaultDirectory + HX_("data/introText.txt",d6,92,cf,a9)));
            		}
HXDLIN( 312)		{
HXLINE( 312)			{
HXLINE( 312)				int _g = 0;
HXDLIN( 312)				::Array< ::String > _g1 = ::backend::Mods_obj::globalMods;
HXDLIN( 312)				while((_g < _g1->length)){
HXLINE( 312)					::String mod = _g1->__get(_g);
HXDLIN( 312)					_g = (_g + 1);
HXDLIN( 312)					::String key = ((mod + HX_("/",2f,00,00,00)) + HX_("data/introText.txt",d6,92,cf,a9));
HXDLIN( 312)					if (::hx::IsNull( key )) {
HXLINE( 312)						key = HX_("",00,00,00,00);
            					}
HXDLIN( 312)					::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN( 312)					if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 312)						foldersToCheck->push(folder);
            					}
            				}
            			}
HXDLIN( 312)			::String key = HX_("data/introText.txt",d6,92,cf,a9);
HXDLIN( 312)			if (::hx::IsNull( key )) {
HXLINE( 312)				key = HX_("",00,00,00,00);
            			}
HXDLIN( 312)			::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN( 312)			if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 312)				::String key = HX_("data/introText.txt",d6,92,cf,a9);
HXDLIN( 312)				if (::hx::IsNull( key )) {
HXLINE( 312)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 312)				foldersToCheck->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
HXDLIN( 312)			bool _hx_tmp;
HXDLIN( 312)			if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE( 312)				_hx_tmp = (::backend::Mods_obj::currentModDirectory.length > 0);
            			}
            			else {
HXLINE( 312)				_hx_tmp = false;
            			}
HXDLIN( 312)			if (_hx_tmp) {
HXLINE( 312)				::String key = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + HX_("data/introText.txt",d6,92,cf,a9));
HXDLIN( 312)				if (::hx::IsNull( key )) {
HXLINE( 312)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 312)				::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN( 312)				if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 312)					foldersToCheck->push(folder);
            				}
            			}
            		}
HXDLIN( 312)		::Array< ::String > paths = foldersToCheck;
HXDLIN( 312)		::String defaultPath = (defaultDirectory + HX_("data/introText.txt",d6,92,cf,a9));
HXDLIN( 312)		if (paths->contains(defaultPath)) {
HXLINE( 312)			paths->remove(defaultPath);
HXDLIN( 312)			paths->insert(0,defaultPath);
            		}
HXDLIN( 312)		{
HXLINE( 312)			int _g2 = 0;
HXDLIN( 312)			while((_g2 < paths->length)){
HXLINE( 312)				::String file = paths->__get(_g2);
HXDLIN( 312)				_g2 = (_g2 + 1);
HXDLIN( 312)				::String path = file;
HXDLIN( 312)				::String daList = null();
HXDLIN( 312)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 312)				path = formatted->__get((formatted->length - 1));
HXDLIN( 312)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 312)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXDLIN( 312)				::Array< ::String > list;
HXDLIN( 312)				if (::hx::IsNotNull( daList )) {
HXLINE( 312)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 312)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 312)					{
HXLINE( 312)						int _g = 0;
HXDLIN( 312)						int _g1 = daList1->length;
HXDLIN( 312)						while((_g < _g1)){
HXLINE( 312)							_g = (_g + 1);
HXDLIN( 312)							int i = (_g - 1);
HXDLIN( 312)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN( 312)					list = daList1;
            				}
            				else {
HXLINE( 312)					list = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN( 312)				{
HXLINE( 312)					int _g = 0;
HXDLIN( 312)					while((_g < list->length)){
HXLINE( 312)						::String value = list->__get(_g);
HXDLIN( 312)						_g = (_g + 1);
HXDLIN( 312)						bool _hx_tmp;
HXDLIN( 312)						bool _hx_tmp1;
HXDLIN( 312)						if (!(allowDuplicates)) {
HXLINE( 312)							_hx_tmp1 = !(mergedList->contains(value));
            						}
            						else {
HXLINE( 312)							_hx_tmp1 = true;
            						}
HXDLIN( 312)						if (_hx_tmp1) {
HXLINE( 312)							_hx_tmp = (value.length > 0);
            						}
            						else {
HXLINE( 312)							_hx_tmp = false;
            						}
HXDLIN( 312)						if (_hx_tmp) {
HXLINE( 312)							mergedList->push(value);
            						}
            					}
            				}
            			}
            		}
HXDLIN( 312)		::Array< ::String > firstArray = mergedList;
HXLINE( 317)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 319)		{
HXLINE( 319)			int _g3 = 0;
HXDLIN( 319)			while((_g3 < firstArray->length)){
HXLINE( 319)				::String i = firstArray->__get(_g3);
HXDLIN( 319)				_g3 = (_g3 + 1);
HXLINE( 321)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 324)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_334_update)
HXDLIN( 334)		 ::states::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 335)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 336)			::backend::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 339)		bool pressedEnter;
HXDLIN( 339)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 339)		if (!(_this->keyManager->checkStatusUnsafe(13,_this->status))) {
HXLINE( 339)			pressedEnter = this->get_controls()->get_ACCEPT();
            		}
            		else {
HXLINE( 339)			pressedEnter = true;
            		}
HXLINE( 351)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 353)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 355)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 355)			int id = 7;
HXDLIN( 355)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 355)			int Status = _this->status;
HXDLIN( 355)			bool _hx_tmp;
HXDLIN( 355)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 355)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 355)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 355)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 355)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 355)					if (::hx::IsNotNull( button )) {
HXLINE( 355)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 355)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 355)			if (_hx_tmp) {
HXLINE( 356)				pressedEnter = true;
            			}
            		}
HXLINE( 364)		if (this->newTitle) {
HXLINE( 365)			 ::states::TitleState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 365)			Float lowerBound;
HXDLIN( 365)			if ((elapsed < 0)) {
HXLINE( 365)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 365)				lowerBound = elapsed;
            			}
HXDLIN( 365)			Float _hx_tmp1;
HXDLIN( 365)			if ((lowerBound > 1)) {
HXLINE( 365)				_hx_tmp1 = ( (Float)(1) );
            			}
            			else {
HXLINE( 365)				_hx_tmp1 = lowerBound;
            			}
HXDLIN( 365)			_hx_tmp->titleTimer = (_hx_tmp->titleTimer + _hx_tmp1);
HXLINE( 366)			if ((this->titleTimer > 2)) {
HXLINE( 366)				 ::states::TitleState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 366)				_hx_tmp->titleTimer = (_hx_tmp->titleTimer - ( (Float)(2) ));
            			}
            		}
HXLINE( 371)		bool _hx_tmp;
HXDLIN( 371)		bool _hx_tmp1;
HXDLIN( 371)		if (::states::TitleState_obj::initialized) {
HXLINE( 371)			_hx_tmp1 = !(this->transitioning);
            		}
            		else {
HXLINE( 371)			_hx_tmp1 = false;
            		}
HXDLIN( 371)		if (_hx_tmp1) {
HXLINE( 371)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 371)			_hx_tmp = false;
            		}
HXDLIN( 371)		if (_hx_tmp) {
HXLINE( 373)			bool _hx_tmp;
HXDLIN( 373)			if (this->newTitle) {
HXLINE( 373)				_hx_tmp = !(pressedEnter);
            			}
            			else {
HXLINE( 373)				_hx_tmp = false;
            			}
HXDLIN( 373)			if (_hx_tmp) {
HXLINE( 375)				Float timer = this->titleTimer;
HXLINE( 376)				if ((timer >= 1)) {
HXLINE( 377)					timer = (-(timer) + 2);
            				}
HXLINE( 379)				Float t = timer;
HXDLIN( 379)				if ((t <= ((Float).5))) {
HXLINE( 379)					timer = ((t * t) * ( (Float)(2) ));
            				}
            				else {
HXLINE( 379)					t = (t - ( (Float)(1) ));
HXDLIN( 379)					timer = (( (Float)(1) ) - ((t * t) * ( (Float)(2) )));
            				}
HXLINE( 381)				 ::flixel::FlxSprite _hx_tmp = this->titleText;
HXDLIN( 381)				int Color1 = this->titleTextColors->__get(0);
HXDLIN( 381)				int Color2 = this->titleTextColors->__get(1);
HXDLIN( 381)				int r = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 16) & 255) - ((Color1 >> 16) & 255))) ) * timer) + ((Color1 >> 16) & 255)));
HXDLIN( 381)				int g = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 8) & 255) - ((Color1 >> 8) & 255))) ) * timer) + ((Color1 >> 8) & 255)));
HXDLIN( 381)				int b = ::Std_obj::_hx_int(((( (Float)(((Color2 & 255) - (Color1 & 255))) ) * timer) + (Color1 & 255)));
HXDLIN( 381)				int a = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 24) & 255) - ((Color1 >> 24) & 255))) ) * timer) + ((Color1 >> 24) & 255)));
HXDLIN( 381)				int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 381)				{
HXLINE( 381)					color = (color & -16711681);
HXDLIN( 381)					int color1;
HXDLIN( 381)					if ((r > 255)) {
HXLINE( 381)						color1 = 255;
            					}
            					else {
HXLINE( 381)						if ((r < 0)) {
HXLINE( 381)							color1 = 0;
            						}
            						else {
HXLINE( 381)							color1 = r;
            						}
            					}
HXDLIN( 381)					color = (color | (color1 << 16));
            				}
HXDLIN( 381)				{
HXLINE( 381)					color = (color & -65281);
HXDLIN( 381)					int color2;
HXDLIN( 381)					if ((g > 255)) {
HXLINE( 381)						color2 = 255;
            					}
            					else {
HXLINE( 381)						if ((g < 0)) {
HXLINE( 381)							color2 = 0;
            						}
            						else {
HXLINE( 381)							color2 = g;
            						}
            					}
HXDLIN( 381)					color = (color | (color2 << 8));
            				}
HXDLIN( 381)				{
HXLINE( 381)					color = (color & -256);
HXDLIN( 381)					int color3;
HXDLIN( 381)					if ((b > 255)) {
HXLINE( 381)						color3 = 255;
            					}
            					else {
HXLINE( 381)						if ((b < 0)) {
HXLINE( 381)							color3 = 0;
            						}
            						else {
HXLINE( 381)							color3 = b;
            						}
            					}
HXDLIN( 381)					color = (color | color3);
            				}
HXDLIN( 381)				{
HXLINE( 381)					color = (color & 16777215);
HXDLIN( 381)					int color4;
HXDLIN( 381)					if ((a > 255)) {
HXLINE( 381)						color4 = 255;
            					}
            					else {
HXLINE( 381)						if ((a < 0)) {
HXLINE( 381)							color4 = 0;
            						}
            						else {
HXLINE( 381)							color4 = a;
            						}
            					}
HXDLIN( 381)					color = (color | (color4 << 24));
            				}
HXDLIN( 381)				_hx_tmp->set_color(color);
HXLINE( 382)				Float a1 = this->titleTextAlphas->__get(0);
HXDLIN( 382)				this->titleText->set_alpha((a1 + (timer * (this->titleTextAlphas->__get(1) - a1))));
            			}
HXLINE( 385)			if (pressedEnter) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::TitleState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_399_update)
HXLINE( 400)					if (_gthis->mustUpdate) {
HXLINE( 401)						::backend::MusicBeatState_obj::switchState( ::states::OutdatedState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            					else {
HXLINE( 403)						::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            					}
HXLINE( 405)					::states::TitleState_obj::closedState = true;
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 387)				this->titleText->set_color(-1);
HXLINE( 388)				this->titleText->set_alpha(( (Float)(1) ));
HXLINE( 390)				if (::hx::IsNotNull( this->titleText )) {
HXLINE( 390)					this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            				}
HXLINE( 392)				int _hx_tmp;
HXDLIN( 392)				if (::backend::ClientPrefs_obj::data->flashing) {
HXLINE( 392)					_hx_tmp = -1;
            				}
            				else {
HXLINE( 392)					_hx_tmp = (int)1291845631;
            				}
HXDLIN( 392)				::flixel::FlxG_obj::camera->flash(_hx_tmp,1,null(),null());
HXLINE( 393)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 393)				_hx_tmp1->play(::backend::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 395)				this->transitioning = true;
HXLINE( 398)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            			}
            		}
HXLINE( 461)		bool _hx_tmp2;
HXDLIN( 461)		bool _hx_tmp3;
HXDLIN( 461)		if (::states::TitleState_obj::initialized) {
HXLINE( 461)			_hx_tmp3 = pressedEnter;
            		}
            		else {
HXLINE( 461)			_hx_tmp3 = false;
            		}
HXDLIN( 461)		if (_hx_tmp3) {
HXLINE( 461)			_hx_tmp2 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 461)			_hx_tmp2 = false;
            		}
HXDLIN( 461)		if (_hx_tmp2) {
HXLINE( 463)			this->skipIntro();
            		}
HXLINE( 466)		if (::hx::IsNotNull( this->swagShader )) {
HXLINE( 468)			if (this->get_controls()->get_UI_LEFT()) {
HXLINE( 468)				 ::shaders::ColorSwap fh = this->swagShader;
HXDLIN( 468)				fh->set_hue((fh->hue - (elapsed * ((Float)0.1))));
            			}
HXLINE( 469)			if (this->get_controls()->get_UI_RIGHT()) {
HXLINE( 469)				 ::shaders::ColorSwap fh = this->swagShader;
HXDLIN( 469)				fh->set_hue((fh->hue + (elapsed * ((Float)0.1))));
            			}
            		}
HXLINE( 472)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_477_createCoolText)
HXDLIN( 477)		int _g = 0;
HXDLIN( 477)		int _g1 = textArray->length;
HXDLIN( 477)		while((_g < _g1)){
HXDLIN( 477)			_g = (_g + 1);
HXDLIN( 477)			int i = (_g - 1);
HXLINE( 479)			 ::objects::Alphabet money =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true);
HXLINE( 480)			{
HXLINE( 480)				int axes = 1;
HXDLIN( 480)				bool _hx_tmp;
HXDLIN( 480)				if ((axes != 1)) {
HXLINE( 480)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 480)					_hx_tmp = true;
            				}
HXDLIN( 480)				if (_hx_tmp) {
HXLINE( 480)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 480)					money->set_x(((( (Float)(_hx_tmp) ) - money->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 480)				bool _hx_tmp1;
HXDLIN( 480)				if ((axes != 16)) {
HXLINE( 480)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 480)					_hx_tmp1 = true;
            				}
HXDLIN( 480)				if (_hx_tmp1) {
HXLINE( 480)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 480)					money->set_y(((( (Float)(_hx_tmp) ) - money->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 481)			money->set_y((money->y + (((i * 60) + 200) + offset)));
HXLINE( 482)			bool _hx_tmp2;
HXDLIN( 482)			if (::hx::IsNotNull( this->credGroup )) {
HXLINE( 482)				_hx_tmp2 = ::hx::IsNotNull( this->textGroup );
            			}
            			else {
HXLINE( 482)				_hx_tmp2 = false;
            			}
HXDLIN( 482)			if (_hx_tmp2) {
HXLINE( 483)				this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 484)				this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_491_addMoreText)
HXDLIN( 491)		bool _hx_tmp;
HXDLIN( 491)		if (::hx::IsNotNull( this->textGroup )) {
HXDLIN( 491)			_hx_tmp = ::hx::IsNotNull( this->credGroup );
            		}
            		else {
HXDLIN( 491)			_hx_tmp = false;
            		}
HXDLIN( 491)		if (_hx_tmp) {
HXLINE( 492)			 ::objects::Alphabet coolText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true);
HXLINE( 493)			{
HXLINE( 493)				int axes = 1;
HXDLIN( 493)				bool _hx_tmp;
HXDLIN( 493)				if ((axes != 1)) {
HXLINE( 493)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 493)					_hx_tmp = true;
            				}
HXDLIN( 493)				if (_hx_tmp) {
HXLINE( 493)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 493)					coolText->set_x(((( (Float)(_hx_tmp) ) - coolText->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 493)				bool _hx_tmp1;
HXDLIN( 493)				if ((axes != 16)) {
HXLINE( 493)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 493)					_hx_tmp1 = true;
            				}
HXDLIN( 493)				if (_hx_tmp1) {
HXLINE( 493)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 493)					coolText->set_y(((( (Float)(_hx_tmp) ) - coolText->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 494)			coolText->set_y((coolText->y + (((this->textGroup->length * 60) + 200) + offset)));
HXLINE( 495)			this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 496)			this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_502_deleteCoolText)
HXDLIN( 502)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 504)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 505)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_512_beatHit)
HXLINE( 513)		this->super::beatHit();
HXLINE( 515)		if (::hx::IsNotNull( this->logoBl )) {
HXLINE( 516)			this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
            		}
HXLINE( 518)		if (::hx::IsNotNull( this->gfDance )) {
HXLINE( 519)			this->danceLeft = !(this->danceLeft);
HXLINE( 520)			if (this->danceLeft) {
HXLINE( 521)				this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            			else {
HXLINE( 523)				this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            			}
            		}
HXLINE( 526)		if (!(::states::TitleState_obj::closedState)) {
HXLINE( 527)			this->sickBeats++;
HXLINE( 528)			switch((int)(this->sickBeats)){
            				case (int)2: {
HXLINE( 532)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 532)					::String library = null();
HXDLIN( 532)					 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 532)					_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 533)					{
HXLINE( 533)						 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 533)						 ::Dynamic onComplete = null();
HXDLIN( 533)						if (::hx::IsNull( _this->_channel )) {
HXLINE( 533)							_this->play(null(),null(),null());
            						}
HXDLIN( 533)						if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 533)							_this->fadeTween->cancel();
            						}
HXDLIN( 533)						_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 535)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_81c3dd25_26,1),null());
            				}
            				break;
            				case (int)6: {
HXLINE( 538)					this->addMoreText(HX_("etoile",02,76,35,76),40);
            				}
            				break;
            				case (int)7: {
HXLINE( 542)					this->deleteCoolText();
            				}
            				break;
            				case (int)8: {
HXLINE( 547)					this->addMoreText(HX_("presents",18,61,d7,66),40);
            				}
            				break;
            				case (int)10: {
HXLINE( 549)					this->skipIntro();
            				}
            				break;
            			}
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_557_skipIntro)
HXDLIN( 557)		 ::states::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 558)		if (!(this->skippedIntro)) {
HXLINE( 560)			if (::states::TitleState_obj::playJingle) {
HXLINE( 562)				::String easteregg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 563)				if (::hx::IsNull( easteregg )) {
HXLINE( 563)					easteregg = HX_("",00,00,00,00);
            				}
HXLINE( 564)				easteregg = easteregg.toUpperCase();
HXLINE( 566)				 ::flixel::sound::FlxSound sound = null();
HXLINE( 567)				::String _hx_switch_0 = easteregg;
            				if (  (_hx_switch_0==HX_("BBPANZU",78,33,57,57)) ){
HXLINE( 576)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 576)					sound = sound1->play(::backend::Paths_obj::sound(HX_("JingleBB",51,0b,1a,28),null()),null(),null(),null(),null(),null());
HXDLIN( 576)					goto _hx_goto_27;
            				}
            				if (  (_hx_switch_0==HX_("RIVER",ec,a2,5d,67)) ){
HXLINE( 570)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 570)					sound = sound1->play(::backend::Paths_obj::sound(HX_("JingleRiver",fb,99,93,2f),null()),null(),null(),null(),null(),null());
HXDLIN( 570)					goto _hx_goto_27;
            				}
            				if (  (_hx_switch_0==HX_("SHADOW",e0,73,a3,cf)) ){
HXLINE( 574)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 574)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("JingleShadow",11,aa,a5,36),null()),null(),null(),null(),null(),null());
HXDLIN( 574)					goto _hx_goto_27;
            				}
            				if (  (_hx_switch_0==HX_("SHUBS",f1,3b,1a,fa)) ){
HXLINE( 572)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 572)					sound = sound1->play(::backend::Paths_obj::sound(HX_("JingleShubs",00,33,50,c2),null()),null(),null(),null(),null(),null());
HXDLIN( 572)					goto _hx_goto_27;
            				}
            				/* default */{
HXLINE( 579)					this->remove(this->ngSpr,null());
HXLINE( 580)					this->remove(this->credGroup,null());
HXLINE( 581)					::flixel::FlxG_obj::camera->flash(-1,2,null(),null());
HXLINE( 582)					this->skippedIntro = true;
HXLINE( 583)					::states::TitleState_obj::playJingle = false;
HXLINE( 585)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 585)					::String library = null();
HXDLIN( 585)					 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 585)					_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 586)					{
HXLINE( 586)						 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 586)						 ::Dynamic onComplete = null();
HXDLIN( 586)						if (::hx::IsNull( _this->_channel )) {
HXLINE( 586)							_this->play(null(),null(),null());
            						}
HXDLIN( 586)						if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 586)							_this->fadeTween->cancel();
            						}
HXDLIN( 586)						_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            					}
HXLINE( 587)					return;
            				}
            				_hx_goto_27:;
HXLINE( 590)				if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 1)) {
HXLINE( 591)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 591)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("fart-with-reverb",a9,f2,20,9d),null()),null(),null(),null(),null(),null());
            				}
HXLINE( 593)				this->transitioning = true;
HXLINE( 594)				if ((easteregg == HX_("SHADOW",e0,73,a3,cf))) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::TitleState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_597_skipIntro)
HXLINE( 598)						_gthis->remove(_gthis->ngSpr,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 599)						_gthis->remove(_gthis->credGroup,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 600)						::flixel::FlxG_obj::camera->flash(-1,((Float)0.6),null(),null());
HXLINE( 601)						_gthis->transitioning = false;
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 596)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)3.2), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::TitleState,_gthis) HXARGC(0)
            					void _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_609_skipIntro)
HXLINE( 610)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 610)						::String library = null();
HXDLIN( 610)						 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 610)						_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 611)						{
HXLINE( 611)							 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 611)							 ::Dynamic onComplete = null();
HXDLIN( 611)							if (::hx::IsNull( _this->_channel )) {
HXLINE( 611)								_this->play(null(),null(),null());
            							}
HXDLIN( 611)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 611)								_this->fadeTween->cancel();
            							}
HXDLIN( 611)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
HXLINE( 612)						_gthis->transitioning = false;
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 606)					this->remove(this->ngSpr,null());
HXLINE( 607)					this->remove(this->credGroup,null());
HXLINE( 608)					::flixel::FlxG_obj::camera->flash(-1,3,null(),null());
HXLINE( 609)					sound->onComplete =  ::Dynamic(new _hx_Closure_1(_gthis));
            				}
HXLINE( 615)				::states::TitleState_obj::playJingle = false;
            			}
            			else {
HXLINE( 619)				this->remove(this->ngSpr,null());
HXLINE( 620)				this->remove(this->credGroup,null());
HXLINE( 621)				::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 623)				::String easteregg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 624)				if (::hx::IsNull( easteregg )) {
HXLINE( 624)					easteregg = HX_("",00,00,00,00);
            				}
HXLINE( 625)				easteregg = easteregg.toUpperCase();
            			}
HXLINE( 637)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

::Array< int > TitleState_obj::muteKeys;

::Array< int > TitleState_obj::volumeDownKeys;

::Array< int > TitleState_obj::volumeUpKeys;

bool TitleState_obj::initialized;

::String TitleState_obj::updateVersion;

bool TitleState_obj::playJingle;

bool TitleState_obj::closedState;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "states.TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(ngSpr,"ngSpr");
	HX_MARK_MEMBER_NAME(titleTextColors,"titleTextColors");
	HX_MARK_MEMBER_NAME(titleTextAlphas,"titleTextAlphas");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_MARK_MEMBER_NAME(titleJSON,"titleJSON");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(swagShader,"swagShader");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(newTitle,"newTitle");
	HX_MARK_MEMBER_NAME(titleTimer,"titleTimer");
	HX_MARK_MEMBER_NAME(sickBeats,"sickBeats");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	HX_MARK_MEMBER_NAME(increaseVolume,"increaseVolume");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(ngSpr,"ngSpr");
	HX_VISIT_MEMBER_NAME(titleTextColors,"titleTextColors");
	HX_VISIT_MEMBER_NAME(titleTextAlphas,"titleTextAlphas");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_VISIT_MEMBER_NAME(titleJSON,"titleJSON");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(swagShader,"swagShader");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(newTitle,"newTitle");
	HX_VISIT_MEMBER_NAME(titleTimer,"titleTimer");
	HX_VISIT_MEMBER_NAME(sickBeats,"sickBeats");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	HX_VISIT_MEMBER_NAME(increaseVolume,"increaseVolume");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { return ::hx::Val( ngSpr ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		if (HX_FIELD_EQ(inName,"newTitle") ) { return ::hx::Val( newTitle ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"titleJSON") ) { return ::hx::Val( titleJSON ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { return ::hx::Val( sickBeats ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { return ::hx::Val( mustUpdate ); }
		if (HX_FIELD_EQ(inName,"swagShader") ) { return ::hx::Val( swagShader ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		if (HX_FIELD_EQ(inName,"titleTimer") ) { return ::hx::Val( titleTimer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"increaseVolume") ) { return ::hx::Val( increaseVolume ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"titleTextColors") ) { return ::hx::Val( titleTextColors ); }
		if (HX_FIELD_EQ(inName,"titleTextAlphas") ) { return ::hx::Val( titleTextAlphas ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { outValue = ( muteKeys ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playJingle") ) { outValue = ( playJingle ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { outValue = ( closedState ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { outValue = ( volumeUpKeys ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { outValue = ( updateVersion ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { outValue = ( volumeDownKeys ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { ngSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newTitle") ) { newTitle=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleJSON") ) { titleJSON=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { sickBeats=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { mustUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagShader") ) { swagShader=inValue.Cast<  ::shaders::ColorSwap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleTimer") ) { titleTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"increaseVolume") ) { increaseVolume=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"titleTextColors") ) { titleTextColors=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleTextAlphas") ) { titleTextAlphas=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playJingle") ) { playJingle=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { closedState=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { updateVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("ngSpr",7c,26,68,9a));
	outFields->push(HX_("titleTextColors",f5,4d,ff,7e));
	outFields->push(HX_("titleTextAlphas",9a,53,b4,fa));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("mustUpdate",f2,14,07,8d));
	outFields->push(HX_("titleJSON",c0,cb,fa,69));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("swagShader",4f,e1,a0,28));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("newTitle",18,59,85,33));
	outFields->push(HX_("titleTimer",0d,d3,1a,22));
	outFields->push(HX_("sickBeats",9f,58,9e,58));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	outFields->push(HX_("increaseVolume",3c,17,43,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,ngSpr),HX_("ngSpr",7c,26,68,9a)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TitleState_obj,titleTextColors),HX_("titleTextColors",f5,4d,ff,7e)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(TitleState_obj,titleTextAlphas),HX_("titleTextAlphas",9a,53,b4,fa)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,mustUpdate),HX_("mustUpdate",f2,14,07,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TitleState_obj,titleJSON),HX_("titleJSON",c0,cb,fa,69)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::shaders::ColorSwap */ ,(int)offsetof(TitleState_obj,swagShader),HX_("swagShader",4f,e1,a0,28)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,newTitle),HX_("newTitle",18,59,85,33)},
	{::hx::fsFloat,(int)offsetof(TitleState_obj,titleTimer),HX_("titleTimer",0d,d3,1a,22)},
	{::hx::fsInt,(int)offsetof(TitleState_obj,sickBeats),HX_("sickBeats",9f,58,9e,58)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,increaseVolume),HX_("increaseVolume",3c,17,43,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::muteKeys,HX_("muteKeys",6d,5d,88,16)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeDownKeys,HX_("volumeDownKeys",70,2f,58,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeUpKeys,HX_("volumeUpKeys",69,bb,f5,23)},
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsString,(void *) &TitleState_obj::updateVersion,HX_("updateVersion",0f,4c,60,48)},
	{::hx::fsBool,(void *) &TitleState_obj::playJingle,HX_("playJingle",45,b8,ae,c6)},
	{::hx::fsBool,(void *) &TitleState_obj::closedState,HX_("closedState",c5,ac,a4,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("ngSpr",7c,26,68,9a),
	HX_("titleTextColors",f5,4d,ff,7e),
	HX_("titleTextAlphas",9a,53,b4,fa),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("mustUpdate",f2,14,07,8d),
	HX_("titleJSON",c0,cb,fa,69),
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("gfDance",94,88,3a,eb),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("swagShader",4f,e1,a0,28),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("newTitle",18,59,85,33),
	HX_("titleTimer",0d,d3,1a,22),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("sickBeats",9f,58,9e,58),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("increaseVolume",3c,17,43,1a),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_MARK_MEMBER_NAME(TitleState_obj::playJingle,"playJingle");
	HX_MARK_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_VISIT_MEMBER_NAME(TitleState_obj::playJingle,"playJingle");
	HX_VISIT_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("muteKeys",6d,5d,88,16),
	HX_("volumeDownKeys",70,2f,58,0b),
	HX_("volumeUpKeys",69,bb,f5,23),
	HX_("initialized",14,f5,0f,37),
	HX_("updateVersion",0f,4c,60,48),
	HX_("playJingle",45,b8,ae,c6),
	HX_("closedState",c5,ac,a4,98),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.TitleState",25,dd,c3,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_44_boot)
HXDLIN(  44)		muteKeys = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_32,1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_45_boot)
HXDLIN(  45)		volumeDownKeys = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_34,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_46_boot)
HXDLIN(  46)		volumeUpKeys = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_36,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_48_boot)
HXDLIN(  48)		initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_75_boot)
HXDLIN(  75)		updateVersion = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_328_boot)
HXDLIN( 328)		playJingle = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_510_boot)
HXDLIN( 510)		closedState = false;
            	}
}

} // end namespace states
