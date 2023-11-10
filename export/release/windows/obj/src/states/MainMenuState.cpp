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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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
#ifndef INCLUDED_objects_AttachedSprite
#include <objects/AttachedSprite.h>
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
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_24_create,"states.MainMenuState","create",0x17a2011d,"states.MainMenuState.create","states/MainMenuState.hx",24,0x1c04e2b2)
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
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_107_addItem,"states.MainMenuState","addItem",0x06b14a93,"states.MainMenuState.addItem","states/MainMenuState.hx",107,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_141_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",141,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_119_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",119,0x1c04e2b2)
static const bool _hx_array_data_36084c2d_16[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_205_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",205,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_211_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",211,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_198_startSwitchin,"states.MainMenuState","startSwitchin",0xa567c95a,"states.MainMenuState.startSwitchin","states/MainMenuState.hx",198,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_214_onlySwitchState,"states.MainMenuState","onlySwitchState",0x13e51330,"states.MainMenuState.onlySwitchState","states/MainMenuState.hx",214,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_243_changeSelection,"states.MainMenuState","changeSelection",0x4099327b,"states.MainMenuState.changeSelection","states/MainMenuState.hx",243,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_230_changeSelection,"states.MainMenuState","changeSelection",0x4099327b,"states.MainMenuState.changeSelection","states/MainMenuState.hx",230,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_12_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",12,0x1c04e2b2)
namespace states{

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_11_new)
HXLINE(  22)		this->oldMouse = true;
HXLINE(  21)		this->selected = false;
HXLINE(  19)		this->curSelected = 0;
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
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_24_create)
HXLINE(  25)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  28)		{
HXLINE(  28)			::backend::Mods_obj::globalMods = ::Array_obj< ::String >::__new(0);
HXDLIN(  28)			{
HXLINE(  28)				int _g = 0;
HXDLIN(  28)				if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  28)					::backend::Mods_obj::updateModList();
            				}
HXDLIN(  28)				::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  28)				::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  28)				::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  28)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  28)					int _g = 0;
HXDLIN(  28)					::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  28)					::String daList = null();
HXDLIN(  28)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)					path = formatted->__get((formatted->length - 1));
HXLINE(  28)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXLINE(  28)					::Array< ::String > _g1;
HXDLIN(  28)					if (::hx::IsNotNull( daList )) {
HXLINE(  28)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  28)						{
HXLINE(  28)							int _g = 0;
HXDLIN(  28)							int _g2 = daList1->length;
HXDLIN(  28)							while((_g < _g2)){
HXLINE(  28)								_g = (_g + 1);
HXDLIN(  28)								int i = (_g - 1);
HXDLIN(  28)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN(  28)						_g1 = daList1;
            					}
            					else {
HXLINE(  28)						_g1 = ::Array_obj< ::String >::__new(0);
            					}
HXDLIN(  28)					while((_g < _g1->length)){
HXLINE(  28)						::String mod = _g1->__get(_g);
HXDLIN(  28)						_g = (_g + 1);
HXDLIN(  28)						if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  28)							continue;
            						}
HXDLIN(  28)						::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  28)						list_all->push(dat->__get(0));
HXDLIN(  28)						if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  28)							list_enabled->push(dat->__get(0));
            						}
            						else {
HXLINE(  28)							list_disabled->push(dat->__get(0));
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 172)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  28)						::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN(  28)				::Array< ::String > _g1 = list_enabled;
HXDLIN(  28)				while((_g < _g1->length)){
HXLINE(  28)					::String mod = _g1->__get(_g);
HXDLIN(  28)					_g = (_g + 1);
HXDLIN(  28)					 ::Dynamic pack = ::backend::Mods_obj::getPack(mod);
HXDLIN(  28)					bool _hx_tmp;
HXDLIN(  28)					if (::hx::IsNotNull( pack )) {
HXLINE(  28)						_hx_tmp = ( (bool)(pack->__Field(HX_("runsGlobally",98,2d,b5,06),::hx::paccDynamic)) );
            					}
            					else {
HXLINE(  28)						_hx_tmp = false;
            					}
HXDLIN(  28)					if (_hx_tmp) {
HXLINE(  28)						::backend::Mods_obj::globalMods->push(mod);
            					}
            				}
            			}
            		}
HXLINE(  30)		::backend::Mods_obj::loadTopMod();
HXLINE(  34)		::backend::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  36)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  38)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  39)		::flixel::FlxG_obj::camera->set_zoom(((Float)0.662));
HXLINE(  41)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  41)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/bg",5c,f8,d8,8d),null(),null()),null(),null(),null(),null(),null());
HXLINE(  42)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  43)		{
HXLINE(  43)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  43)			this1->set_x(( (Float)(0) ));
HXDLIN(  43)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  44)		{
HXLINE(  44)			int axes = 17;
HXDLIN(  44)			bool _hx_tmp;
HXDLIN(  44)			if ((axes != 1)) {
HXLINE(  44)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  44)				_hx_tmp = true;
            			}
HXDLIN(  44)			if (_hx_tmp) {
HXLINE(  44)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  44)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  44)			bool _hx_tmp1;
HXDLIN(  44)			if ((axes != 16)) {
HXLINE(  44)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  44)				_hx_tmp1 = true;
            			}
HXDLIN(  44)			if (_hx_tmp1) {
HXLINE(  44)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  44)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXDLIN(  44)		bg1->set_x((bg1->x - ( (Float)(13) )));
HXDLIN(  44)		bg1->set_y((bg1->y + 100));
HXLINE(  45)		this->add(bg1);
HXLINE(  47)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,200,200,null());
HXDLIN(  47)		this->swmg = _hx_tmp2->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/sin",a1,40,0d,90),null(),null()),null(),null(),null(),null(),null());
HXLINE(  48)		this->swmg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  49)		{
HXLINE(  49)			 ::flixel::math::FlxBasePoint this2 = this->swmg->scrollFactor;
HXDLIN(  49)			this2->set_x(( (Float)(0) ));
HXDLIN(  49)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  50)		this->add(this->swmg);
HXLINE(  52)		this->addItem(HX_("Gallery",72,a8,08,c8),( (Float)(-100) ),( (Float)(100) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_6,2), ::states::GalleryMenuState_obj::__alloc( HX_CTX ,null(),null()),null(),null());
HXLINE(  53)		this->addItem(HX_("storymode",d8,85,a8,3d),( (Float)(500) ),( (Float)(0) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_7,2), ::states::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()),null(),null());
HXLINE(  54)		this->addItem(HX_("freeplay",a0,90,86,22),( (Float)(1100) ),( (Float)(0) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_8,2), ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()),null(),null());
HXLINE(  55)		this->addItem(HX_("options",5e,33,fe,df),( (Float)(-300) ),( (Float)(722) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_9,2), ::options::OptionsState_obj::__alloc( HX_CTX ,null(),null()),true,null());
HXLINE(  56)		this->addItem(HX_("credits",1a,0e,5e,13),( (Float)(-260) ),( (Float)(550) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_10,2), ::states::CreditsState_obj::__alloc( HX_CTX ,null(),null()),true,null());
HXLINE(  57)		this->addItem(HX_("G",47,00,00,00),( (Float)(1200) ),( (Float)(600) ),::Array_obj< int >::fromData( _hx_array_data_36084c2d_11,2), ::states::GalamixMenuState_obj::__alloc( HX_CTX ,null(),null()),true,null());
HXLINE(  59)		this->fakeOptionsButton =  ::objects::AttachedSprite_obj::__alloc( HX_CTX ,HX_("mainmenu/OLDoptions",4e,3f,ba,5e),HX_("options idle",16,0f,bb,e2),null(),null());
HXLINE(  60)		this->add(this->fakeOptionsButton);
HXLINE(  62)		this->itemGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  63)		this->add(this->itemGroup);
HXLINE(  66)		{
HXLINE(  66)			int _g2 = 0;
HXDLIN(  66)			int _g3 = this->items->length;
HXDLIN(  66)			while((_g2 < _g3)){
HXLINE(  66)				_g2 = (_g2 + 1);
HXDLIN(  66)				int i = (_g2 - 1);
HXLINE(  67)				 ::flixel::FlxSprite button =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->items->__get(i).StaticCast<  ::states::MenuItem >()->x,this->items->__get(i).StaticCast<  ::states::MenuItem >()->y,null());
HXLINE(  68)				::String key = (HX_("mainmenu/",d7,fe,39,8c) + this->items->__get(i).StaticCast<  ::states::MenuItem >()->name);
HXDLIN(  68)				::String library = null();
HXDLIN(  68)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN(  68)				bool xmlExists = false;
HXDLIN(  68)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  68)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 368)					xmlExists = true;
            				}
HXLINE(  68)				 ::Dynamic _hx_tmp;
HXDLIN(  68)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  68)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  68)					_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            				}
HXDLIN(  68)				::String _hx_tmp1;
HXDLIN(  68)				if (xmlExists) {
HXLINE(  68)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE(  68)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN(  68)				button->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  69)				button->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->items->__get(i).StaticCast<  ::states::MenuItem >()->name + HX_(" idle",34,37,86,b2)),24,null(),null(),null());
HXLINE(  70)				button->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->items->__get(i).StaticCast<  ::states::MenuItem >()->name + HX_(" selected",7b,4a,9a,0f)),24,null(),null(),null());
HXLINE(  71)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  72)				button->updateHitbox();
HXLINE(  73)				button->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  74)				if (this->items->__get(i).StaticCast<  ::states::MenuItem >()->isMouse) {
HXLINE(  75)					 ::flixel::math::FlxBasePoint this1 = button->scrollFactor;
HXDLIN(  75)					this1->set_x(( (Float)(0) ));
HXDLIN(  75)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(  76)				button->ID = i;
HXLINE(  77)				this->itemGroup->add(button).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  78)				if ((this->items->__get(i).StaticCast<  ::states::MenuItem >()->name == HX_("options",5e,33,fe,df))) {
HXLINE(  79)					button->set_alpha(((Float)0.0001));
HXLINE(  80)					this->fakeOptionsButton->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->items->__get(i).StaticCast<  ::states::MenuItem >()->name + HX_(" idle",34,37,86,b2)),24,null(),null(),null());
HXLINE(  81)					this->fakeOptionsButton->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->items->__get(i).StaticCast<  ::states::MenuItem >()->name + HX_(" selected",7b,4a,9a,0f)),24,null(),null(),null());
HXLINE(  82)					this->fakeOptionsButton->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  83)					this->fakeOptionsButton->updateHitbox();
HXLINE(  84)					{
HXLINE(  84)						 ::flixel::math::FlxBasePoint this1 = this->fakeOptionsButton->scrollFactor;
HXDLIN(  84)						this1->set_x(( (Float)(0) ));
HXDLIN(  84)						this1->set_y(( (Float)(0) ));
            					}
HXLINE(  85)					this->fakeOptionsButton->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  86)					this->fakeOptionsButton->sprTracker = button;
HXLINE(  87)					Float _hx_tmp = button->get_height();
HXDLIN(  87)					Float _hx_tmp1 = this->fakeOptionsButton->get_height();
HXDLIN(  87)					this->fakeOptionsButton->yAdd = (_hx_tmp - _hx_tmp1);
HXLINE(  88)					this->fakeOptionsButton->copyAlpha = false;
            				}
            			}
            		}
HXLINE(  92)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,200,200,null());
HXDLIN(  92)		this->hand = _hx_tmp3->loadGraphic(::backend::Paths_obj::image(HX_("mainmenu/handSelector",05,07,5f,2a),null(),null()),null(),null(),null(),null(),null());
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
HXDLIN(  99)			bool _hx_tmp4;
HXDLIN(  99)			if ((axes1 != 1)) {
HXLINE(  99)				_hx_tmp4 = (axes1 == 17);
            			}
            			else {
HXLINE(  99)				_hx_tmp4 = true;
            			}
HXDLIN(  99)			if (_hx_tmp4) {
HXLINE(  99)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  99)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  99)			bool _hx_tmp5;
HXDLIN(  99)			if ((axes1 != 16)) {
HXLINE(  99)				_hx_tmp5 = (axes1 == 17);
            			}
            			else {
HXLINE(  99)				_hx_tmp5 = true;
            			}
HXDLIN(  99)			if (_hx_tmp5) {
HXLINE(  99)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  99)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 100)		this->add(this->camFollow);
HXLINE( 102)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),0);
HXLINE( 104)		this->changeSelection(0);
HXLINE( 105)		this->super::create();
            	}


void MainMenuState_obj::addItem(::String name,Float x,Float y,::Array< int > offsetSelected, ::flixel::FlxState state, ::Dynamic __o_isMouse,::String __o_lockText){
            		 ::Dynamic isMouse = __o_isMouse;
            		if (::hx::IsNull(__o_isMouse)) isMouse = false;
            		::String lockText = __o_lockText;
            		if (::hx::IsNull(__o_lockText)) lockText = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_107_addItem)
HXLINE( 108)		 ::states::MenuItem item =  ::states::MenuItem_obj::__alloc( HX_CTX );
HXLINE( 109)		item->name = name;
HXLINE( 110)		item->x = x;
HXLINE( 111)		item->y = y;
HXLINE( 112)		item->offsetSelected = offsetSelected;
HXLINE( 113)		item->state = state;
HXLINE( 114)		item->isMouse = ( (bool)(isMouse) );
HXLINE( 115)		item->lockText = lockText;
HXLINE( 116)		item->isLocked = (lockText != HX_("",00,00,00,00));
HXLINE( 117)		this->items->push(item);
            	}


HX_DEFINE_DYNAMIC_FUNC7(MainMenuState_obj,addItem,(void))

void MainMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::MainMenuState,_gthis,::Array< bool >,isSelecting) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_141_update)
HXLINE( 141)			if (_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isMouse) {
HXLINE( 142)				if (::flixel::FlxG_obj::mouse->overlaps(button,null())) {
HXLINE( 143)					isSelecting[0] = true;
HXLINE( 144)					{
HXLINE( 144)						 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 144)						Float y = ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(1)) );
HXDLIN( 144)						this1->set_x(( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) ));
HXDLIN( 144)						this1->set_y(y);
            					}
HXLINE( 145)					button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 147)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->name == HX_("options",5e,33,fe,df))) {
HXLINE( 148)						_gthis->fakeOptionsButton->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
            					}
HXLINE( 149)					 ::flixel::FlxSprite _gthis1 = _gthis->hand;
HXDLIN( 149)					Float button1 = button->x;
HXDLIN( 149)					Float _hx_tmp;
HXDLIN( 149)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->x > (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )))) {
HXLINE( 149)						_hx_tmp = (( (Float)(0) ) - _gthis->hand->get_height());
            					}
            					else {
HXLINE( 149)						Float _hx_tmp1 = button->get_width();
HXDLIN( 149)						_hx_tmp = (_hx_tmp1 + (_gthis->hand->get_height() / ( (Float)(2) )));
            					}
HXDLIN( 149)					Float _hx_tmp1 = (button->y - ( (Float)(25) ));
HXDLIN( 149)					Float _hx_tmp2 = (_hx_tmp1 + (button->get_height() / ( (Float)(2) )));
HXDLIN( 149)					_gthis1->setPosition((button1 + _hx_tmp),(_hx_tmp2 - (_gthis->hand->get_height() / ( (Float)(2) ))));
HXLINE( 150)					Float _hx_tmp3;
HXDLIN( 150)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->x > (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )))) {
HXLINE( 150)						_hx_tmp3 = ( (Float)(-90) );
            					}
            					else {
HXLINE( 150)						_hx_tmp3 = ( (Float)(90) );
            					}
HXDLIN( 150)					_gthis->hand->set_angle(_hx_tmp3);
HXLINE( 151)					{
HXLINE( 151)						 ::flixel::math::FlxBasePoint this2 = _gthis->hand->scrollFactor;
HXDLIN( 151)						this2->set_x(( (Float)(0) ));
HXDLIN( 151)						this2->set_y(( (Float)(0) ));
            					}
HXLINE( 153)					if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 154)						_gthis->startSwitchin(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->state);
            					}
            				}
            				else {
HXLINE( 156)					{
HXLINE( 156)						 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 156)						this1->set_x(( (Float)(0) ));
HXDLIN( 156)						this1->set_y(( (Float)(0) ));
            					}
HXLINE( 157)					button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 159)					if ((_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->name == HX_("options",5e,33,fe,df))) {
HXLINE( 160)						_gthis->fakeOptionsButton->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            					}
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_119_update)
HXDLIN( 119)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 120)		Float Value = ((elapsed * ( (Float)(9) )) / (( (Float)(::flixel::FlxG_obj::updateFramerate) ) / ( (Float)(60) )));
HXDLIN( 120)		Float lowerBound;
HXDLIN( 120)		if ((Value < 0)) {
HXLINE( 120)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 120)			lowerBound = Value;
            		}
HXDLIN( 120)		Float _hx_tmp;
HXDLIN( 120)		if ((lowerBound > 1)) {
HXLINE( 120)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 120)			_hx_tmp = lowerBound;
            		}
HXDLIN( 120)		::flixel::FlxG_obj::camera->set_followLerp(_hx_tmp);
HXLINE( 121)		if (this->get_controls()->get_BACK()) {
HXLINE( 123)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 123)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 124)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
HXLINE( 125)			::backend::MusicBeatState_obj::switchState( ::states::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 128)		if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE( 129)			this->changeSelection(-1);
            		}
HXLINE( 130)		if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 131)			this->changeSelection(1);
            		}
HXLINE( 133)		if (this->get_controls()->justPressed(HX_("debug_1",05,20,57,5b))) {
HXLINE( 134)			::backend::MusicBeatState_obj::switchState( ::states::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 136)		if (this->get_controls()->get_ACCEPT()) {
HXLINE( 137)			this->startSwitchin(this->items->__get(this->curSelected).StaticCast<  ::states::MenuItem >()->state);
            		}
HXLINE( 139)		::Array< bool > isSelecting = ::Array_obj< bool >::fromData( _hx_array_data_36084c2d_16,1);
HXLINE( 140)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis,isSelecting)),null());
HXLINE( 166)		if (!(isSelecting->__get(0))) {
HXLINE( 167)			 ::flixel::FlxSprite button = Dynamic( this->itemGroup->members->__get(this->curSelected)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 168)			 ::flixel::FlxSprite _hx_tmp = this->hand;
HXDLIN( 168)			Float button1 = button->x;
HXDLIN( 168)			Float _hx_tmp1 = (button1 + (button->get_width() / ( (Float)(2) )));
HXDLIN( 168)			Float _hx_tmp2 = (_hx_tmp1 - (this->hand->get_width() / ( (Float)(2) )));
HXDLIN( 168)			_hx_tmp->setPosition(_hx_tmp2,((button->y - ( (Float)(25) )) - ( (Float)(150) )));
HXLINE( 169)			this->hand->set_angle(( (Float)(0) ));
HXLINE( 170)			{
HXLINE( 170)				 ::flixel::math::FlxBasePoint this1 = this->hand->scrollFactor;
HXDLIN( 170)				Float y = button->scrollFactor->y;
HXDLIN( 170)				this1->set_x(button->scrollFactor->x);
HXDLIN( 170)				this1->set_y(y);
            			}
            		}
HXLINE( 175)		if (::flixel::FlxG_obj::mouse->overlaps(this->swmg,null())) {
HXLINE( 176)			this->swmg->set_alpha(( (Float)(1) ));
HXLINE( 177)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 178)				::states::PlayState_obj::isStoryMode = false;
HXLINE( 179)				this->persistentUpdate = false;
HXLINE( 180)				::backend::WeekData_obj::reloadWeekFiles(false);
HXLINE( 181)				::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 183)				::states::PlayState_obj::storyWeek = ::backend::WeekData_obj::weeksList->indexOf(HX_("weekspells",bf,24,3c,49),null());
HXLINE( 184)				{
HXLINE( 184)					 ::backend::WeekData week = null();
HXDLIN( 184)					if (::hx::IsNull( week )) {
HXLINE( 184)						week = ::backend::WeekData_obj::getCurrentWeek();
            					}
HXDLIN( 184)					::String diffStr = week->difficulties;
HXDLIN( 184)					bool _hx_tmp;
HXDLIN( 184)					if (::hx::IsNotNull( diffStr )) {
HXLINE( 184)						_hx_tmp = (diffStr.length > 0);
            					}
            					else {
HXLINE( 184)						_hx_tmp = false;
            					}
HXDLIN( 184)					if (_hx_tmp) {
HXLINE( 184)						::Array< ::String > diffs = ::StringTools_obj::trim(diffStr).split(HX_(",",2c,00,00,00));
HXDLIN( 184)						int i = (diffs->length - 1);
HXDLIN( 184)						while((i > 0)){
HXLINE( 184)							if (::hx::IsNotNull( diffs->__get(i) )) {
HXLINE( 184)								diffs[i] = ::StringTools_obj::trim(diffs->__get(i));
HXDLIN( 184)								if ((diffs->__get(i).length < 1)) {
HXLINE( 184)									diffs->remove(diffs->__get(i));
            								}
            							}
HXDLIN( 184)							i = (i - 1);
            						}
HXDLIN( 184)						bool _hx_tmp;
HXDLIN( 184)						if ((diffs->length > 0)) {
HXLINE( 184)							_hx_tmp = (diffs->__get(0).length > 0);
            						}
            						else {
HXLINE( 184)							_hx_tmp = false;
            						}
HXDLIN( 184)						if (_hx_tmp) {
HXLINE( 184)							::backend::Difficulty_obj::list = diffs;
            						}
            					}
            					else {
HXLINE( 184)						::backend::Difficulty_obj::list = ::backend::Difficulty_obj::defaultList->copy();
            					}
            				}
HXLINE( 185)				 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 185)				 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 185)				::String path = invalidChars->split(::StringTools_obj::replace(HX_("shadow-government",7e,cc,a6,80),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 185)				::String songLowercase = hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
HXLINE( 186)				::String poop = ::backend::Highscore_obj::formatSong(songLowercase,0);
HXLINE( 188)				::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(poop,songLowercase);
HXLINE( 189)				::states::PlayState_obj::storyDifficulty = 0;
HXLINE( 190)				this->startSwitchin( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            		}
            		else {
HXLINE( 193)			this->swmg->set_alpha(((Float)0.7));
            		}
HXLINE( 195)		this->super::update(elapsed);
            	}


void MainMenuState_obj::startSwitchin( ::flixel::FlxState id){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_205_startSwitchin)
HXLINE( 206)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),3)),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circIn_dyn())));
HXLINE( 207)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),120)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::flixel::FlxState,id, ::states::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_211_startSwitchin)
HXLINE( 211)			_gthis->onlySwitchState(id);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_198_startSwitchin)
HXDLIN( 198)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 199)		if (this->selected) {
HXLINE( 200)			return;
            		}
HXLINE( 201)		this->selected = true;
HXLINE( 202)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("zoom",13,a3,f8,50),((Float)0.7))),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quintOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0()))));
HXLINE( 210)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)-0.2))),((Float)0.9), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circIn_dyn())));
HXLINE( 211)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.4), ::Dynamic(new _hx_Closure_1(id,_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,startSwitchin,(void))

void MainMenuState_obj::onlySwitchState( ::flixel::FlxState id){
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_214_onlySwitchState)
HXLINE( 215)		if (::Std_obj::isOfType(id,::hx::ClassOf< ::options::OptionsState >())) {
HXLINE( 216)			::options::OptionsState_obj::onPlayState = false;
HXLINE( 217)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 219)				::states::PlayState_obj::SONG->__SetField(HX_("arrowSkin",e6,d4,f8,07),null(),::hx::paccDynamic);
HXLINE( 220)				::states::PlayState_obj::SONG->__SetField(HX_("splashSkin",84,03,e1,a1),null(),::hx::paccDynamic);
            			}
            		}
HXLINE( 223)		if (::Std_obj::isOfType(id,::hx::ClassOf< ::states::PlayState >())) {
HXLINE( 224)			::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            		}
            		else {
HXLINE( 226)			::backend::MusicBeatState_obj::switchState(id);
            		}
HXLINE( 227)		::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,onlySwitchState,(void))

void MainMenuState_obj::changeSelection(int amount){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_243_changeSelection)
HXLINE( 243)			bool _hx_tmp;
HXDLIN( 243)			if ((button->ID == _gthis->curSelected)) {
HXLINE( 243)				_hx_tmp = !(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->isMouse);
            			}
            			else {
HXLINE( 243)				_hx_tmp = false;
            			}
HXDLIN( 243)			if (_hx_tmp) {
HXLINE( 244)				{
HXLINE( 244)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 244)					Float y = ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(1)) );
HXDLIN( 244)					this1->set_x(( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) ));
HXDLIN( 244)					this1->set_y(y);
            				}
HXLINE( 245)				button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 246)				 ::flixel::FlxObject _gthis1 = _gthis->camFollow;
HXDLIN( 246)				Float _hx_tmp = button->getGraphicMidpoint(null())->x;
HXDLIN( 246)				_gthis1->set_x((_hx_tmp - ( (Float)(_gthis->items->__get(button->ID).StaticCast<  ::states::MenuItem >()->offsetSelected->__get(0)) )));
HXLINE( 248)				 ::flixel::FlxSprite _gthis2 = _gthis->hand;
HXDLIN( 248)				Float button1 = button->x;
HXDLIN( 248)				Float _hx_tmp1 = (button1 + (button->get_width() / ( (Float)(2) )));
HXDLIN( 248)				Float _hx_tmp2 = (_hx_tmp1 - (_gthis->hand->get_width() / ( (Float)(2) )));
HXDLIN( 248)				_gthis2->setPosition(_hx_tmp2,((button->y - ( (Float)(25) )) - ( (Float)(150) )));
HXLINE( 249)				_gthis->hand->set_angle(( (Float)(0) ));
HXLINE( 250)				{
HXLINE( 250)					 ::flixel::math::FlxBasePoint this2 = _gthis->hand->scrollFactor;
HXDLIN( 250)					Float y1 = button->scrollFactor->y;
HXDLIN( 250)					this2->set_x(button->scrollFactor->x);
HXDLIN( 250)					this2->set_y(y1);
            				}
            			}
            			else {
HXLINE( 253)				{
HXLINE( 253)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 253)					this1->set_x(( (Float)(0) ));
HXDLIN( 253)					this1->set_y(( (Float)(0) ));
            				}
HXLINE( 254)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_230_changeSelection)
HXDLIN( 230)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 231)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 231)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 232)		 ::states::MainMenuState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + amount);
HXLINE( 233)		int amountOfButtons = -1;
HXLINE( 234)		{
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 234)			while((_g < _g1->length)){
HXLINE( 234)				 ::states::MenuItem item = _g1->__get(_g).StaticCast<  ::states::MenuItem >();
HXDLIN( 234)				_g = (_g + 1);
HXLINE( 235)				int amountOfButtons1;
HXDLIN( 235)				if (!(item->isMouse)) {
HXLINE( 235)					amountOfButtons1 = 1;
            				}
            				else {
HXLINE( 235)					amountOfButtons1 = 0;
            				}
HXDLIN( 235)				amountOfButtons = (amountOfButtons + amountOfButtons1);
            			}
            		}
HXLINE( 237)		if ((this->curSelected > amountOfButtons)) {
HXLINE( 238)			this->curSelected = 0;
            		}
HXLINE( 239)		if ((this->curSelected < 0)) {
HXLINE( 240)			this->curSelected = amountOfButtons;
            		}
HXLINE( 242)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
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
	HX_MARK_MEMBER_NAME(fakeOptionsButton,"fakeOptionsButton");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(oldMouse,"oldMouse");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(swmg,"swmg");
	HX_VISIT_MEMBER_NAME(hand,"hand");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(itemGroup,"itemGroup");
	HX_VISIT_MEMBER_NAME(fakeOptionsButton,"fakeOptionsButton");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(oldMouse,"oldMouse");
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
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { return ::hx::Val( itemGroup ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startSwitchin") ) { return ::hx::Val( startSwitchin_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onlySwitchState") ) { return ::hx::Val( onlySwitchState_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fakeOptionsButton") ) { return ::hx::Val( fakeOptionsButton ); }
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
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { itemGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fakeOptionsButton") ) { fakeOptionsButton=inValue.Cast<  ::objects::AttachedSprite >(); return inValue; }
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
	outFields->push(HX_("fakeOptionsButton",1b,1f,60,0e));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("oldMouse",fe,2f,30,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,swmg),HX_("swmg",fe,34,5e,4c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,hand),HX_("hand",6f,2b,08,45)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MainMenuState_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,itemGroup),HX_("itemGroup",2c,19,e0,99)},
	{::hx::fsObject /*  ::objects::AttachedSprite */ ,(int)offsetof(MainMenuState_obj,fakeOptionsButton),HX_("fakeOptionsButton",1b,1f,60,0e)},
	{::hx::fsInt,(int)offsetof(MainMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(MainMenuState_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,oldMouse),HX_("oldMouse",fe,2f,30,f3)},
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
	HX_("fakeOptionsButton",1b,1f,60,0e),
	HX_("curSelected",fb,eb,ab,32),
	HX_("camFollow",e0,6e,47,22),
	HX_("selected",5b,2a,6d,b1),
	HX_("oldMouse",fe,2f,30,f3),
	HX_("create",fc,66,0f,7c),
	HX_("addItem",d4,07,fd,81),
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
