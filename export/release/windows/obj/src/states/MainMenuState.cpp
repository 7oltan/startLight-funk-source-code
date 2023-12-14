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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_27_create,"states.MainMenuState","create",0x17a2011d,"states.MainMenuState.create","states/MainMenuState.hx",27,0x1c04e2b2)
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
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_114_addItem,"states.MainMenuState","addItem",0x06b14a93,"states.MainMenuState.addItem","states/MainMenuState.hx",114,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_127_customOverlaps,"states.MainMenuState","customOverlaps",0x4f92d2fe,"states.MainMenuState.customOverlaps","states/MainMenuState.hx",127,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_168_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",168,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_143_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",143,0x1c04e2b2)
static const bool _hx_array_data_36084c2d_19[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_249_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",249,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_255_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",255,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_242_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",242,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_258_onlySwitchState,"states.MainMenuState","onlySwitchState",0x13e51330,"states.MainMenuState.onlySwitchState","states/MainMenuState.hx",258,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_287_changeSelection,"states.MainMenuState","changeSelection",0x4099327b,"states.MainMenuState.changeSelection","states/MainMenuState.hx",287,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_274_changeSelection,"states.MainMenuState","changeSelection",0x4099327b,"states.MainMenuState.changeSelection","states/MainMenuState.hx",274,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_12_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",12,0x1c04e2b2)
namespace states{

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_11_new)
HXLINE(  23)		this->lockArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  21)		this->oldMouse = true;
HXLINE(  20)		this->selected = false;
HXLINE(  18)		this->curSelected = 0;
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
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_27_create)
HXLINE(  28)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  31)		{
HXLINE(  31)			::backend::Mods_obj::globalMods = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)			{
HXLINE(  31)				int _g = 0;
HXDLIN(  31)				if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  31)					::backend::Mods_obj::updateModList();
            				}
HXDLIN(  31)				::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)				::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)				::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  31)					int _g = 0;
HXDLIN(  31)					::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  31)					::String daList = null();
HXDLIN(  31)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)					path = formatted->__get((formatted->length - 1));
HXLINE(  31)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXDLIN(  31)					::Array< ::String > _g1;
HXDLIN(  31)					if (::hx::IsNotNull( daList )) {
HXLINE(  31)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  31)						{
HXLINE(  31)							int _g = 0;
HXDLIN(  31)							int _g2 = daList1->length;
HXDLIN(  31)							while((_g < _g2)){
HXLINE(  31)								_g = (_g + 1);
HXDLIN(  31)								int i = (_g - 1);
HXDLIN(  31)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN(  31)						_g1 = daList1;
            					}
            					else {
HXLINE(  31)						_g1 = ::Array_obj< ::String >::__new(0);
            					}
HXDLIN(  31)					while((_g < _g1->length)){
HXLINE(  31)						::String mod = _g1->__get(_g);
HXDLIN(  31)						_g = (_g + 1);
HXDLIN(  31)						if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  31)							continue;
            						}
HXDLIN(  31)						::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  31)						list_all->push(dat->__get(0));
HXDLIN(  31)						if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  31)							list_enabled->push(dat->__get(0));
            						}
            						else {
HXLINE(  31)							list_disabled->push(dat->__get(0));
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 172)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  31)						::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN(  31)				::Array< ::String > _g1 = list_enabled;
HXDLIN(  31)				while((_g < _g1->length)){
HXLINE(  31)					::String mod = _g1->__get(_g);
HXDLIN(  31)					_g = (_g + 1);
HXDLIN(  31)					 ::Dynamic pack = ::backend::Mods_obj::getPack(mod);
HXDLIN(  31)					bool _hx_tmp;
HXDLIN(  31)					if (::hx::IsNotNull( pack )) {
HXLINE(  31)						_hx_tmp = ( (bool)(pack->__Field(HX_("runsGlobally",98,2d,b5,06),::hx::paccDynamic)) );
            					}
            					else {
HXLINE(  31)						_hx_tmp = false;
            					}
HXDLIN(  31)					if (_hx_tmp) {
HXLINE(  31)						::backend::Mods_obj::globalMods->push(mod);
            					}
            				}
            			}
            		}
HXLINE(  33)		::backend::Mods_obj::loadTopMod();
HXLINE(  37)		::backend::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  39)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  41)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  42)		::flixel::FlxG_obj::camera->set_zoom(((Float)0.662));
HXLINE(  44)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  44)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/bg",5c,f8,d8,8d),null(),null()),null(),null(),null(),null(),null());
HXLINE(  45)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  46)		{
HXLINE(  46)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  46)			this1->set_x(( (Float)(0) ));
HXDLIN(  46)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  47)		{
HXLINE(  47)			int axes = 17;
HXDLIN(  47)			bool _hx_tmp;
HXDLIN(  47)			if ((axes != 1)) {
HXLINE(  47)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  47)				_hx_tmp = true;
            			}
HXDLIN(  47)			if (_hx_tmp) {
HXLINE(  47)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  47)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  47)			bool _hx_tmp1;
HXDLIN(  47)			if ((axes != 16)) {
HXLINE(  47)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  47)				_hx_tmp1 = true;
            			}
HXDLIN(  47)			if (_hx_tmp1) {
HXLINE(  47)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  47)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXDLIN(  47)		bg1->set_x((bg1->x - ( (Float)(13) )));
HXDLIN(  47)		bg1->set_y((bg1->y + 100));
HXLINE(  48)		this->add(bg1);
HXLINE(  50)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,200,200,null());
HXDLIN(  50)		this->swmg = _hx_tmp2->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/sin",a1,40,0d,90),null(),null()),null(),null(),null(),null(),null());
HXLINE(  51)		this->swmg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  52)		{
HXLINE(  52)			 ::flixel::math::FlxBasePoint this2 = this->swmg->scrollFactor;
HXDLIN(  52)			this2->set_x(( (Float)(0) ));
HXDLIN(  52)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  53)		this->add(this->swmg);
HXLINE(  55)		 ::states::GalleryMenuState _hx_tmp3 =  ::states::GalleryMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  55)		::String _hx_tmp4;
HXDLIN(  55)		if (::backend::InternetConnection_obj::isAvailable(null())) {
HXLINE(  55)			_hx_tmp4 = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  55)			_hx_tmp4 = HX_("no connection",9d,7d,96,8b);
            		}
HXDLIN(  55)		this->addItem(HX_("Gallery",72,a8,08,c8),( (Float)(-100) ),( (Float)(100) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_6,2),_hx_tmp3,false,_hx_tmp4);
HXLINE(  56)		this->addItem(HX_("storymode",d8,85,a8,3d),( (Float)(500) ),( (Float)(0) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_7,2), ::states::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()),null(),null());
HXLINE(  57)		this->addItem(HX_("freeplay",a0,90,86,22),( (Float)(1100) ),( (Float)(0) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_8,2), ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()),null(),null());
HXLINE(  58)		this->addItem(HX_("options",5e,33,fe,df),( (Float)(-300) ),( (Float)(660) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_9,2), ::options::OptionsState_obj::__alloc( HX_CTX ,null(),null()),true,null());
HXLINE(  59)		this->addItem(HX_("credits",1a,0e,5e,13),( (Float)(-260) ),( (Float)(550) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_10,2), ::states::CreditsState_obj::__alloc( HX_CTX ,null(),null()),true,null());
HXLINE(  60)		 ::states::GalamixMenuState _hx_tmp5 =  ::states::GalamixMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  60)		::String _hx_tmp6;
HXDLIN(  60)		if (( (bool)( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic))->__Field(HX_("get",96,80,4e,00),::hx::paccDynamic)(HX_("nastya",5c,ee,7b,21))) )) {
HXLINE(  60)			_hx_tmp6 = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  60)			_hx_tmp6 = HX_("finish the main week in story mode then come back!",69,28,76,30);
            		}
HXDLIN(  60)		this->addItem(HX_("G",47,00,00,00),( (Float)(1200) ),( (Float)(600) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_11,2),_hx_tmp5,true,_hx_tmp6);
HXLINE(  62)		this->itemGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  63)		this->add(this->itemGroup);
HXLINE(  65)		{
HXLINE(  65)			int _g2 = 0;
HXDLIN(  65)			int _g3 = this->items->length;
HXDLIN(  65)			while((_g2 < _g3)){
HXLINE(  65)				_g2 = (_g2 + 1);
HXDLIN(  65)				int i = (_g2 - 1);
HXLINE(  66)				 ::flixel::FlxSprite button =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->items->__get(i).StaticCast<  ::states::MenuItem >()->x,this->items->__get(i).StaticCast<  ::states::MenuItem >()->y,null());
HXLINE(  67)				::String key = (HX_("mainmenu/",d7,fe,39,8c) + this->items->__get(i).StaticCast<  ::states::MenuItem >()->name);
HXDLIN(  67)				::String library = null();
HXDLIN(  67)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN(  67)				bool xmlExists = false;
HXDLIN(  67)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  67)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 368)					xmlExists = true;
            				}
HXLINE(  67)				 ::Dynamic _hx_tmp;
HXDLIN(  67)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  67)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  67)					_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            				}
HXDLIN(  67)				::String _hx_tmp1;
HXDLIN(  67)				if (xmlExists) {
HXLINE(  67)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE(  67)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN(  67)				button->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  68)				button->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->items->__get(i).StaticCast<  ::states::MenuItem >()->name + HX_(" idle",34,37,86,b2)),24,null(),null(),null());
HXLINE(  69)				button->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->items->__get(i).StaticCast<  ::states::MenuItem >()->name + HX_(" selected",7b,4a,9a,0f)),24,null(),null(),null());
HXLINE(  70)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  71)				button->updateHitbox();
HXLINE(  72)				button->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  73)				if (this->items->__get(i).StaticCast<  ::states::MenuItem >()->isMouse) {
HXLINE(  74)					 ::flixel::math::FlxBasePoint this1 = button->scrollFactor;
HXDLIN(  74)					this1->set_x(( (Float)(0) ));
HXDLIN(  74)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(  75)				button->ID = i;
HXLINE(  76)				this->itemGroup->add(button).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  77)				if (this->items->__get(i).StaticCast<  ::states::MenuItem >()->isLocked) {
HXLINE(  78)					::haxe::Log_obj::trace(this->items->__get(i).StaticCast<  ::states::MenuItem >()->lockText,::hx::SourceInfo(HX_("source/states/MainMenuState.hx",3e,32,23,ea),78,HX_("states.MainMenuState",2d,4c,08,36),HX_("create",fc,66,0f,7c)));
HXLINE(  79)					 ::flixel::FlxSprite lock =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,button->x,button->y,null());
HXDLIN(  79)					 ::flixel::FlxSprite lock1 = lock->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/lock",42,52,ef,76),null(),null()),null(),null(),null(),null(),null());
HXLINE(  80)					lock1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  81)					lock1->ID = i;
HXLINE(  82)					if (this->items->__get(i).StaticCast<  ::states::MenuItem >()->isMouse) {
HXLINE(  83)						 ::flixel::math::FlxBasePoint this1 = lock1->scrollFactor;
HXDLIN(  83)						this1->set_x(( (Float)(0) ));
HXDLIN(  83)						this1->set_y(( (Float)(0) ));
            					}
HXLINE(  86)					Float button1 = button->x;
HXDLIN(  86)					Float _hx_tmp = (button1 + (button->get_width() / ( (Float)(2) )));
HXDLIN(  86)					Float _hx_tmp1 = (_hx_tmp - (lock1->get_width() / ( (Float)(2) )));
HXDLIN(  86)					Float button2 = button->y;
HXDLIN(  86)					Float _hx_tmp2 = (button2 + (button->get_height() / ( (Float)(2) )));
HXDLIN(  86)					lock1->setPosition(_hx_tmp1,(_hx_tmp2 - (lock1->get_height() / ( (Float)(2) ))));
HXLINE(  87)					this->add(lock1);
HXLINE(  88)					this->lockArray->push(lock1);
            				}
            			}
            		}
HXLINE(  92)		 ::flixel::FlxSprite _hx_tmp7 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,200,200,null());
HXDLIN(  92)		this->hand = _hx_tmp7->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/handSelector",05,07,5f,2a),null(),null()),null(),null(),null(),null(),null());
HXLINE(  93)		this->hand->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  94)		{
HXLINE(  94)			 ::flixel::math::FlxBasePoint this3 = this->hand->scrollFactor;
HXDLIN(  94)			this3->set_x(( (Float)(0) ));
HXDLIN(  94)			this3->set_y(( (Float)(0) ));
            		}
HXLINE(  95)		this->add(this->hand);
HXLINE(  96)		::flixel::tweens::FlxTween_obj::tween(this->hand->offset, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),50)),((Float)0.6), ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.1))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(2,HX_("type",ba,f2,08,4d),4)));
HXLINE(  98)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  99)		{
HXLINE(  99)			 ::flixel::FlxObject _this = this->camFollow;
HXDLIN(  99)			int axes1 = 17;
HXDLIN(  99)			bool _hx_tmp8;
HXDLIN(  99)			if ((axes1 != 1)) {
HXLINE(  99)				_hx_tmp8 = (axes1 == 17);
            			}
            			else {
HXLINE(  99)				_hx_tmp8 = true;
            			}
HXDLIN(  99)			if (_hx_tmp8) {
HXLINE(  99)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  99)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  99)			bool _hx_tmp9;
HXDLIN(  99)			if ((axes1 != 16)) {
HXLINE(  99)				_hx_tmp9 = (axes1 == 17);
            			}
            			else {
HXLINE(  99)				_hx_tmp9 = true;
            			}
HXDLIN(  99)			if (_hx_tmp9) {
HXLINE(  99)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  99)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 100)		this->add(this->camFollow);
HXLINE( 102)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),0);
HXLINE( 104)		this->lockText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,-180,0,HX_("",00,00,00,00),32,null());
HXLINE( 105)		this->lockText->setFormat(HX_("vcr.ttf",9d,d2,a7,82),50,-1,HX_("right",dc,0b,64,e9),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 106)		this->lockText->set_borderSize(((Float)1.25));
HXLINE( 107)		{
HXLINE( 107)			 ::flixel::text::FlxText _this1 = this->lockText;
HXDLIN( 107)			int axes2 = 1;
HXDLIN( 107)			bool _hx_tmp10;
HXDLIN( 107)			if ((axes2 != 1)) {
HXLINE( 107)				_hx_tmp10 = (axes2 == 17);
            			}
            			else {
HXLINE( 107)				_hx_tmp10 = true;
            			}
HXDLIN( 107)			if (_hx_tmp10) {
HXLINE( 107)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 107)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 107)			bool _hx_tmp11;
HXDLIN( 107)			if ((axes2 != 16)) {
HXLINE( 107)				_hx_tmp11 = (axes2 == 17);
            			}
            			else {
HXLINE( 107)				_hx_tmp11 = true;
            			}
HXDLIN( 107)			if (_hx_tmp11) {
HXLINE( 107)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 107)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 108)		{
HXLINE( 108)			 ::flixel::math::FlxBasePoint this4 = this->lockText->scrollFactor;
HXDLIN( 108)			this4->set_x(( (Float)(0) ));
HXDLIN( 108)			this4->set_y(( (Float)(0) ));
            		}
HXLINE( 109)		this->add(this->lockText);
HXLINE( 111)		this->changeSelection(0);
HXLINE( 112)		this->super::create();
            	}


void MainMenuState_obj::addItem(::String name,Float x,Float y,::Array< int > offsetSelected, ::flixel::FlxState state, ::Dynamic __o_isMouse,::String __o_lockText){
            		 ::Dynamic isMouse = __o_isMouse;
            		if (::hx::IsNull(__o_isMouse)) isMouse = false;
            		::String lockText = __o_lockText;
            		if (::hx::IsNull(__o_lockText)) lockText = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_114_addItem)
HXLINE( 115)		 ::states::MenuItem item =  ::states::MenuItem_obj::__alloc( HX_CTX );
HXLINE( 116)		item->name = name;
HXLINE( 117)		item->x = x;
HXLINE( 118)		item->y = y;
HXLINE( 119)		item->offsetSelected = offsetSelected;
HXLINE( 120)		item->state = state;
HXLINE( 121)		item->isMouse = ( (bool)(isMouse) );
HXLINE( 122)		item->lockText = lockText;
HXLINE( 123)		item->isLocked = (lockText != HX_("",00,00,00,00));
HXLINE( 124)		this->items->push(item);
            	}


HX_DEFINE_DYNAMIC_FUNC7(MainMenuState_obj,addItem,(void))

bool MainMenuState_obj::customOverlaps( ::flixel::FlxObject object,bool isOptions){
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_127_customOverlaps)
HXLINE( 128)		 ::flixel::math::FlxBasePoint m = ::flixel::FlxG_obj::mouse->getScreenPosition(null(),null());
HXLINE( 129)		Float x = object->x;
HXLINE( 130)		Float y = object->y;
HXLINE( 131)		Float width = object->get_width();
HXLINE( 132)		Float height = object->get_height();
HXLINE( 134)		if (isOptions) {
HXLINE( 135)			Float space = ( (Float)(75) );
HXLINE( 136)			y = (y + space);
HXLINE( 137)			height = (height - space);
            		}
HXLINE( 140)		bool _hx_tmp;
HXDLIN( 140)		bool _hx_tmp1;
HXDLIN( 140)		if ((m->x >= x)) {
HXLINE( 140)			_hx_tmp1 = (m->x < (x + width));
            		}
            		else {
HXLINE( 140)			_hx_tmp1 = false;
            		}
HXDLIN( 140)		if (_hx_tmp1) {
HXLINE( 140)			_hx_tmp = (m->y >= y);
            		}
            		else {
HXLINE( 140)			_hx_tmp = false;
            		}
HXDLIN( 140)		if (_hx_tmp) {
HXLINE( 140)			return (m->y < (y + height));
            		}
            		else {
HXLINE( 140)			return false;
            		}
HXDLIN( 140)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MainMenuState_obj,customOverlaps,return )

void MainMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::MainMenuState,_gthis,::Array< bool >,isSelecting) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_168_update)
HXLINE( 168)			if (_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isMouse) {
HXLINE( 169)				if (_gthis->customOverlaps(button,(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->name == HX_("options",5e,33,fe,df)))) {
HXLINE( 170)					isSelecting[0] = true;
HXLINE( 172)					{
HXLINE( 172)						int _g = 0;
HXDLIN( 172)						::Array< ::Dynamic> _g1 = _gthis->lockArray;
HXDLIN( 172)						while((_g < _g1->length)){
HXLINE( 172)							 ::flixel::FlxSprite lock = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 172)							_g = (_g + 1);
HXLINE( 173)							if ((button->ID == lock->ID)) {
HXLINE( 174)								lock->set_alpha(( (Float)(1) ));
            							}
            						}
            					}
HXLINE( 177)					if (!(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isLocked)) {
HXLINE( 178)						{
HXLINE( 178)							 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 178)							Float y = ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(1)) );
HXDLIN( 178)							this1->set_x(( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) ));
HXDLIN( 178)							this1->set_y(y);
            						}
HXLINE( 179)						button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 180)						_gthis->lockText->set_visible(false);
            					}
            					else {
HXLINE( 182)						_gthis->lockText->set_text(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->lockText);
HXLINE( 183)						{
HXLINE( 183)							 ::flixel::text::FlxText _this = _gthis->lockText;
HXDLIN( 183)							int axes = 1;
HXDLIN( 183)							bool _hx_tmp;
HXDLIN( 183)							if ((axes != 1)) {
HXLINE( 183)								_hx_tmp = (axes == 17);
            							}
            							else {
HXLINE( 183)								_hx_tmp = true;
            							}
HXDLIN( 183)							if (_hx_tmp) {
HXLINE( 183)								int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 183)								_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            							}
HXDLIN( 183)							bool _hx_tmp1;
HXDLIN( 183)							if ((axes != 16)) {
HXLINE( 183)								_hx_tmp1 = (axes == 17);
            							}
            							else {
HXLINE( 183)								_hx_tmp1 = true;
            							}
HXDLIN( 183)							if (_hx_tmp1) {
HXLINE( 183)								int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 183)								_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            							}
            						}
HXLINE( 184)						_gthis->lockText->set_visible(true);
            					}
HXLINE( 187)					 ::flixel::FlxSprite _gthis1 = _gthis->hand;
HXDLIN( 187)					Float button1 = button->x;
HXDLIN( 187)					Float _hx_tmp;
HXDLIN( 187)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->x > (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )))) {
HXLINE( 187)						_hx_tmp = (( (Float)(0) ) - _gthis->hand->get_height());
            					}
            					else {
HXLINE( 187)						Float _hx_tmp1 = button->get_width();
HXDLIN( 187)						_hx_tmp = (_hx_tmp1 + (_gthis->hand->get_height() / ( (Float)(2) )));
            					}
HXDLIN( 187)					Float _hx_tmp1 = (button->y - ( (Float)(25) ));
HXDLIN( 187)					Float _hx_tmp2 = (_hx_tmp1 + (button->get_height() / ( (Float)(2) )));
HXDLIN( 187)					_gthis1->setPosition((button1 + _hx_tmp),(_hx_tmp2 - (_gthis->hand->get_height() / ( (Float)(2) ))));
HXLINE( 188)					Float _hx_tmp3;
HXDLIN( 188)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->x > (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )))) {
HXLINE( 188)						_hx_tmp3 = ( (Float)(-90) );
            					}
            					else {
HXLINE( 188)						_hx_tmp3 = ( (Float)(90) );
            					}
HXDLIN( 188)					_gthis->hand->set_angle(_hx_tmp3);
HXLINE( 189)					{
HXLINE( 189)						 ::flixel::math::FlxBasePoint this1 = _gthis->hand->scrollFactor;
HXDLIN( 189)						this1->set_x(( (Float)(0) ));
HXDLIN( 189)						this1->set_y(( (Float)(0) ));
            					}
HXLINE( 191)					bool _hx_tmp4;
HXDLIN( 191)					if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 191)						_hx_tmp4 = !(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isLocked);
            					}
            					else {
HXLINE( 191)						_hx_tmp4 = false;
            					}
HXDLIN( 191)					if (_hx_tmp4) {
HXLINE( 192)						_gthis->startSwitchin(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->state);
            					}
            				}
            				else {
HXLINE( 194)					{
HXLINE( 194)						 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 194)						this1->set_x(( (Float)(0) ));
HXDLIN( 194)						this1->set_y(( (Float)(0) ));
            					}
HXLINE( 195)					button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_143_update)
HXDLIN( 143)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 144)		Float Value = ((elapsed * ( (Float)(9) )) / (( (Float)(::flixel::FlxG_obj::updateFramerate) ) / ( (Float)(60) )));
HXDLIN( 144)		Float lowerBound;
HXDLIN( 144)		if ((Value < 0)) {
HXLINE( 144)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 144)			lowerBound = Value;
            		}
HXDLIN( 144)		Float _hx_tmp;
HXDLIN( 144)		if ((lowerBound > 1)) {
HXLINE( 144)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 144)			_hx_tmp = lowerBound;
            		}
HXDLIN( 144)		::flixel::FlxG_obj::camera->set_followLerp(_hx_tmp);
HXLINE( 145)		if (this->get_controls()->get_BACK()) {
HXLINE( 147)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 147)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 148)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
HXLINE( 149)			::backend::MusicBeatState_obj::switchState( ::states::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 153)		if (this->get_controls()->justPressed(HX_("debug_1",05,20,57,5b))) {
HXLINE( 154)			::backend::MusicBeatState_obj::switchState( ::states::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 156)		if (this->get_controls()->get_ACCEPT()) {
HXLINE( 157)			this->startSwitchin(this->items->__get(this->curSelected).StaticCast<  ::states::MenuItem >()->state);
            		}
HXLINE( 159)		{
HXLINE( 159)			int _g = 0;
HXDLIN( 159)			::Array< ::Dynamic> _g1 = this->lockArray;
HXDLIN( 159)			while((_g < _g1->length)){
HXLINE( 159)				 ::flixel::FlxSprite lock = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 159)				_g = (_g + 1);
HXLINE( 160)				if ((this->curSelected == lock->ID)) {
HXLINE( 161)					lock->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 163)					lock->set_alpha(((Float)0.7));
            				}
            			}
            		}
HXLINE( 166)		::Array< bool > isSelecting = ::Array_obj< bool >::fromData( _hx_array_data_36084c2d_19,1);
HXLINE( 167)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis,isSelecting)),null());
HXLINE( 201)		if (!(isSelecting->__get(0))) {
HXLINE( 202)			if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE( 203)				this->changeSelection(-1);
            			}
HXLINE( 204)			if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 205)				this->changeSelection(1);
            			}
HXLINE( 207)			this->lockText->set_visible(this->items->__get(this->curSelected).StaticCast<  ::states::MenuItem >()->isLocked);
HXLINE( 208)			this->lockText->set_text(this->items->__get(this->curSelected).StaticCast<  ::states::MenuItem >()->lockText);
HXLINE( 209)			{
HXLINE( 209)				 ::flixel::text::FlxText _this = this->lockText;
HXDLIN( 209)				int axes = 1;
HXDLIN( 209)				bool _hx_tmp;
HXDLIN( 209)				if ((axes != 1)) {
HXLINE( 209)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 209)					_hx_tmp = true;
            				}
HXDLIN( 209)				if (_hx_tmp) {
HXLINE( 209)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 209)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 209)				bool _hx_tmp1;
HXDLIN( 209)				if ((axes != 16)) {
HXLINE( 209)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 209)					_hx_tmp1 = true;
            				}
HXDLIN( 209)				if (_hx_tmp1) {
HXLINE( 209)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 209)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 211)			 ::flixel::FlxSprite button = Dynamic( this->itemGroup->members->__get(this->curSelected)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 212)			 ::flixel::FlxSprite _hx_tmp2 = this->hand;
HXDLIN( 212)			Float button1 = button->x;
HXDLIN( 212)			Float _hx_tmp3 = (button1 + (button->get_width() / ( (Float)(2) )));
HXDLIN( 212)			Float _hx_tmp4 = (_hx_tmp3 - (this->hand->get_width() / ( (Float)(2) )));
HXDLIN( 212)			_hx_tmp2->setPosition(_hx_tmp4,((button->y - ( (Float)(25) )) - ( (Float)(150) )));
HXLINE( 213)			this->hand->set_angle(( (Float)(0) ));
HXLINE( 214)			{
HXLINE( 214)				 ::flixel::math::FlxBasePoint this1 = this->hand->scrollFactor;
HXDLIN( 214)				Float y = button->scrollFactor->y;
HXDLIN( 214)				this1->set_x(button->scrollFactor->x);
HXDLIN( 214)				this1->set_y(y);
            			}
            		}
HXLINE( 219)		if (::flixel::FlxG_obj::mouse->overlaps(this->swmg,null())) {
HXLINE( 220)			this->swmg->set_alpha(( (Float)(1) ));
HXLINE( 221)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 222)				::states::PlayState_obj::isStoryMode = false;
HXLINE( 223)				this->persistentUpdate = false;
HXLINE( 224)				::backend::WeekData_obj::reloadWeekFiles(false);
HXLINE( 225)				::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 227)				::states::PlayState_obj::storyWeek = ::backend::WeekData_obj::weeksList->indexOf(HX_("weekspells",bf,24,3c,49),null());
HXLINE( 228)				{
HXLINE( 228)					 ::backend::WeekData week = null();
HXDLIN( 228)					if (::hx::IsNull( week )) {
HXLINE( 228)						week = ::backend::WeekData_obj::getCurrentWeek();
            					}
HXDLIN( 228)					::String diffStr = week->difficulties;
HXDLIN( 228)					bool _hx_tmp;
HXDLIN( 228)					if (::hx::IsNotNull( diffStr )) {
HXLINE( 228)						_hx_tmp = (diffStr.length > 0);
            					}
            					else {
HXLINE( 228)						_hx_tmp = false;
            					}
HXDLIN( 228)					if (_hx_tmp) {
HXLINE( 228)						::Array< ::String > diffs = ::StringTools_obj::trim(diffStr).split(HX_(",",2c,00,00,00));
HXDLIN( 228)						int i = (diffs->length - 1);
HXDLIN( 228)						while((i > 0)){
HXLINE( 228)							if (::hx::IsNotNull( diffs->__get(i) )) {
HXLINE( 228)								diffs[i] = ::StringTools_obj::trim(diffs->__get(i));
HXDLIN( 228)								if ((diffs->__get(i).length < 1)) {
HXLINE( 228)									diffs->remove(diffs->__get(i));
            								}
            							}
HXDLIN( 228)							i = (i - 1);
            						}
HXDLIN( 228)						bool _hx_tmp;
HXDLIN( 228)						if ((diffs->length > 0)) {
HXLINE( 228)							_hx_tmp = (diffs->__get(0).length > 0);
            						}
            						else {
HXLINE( 228)							_hx_tmp = false;
            						}
HXDLIN( 228)						if (_hx_tmp) {
HXLINE( 228)							::backend::Difficulty_obj::list = diffs;
            						}
            					}
            					else {
HXLINE( 228)						::backend::Difficulty_obj::list = ::backend::Difficulty_obj::defaultList->copy();
            					}
            				}
HXLINE( 229)				 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 229)				 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 229)				::String path = invalidChars->split(::StringTools_obj::replace(HX_("shadow-government",7e,cc,a6,80),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 229)				::String songLowercase = hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
HXLINE( 230)				::String poop = ::backend::Highscore_obj::formatSong(songLowercase,0);
HXLINE( 232)				::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(poop,songLowercase);
HXLINE( 233)				::states::PlayState_obj::storyDifficulty = 0;
HXLINE( 234)				this->startSwitchin( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            		}
            		else {
HXLINE( 237)			this->swmg->set_alpha(((Float)0.7));
            		}
HXLINE( 239)		this->super::update(elapsed);
            	}


void MainMenuState_obj::startSwitchin( ::flixel::FlxState id){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_249_startSwitchin)
HXLINE( 250)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),3)),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circIn_dyn())));
HXLINE( 251)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),120)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::flixel::FlxState,id, ::states::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_255_startSwitchin)
HXLINE( 255)			_gthis->onlySwitchState(id);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_242_startSwitchin)
HXDLIN( 242)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 243)		if (this->selected) {
HXLINE( 244)			return;
            		}
HXLINE( 245)		this->selected = true;
HXLINE( 246)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("zoom",13,a3,f8,50),((Float)0.7))),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quintOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0()))));
HXLINE( 254)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)-0.2))),((Float)0.9), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circIn_dyn())));
HXLINE( 255)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.4), ::Dynamic(new _hx_Closure_1(id,_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,startSwitchin,(void))

void MainMenuState_obj::onlySwitchState( ::flixel::FlxState id){
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_258_onlySwitchState)
HXLINE( 259)		if (::Std_obj::isOfType(id,::hx::ClassOf< ::options::OptionsState >())) {
HXLINE( 260)			::options::OptionsState_obj::onPlayState = false;
HXLINE( 261)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 263)				::states::PlayState_obj::SONG->__SetField(HX_("arrowSkin",e6,d4,f8,07),null(),::hx::paccDynamic);
HXLINE( 264)				::states::PlayState_obj::SONG->__SetField(HX_("splashSkin",84,03,e1,a1),null(),::hx::paccDynamic);
            			}
            		}
HXLINE( 267)		if (::Std_obj::isOfType(id,::hx::ClassOf< ::states::PlayState >())) {
HXLINE( 268)			::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            		}
            		else {
HXLINE( 270)			::backend::MusicBeatState_obj::switchState(id);
            		}
HXLINE( 271)		::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,onlySwitchState,(void))

void MainMenuState_obj::changeSelection(int amount){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_287_changeSelection)
HXLINE( 287)			bool _hx_tmp;
HXDLIN( 287)			if ((button->ID == _gthis->curSelected)) {
HXLINE( 287)				_hx_tmp = !(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isMouse);
            			}
            			else {
HXLINE( 287)				_hx_tmp = false;
            			}
HXDLIN( 287)			if (_hx_tmp) {
HXLINE( 288)				if (!(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isLocked)) {
HXLINE( 289)					{
HXLINE( 289)						 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 289)						Float y = ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(1)) );
HXDLIN( 289)						this1->set_x(( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) ));
HXDLIN( 289)						this1->set_y(y);
            					}
HXLINE( 290)					button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 291)					_gthis->lockText->set_visible(false);
            				}
            				else {
HXLINE( 293)					_gthis->lockText->set_text(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->lockText);
HXLINE( 294)					{
HXLINE( 294)						 ::flixel::text::FlxText _this = _gthis->lockText;
HXDLIN( 294)						int axes = 1;
HXDLIN( 294)						bool _hx_tmp;
HXDLIN( 294)						if ((axes != 1)) {
HXLINE( 294)							_hx_tmp = (axes == 17);
            						}
            						else {
HXLINE( 294)							_hx_tmp = true;
            						}
HXDLIN( 294)						if (_hx_tmp) {
HXLINE( 294)							int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 294)							_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            						}
HXDLIN( 294)						bool _hx_tmp1;
HXDLIN( 294)						if ((axes != 16)) {
HXLINE( 294)							_hx_tmp1 = (axes == 17);
            						}
            						else {
HXLINE( 294)							_hx_tmp1 = true;
            						}
HXDLIN( 294)						if (_hx_tmp1) {
HXLINE( 294)							int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 294)							_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            						}
            					}
HXLINE( 295)					_gthis->lockText->set_visible(true);
            				}
HXLINE( 297)				 ::flixel::FlxObject _gthis1 = _gthis->camFollow;
HXDLIN( 297)				Float _hx_tmp = button->getGraphicMidpoint(null())->x;
HXDLIN( 297)				_gthis1->set_x((_hx_tmp - ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) )));
HXLINE( 299)				 ::flixel::FlxSprite _gthis2 = _gthis->hand;
HXDLIN( 299)				Float button1 = button->x;
HXDLIN( 299)				Float _hx_tmp1 = (button1 + (button->get_width() / ( (Float)(2) )));
HXDLIN( 299)				Float _hx_tmp2 = (_hx_tmp1 - (_gthis->hand->get_width() / ( (Float)(2) )));
HXDLIN( 299)				_gthis2->setPosition(_hx_tmp2,((button->y - ( (Float)(25) )) - ( (Float)(150) )));
HXLINE( 300)				_gthis->hand->set_angle(( (Float)(0) ));
HXLINE( 301)				{
HXLINE( 301)					 ::flixel::math::FlxBasePoint this1 = _gthis->hand->scrollFactor;
HXDLIN( 301)					Float y = button->scrollFactor->y;
HXDLIN( 301)					this1->set_x(button->scrollFactor->x);
HXDLIN( 301)					this1->set_y(y);
            				}
            			}
            			else {
HXLINE( 304)				{
HXLINE( 304)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 304)					this1->set_x(( (Float)(0) ));
HXDLIN( 304)					this1->set_y(( (Float)(0) ));
            				}
HXLINE( 305)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_274_changeSelection)
HXDLIN( 274)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 275)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 275)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 276)		 ::states::MainMenuState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 276)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + amount);
HXLINE( 277)		int amountOfButtons = -1;
HXLINE( 278)		{
HXLINE( 278)			int _g = 0;
HXDLIN( 278)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 278)			while((_g < _g1->length)){
HXLINE( 278)				 ::states::MenuItem item = _g1->__get(_g).StaticCast<  ::states::MenuItem >();
HXDLIN( 278)				_g = (_g + 1);
HXLINE( 279)				int amountOfButtons1;
HXDLIN( 279)				if (!(item->isMouse)) {
HXLINE( 279)					amountOfButtons1 = 1;
            				}
            				else {
HXLINE( 279)					amountOfButtons1 = 0;
            				}
HXDLIN( 279)				amountOfButtons = (amountOfButtons + amountOfButtons1);
            			}
            		}
HXLINE( 281)		if ((this->curSelected > amountOfButtons)) {
HXLINE( 282)			this->curSelected = 0;
            		}
HXLINE( 283)		if ((this->curSelected < 0)) {
HXLINE( 284)			this->curSelected = amountOfButtons;
            		}
HXLINE( 286)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
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
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
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
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
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
	HX_("create",fc,66,0f,7c),
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
