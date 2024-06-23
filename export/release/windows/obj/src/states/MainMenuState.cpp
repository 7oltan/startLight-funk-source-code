#include <hxcpp.h>

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
#ifndef INCLUDED_backend_InternetConnection
#include <backend/InternetConnection.h>
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
#ifndef INCLUDED_backend_Song
#include <backend/Song.h>
#endif
#ifndef INCLUDED_backend_WeekData
#include <backend/WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_states_CreditsState
#include <states/CreditsState.h>
#endif
#ifndef INCLUDED_states_FreeplayState
#include <states/FreeplayState.h>
#endif
#ifndef INCLUDED_states_GalamixMenuState
#include <states/GalamixMenuState.h>
#endif
#ifndef INCLUDED_states_GalleryMenuState
#include <states/GalleryMenuState.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_MenuItem
#include <states/MenuItem.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_StoryMenuState
#include <states/StoryMenuState.h>
#endif
#ifndef INCLUDED_states_TitleState
#include <states/TitleState.h>
#endif
#ifndef INCLUDED_states_editors_MasterEditorMenu
#include <states/editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_89e648ab22b7047a_11_new,"states.MainMenuState","new",0x55e2079f,"states.MainMenuState.new","states/MainMenuState.hx",11,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_29_create,"states.MainMenuState","create",0x17a2011d,"states.MainMenuState.create","states/MainMenuState.hx",29,0x1c04e2b2)
static const int _hx_array_data_36084c2d_6[] = {
	(int)54,(int)90,
};
static const int _hx_array_data_36084c2d_7[] = {
	(int)64,(int)69,
};
static const int _hx_array_data_36084c2d_8[] = {
	(int)64,(int)64,
};
static const int _hx_array_data_36084c2d_9[] = {
	(int)5,(int)3,
};
static const int _hx_array_data_36084c2d_10[] = {
	(int)22,(int)12,
};
static const int _hx_array_data_36084c2d_11[] = {
	(int)22,(int)224,
};
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_126_doHandTween,"states.MainMenuState","doHandTween",0x983be9b0,"states.MainMenuState.doHandTween","states/MainMenuState.hx",126,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_139_addItem,"states.MainMenuState","addItem",0x06b14a93,"states.MainMenuState.addItem","states/MainMenuState.hx",139,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_153_customOverlaps,"states.MainMenuState","customOverlaps",0x4f92d2fe,"states.MainMenuState.customOverlaps","states/MainMenuState.hx",153,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_200_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",200,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_168_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",168,0x1c04e2b2)
static const bool _hx_array_data_36084c2d_20[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_295_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",295,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_301_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",301,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_288_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",288,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_304_onlySwitchState,"states.MainMenuState","onlySwitchState",0x13e51330,"states.MainMenuState.onlySwitchState","states/MainMenuState.hx",304,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_333_changeSelection,"states.MainMenuState","changeSelection",0x4099327b,"states.MainMenuState.changeSelection","states/MainMenuState.hx",333,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_320_changeSelection,"states.MainMenuState","changeSelection",0x4099327b,"states.MainMenuState.changeSelection","states/MainMenuState.hx",320,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_12_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",12,0x1c04e2b2)
namespace states{

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_11_new)
HXLINE( 124)		this->alrSideWays = true;
HXLINE(  23)		this->lockArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  21)		this->oldMouse = true;
HXLINE(  20)		this->selected = false;
HXLINE(  18)		this->curSelected = 1;
HXLINE(  16)		this->items = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  11)		super::__construct(TransIn,TransOut);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x2b1dec0f) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2b1dec0f;
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

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_29_create)
HXLINE(  30)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  33)		{
HXLINE(  33)			::backend::Mods_obj::globalMods = ::Array_obj< ::String >::__new(0);
HXDLIN(  33)			{
HXLINE(  33)				int _g = 0;
HXDLIN(  33)				if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  33)					::backend::Mods_obj::updateModList();
            				}
HXDLIN(  33)				::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  33)				::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  33)				::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  33)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  33)					int _g = 0;
HXDLIN(  33)					::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  33)					::String daList = null();
HXDLIN(  33)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)					path = formatted->__get((formatted->length - 1));
HXLINE(  33)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXLINE(  33)					::Array< ::String > _g1;
HXDLIN(  33)					if (::hx::IsNotNull( daList )) {
HXLINE(  33)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  33)						{
HXLINE(  33)							int _g = 0;
HXDLIN(  33)							int _g2 = daList1->length;
HXDLIN(  33)							while((_g < _g2)){
HXLINE(  33)								_g = (_g + 1);
HXDLIN(  33)								int i = (_g - 1);
HXDLIN(  33)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN(  33)						_g1 = daList1;
            					}
            					else {
HXLINE(  33)						_g1 = ::Array_obj< ::String >::__new(0);
            					}
HXDLIN(  33)					while((_g < _g1->length)){
HXLINE(  33)						::String mod = _g1->__get(_g);
HXDLIN(  33)						_g = (_g + 1);
HXDLIN(  33)						if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  33)							continue;
            						}
HXDLIN(  33)						::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  33)						list_all->push(dat->__get(0));
HXDLIN(  33)						if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  33)							list_enabled->push(dat->__get(0));
            						}
            						else {
HXLINE(  33)							list_disabled->push(dat->__get(0));
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 172)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  33)						::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN(  33)				::Array< ::String > _g1 = list_enabled;
HXDLIN(  33)				while((_g < _g1->length)){
HXLINE(  33)					::String mod = _g1->__get(_g);
HXDLIN(  33)					_g = (_g + 1);
HXDLIN(  33)					 ::Dynamic pack = ::backend::Mods_obj::getPack(mod);
HXDLIN(  33)					bool _hx_tmp;
HXDLIN(  33)					if (::hx::IsNotNull( pack )) {
HXLINE(  33)						_hx_tmp = ( (bool)(pack->__Field(HX_("runsGlobally",98,2d,b5,06),::hx::paccDynamic)) );
            					}
            					else {
HXLINE(  33)						_hx_tmp = false;
            					}
HXDLIN(  33)					if (_hx_tmp) {
HXLINE(  33)						::backend::Mods_obj::globalMods->push(mod);
            					}
            				}
            			}
            		}
HXLINE(  35)		::backend::Mods_obj::loadTopMod();
HXLINE(  39)		::backend::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  41)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  43)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  44)		::flixel::FlxG_obj::camera->set_zoom(((Float)0.662));
HXLINE(  46)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  46)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/bg",5c,f8,d8,8d),null(),null()),null(),null(),null(),null(),null());
HXLINE(  47)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  48)		{
HXLINE(  48)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  48)			this1->set_x(( (Float)(0) ));
HXDLIN(  48)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  49)		{
HXLINE(  49)			int axes = 17;
HXDLIN(  49)			bool _hx_tmp;
HXDLIN(  49)			if ((axes != 1)) {
HXLINE(  49)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  49)				_hx_tmp = true;
            			}
HXDLIN(  49)			if (_hx_tmp) {
HXLINE(  49)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  49)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  49)			bool _hx_tmp1;
HXDLIN(  49)			if ((axes != 16)) {
HXLINE(  49)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  49)				_hx_tmp1 = true;
            			}
HXDLIN(  49)			if (_hx_tmp1) {
HXLINE(  49)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  49)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXDLIN(  49)		bg1->set_x((bg1->x - ( (Float)(13) )));
HXDLIN(  49)		bg1->set_y((bg1->y + 100));
HXLINE(  50)		this->add(bg1);
HXLINE(  52)		bool _hx_tmp2;
HXDLIN(  52)		bool _hx_tmp3;
HXDLIN(  52)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic) )) {
HXLINE(  52)			_hx_tmp3 = ( (bool)( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic))->__Field(HX_("exists",dc,1d,e0,bf),::hx::paccDynamic)(HX_("nastya",5c,ee,7b,21))) );
            		}
            		else {
HXLINE(  52)			_hx_tmp3 = false;
            		}
HXDLIN(  52)		if (_hx_tmp3) {
HXLINE(  52)			_hx_tmp2 = ( (bool)( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic))->__Field(HX_("get",96,80,4e,00),::hx::paccDynamic)(HX_("nastya",5c,ee,7b,21))) );
            		}
            		else {
HXLINE(  52)			_hx_tmp2 = false;
            		}
HXDLIN(  52)		this->finishedMainWeek = _hx_tmp2;
HXLINE(  54)		if (this->finishedMainWeek) {
HXLINE(  55)			 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,200,200,null());
HXDLIN(  55)			this->swmg = _hx_tmp->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/sin",a1,40,0d,90),null(),null()),null(),null(),null(),null(),null());
HXLINE(  56)			this->swmg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  57)			{
HXLINE(  57)				 ::flixel::math::FlxBasePoint this1 = this->swmg->scrollFactor;
HXDLIN(  57)				this1->set_x(( (Float)(0) ));
HXDLIN(  57)				this1->set_y(( (Float)(0) ));
            			}
HXLINE(  58)			this->add(this->swmg);
            		}
HXLINE(  62)		 ::states::GalleryMenuState _hx_tmp4 =  ::states::GalleryMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  62)		::String _hx_tmp5;
HXDLIN(  62)		if (::backend::InternetConnection_obj::isAvailable(null())) {
HXLINE(  62)			_hx_tmp5 = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  62)			_hx_tmp5 = HX_("no connection",9d,7d,96,8b);
            		}
HXDLIN(  62)		this->addItem(HX_("Gallery",72,a8,08,c8),( (Float)(-100) ),( (Float)(100) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_6,2),_hx_tmp4,false,_hx_tmp5);
HXLINE(  63)		this->addItem(HX_("storymode",d8,85,a8,3d),( (Float)(500) ),( (Float)(0) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_7,2), ::states::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()),null(),null());
HXLINE(  64)		bool can;
HXDLIN(  64)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic) )) {
HXLINE(  64)			can = ( (bool)( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic))->__Field(HX_("keys",f4,e1,06,47),::hx::paccDynamic)()->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) );
            		}
            		else {
HXLINE(  64)			can = false;
            		}
HXLINE(  65)		::String _hx_tmp6;
HXDLIN(  65)		if (can) {
HXLINE(  65)			_hx_tmp6 = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  65)			_hx_tmp6 = HX_("unlock any song then come back!",a6,d4,85,a5);
            		}
HXDLIN(  65)		this->addItem(HX_("freeplay",a0,90,86,22),( (Float)(1100) ),( (Float)(0) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_8,2), ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()),null(),_hx_tmp6);
HXLINE(  66)		this->addItem(HX_("options",5e,33,fe,df),( (Float)(-300) ),( (Float)(660) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_9,2), ::options::OptionsState_obj::__alloc( HX_CTX ,null(),null()),true,null());
HXLINE(  67)		this->addItem(HX_("credits",1a,0e,5e,13),( (Float)(-260) ),( (Float)(550) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_10,2), ::states::CreditsState_obj::__alloc( HX_CTX ,null(),null()),true,null());
HXLINE(  68)		::String _hx_tmp7;
HXDLIN(  68)		if (this->finishedMainWeek) {
HXLINE(  68)			_hx_tmp7 = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  68)			_hx_tmp7 = HX_("finish the main week in story mode then come back!",69,28,76,30);
            		}
HXDLIN(  68)		this->addItem(HX_("G",47,00,00,00),( (Float)(1200) ),( (Float)(600) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_11,2), ::states::GalamixMenuState_obj::__alloc( HX_CTX ,null(),null()),true,_hx_tmp7);
HXLINE(  70)		this->itemGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  71)		this->add(this->itemGroup);
HXLINE(  73)		{
HXLINE(  73)			int _g2 = 0;
HXDLIN(  73)			int _g3 = this->items->length;
HXDLIN(  73)			while((_g2 < _g3)){
HXLINE(  73)				_g2 = (_g2 + 1);
HXDLIN(  73)				int i = (_g2 - 1);
HXLINE(  74)				 ::flixel::FlxSprite button =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->items->__get(i).StaticCast<  ::states::MenuItem >()->x,this->items->__get(i).StaticCast<  ::states::MenuItem >()->y,null());
HXLINE(  75)				::String key = (HX_("mainmenu/",d7,fe,39,8c) + this->items->__get(i).StaticCast<  ::states::MenuItem >()->name);
HXDLIN(  75)				::String library = null();
HXDLIN(  75)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN(  75)				bool xmlExists = false;
HXDLIN(  75)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  75)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 368)					xmlExists = true;
            				}
HXLINE(  75)				 ::Dynamic _hx_tmp;
HXDLIN(  75)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  75)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  75)					_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            				}
HXDLIN(  75)				::String _hx_tmp1;
HXDLIN(  75)				if (xmlExists) {
HXLINE(  75)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE(  75)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN(  75)				button->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  76)				button->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->items->__get(i).StaticCast<  ::states::MenuItem >()->name + HX_(" idle",34,37,86,b2)),24,null(),null(),null());
HXLINE(  77)				button->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->items->__get(i).StaticCast<  ::states::MenuItem >()->name + HX_(" selected",7b,4a,9a,0f)),24,null(),null(),null());
HXLINE(  78)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  79)				button->updateHitbox();
HXLINE(  80)				button->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  81)				if (this->items->__get(i).StaticCast<  ::states::MenuItem >()->isMouse) {
HXLINE(  82)					 ::flixel::math::FlxBasePoint this1 = button->scrollFactor;
HXDLIN(  82)					this1->set_x(( (Float)(0) ));
HXDLIN(  82)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(  83)				button->ID = i;
HXLINE(  84)				this->itemGroup->add(button).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  85)				if (this->items->__get(i).StaticCast<  ::states::MenuItem >()->isLocked) {
HXLINE(  86)					::haxe::Log_obj::trace(this->items->__get(i).StaticCast<  ::states::MenuItem >()->lockText,::hx::SourceInfo(HX_("source/states/MainMenuState.hx",3e,32,23,ea),86,HX_("states.MainMenuState",2d,4c,08,36),HX_("create",fc,66,0f,7c)));
HXLINE(  87)					 ::flixel::FlxSprite lock =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,button->x,button->y,null());
HXDLIN(  87)					 ::flixel::FlxSprite lock1 = lock->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/lock",42,52,ef,76),null(),null()),null(),null(),null(),null(),null());
HXLINE(  88)					lock1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  89)					lock1->ID = i;
HXLINE(  90)					if (this->items->__get(i).StaticCast<  ::states::MenuItem >()->isMouse) {
HXLINE(  91)						 ::flixel::math::FlxBasePoint this1 = lock1->scrollFactor;
HXDLIN(  91)						this1->set_x(( (Float)(0) ));
HXDLIN(  91)						this1->set_y(( (Float)(0) ));
            					}
HXLINE(  94)					Float button1 = button->x;
HXDLIN(  94)					Float _hx_tmp = (button1 + (button->get_width() / ( (Float)(2) )));
HXDLIN(  94)					Float _hx_tmp1 = (_hx_tmp - (lock1->get_width() / ( (Float)(2) )));
HXDLIN(  94)					Float button2 = button->y;
HXDLIN(  94)					Float _hx_tmp2 = (button2 + (button->get_height() / ( (Float)(2) )));
HXDLIN(  94)					lock1->setPosition(_hx_tmp1,(_hx_tmp2 - (lock1->get_height() / ( (Float)(2) ))));
HXLINE(  95)					this->add(lock1);
HXLINE(  96)					this->lockArray->push(lock1);
HXLINE(  97)					this->items->__get(i).StaticCast<  ::states::MenuItem >()->lockSprite = lock1;
            				}
            			}
            		}
HXLINE( 101)		 ::flixel::FlxSprite _hx_tmp8 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,200,200,null());
HXDLIN( 101)		this->hand = _hx_tmp8->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/handSelector",05,07,5f,2a),null(),null()),null(),null(),null(),null(),null());
HXLINE( 102)		this->hand->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 103)		{
HXLINE( 103)			 ::flixel::math::FlxBasePoint this2 = this->hand->scrollFactor;
HXDLIN( 103)			this2->set_x(( (Float)(0) ));
HXDLIN( 103)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 104)		this->add(this->hand);
HXLINE( 105)		this->doHandTween(false);
HXLINE( 107)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE( 108)		{
HXLINE( 108)			 ::flixel::FlxObject _this = this->camFollow;
HXDLIN( 108)			int axes1 = 17;
HXDLIN( 108)			bool _hx_tmp9;
HXDLIN( 108)			if ((axes1 != 1)) {
HXLINE( 108)				_hx_tmp9 = (axes1 == 17);
            			}
            			else {
HXLINE( 108)				_hx_tmp9 = true;
            			}
HXDLIN( 108)			if (_hx_tmp9) {
HXLINE( 108)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 108)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 108)			bool _hx_tmp10;
HXDLIN( 108)			if ((axes1 != 16)) {
HXLINE( 108)				_hx_tmp10 = (axes1 == 17);
            			}
            			else {
HXLINE( 108)				_hx_tmp10 = true;
            			}
HXDLIN( 108)			if (_hx_tmp10) {
HXLINE( 108)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 108)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 109)		this->add(this->camFollow);
HXLINE( 111)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),0);
HXLINE( 113)		this->lockText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,-180,0,HX_("",00,00,00,00),32,null());
HXLINE( 114)		this->lockText->setFormat(HX_("vcr.ttf",9d,d2,a7,82),50,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 115)		this->lockText->set_borderSize(((Float)1.25));
HXLINE( 116)		{
HXLINE( 116)			 ::flixel::text::FlxText _this1 = this->lockText;
HXDLIN( 116)			int axes2 = 1;
HXDLIN( 116)			bool _hx_tmp11;
HXDLIN( 116)			if ((axes2 != 1)) {
HXLINE( 116)				_hx_tmp11 = (axes2 == 17);
            			}
            			else {
HXLINE( 116)				_hx_tmp11 = true;
            			}
HXDLIN( 116)			if (_hx_tmp11) {
HXLINE( 116)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 116)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 116)			bool _hx_tmp12;
HXDLIN( 116)			if ((axes2 != 16)) {
HXLINE( 116)				_hx_tmp12 = (axes2 == 17);
            			}
            			else {
HXLINE( 116)				_hx_tmp12 = true;
            			}
HXDLIN( 116)			if (_hx_tmp12) {
HXLINE( 116)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 116)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 117)		{
HXLINE( 117)			 ::flixel::math::FlxBasePoint this3 = this->lockText->scrollFactor;
HXDLIN( 117)			this3->set_x(( (Float)(0) ));
HXDLIN( 117)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 118)		this->add(this->lockText);
HXLINE( 120)		this->changeSelection(0);
HXLINE( 121)		this->super::create();
            	}


void MainMenuState_obj::doHandTween(bool sideWays){
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_126_doHandTween)
HXLINE( 127)		if ((sideWays == this->alrSideWays)) {
HXLINE( 128)			return;
            		}
HXLINE( 129)		this->alrSideWays = sideWays;
HXLINE( 130)		if (::hx::IsNotNull( this->handTween )) {
HXLINE( 131)			this->handTween->cancel();
            		}
HXLINE( 132)		{
HXLINE( 132)			 ::flixel::math::FlxBasePoint this1 = this->hand->offset;
HXDLIN( 132)			this1->set_x(( (Float)(0) ));
HXDLIN( 132)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 133)		if (sideWays) {
HXLINE( 134)			this->handTween = ::flixel::tweens::FlxTween_obj::tween(this->hand->offset, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("x",78,00,00,00),50)),((Float)0.6), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.1))
            				->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            				->setFixed(2,HX_("type",ba,f2,08,4d),4)));
            		}
            		else {
HXLINE( 136)			this->handTween = ::flixel::tweens::FlxTween_obj::tween(this->hand->offset, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),50)),((Float)0.6), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.1))
            				->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            				->setFixed(2,HX_("type",ba,f2,08,4d),4)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,doHandTween,(void))

 ::states::MenuItem MainMenuState_obj::addItem(::String name,Float x,Float y,::Array< int > offsetSelected, ::flixel::FlxState state, ::Dynamic __o_isMouse,::String __o_lockText){
            		 ::Dynamic isMouse = __o_isMouse;
            		if (::hx::IsNull(__o_isMouse)) isMouse = false;
            		::String lockText = __o_lockText;
            		if (::hx::IsNull(__o_lockText)) lockText = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_139_addItem)
HXLINE( 140)		 ::states::MenuItem item =  ::states::MenuItem_obj::__alloc( HX_CTX );
HXLINE( 141)		item->name = name;
HXLINE( 142)		item->x = x;
HXLINE( 143)		item->y = y;
HXLINE( 144)		item->offsetSelected = offsetSelected;
HXLINE( 145)		item->state = state;
HXLINE( 146)		item->isMouse = ( (bool)(isMouse) );
HXLINE( 147)		item->set_lockText(lockText);
HXLINE( 148)		item->isLocked = (lockText != HX_("",00,00,00,00));
HXLINE( 149)		this->items->push(item);
HXLINE( 150)		return item;
            	}


HX_DEFINE_DYNAMIC_FUNC7(MainMenuState_obj,addItem,return )

bool MainMenuState_obj::customOverlaps( ::flixel::FlxObject object,bool isOptions){
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_153_customOverlaps)
HXLINE( 154)		 ::flixel::math::FlxBasePoint m = ::flixel::FlxG_obj::mouse->getScreenPosition(null(),null());
HXLINE( 155)		Float x = object->x;
HXLINE( 156)		Float y = object->y;
HXLINE( 157)		Float width = object->get_width();
HXLINE( 158)		Float height = object->get_height();
HXLINE( 160)		if (isOptions) {
HXLINE( 161)			Float space = ( (Float)(75) );
HXLINE( 162)			y = (y + space);
HXLINE( 163)			height = (height - space);
            		}
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		bool _hx_tmp1;
HXDLIN( 166)		if ((m->x >= x)) {
HXLINE( 166)			_hx_tmp1 = (m->x < (x + width));
            		}
            		else {
HXLINE( 166)			_hx_tmp1 = false;
            		}
HXDLIN( 166)		if (_hx_tmp1) {
HXLINE( 166)			_hx_tmp = (m->y >= y);
            		}
            		else {
HXLINE( 166)			_hx_tmp = false;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 166)			return (m->y < (y + height));
            		}
            		else {
HXLINE( 166)			return false;
            		}
HXDLIN( 166)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MainMenuState_obj,customOverlaps,return )

void MainMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::MainMenuState,_gthis,::Array< bool >,isSelecting) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_200_update)
HXLINE( 200)			if (_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isMouse) {
HXLINE( 201)				if (_gthis->customOverlaps(button,(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->name == HX_("options",5e,33,fe,df)))) {
HXLINE( 202)					isSelecting[0] = true;
HXLINE( 204)					{
HXLINE( 204)						int _g = 0;
HXDLIN( 204)						::Array< ::Dynamic> _g1 = _gthis->lockArray;
HXDLIN( 204)						while((_g < _g1->length)){
HXLINE( 204)							 ::flixel::FlxSprite lock = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 204)							_g = (_g + 1);
HXLINE( 205)							if ((button->ID == lock->ID)) {
HXLINE( 206)								lock->set_alpha(( (Float)(1) ));
            							}
            						}
            					}
HXLINE( 209)					if (!(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isLocked)) {
HXLINE( 210)						{
HXLINE( 210)							 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 210)							Float y = ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(1)) );
HXDLIN( 210)							this1->set_x(( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) ));
HXDLIN( 210)							this1->set_y(y);
            						}
HXLINE( 211)						if ((button->animation->_curAnim->name == HX_("idle",14,a7,b3,45))) {
HXLINE( 212)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 212)							_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
HXLINE( 213)						button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 214)						_gthis->lockText->set_visible(false);
            					}
            					else {
HXLINE( 216)						_gthis->lockText->set_text(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->lockText);
HXLINE( 217)						{
HXLINE( 217)							 ::flixel::text::FlxText _this = _gthis->lockText;
HXDLIN( 217)							int axes = 1;
HXDLIN( 217)							bool _hx_tmp;
HXDLIN( 217)							if ((axes != 1)) {
HXLINE( 217)								_hx_tmp = (axes == 17);
            							}
            							else {
HXLINE( 217)								_hx_tmp = true;
            							}
HXDLIN( 217)							if (_hx_tmp) {
HXLINE( 217)								int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 217)								_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            							}
HXDLIN( 217)							bool _hx_tmp1;
HXDLIN( 217)							if ((axes != 16)) {
HXLINE( 217)								_hx_tmp1 = (axes == 17);
            							}
            							else {
HXLINE( 217)								_hx_tmp1 = true;
            							}
HXDLIN( 217)							if (_hx_tmp1) {
HXLINE( 217)								int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 217)								_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            							}
            						}
HXLINE( 218)						_gthis->lockText->set_visible(true);
            					}
HXLINE( 221)					 ::flixel::FlxSprite _gthis1 = _gthis->hand;
HXDLIN( 221)					Float _hx_tmp = (button->x + 25);
HXDLIN( 221)					Float _hx_tmp1;
HXDLIN( 221)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->x > (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )))) {
HXLINE( 221)						_hx_tmp1 = (( (Float)(0) ) - _gthis->hand->get_height());
            					}
            					else {
HXLINE( 221)						Float _hx_tmp = button->get_width();
HXDLIN( 221)						_hx_tmp1 = (_hx_tmp + (_gthis->hand->get_height() / ( (Float)(2) )));
            					}
HXDLIN( 221)					int _hx_tmp2;
HXDLIN( 221)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->name == HX_("options",5e,33,fe,df))) {
HXLINE( 221)						_hx_tmp2 = 30;
            					}
            					else {
HXLINE( 221)						_hx_tmp2 = 0;
            					}
HXDLIN( 221)					Float _hx_tmp3 = (button->y + _hx_tmp2);
HXDLIN( 221)					Float _hx_tmp4 = (_hx_tmp3 + (button->get_height() / ( (Float)(2) )));
HXDLIN( 221)					_gthis1->setPosition((_hx_tmp + _hx_tmp1),(_hx_tmp4 - (_gthis->hand->get_height() / ( (Float)(2) ))));
HXLINE( 222)					Float _hx_tmp5;
HXDLIN( 222)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->x > (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )))) {
HXLINE( 222)						_hx_tmp5 = ( (Float)(-90) );
            					}
            					else {
HXLINE( 222)						_hx_tmp5 = ( (Float)(90) );
            					}
HXDLIN( 222)					_gthis->hand->set_angle(_hx_tmp5);
HXLINE( 223)					{
HXLINE( 223)						 ::flixel::math::FlxBasePoint this1 = _gthis->hand->scrollFactor;
HXDLIN( 223)						this1->set_x(( (Float)(0) ));
HXDLIN( 223)						this1->set_y(( (Float)(0) ));
            					}
HXLINE( 224)					_gthis->doHandTween(true);
HXLINE( 226)					if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 227)						if (_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isLocked) {
HXLINE( 228)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 228)							_hx_tmp->play(::backend::Paths_obj::sound(HX_("lockMenu",2a,df,7d,8d),null()),null(),null(),null(),null(),null());
HXLINE( 229)							::flixel::FlxG_obj::camera->shake(((Float)0.005),((Float)0.1),null(),null(),null());
            						}
            						else {
HXLINE( 231)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 231)							_hx_tmp->play(::backend::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 232)							_gthis->startSwitchin(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->state);
            						}
            					}
            				}
            				else {
HXLINE( 236)					{
HXLINE( 236)						 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 236)						this1->set_x(( (Float)(0) ));
HXDLIN( 236)						this1->set_y(( (Float)(0) ));
            					}
HXLINE( 237)					button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_168_update)
HXDLIN( 168)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 169)		Float Value = ((elapsed * ( (Float)(9) )) / (( (Float)(::flixel::FlxG_obj::updateFramerate) ) / ( (Float)(60) )));
HXDLIN( 169)		Float lowerBound;
HXDLIN( 169)		if ((Value < 0)) {
HXLINE( 169)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 169)			lowerBound = Value;
            		}
HXDLIN( 169)		Float _hx_tmp;
HXDLIN( 169)		if ((lowerBound > 1)) {
HXLINE( 169)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 169)			_hx_tmp = lowerBound;
            		}
HXDLIN( 169)		::flixel::FlxG_obj::camera->set_followLerp(_hx_tmp);
HXLINE( 170)		if (this->get_controls()->get_BACK()) {
HXLINE( 172)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 172)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 173)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
HXLINE( 174)			::backend::MusicBeatState_obj::switchState( ::states::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 178)		if (this->get_controls()->justPressed(HX_("debug_1",05,20,57,5b))) {
HXLINE( 179)			::backend::MusicBeatState_obj::switchState( ::states::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 181)		if (this->get_controls()->get_ACCEPT()) {
HXLINE( 182)			if (this->items->__get(this->curSelected).StaticCast<  ::states::MenuItem >()->isLocked) {
HXLINE( 183)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 183)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("lockMenu",2a,df,7d,8d),null()),null(),null(),null(),null(),null());
HXLINE( 184)				::flixel::FlxG_obj::camera->shake(((Float)0.005),((Float)0.1),null(),null(),null());
            			}
            			else {
HXLINE( 186)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 186)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 187)				this->startSwitchin(this->items->__get(this->curSelected).StaticCast<  ::states::MenuItem >()->state);
            			}
            		}
HXLINE( 191)		{
HXLINE( 191)			int _g = 0;
HXDLIN( 191)			::Array< ::Dynamic> _g1 = this->lockArray;
HXDLIN( 191)			while((_g < _g1->length)){
HXLINE( 191)				 ::flixel::FlxSprite lock = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 191)				_g = (_g + 1);
HXLINE( 192)				if ((this->curSelected == lock->ID)) {
HXLINE( 193)					lock->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 195)					lock->set_alpha(((Float)0.7));
            				}
            			}
            		}
HXLINE( 198)		::Array< bool > isSelecting = ::Array_obj< bool >::fromData( _hx_array_data_36084c2d_20,1);
HXLINE( 199)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis,isSelecting)),null());
HXLINE( 243)		if (!(isSelecting->__get(0))) {
HXLINE( 244)			if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE( 245)				this->changeSelection(-1);
            			}
HXLINE( 246)			if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 247)				this->changeSelection(1);
            			}
HXLINE( 249)			this->lockText->set_visible(this->items->__get(this->curSelected).StaticCast<  ::states::MenuItem >()->isLocked);
HXLINE( 250)			this->lockText->set_text(this->items->__get(this->curSelected).StaticCast<  ::states::MenuItem >()->lockText);
HXLINE( 251)			{
HXLINE( 251)				 ::flixel::text::FlxText _this = this->lockText;
HXDLIN( 251)				int axes = 1;
HXDLIN( 251)				bool _hx_tmp;
HXDLIN( 251)				if ((axes != 1)) {
HXLINE( 251)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 251)					_hx_tmp = true;
            				}
HXDLIN( 251)				if (_hx_tmp) {
HXLINE( 251)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 251)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 251)				bool _hx_tmp1;
HXDLIN( 251)				if ((axes != 16)) {
HXLINE( 251)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 251)					_hx_tmp1 = true;
            				}
HXDLIN( 251)				if (_hx_tmp1) {
HXLINE( 251)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 251)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 253)			 ::flixel::FlxSprite button = Dynamic( this->itemGroup->members->__get(this->curSelected)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 254)			 ::flixel::FlxSprite _hx_tmp2 = this->hand;
HXDLIN( 254)			Float button1 = button->x;
HXDLIN( 254)			Float _hx_tmp3 = (button1 + (button->get_width() / ( (Float)(2) )));
HXDLIN( 254)			Float _hx_tmp4 = (_hx_tmp3 - (this->hand->get_width() / ( (Float)(2) )));
HXDLIN( 254)			_hx_tmp2->setPosition(_hx_tmp4,((button->y - ( (Float)(25) )) - ( (Float)(150) )));
HXLINE( 255)			this->hand->set_angle(( (Float)(0) ));
HXLINE( 256)			{
HXLINE( 256)				 ::flixel::math::FlxBasePoint this1 = this->hand->scrollFactor;
HXDLIN( 256)				Float y = button->scrollFactor->y;
HXDLIN( 256)				this1->set_x(button->scrollFactor->x);
HXDLIN( 256)				this1->set_y(y);
            			}
HXLINE( 257)			this->doHandTween(false);
            		}
HXLINE( 262)		if (this->finishedMainWeek) {
HXLINE( 263)			if (::flixel::FlxG_obj::mouse->overlaps(this->swmg,null())) {
HXLINE( 264)				this->swmg->set_alpha(( (Float)(1) ));
HXLINE( 265)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 266)					::states::PlayState_obj::isStoryMode = false;
HXLINE( 267)					this->persistentUpdate = false;
HXLINE( 268)					::backend::WeekData_obj::reloadWeekFiles(false);
HXLINE( 269)					::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 271)					::states::PlayState_obj::storyWeek = ::backend::WeekData_obj::weeksList->indexOf(HX_("weekspells",bf,24,3c,49),null());
HXLINE( 272)					::states::PlayState_obj::fromMenu = true;
HXLINE( 273)					{
HXLINE( 273)						 ::backend::WeekData week = null();
HXDLIN( 273)						if (::hx::IsNull( week )) {
HXLINE( 273)							week = ::backend::WeekData_obj::getCurrentWeek();
            						}
HXDLIN( 273)						::String diffStr = week->difficulties;
HXDLIN( 273)						bool _hx_tmp;
HXDLIN( 273)						if (::hx::IsNotNull( diffStr )) {
HXLINE( 273)							_hx_tmp = (diffStr.length > 0);
            						}
            						else {
HXLINE( 273)							_hx_tmp = false;
            						}
HXDLIN( 273)						if (_hx_tmp) {
HXLINE( 273)							::Array< ::String > diffs = ::StringTools_obj::trim(diffStr).split(HX_(",",2c,00,00,00));
HXDLIN( 273)							int i = (diffs->length - 1);
HXDLIN( 273)							while((i > 0)){
HXLINE( 273)								if (::hx::IsNotNull( diffs->__get(i) )) {
HXLINE( 273)									diffs[i] = ::StringTools_obj::trim(diffs->__get(i));
HXDLIN( 273)									if ((diffs->__get(i).length < 1)) {
HXLINE( 273)										diffs->remove(diffs->__get(i));
            									}
            								}
HXDLIN( 273)								i = (i - 1);
            							}
HXDLIN( 273)							bool _hx_tmp;
HXDLIN( 273)							if ((diffs->length > 0)) {
HXLINE( 273)								_hx_tmp = (diffs->__get(0).length > 0);
            							}
            							else {
HXLINE( 273)								_hx_tmp = false;
            							}
HXDLIN( 273)							if (_hx_tmp) {
HXLINE( 273)								::backend::Difficulty_obj::list = diffs;
            							}
            						}
            						else {
HXLINE( 273)							::backend::Difficulty_obj::list = ::backend::Difficulty_obj::defaultList->copy();
            						}
            					}
HXLINE( 274)					 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 274)					 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 274)					::String path = invalidChars->split(::StringTools_obj::replace(HX_("shadow-government",7e,cc,a6,80),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 274)					::String songLowercase = hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
HXLINE( 275)					::String poop = ::backend::Highscore_obj::formatSong(songLowercase,0);
HXLINE( 277)					::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(poop,songLowercase);
HXLINE( 278)					::states::PlayState_obj::storyDifficulty = 0;
HXLINE( 279)					this->startSwitchin( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            			}
            			else {
HXLINE( 282)				this->swmg->set_alpha(((Float)0.7));
            			}
            		}
HXLINE( 285)		this->super::update(elapsed);
            	}


void MainMenuState_obj::startSwitchin( ::flixel::FlxState id){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_295_startSwitchin)
HXLINE( 296)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),3)),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circIn_dyn())));
HXLINE( 297)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),120)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::flixel::FlxState,id, ::states::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_301_startSwitchin)
HXLINE( 301)			_gthis->onlySwitchState(id);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_288_startSwitchin)
HXDLIN( 288)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 289)		if (this->selected) {
HXLINE( 290)			return;
            		}
HXLINE( 291)		this->selected = true;
HXLINE( 292)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("zoom",13,a3,f8,50),((Float)0.7))),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quintOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0()))));
HXLINE( 300)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)-0.2))),((Float)0.9), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circIn_dyn())));
HXLINE( 301)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.4), ::Dynamic(new _hx_Closure_1(id,_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,startSwitchin,(void))

void MainMenuState_obj::onlySwitchState( ::flixel::FlxState id){
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_304_onlySwitchState)
HXLINE( 305)		if (::Std_obj::isOfType(id,::hx::ClassOf< ::options::OptionsState >())) {
HXLINE( 306)			::options::OptionsState_obj::onPlayState = false;
HXLINE( 307)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 309)				::states::PlayState_obj::SONG->__SetField(HX_("arrowSkin",e6,d4,f8,07),null(),::hx::paccDynamic);
HXLINE( 310)				::states::PlayState_obj::SONG->__SetField(HX_("splashSkin",84,03,e1,a1),null(),::hx::paccDynamic);
            			}
            		}
HXLINE( 313)		if (::Std_obj::isOfType(id,::hx::ClassOf< ::states::PlayState >())) {
HXLINE( 314)			::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            		}
            		else {
HXLINE( 316)			::backend::MusicBeatState_obj::switchState(id);
            		}
HXLINE( 317)		::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,onlySwitchState,(void))

void MainMenuState_obj::changeSelection(int amount){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_333_changeSelection)
HXLINE( 333)			bool _hx_tmp;
HXDLIN( 333)			if ((button->ID == _gthis->curSelected)) {
HXLINE( 333)				_hx_tmp = !(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isMouse);
            			}
            			else {
HXLINE( 333)				_hx_tmp = false;
            			}
HXDLIN( 333)			if (_hx_tmp) {
HXLINE( 334)				if (!(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isLocked)) {
HXLINE( 335)					{
HXLINE( 335)						 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 335)						Float y = ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(1)) );
HXDLIN( 335)						this1->set_x(( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) ));
HXDLIN( 335)						this1->set_y(y);
            					}
HXLINE( 336)					button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 337)					_gthis->lockText->set_visible(false);
            				}
            				else {
HXLINE( 339)					_gthis->lockText->set_text(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->lockText);
HXLINE( 340)					{
HXLINE( 340)						 ::flixel::text::FlxText _this = _gthis->lockText;
HXDLIN( 340)						int axes = 1;
HXDLIN( 340)						bool _hx_tmp;
HXDLIN( 340)						if ((axes != 1)) {
HXLINE( 340)							_hx_tmp = (axes == 17);
            						}
            						else {
HXLINE( 340)							_hx_tmp = true;
            						}
HXDLIN( 340)						if (_hx_tmp) {
HXLINE( 340)							int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 340)							_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            						}
HXDLIN( 340)						bool _hx_tmp1;
HXDLIN( 340)						if ((axes != 16)) {
HXLINE( 340)							_hx_tmp1 = (axes == 17);
            						}
            						else {
HXLINE( 340)							_hx_tmp1 = true;
            						}
HXDLIN( 340)						if (_hx_tmp1) {
HXLINE( 340)							int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 340)							_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            						}
            					}
HXLINE( 341)					_gthis->lockText->set_visible(true);
            				}
HXLINE( 343)				 ::flixel::FlxObject _gthis1 = _gthis->camFollow;
HXDLIN( 343)				Float _hx_tmp = button->getGraphicMidpoint(null())->x;
HXDLIN( 343)				_gthis1->set_x((_hx_tmp - ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) )));
HXLINE( 345)				 ::flixel::FlxSprite _gthis2 = _gthis->hand;
HXDLIN( 345)				Float button1 = button->x;
HXDLIN( 345)				Float _hx_tmp1 = (button1 + (button->get_width() / ( (Float)(2) )));
HXDLIN( 345)				Float _hx_tmp2 = (_hx_tmp1 - (_gthis->hand->get_width() / ( (Float)(2) )));
HXDLIN( 345)				_gthis2->setPosition(_hx_tmp2,((button->y - ( (Float)(25) )) - ( (Float)(150) )));
HXLINE( 346)				_gthis->hand->set_angle(( (Float)(0) ));
HXLINE( 347)				{
HXLINE( 347)					 ::flixel::math::FlxBasePoint this1 = _gthis->hand->scrollFactor;
HXDLIN( 347)					Float y = button->scrollFactor->y;
HXDLIN( 347)					this1->set_x(button->scrollFactor->x);
HXDLIN( 347)					this1->set_y(y);
            				}
            			}
            			else {
HXLINE( 350)				{
HXLINE( 350)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 350)					this1->set_x(( (Float)(0) ));
HXDLIN( 350)					this1->set_y(( (Float)(0) ));
            				}
HXLINE( 351)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_320_changeSelection)
HXDLIN( 320)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 321)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 321)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 322)		 ::states::MainMenuState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 322)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + amount);
HXLINE( 323)		int amountOfButtons = -1;
HXLINE( 324)		{
HXLINE( 324)			int _g = 0;
HXDLIN( 324)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 324)			while((_g < _g1->length)){
HXLINE( 324)				 ::states::MenuItem item = _g1->__get(_g).StaticCast<  ::states::MenuItem >();
HXDLIN( 324)				_g = (_g + 1);
HXLINE( 325)				int amountOfButtons1;
HXDLIN( 325)				if (!(item->isMouse)) {
HXLINE( 325)					amountOfButtons1 = 1;
            				}
            				else {
HXLINE( 325)					amountOfButtons1 = 0;
            				}
HXDLIN( 325)				amountOfButtons = (amountOfButtons + amountOfButtons1);
            			}
            		}
HXLINE( 327)		if ((this->curSelected > amountOfButtons)) {
HXLINE( 328)			this->curSelected = 0;
            		}
HXLINE( 329)		if ((this->curSelected < 0)) {
HXLINE( 330)			this->curSelected = amountOfButtons;
            		}
HXLINE( 332)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,changeSelection,(void))

::String MainMenuState_obj::psychEngineVersion;


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "states.MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(swmg,"swmg");
	HX_MARK_MEMBER_NAME(hand,"hand");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(itemGroup,"itemGroup");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(oldMouse,"oldMouse");
	HX_MARK_MEMBER_NAME(lockArray,"lockArray");
	HX_MARK_MEMBER_NAME(lockText,"lockText");
	HX_MARK_MEMBER_NAME(finishedMainWeek,"finishedMainWeek");
	HX_MARK_MEMBER_NAME(alrSideWays,"alrSideWays");
	HX_MARK_MEMBER_NAME(handTween,"handTween");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(swmg,"swmg");
	HX_VISIT_MEMBER_NAME(hand,"hand");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(itemGroup,"itemGroup");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(oldMouse,"oldMouse");
	HX_VISIT_MEMBER_NAME(lockArray,"lockArray");
	HX_VISIT_MEMBER_NAME(lockText,"lockText");
	HX_VISIT_MEMBER_NAME(finishedMainWeek,"finishedMainWeek");
	HX_VISIT_MEMBER_NAME(alrSideWays,"alrSideWays");
	HX_VISIT_MEMBER_NAME(handTween,"handTween");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"swmg") ) { return ::hx::Val( swmg ); }
		if (HX_FIELD_EQ(inName,"hand") ) { return ::hx::Val( hand ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return ::hx::Val( items ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addItem") ) { return ::hx::Val( addItem_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		if (HX_FIELD_EQ(inName,"oldMouse") ) { return ::hx::Val( oldMouse ); }
		if (HX_FIELD_EQ(inName,"lockText") ) { return ::hx::Val( lockText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { return ::hx::Val( itemGroup ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		if (HX_FIELD_EQ(inName,"lockArray") ) { return ::hx::Val( lockArray ); }
		if (HX_FIELD_EQ(inName,"handTween") ) { return ::hx::Val( handTween ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"alrSideWays") ) { return ::hx::Val( alrSideWays ); }
		if (HX_FIELD_EQ(inName,"doHandTween") ) { return ::hx::Val( doHandTween_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startSwitchin") ) { return ::hx::Val( startSwitchin_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"customOverlaps") ) { return ::hx::Val( customOverlaps_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onlySwitchState") ) { return ::hx::Val( onlySwitchState_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"finishedMainWeek") ) { return ::hx::Val( finishedMainWeek ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"psychEngineVersion") ) { outValue = ( psychEngineVersion ); return true; }
	}
	return false;
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"swmg") ) { swmg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hand") ) { hand=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldMouse") ) { oldMouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lockText") ) { lockText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { itemGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lockArray") ) { lockArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handTween") ) { handTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alrSideWays") ) { alrSideWays=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"finishedMainWeek") ) { finishedMainWeek=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"psychEngineVersion") ) { psychEngineVersion=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("swmg",fe,34,5e,4c));
	outFields->push(HX_("hand",6f,2b,08,45));
	outFields->push(HX_("items",00,ac,0c,c2));
	outFields->push(HX_("itemGroup",2c,19,e0,99));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("oldMouse",fe,2f,30,f3));
	outFields->push(HX_("lockArray",ae,2d,71,60));
	outFields->push(HX_("lockText",38,66,1e,92));
	outFields->push(HX_("finishedMainWeek",5f,e6,03,63));
	outFields->push(HX_("alrSideWays",e2,ed,ce,d9));
	outFields->push(HX_("handTween",7c,1c,b7,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,swmg),HX_("swmg",fe,34,5e,4c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,hand),HX_("hand",6f,2b,08,45)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MainMenuState_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,itemGroup),HX_("itemGroup",2c,19,e0,99)},
	{::hx::fsInt,(int)offsetof(MainMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(MainMenuState_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,oldMouse),HX_("oldMouse",fe,2f,30,f3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MainMenuState_obj,lockArray),HX_("lockArray",ae,2d,71,60)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,lockText),HX_("lockText",38,66,1e,92)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,finishedMainWeek),HX_("finishedMainWeek",5f,e6,03,63)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,alrSideWays),HX_("alrSideWays",e2,ed,ce,d9)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(MainMenuState_obj,handTween),HX_("handTween",7c,1c,b7,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MainMenuState_obj::psychEngineVersion,HX_("psychEngineVersion",3b,61,cc,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("swmg",fe,34,5e,4c),
	HX_("hand",6f,2b,08,45),
	HX_("items",00,ac,0c,c2),
	HX_("itemGroup",2c,19,e0,99),
	HX_("curSelected",fb,eb,ab,32),
	HX_("camFollow",e0,6e,47,22),
	HX_("selected",5b,2a,6d,b1),
	HX_("oldMouse",fe,2f,30,f3),
	HX_("lockArray",ae,2d,71,60),
	HX_("lockText",38,66,1e,92),
	HX_("finishedMainWeek",5f,e6,03,63),
	HX_("create",fc,66,0f,7c),
	HX_("alrSideWays",e2,ed,ce,d9),
	HX_("handTween",7c,1c,b7,e4),
	HX_("doHandTween",71,db,b5,3d),
	HX_("addItem",d4,07,fd,81),
	HX_("customOverlaps",dd,af,b7,67),
	HX_("update",09,86,05,87),
	HX_("startSwitchin",5b,6d,92,12),
	HX_("onlySwitchState",71,79,01,1c),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void MainMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuState_obj::psychEngineVersion,"psychEngineVersion");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::psychEngineVersion,"psychEngineVersion");
};

#endif

::hx::Class MainMenuState_obj::__mClass;

static ::String MainMenuState_obj_sStaticFields[] = {
	HX_("psychEngineVersion",3b,61,cc,fc),
	::String(null())
};

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.MainMenuState",2d,4c,08,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MainMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MainMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_12_boot)
HXDLIN(  12)		psychEngineVersion = HX_("0.7.1h",ec,cf,0d,d2);
            	}
}

} // end namespace states
