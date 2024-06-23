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
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_HScript
#include <psychlua/HScript.h>
#endif
#ifndef INCLUDED_states_GalleryBar
#include <states/GalleryBar.h>
#endif
#ifndef INCLUDED_states_GalleryMenuState
#include <states/GalleryMenuState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95ef7d317be649f3_18_new,"states.GalleryMenuState","new",0xd46c48be,"states.GalleryMenuState.new","states/GalleryMenuState.hx",18,0xdfe23d11)
static const int _hx_array_data_c235d1cc_1[] = {
	(int)36,(int)24,
};
static const int _hx_array_data_c235d1cc_2[] = {
	(int)3,(int)14,
};
static const int _hx_array_data_c235d1cc_3[] = {
	(int)0,(int)21,
};
static const ::String _hx_array_data_c235d1cc_4[] = {
	HX_("nastya",5c,ee,7b,21),HX_("concepts",0b,ad,55,65),HX_("other",d0,66,76,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_164_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",164,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_178_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",178,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_175_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",175,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_174_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",174,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_191_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",191,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_64_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",64,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_253_addGroupImages,"states.GalleryMenuState","addGroupImages",0xe257c118,"states.GalleryMenuState.addGroupImages","states/GalleryMenuState.hx",253,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_285_addGroupImages,"states.GalleryMenuState","addGroupImages",0xe257c118,"states.GalleryMenuState.addGroupImages","states/GalleryMenuState.hx",285,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_307_addGroupImages,"states.GalleryMenuState","addGroupImages",0xe257c118,"states.GalleryMenuState.addGroupImages","states/GalleryMenuState.hx",307,0xdfe23d11)
static const int _hx_array_data_c235d1cc_19[] = {
	(int)24,
};
static const bool _hx_array_data_c235d1cc_20[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_252_addGroupImages,"states.GalleryMenuState","addGroupImages",0xe257c118,"states.GalleryMenuState.addGroupImages","states/GalleryMenuState.hx",252,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_352_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",352,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_358_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",358,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_365_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",365,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_361_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",361,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_346_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",346,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_383_callHScript,"states.GalleryMenuState","callHScript",0x494e85f3,"states.GalleryMenuState.callHScript","states/GalleryMenuState.hx",383,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_420_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",420,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_421_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",421,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_422_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",422,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_424_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",424,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_389_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",389,0xdfe23d11)
static const ::String _hx_array_data_c235d1cc_34[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_457_update,"states.GalleryMenuState","update",0xe1aa1c6b,"states.GalleryMenuState.update","states/GalleryMenuState.hx",457,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_447_update,"states.GalleryMenuState","update",0xe1aa1c6b,"states.GalleryMenuState.update","states/GalleryMenuState.hx",447,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_504_destroy,"states.GalleryMenuState","destroy",0x19e52c58,"states.GalleryMenuState.destroy","states/GalleryMenuState.hx",504,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_55_boot,"states.GalleryMenuState","boot",0x026c5e14,"states.GalleryMenuState.boot","states/GalleryMenuState.hx",55,0xdfe23d11)
namespace states{

void GalleryMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_18_new)
HXLINE(  58)		this->imageListLength = 0;
HXLINE(  57)		this->imageList = ::Array_obj< ::String >::__new(0);
HXLINE(  53)		this->lurpLoadingBar = ((Float)0.0);
HXLINE(  40)		this->nameMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  38)		this->ready = false;
HXLINE(  37)		this->curSelected = 0;
HXLINE(  36)		this->curSelectedButton = 0;
HXLINE(  34)		this->URL = HX_("https://raw.githack.com/1Etoile1/eee/main/",f9,74,3a,44);
HXLINE(  28)		this->itemOffsets = ::Array_obj< ::Dynamic>::__new(3)->init(0,::Array_obj< int >::fromData( _hx_array_data_c235d1cc_1,2))->init(1,::Array_obj< int >::fromData( _hx_array_data_c235d1cc_2,2))->init(2,::Array_obj< int >::fromData( _hx_array_data_c235d1cc_3,2));
HXLINE(  26)		this->items = ::Array_obj< ::String >::fromData( _hx_array_data_c235d1cc_4,3);
HXLINE(  18)		super::__construct(TransIn,TransOut);
            	}

Dynamic GalleryMenuState_obj::__CreateEmpty() { return new GalleryMenuState_obj; }

void *GalleryMenuState_obj::_hx_vtable = 0;

Dynamic GalleryMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GalleryMenuState_obj > _hx_result = new GalleryMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GalleryMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x168fcb2a) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x168fcb2a;
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

void GalleryMenuState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween t){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_164_create)
HXLINE( 164)			_gthis->GYAT->set_x(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_4, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1, ::flixel::FlxSprite,blackBG) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1, ::flixel::FlxSprite,blackBG) HXARGC(0)
            			void _hx_run(){
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_2, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1, ::flixel::FlxSprite,blackBG) HXARGC(0)
            				void _hx_run(){
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween t){
            						HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_178_create)
HXLINE( 178)						_gthis->remove(black1,null()).StaticCast<  ::flixel::FlxBasic >();
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_175_create)
HXLINE( 176)					_gthis->callHScript(HX_("onReady",c4,3e,f8,7c),null());
HXLINE( 177)					_gthis->ready = true;
HXLINE( 178)					::flixel::tweens::FlxTween_obj::tween(black1, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis,black1)))));
HXLINE( 179)					::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("volume",da,29,53,5f),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 180)					::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE( 181)					blackBG->set_alpha(( (Float)(0) ));
HXLINE( 182)					_gthis->GYAT->set_alpha(( (Float)(0) ));
HXLINE( 183)					_gthis->loadingBar->set_alpha(( (Float)(0) ));
HXLINE( 184)					_gthis->progressBar->set_alpha(( (Float)(0) ));
HXLINE( 185)					_gthis->progressText->set_alpha(( (Float)(0) ));
HXLINE( 186)					_gthis->errorText->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_175_create)
HXLINE( 175)				_gthis->addGroupImages(HX_("other",d0,66,76,36),_gthis->otherGroup, ::Dynamic(new _hx_Closure_2(_gthis,black1,blackBG)));
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_174_create)
HXLINE( 174)			_gthis->addGroupImages(HX_("concepts",0b,ad,55,65),_gthis->conceptGroup, ::Dynamic(new _hx_Closure_3(_gthis,black1,blackBG)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run(::String dataText){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_191_create)
HXLINE( 192)			::haxe::Log_obj::trace(dataText,::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),192,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("create",fc,66,0f,7c)));
HXLINE( 193)			_gthis->script =  ::psychlua::HScript_obj::__alloc( HX_CTX ,null(),dataText);
HXLINE( 194)			_gthis->callHScript(HX_("onCreate",7b,5d,bc,5b),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_64_create)
HXDLIN(  64)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  65)		this->super::create();
HXLINE(  66)		::states::GalleryMenuState_obj::thisStateIsDestroyed = false;
HXLINE(  68)		::states::GalleryMenuState_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  70)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  72)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  72)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("gallery/gallery-bg",7d,d7,16,cf),null(),null()),null(),null(),null(),null(),null());
HXLINE(  73)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  74)		{
HXLINE(  74)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  74)			this1->set_x(( (Float)(0) ));
HXDLIN(  74)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  75)		{
HXLINE(  75)			int axes = 17;
HXDLIN(  75)			bool _hx_tmp;
HXDLIN(  75)			if ((axes != 1)) {
HXLINE(  75)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  75)				_hx_tmp = true;
            			}
HXDLIN(  75)			if (_hx_tmp) {
HXLINE(  75)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  75)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  75)			bool _hx_tmp1;
HXDLIN(  75)			if ((axes != 16)) {
HXLINE(  75)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  75)				_hx_tmp1 = true;
            			}
HXDLIN(  75)			if (_hx_tmp1) {
HXLINE(  75)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  75)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  76)		this->add(bg1);
HXLINE(  79)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  79)		::String _hx_tmp3;
HXDLIN(  79)		if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 10)) {
HXLINE(  79)			_hx_tmp3 = HX_("gallery/nastya-funky",99,66,3a,ba);
            		}
            		else {
HXLINE(  79)			_hx_tmp3 = HX_("gallery/nastya-gallery",7e,82,d3,8e);
            		}
HXDLIN(  79)		this->nastya = _hx_tmp2->loadGraphic(::backend::Paths_obj::image(_hx_tmp3,null(),null()),null(),null(),null(),null(),null());
HXLINE(  80)		this->nastya->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  81)		{
HXLINE(  81)			 ::flixel::math::FlxBasePoint this2 = this->nastya->scrollFactor;
HXDLIN(  81)			this2->set_x(( (Float)(0) ));
HXDLIN(  81)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  82)		 ::flixel::FlxSprite _hx_tmp4 = this->nastya;
HXDLIN(  82)		_hx_tmp4->setGraphicSize(::Std_obj::_hx_int((this->nastya->get_width() * ((Float)0.4))),null());
HXLINE(  83)		this->nastya->updateHitbox();
HXLINE(  84)		 ::flixel::FlxSprite _hx_tmp5 = this->nastya;
HXDLIN(  84)		Float _hx_tmp6 = ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(100) ));
HXDLIN(  84)		int _hx_tmp7 = ::flixel::FlxG_obj::height;
HXDLIN(  84)		_hx_tmp5->setPosition(_hx_tmp6,(( (Float)(_hx_tmp7) ) - this->nastya->get_height()));
HXLINE(  85)		this->add(this->nastya);
HXLINE(  87)		this->imagesText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.8)),HX_("( ? / ? )",fe,72,66,48),20,null());
HXLINE(  88)		{
HXLINE(  88)			 ::flixel::text::FlxText _this = this->imagesText;
HXDLIN(  88)			int axes1 = 1;
HXDLIN(  88)			bool _hx_tmp8;
HXDLIN(  88)			if ((axes1 != 1)) {
HXLINE(  88)				_hx_tmp8 = (axes1 == 17);
            			}
            			else {
HXLINE(  88)				_hx_tmp8 = true;
            			}
HXDLIN(  88)			if (_hx_tmp8) {
HXLINE(  88)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  88)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  88)			bool _hx_tmp9;
HXDLIN(  88)			if ((axes1 != 16)) {
HXLINE(  88)				_hx_tmp9 = (axes1 == 17);
            			}
            			else {
HXLINE(  88)				_hx_tmp9 = true;
            			}
HXDLIN(  88)			if (_hx_tmp9) {
HXLINE(  88)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  88)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  89)		 ::flixel::text::FlxText _hx_tmp10 = this->imagesText;
HXDLIN(  89)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  89)		::String _hx_tmp11;
HXDLIN(  89)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  89)			_hx_tmp11 = file;
            		}
            		else {
HXLINE(  89)			_hx_tmp11 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  89)		_hx_tmp10->setFormat(_hx_tmp11,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  90)		this->imagesText->set_borderSize(( (Float)(2) ));
HXLINE(  91)		this->add(this->imagesText);
HXLINE(  93)		this->itemGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  94)		this->add(this->itemGroup);
HXLINE(  96)		{
HXLINE(  96)			int _g = 0;
HXDLIN(  96)			int _g1 = this->items->length;
HXDLIN(  96)			while((_g < _g1)){
HXLINE(  96)				_g = (_g + 1);
HXDLIN(  96)				int i = (_g - 1);
HXLINE(  97)				 ::flixel::FlxSprite button =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(50 + (i * 100)),(200 + (i * 170)),null());
HXLINE(  98)				::String library = null();
HXDLIN(  98)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("gallery/gallery-ui",0c,e8,16,cf),null(),true);
HXDLIN(  98)				bool xmlExists = false;
HXDLIN(  98)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("gallery/gallery-ui",0c,e8,16,cf)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  98)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  98)					xmlExists = true;
            				}
HXDLIN(  98)				 ::Dynamic _hx_tmp;
HXDLIN(  98)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  98)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  98)					_hx_tmp = ::backend::Paths_obj::image(HX_("gallery/gallery-ui",0c,e8,16,cf),library,true);
            				}
HXDLIN(  98)				::String _hx_tmp1;
HXDLIN(  98)				if (xmlExists) {
HXLINE(  98)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE(  98)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gallery/gallery-ui",0c,e8,16,cf)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN(  98)				button->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  99)				button->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->items->__get(i) + HX_("0",30,00,00,00)),24,true,null(),null());
HXLINE( 100)				button->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->items->__get(i) + HX_(" select",1c,f3,e1,9c)),24,true,null(),null());
HXLINE( 101)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 102)				button->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 103)				{
HXLINE( 103)					 ::flixel::math::FlxBasePoint this1 = button->scrollFactor;
HXDLIN( 103)					this1->set_x(( (Float)(0) ));
HXDLIN( 103)					this1->set_y(( (Float)(0) ));
            				}
HXLINE( 104)				button->ID = i;
HXLINE( 105)				this->itemGroup->add(button).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE( 108)		this->nastyaGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 109)		this->add(this->nastyaGroup);
HXLINE( 111)		this->conceptGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 112)		this->add(this->conceptGroup);
HXLINE( 114)		this->otherGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 115)		this->add(this->otherGroup);
HXLINE( 117)		this->arrowUP =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,950,10,null());
HXLINE( 118)		 ::flixel::FlxSprite _hx_tmp12 = this->arrowUP;
HXDLIN( 118)		::String library = null();
HXDLIN( 118)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null(),true);
HXDLIN( 118)		bool xmlExists = false;
HXDLIN( 118)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 118)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 118)			xmlExists = true;
            		}
HXDLIN( 118)		 ::Dynamic _hx_tmp13;
HXDLIN( 118)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 118)			_hx_tmp13 = imageLoaded;
            		}
            		else {
HXLINE( 118)			_hx_tmp13 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library,true);
            		}
HXDLIN( 118)		::String _hx_tmp14;
HXDLIN( 118)		if (xmlExists) {
HXLINE( 118)			_hx_tmp14 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 118)			_hx_tmp14 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 118)		_hx_tmp12->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp13,_hx_tmp14));
HXLINE( 119)		this->arrowUP->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow push left",f6,7a,62,0c),24,true,null(),null());
HXLINE( 120)		this->arrowUP->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("arrow left",be,05,f8,94),24,true,null(),null());
HXLINE( 121)		this->arrowUP->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 122)		this->arrowUP->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 123)		this->arrowUP->set_angle(( (Float)(90) ));
HXLINE( 124)		this->arrowUP->set_flipY(true);
HXLINE( 125)		this->arrowUP->set_visible(false);
HXLINE( 126)		this->add(this->arrowUP);
HXLINE( 128)		this->arrowDOWN =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,950,(::flixel::FlxG_obj::height - 100),null());
HXLINE( 129)		 ::flixel::FlxSprite _hx_tmp15 = this->arrowDOWN;
HXDLIN( 129)		::String library1 = null();
HXDLIN( 129)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null(),true);
HXDLIN( 129)		bool xmlExists1 = false;
HXDLIN( 129)		::String xml1 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 129)		if (::sys::FileSystem_obj::exists(xml1)) {
HXLINE( 129)			xmlExists1 = true;
            		}
HXDLIN( 129)		 ::Dynamic _hx_tmp16;
HXDLIN( 129)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE( 129)			_hx_tmp16 = imageLoaded1;
            		}
            		else {
HXLINE( 129)			_hx_tmp16 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library1,true);
            		}
HXDLIN( 129)		::String _hx_tmp17;
HXDLIN( 129)		if (xmlExists1) {
HXLINE( 129)			_hx_tmp17 = ::sys::io::File_obj::getContent(xml1);
            		}
            		else {
HXLINE( 129)			_hx_tmp17 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),null(),library1,null());
            		}
HXDLIN( 129)		_hx_tmp15->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp16,_hx_tmp17));
HXLINE( 130)		this->arrowDOWN->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow push left",f6,7a,62,0c),24,true,null(),null());
HXLINE( 131)		this->arrowDOWN->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("arrow left",be,05,f8,94),24,true,null(),null());
HXLINE( 132)		this->arrowDOWN->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 133)		this->arrowDOWN->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 134)		this->arrowDOWN->set_angle(( (Float)(-90) ));
HXLINE( 135)		this->arrowDOWN->set_flipY(true);
HXLINE( 136)		this->arrowDOWN->set_visible(false);
HXLINE( 137)		this->add(this->arrowDOWN);
HXLINE( 139)		 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 139)		 ::flixel::FlxSprite black1 = black->loadGraphic(::backend::Paths_obj::image(HX_("gallery/loadingScreen",8b,6d,83,62),null(),null()),null(),null(),null(),null(),null());
HXLINE( 140)		{
HXLINE( 140)			int axes2 = 17;
HXDLIN( 140)			bool _hx_tmp18;
HXDLIN( 140)			if ((axes2 != 1)) {
HXLINE( 140)				_hx_tmp18 = (axes2 == 17);
            			}
            			else {
HXLINE( 140)				_hx_tmp18 = true;
            			}
HXDLIN( 140)			if (_hx_tmp18) {
HXLINE( 140)				 ::flixel::FlxSprite black = black1;
HXDLIN( 140)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 140)				black->set_x(((( (Float)(_hx_tmp) ) - black1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 140)			bool _hx_tmp19;
HXDLIN( 140)			if ((axes2 != 16)) {
HXLINE( 140)				_hx_tmp19 = (axes2 == 17);
            			}
            			else {
HXLINE( 140)				_hx_tmp19 = true;
            			}
HXDLIN( 140)			if (_hx_tmp19) {
HXLINE( 140)				 ::flixel::FlxSprite black = black1;
HXDLIN( 140)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 140)				black->set_y(((( (Float)(_hx_tmp) ) - black1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 141)		this->add(black1);
HXLINE( 143)		this->progressBar =  ::states::GalleryBar_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) - (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.85))) / ( (Float)(2) )),(::flixel::FlxG_obj::height - 100),(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.85)),( (Float)(30) ),-16744448,-16777216);
HXLINE( 144)		this->add(this->progressBar);
HXLINE( 146)		Float _hx_tmp20 = ((( (Float)(::flixel::FlxG_obj::width) ) - (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))) / ( (Float)(2) ));
HXDLIN( 146)		Float _hx_tmp21 = this->progressBar->y;
HXDLIN( 146)		Float _hx_tmp22 = (_hx_tmp21 + this->progressBar->get_height());
HXDLIN( 146)		this->loadingBar =  ::states::GalleryBar_obj::__alloc( HX_CTX ,_hx_tmp20,_hx_tmp22,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6)),( (Float)(15) ),-1,-16777216);
HXLINE( 147)		this->add(this->loadingBar);
HXLINE( 149)		Float _hx_tmp23 = this->loadingBar->y;
HXDLIN( 149)		Float _hx_tmp24 = this->progressBar->get_width();
HXDLIN( 149)		this->progressText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-5000,_hx_tmp23,((_hx_tmp24 - this->loadingBar->get_width()) / ( (Float)(2) )),HX_(" ",20,00,00,00),20,null());
HXLINE( 150)		 ::flixel::text::FlxText _hx_tmp25 = this->progressText;
HXDLIN( 150)		::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 150)		::String _hx_tmp26;
HXDLIN( 150)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 150)			_hx_tmp26 = file1;
            		}
            		else {
HXLINE( 150)			_hx_tmp26 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 150)		_hx_tmp25->setFormat(_hx_tmp26,15,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 151)		this->progressText->set_borderSize(( (Float)(2) ));
HXLINE( 152)		this->add(this->progressText);
HXLINE( 154)		::String shitAhhText = HX_("| this Gallery is online! so it takes time to load the images, if it freezes then please restart the menu. if you want to submit fanart, post it on twitter/X tagging @___etoiles___ |",95,35,31,da);
HXLINE( 156)		 ::flixel::FlxSprite blackBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 100),null())->makeGraphic(::flixel::FlxG_obj::width,30,-16777216,null(),null());
HXLINE( 157)		blackBG->set_alpha(((Float)0.7));
HXLINE( 158)		this->add(blackBG);
HXLINE( 160)		this->GYAT =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 100),0,(shitAhhText + shitAhhText),30,null());
HXLINE( 161)		 ::flixel::text::FlxText _hx_tmp27 = this->GYAT;
HXDLIN( 161)		::String file2 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 161)		::String _hx_tmp28;
HXDLIN( 161)		if (::sys::FileSystem_obj::exists(file2)) {
HXLINE( 161)			_hx_tmp28 = file2;
            		}
            		else {
HXLINE( 161)			_hx_tmp28 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 161)		_hx_tmp27->setFormat(_hx_tmp28,30,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 162)		this->GYAT->set_borderSize(( (Float)(2) ));
HXLINE( 163)		this->add(this->GYAT);
HXLINE( 164)		 ::flixel::text::FlxText _hx_tmp29 = this->GYAT;
HXDLIN( 164)		Float _hx_tmp30 = (-(this->GYAT->get_width()) / ( (Float)(2) ));
HXDLIN( 164)		::flixel::tweens::FlxTween_obj::tween(_hx_tmp29, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),_hx_tmp30)),30, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("type",ba,f2,08,4d),2)
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 166)		this->errorText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.8)),HX_("slay",d1,d1,55,4c),20,null());
HXLINE( 167)		this->errorText->set_alpha(( (Float)(0) ));
HXLINE( 168)		this->errorText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 169)		this->add(this->errorText);
HXLINE( 171)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("volume",da,29,53,5f),((Float)0.5))),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 173)		this->addGroupImages(HX_("nastya",5c,ee,7b,21),this->nastyaGroup, ::Dynamic(new _hx_Closure_4(_gthis,black1,blackBG)));
HXLINE( 191)		this->call((this->URL + HX_("code.hx",b1,cb,61,4d)), ::Dynamic(new _hx_Closure_5(_gthis)),1);
            	}


void GalleryMenuState_obj::addGroupImages(::String groupName, ::flixel::group::FlxTypedGroup group, ::Dynamic callBack){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_2, ::states::GalleryMenuState,_gthis, ::Dynamic,callBack,::String,groupName, ::flixel::group::FlxTypedGroup,group) HXARGC(1)
            		void _hx_run(::String dataText){
            			HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_253_addGroupImages)
HXLINE( 254)			::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXDLIN( 254)			daList = ::StringTools_obj::trim(dataText).split(HX_("\n",0a,00,00,00));
HXDLIN( 254)			{
HXLINE( 254)				int _g = 0;
HXDLIN( 254)				int _g1 = daList->length;
HXDLIN( 254)				while((_g < _g1)){
HXLINE( 254)					_g = (_g + 1);
HXDLIN( 254)					int i = (_g - 1);
HXDLIN( 254)					daList[i] = ::StringTools_obj::trim(daList->__get(i));
            				}
            			}
HXDLIN( 254)			::Array< ::String > groupImageList = daList;
HXLINE( 255)			 ::states::GalleryMenuState _gthis1 = _gthis;
HXDLIN( 255)			_gthis1->imageListLength = (_gthis1->imageListLength + groupImageList->length);
HXLINE( 257)			{
HXLINE( 257)				int _g2 = 0;
HXDLIN( 257)				int _g3 = groupImageList->length;
HXDLIN( 257)				while((_g2 < _g3)){
            					HX_BEGIN_LOCAL_FUNC_S9(::hx::LocalFunc,_hx_Closure_1,::Array< ::String >,name, ::states::GalleryMenuState,_gthis,::Array< ::String >,groupImageList, ::Dynamic,callBack,::String,groupName,::Array< int >,fps, ::flixel::group::FlxTypedGroup,group,::Array< bool >,isAnimated,int,i) HXARGC(1)
            					void _hx_run( ::openfl::utils::ByteArrayData data){
            						HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_285_addGroupImages)
HXLINE( 288)						 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 288)						 ::openfl::utils::ByteArrayData dataBYTE = this1;
HXLINE( 289)						data->__Field(HX_("readBytes",35,55,7f,8e),::hx::paccDynamic)(dataBYTE,0,(( (int)(data->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) ) - ( (int)(data->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) )));
HXLINE( 291)						 ::flixel::FlxSprite image =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,790,160,null());
HXLINE( 292)						 ::openfl::display::BitmapData graphic = ::openfl::display::BitmapData_obj::fromBytes(data,null());
HXDLIN( 292)						 ::flixel::graphics::FlxGraphic graphic1 = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(graphic,false,name->__get(0),null());
HXLINE( 293)						if (!(isAnimated->__get(0))) {
HXLINE( 294)							image->loadGraphic(graphic1,null(),null(),null(),null(),null());
HXLINE( 295)							image->updateHitbox();
HXLINE( 296)							Float _hx_tmp = image->get_width();
HXDLIN( 296)							if ((_hx_tmp > image->get_height())) {
HXLINE( 297)								image->setGraphicSize(400,null());
            							}
            							else {
HXLINE( 299)								image->setGraphicSize(-1,400);
            							}
HXLINE( 300)							image->updateHitbox();
HXLINE( 302)							 ::flixel::FlxSprite image1 = image;
HXDLIN( 302)							Float image2 = image->x;
HXDLIN( 302)							image1->set_x((image2 + ((( (Float)(400) ) - image->get_width()) / ( (Float)(2) ))));
HXLINE( 303)							 ::flixel::FlxSprite image3 = image;
HXDLIN( 303)							Float image4 = image->y;
HXDLIN( 303)							image3->set_y((image4 + ((( (Float)(400) ) - image->get_height()) / ( (Float)(2) ))));
            						}
            						else {
            							HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::flixel::graphics::FlxGraphic,graphic1,::Array< int >,fps, ::flixel::FlxSprite,image) HXARGC(1)
            							void _hx_run(::String data){
            								HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_307_addGroupImages)
HXLINE( 308)								::String xml = data;
HXLINE( 309)								xml = ::StringTools_obj::replace(xml,HX_W(u"\ufeff",fe53,00b5),HX_("",00,00,00,00));
HXLINE( 310)								::haxe::Log_obj::trace(xml,::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),310,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("addGroupImages",b6,f8,c2,0f)));
HXLINE( 311)								 ::flixel::FlxSprite image1 = image;
HXDLIN( 311)								image1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(graphic1,xml));
HXLINE( 312)								image->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("",00,00,00,00),fps->__get(0),true,null(),null());
HXLINE( 313)								image->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 314)								image->updateHitbox();
HXLINE( 315)								Float _hx_tmp = image->get_width();
HXDLIN( 315)								if ((_hx_tmp > image->get_height())) {
HXLINE( 316)									image->setGraphicSize(400,null());
            								}
            								else {
HXLINE( 318)									image->setGraphicSize(-1,400);
            								}
HXLINE( 319)								image->updateHitbox();
HXLINE( 321)								 ::flixel::FlxSprite image2 = image;
HXDLIN( 321)								Float image3 = image->x;
HXDLIN( 321)								image2->set_x((image3 + ((( (Float)(400) ) - image->get_width()) / ( (Float)(2) ))));
HXLINE( 322)								 ::flixel::FlxSprite image4 = image;
HXDLIN( 322)								Float image5 = image->y;
HXDLIN( 322)								image4->set_y((image5 + ((( (Float)(400) ) - image->get_height()) / ( (Float)(2) ))));
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 305)							::String xmlString = name->__get(0);
HXLINE( 306)							xmlString = ::StringTools_obj::replace(xmlString,HX_(".png",3b,2d,bd,1e),HX_(".xml",69,3e,c3,1e));
HXLINE( 307)							_gthis->call((((_gthis->URL + groupName) + HX_("/",2f,00,00,00)) + xmlString), ::Dynamic(new _hx_Closure_0(graphic1,fps,image)),1);
            						}
HXLINE( 326)						image->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 327)						image->set_alpha(((Float)0.00000000000001));
HXLINE( 329)						image->ID = i;
HXLINE( 330)						group->add(image).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 332)						if ((groupImageList->length == group->members->get_length())) {
HXLINE( 333)							callBack();
            						}
HXLINE( 335)						_gthis->progressBar->percent = (( (Float)(((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length())) ) / ( (Float)(_gthis->imageListLength) ));
HXLINE( 336)						 ::flixel::text::FlxText _gthis1 = _gthis->progressText;
HXDLIN( 336)						::String _hx_tmp = (((((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length()) + HX_(" / ",31,71,18,00)) + _gthis->imageListLength) + HX_(" || ",80,57,85,15));
HXDLIN( 336)						_gthis1->set_text(((_hx_tmp + ::Std_obj::_hx_int(((( (Float)(((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length())) ) / ( (Float)(_gthis->imageList->length) )) * ( (Float)(100) )))) + HX_("%",25,00,00,00)));
HXLINE( 337)						 ::flixel::text::FlxText _gthis2 = _gthis->progressText;
HXDLIN( 337)						Float _gthis3 = _gthis->loadingBar->x;
HXDLIN( 337)						Float _hx_tmp1 = (_gthis3 + _gthis->loadingBar->get_width());
HXDLIN( 337)						Float _hx_tmp2 = _gthis->progressBar->get_width();
HXDLIN( 337)						Float _hx_tmp3 = (_hx_tmp1 + ((_hx_tmp2 - _gthis->loadingBar->get_width()) / ( (Float)(4) )));
HXDLIN( 337)						_gthis2->set_x((_hx_tmp3 - (_gthis->progressText->get_width() / ( (Float)(2) ))));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 257)					_g2 = (_g2 + 1);
HXDLIN( 257)					int i = (_g2 - 1);
HXLINE( 258)					::String item = groupImageList->__get(i);
HXLINE( 259)					::Array< ::String > split = ::Array_obj< ::String >::__new(0);
HXLINE( 260)					bool hasSplits = false;
HXLINE( 261)					::Array< int > fps = ::Array_obj< int >::fromData( _hx_array_data_c235d1cc_19,1);
HXLINE( 262)					if ((item.indexOf(HX_(">",3e,00,00,00),null()) != -1)) {
HXLINE( 263)						split = item.split(HX_(">",3e,00,00,00));
HXLINE( 264)						item = split->__get(0);
HXLINE( 265)						hasSplits = true;
            					}
HXLINE( 267)					::Array< ::String > name = ::Array_obj< ::String >::__new(1)->init(0,item);
HXLINE( 268)					::Array< bool > isAnimated = ::Array_obj< bool >::fromData( _hx_array_data_c235d1cc_20,1);
HXLINE( 269)					if (::StringTools_obj::endsWith(name->__get(0),HX_(".spriteSheet",ec,76,28,83))) {
HXLINE( 270)						isAnimated[0] = true;
HXLINE( 271)						name[0] = ::StringTools_obj::replace(name->__get(0),HX_(".spriteSheet",ec,76,28,83),HX_(".png",3b,2d,bd,1e));
            					}
HXLINE( 274)					{
HXLINE( 274)						int _g = 0;
HXDLIN( 274)						int _g1 = split->length;
HXDLIN( 274)						while((_g < _g1)){
HXLINE( 274)							_g = (_g + 1);
HXDLIN( 274)							int b = (_g - 1);
HXLINE( 275)							if (::hx::IsNotNull( split->__get(b) )) {
HXLINE( 276)								if ((b == 0)) {
HXLINE( 276)									continue;
            								}
HXLINE( 277)								bool _hx_tmp;
HXDLIN( 277)								if (isAnimated->__get(0)) {
HXLINE( 277)									::String _hx_tmp1 = ::Std_obj::string(::Std_obj::parseInt(split->__get(b)));
HXDLIN( 277)									_hx_tmp = (_hx_tmp1 == split->__get(b));
            								}
            								else {
HXLINE( 277)									_hx_tmp = false;
            								}
HXDLIN( 277)								if (_hx_tmp) {
HXLINE( 278)									fps[0] = ( (int)(::Std_obj::parseInt(split->__get(b))) );
            								}
            								else {
HXLINE( 280)									_gthis->nameMap->set(i,::cpp::VirtualArray_obj::__new(2)->init(0,groupName)->init(1,split->__get(b)));
            								}
HXLINE( 281)								::haxe::Log_obj::trace(split->__get(b),::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),281,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("addGroupImages",b6,f8,c2,0f)));
            							}
            						}
            					}
HXLINE( 285)					_gthis->call((((_gthis->URL + groupName) + HX_("/",2f,00,00,00)) + name->__get(0)), ::Dynamic(new _hx_Closure_1(name,_gthis,groupImageList,callBack,groupName,fps,group,isAnimated,i)),0);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_252_addGroupImages)
HXDLIN( 252)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 253)		this->call(((this->URL + groupName) + HX_("/image-list.txt",41,49,f1,ae)), ::Dynamic(new _hx_Closure_2(_gthis,callBack,groupName,group)),1);
            	}


HX_DEFINE_DYNAMIC_FUNC3(GalleryMenuState_obj,addGroupImages,(void))

void GalleryMenuState_obj::call(::String url, ::Dynamic callBack, ::Dynamic dataFormat){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis, ::openfl::net::URLLoader,file, ::Dynamic,callBack) HXARGC(1)
            		void _hx_run( ::openfl::events::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_352_call)
HXLINE( 353)			if (::states::GalleryMenuState_obj::thisStateIsDestroyed) {
HXLINE( 353)				return;
            			}
HXLINE( 354)			callBack(file->data);
HXLINE( 355)			_gthis->errorText->set_alpha(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::ProgressEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_358_call)
HXLINE( 358)			_gthis->lurpLoadingBar = (e->bytesLoaded / e->bytesTotal);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_3, ::states::GalleryMenuState,_gthis, ::Dynamic,dataFormat,::String,url, ::Dynamic,callBack) HXARGC(1)
            		void _hx_run( ::openfl::events::IOErrorEvent e){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,dataFormat, ::states::GalleryMenuState,_gthis, ::Dynamic,callBack,::String,url) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_365_call)
HXLINE( 365)				_gthis->call(url,callBack,dataFormat);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_361_call)
HXLINE( 364)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2(dataFormat,_gthis,callBack,url)),null());
HXLINE( 368)			::String shortText = e->text;
HXLINE( 369)			if ((shortText == HX_("Couldn't resolve host name",49,5c,ee,f5))) {
HXLINE( 370)				shortText = HX_("no internet",80,9a,7f,46);
            			}
HXLINE( 371)			if ((shortText.indexOf(HX_("404",38,9f,27,00),null()) != -1)) {
HXLINE( 372)				shortText = HX_("file not found, please contact _etoile_ on discord about this if you can",97,4c,d7,9a);
            			}
HXLINE( 374)			_gthis->errorText->set_alpha(( (Float)(1) ));
HXLINE( 375)			_gthis->errorText->set_text(((HX_("ERROR CAUGHT : ",52,ce,0b,0f) + shortText) + HX_("\nrestart the menu or wait one seconed\nthis menu is very rushed so please be patient",b6,a0,19,c2)));
HXLINE( 376)			{
HXLINE( 376)				 ::flixel::text::FlxText _this = _gthis->errorText;
HXDLIN( 376)				int axes = 1;
HXDLIN( 376)				bool _hx_tmp;
HXDLIN( 376)				if ((axes != 1)) {
HXLINE( 376)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 376)					_hx_tmp = true;
            				}
HXDLIN( 376)				if (_hx_tmp) {
HXLINE( 376)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 376)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 376)				bool _hx_tmp1;
HXDLIN( 376)				if ((axes != 16)) {
HXLINE( 376)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 376)					_hx_tmp1 = true;
            				}
HXDLIN( 376)				if (_hx_tmp1) {
HXLINE( 376)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 376)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_346_call)
HXDLIN( 346)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 347)		 ::openfl::net::URLRequest request =  ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url);
HXLINE( 349)		 ::openfl::net::URLLoader file =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 350)		file->dataFormat = dataFormat;
HXLINE( 352)		file->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_0(_gthis,file,callBack)),null(),null(),null());
HXLINE( 357)		file->addEventListener(HX_("progress",ad,f7,2a,86), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
HXLINE( 361)		file->addEventListener(HX_("ioError",02,fe,41,76), ::Dynamic(new _hx_Closure_3(_gthis,dataFormat,url,callBack)),null(),null(),null());
HXLINE( 379)		file->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC3(GalleryMenuState_obj,call,(void))

void GalleryMenuState_obj::callHScript(::String name,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_383_callHScript)
HXDLIN( 383)		if (::hx::IsNotNull( this->script )) {
HXLINE( 384)			if (this->script->exists(name)) {
HXLINE( 385)				this->script->call(name,args,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(GalleryMenuState_obj,callHScript,(void))

void GalleryMenuState_obj::changeSelection(int num){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_420_changeSelection)
HXLINE( 420)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_421_changeSelection)
HXLINE( 421)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_422_changeSelection)
HXLINE( 422)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::states::GalleryMenuState,_gthis,::Array< ::String >,extra) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_424_changeSelection)
HXLINE( 424)			if ((image->ID == _gthis->curSelected)) {
HXLINE( 425)				image->set_visible(true);
HXLINE( 426)				image->set_alpha(((Float)0.6));
HXLINE( 427)				image->set_y(( (Float)(150) ));
HXLINE( 428)				Float image1 = image->y;
HXDLIN( 428)				image->set_y((image1 + ((( (Float)(400) ) - image->get_height()) / ( (Float)(2) ))));
HXLINE( 429)				::flixel::tweens::FlxTween_obj::tween(image, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("y",79,00,00,00),(image->y + 10))
            					->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.07),null());
HXLINE( 431)				if (_gthis->nameMap->exists(_gthis->curSelected)) {
HXLINE( 432)					::cpp::VirtualArray leInfo = ( (::cpp::VirtualArray)(_gthis->nameMap->get(_gthis->curSelected)) );
HXLINE( 433)					if (::hx::IsEq( leInfo->__get(0),_gthis->items->__get(_gthis->curSelectedButton) )) {
HXLINE( 434)						extra[0] = (HX_(" by ",49,9a,71,15) + ::Std_obj::string(leInfo->__get(1)));
            					}
            				}
            			}
            			else {
HXLINE( 438)				image->set_visible(false);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_389_changeSelection)
HXDLIN( 389)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 390)		if (!(this->ready)) {
HXLINE( 390)			return;
            		}
HXLINE( 392)		this->callHScript(HX_("onChangeSelection",5d,5a,ab,07),::cpp::VirtualArray_obj::__new(1)->init(0,num));
HXLINE( 394)		this->nastya->set_visible(false);
HXLINE( 396)		this->arrowUP->set_visible(true);
HXLINE( 397)		this->arrowDOWN->set_visible(true);
HXLINE( 399)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 399)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 400)		 ::states::GalleryMenuState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 400)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + num);
HXLINE( 402)		 ::flixel::group::FlxTypedGroup curGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 403)		::String _hx_switch_0 = this->items->__get(this->curSelectedButton);
            		if (  (_hx_switch_0==HX_("concepts",0b,ad,55,65)) ){
HXLINE( 407)			curGroup = this->conceptGroup;
HXDLIN( 407)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("nastya",5c,ee,7b,21)) ){
HXLINE( 405)			curGroup = this->nastyaGroup;
HXDLIN( 405)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("other",d0,66,76,36)) ){
HXLINE( 409)			curGroup = this->otherGroup;
HXDLIN( 409)			goto _hx_goto_28;
            		}
            		_hx_goto_28:;
HXLINE( 412)		if ((this->curSelected > (curGroup->members->get_length() - 1))) {
HXLINE( 413)			this->curSelected = 0;
            		}
HXLINE( 414)		if ((this->curSelected < 0)) {
HXLINE( 415)			this->curSelected = ::Std_obj::_hx_int(( (Float)((curGroup->members->get_length() - 1)) ));
            		}
HXLINE( 417)		::Array< ::String > extra = ::Array_obj< ::String >::fromData( _hx_array_data_c235d1cc_34,1);
HXLINE( 420)		this->nastyaGroup->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 421)		this->conceptGroup->forEach( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 422)		this->otherGroup->forEach( ::Dynamic(new _hx_Closure_2()),null());
HXLINE( 423)		curGroup->forEach( ::Dynamic(new _hx_Closure_3(_gthis,extra)),null());
HXLINE( 441)		this->imagesText->set_text((((((HX_("(",28,00,00,00) + (this->curSelected + 1)) + HX_(" / ",31,71,18,00)) + curGroup->members->get_length()) + HX_(")",29,00,00,00)) + extra->__get(0)));
HXLINE( 442)		{
HXLINE( 442)			 ::flixel::text::FlxText _this = this->imagesText;
HXDLIN( 442)			int axes = 1;
HXDLIN( 442)			bool _hx_tmp2;
HXDLIN( 442)			if ((axes != 1)) {
HXLINE( 442)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE( 442)				_hx_tmp2 = true;
            			}
HXDLIN( 442)			if (_hx_tmp2) {
HXLINE( 442)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 442)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 442)			bool _hx_tmp3;
HXDLIN( 442)			if ((axes != 16)) {
HXLINE( 442)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE( 442)				_hx_tmp3 = true;
            			}
HXDLIN( 442)			if (_hx_tmp3) {
HXLINE( 442)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 442)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 444)		this->callHScript(HX_("onChangeSelectionPost",5d,fd,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,num));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalleryMenuState_obj,changeSelection,(void))

void GalleryMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_457_update)
HXLINE( 458)			if (::flixel::FlxG_obj::mouse->overlaps(button,null())) {
HXLINE( 459)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 460)					_gthis->curSelectedButton = button->ID;
HXLINE( 461)					_gthis->curSelected = 0;
HXLINE( 462)					_gthis->changeSelection(0);
            				}
HXLINE( 464)				button->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 466)				button->set_alpha(((Float)0.9));
            			}
HXLINE( 468)			if ((button->ID == _gthis->curSelectedButton)) {
HXLINE( 469)				button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 470)				{
HXLINE( 470)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 470)					Float y = ( (Float)(_gthis->itemOffsets->__get(button->ID).StaticCast< ::Array< int > >()->__get(1)) );
HXDLIN( 470)					this1->set_x(( (Float)(_gthis->itemOffsets->__get(button->ID).StaticCast< ::Array< int > >()->__get(0)) ));
HXDLIN( 470)					this1->set_y(y);
            				}
HXLINE( 471)				button->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 474)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 475)				{
HXLINE( 475)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 475)					this1->set_x(( (Float)(0) ));
HXDLIN( 475)					this1->set_y(( (Float)(0) ));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_447_update)
HXDLIN( 447)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 448)		this->super::update(elapsed);
HXLINE( 450)		this->callHScript(HX_("onUpdate",88,7c,b2,66),::cpp::VirtualArray_obj::__new(1)->init(0,elapsed));
HXLINE( 452)		if ((this->lurpLoadingBar >= this->loadingBar->percent)) {
HXLINE( 453)			Float a = this->loadingBar->percent;
HXDLIN( 453)			Float Value = (elapsed * ( (Float)(30) ));
HXDLIN( 453)			Float lowerBound;
HXDLIN( 453)			if ((Value < 0)) {
HXLINE( 453)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 453)				lowerBound = Value;
            			}
HXDLIN( 453)			Float _hx_tmp;
HXDLIN( 453)			if ((lowerBound > 1)) {
HXLINE( 453)				_hx_tmp = ( (Float)(1) );
            			}
            			else {
HXLINE( 453)				_hx_tmp = lowerBound;
            			}
HXDLIN( 453)			this->loadingBar->percent = (a + (_hx_tmp * (this->lurpLoadingBar - a)));
            		}
            		else {
HXLINE( 455)			this->loadingBar->percent = this->lurpLoadingBar;
            		}
HXLINE( 457)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 479)		if (this->get_controls()->get_UI_UP_P()) {
HXLINE( 480)			this->changeSelection(-1);
            		}
HXLINE( 481)		if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE( 482)			this->changeSelection(1);
            		}
HXLINE( 484)		if (this->get_controls()->get_UI_UP()) {
HXLINE( 485)			this->arrowUP->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
            		}
            		else {
HXLINE( 487)			this->arrowUP->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 489)		if (this->get_controls()->get_UI_DOWN()) {
HXLINE( 490)			this->arrowDOWN->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
            		}
            		else {
HXLINE( 492)			this->arrowDOWN->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 494)		if (this->get_controls()->get_BACK()) {
HXLINE( 495)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 496)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 496)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 497)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
HXLINE( 498)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(1) ));
            		}
HXLINE( 501)		this->callHScript(HX_("onUpdatePost",08,11,55,db),::cpp::VirtualArray_obj::__new(1)->init(0,elapsed));
            	}


void GalleryMenuState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_504_destroy)
HXLINE( 505)		this->super::destroy();
HXLINE( 506)		this->callHScript(HX_("onDestory",75,a1,2e,fc),null());
HXLINE( 507)		::states::GalleryMenuState_obj::thisStateIsDestroyed = true;
HXLINE( 508)		this->callHScript(HX_("onDestoryPost",75,b0,aa,c1),null());
            	}


bool GalleryMenuState_obj::thisStateIsDestroyed;

 ::states::GalleryMenuState GalleryMenuState_obj::instance;


::hx::ObjectPtr< GalleryMenuState_obj > GalleryMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< GalleryMenuState_obj > __this = new GalleryMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< GalleryMenuState_obj > GalleryMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	GalleryMenuState_obj *__this = (GalleryMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GalleryMenuState_obj), true, "states.GalleryMenuState"));
	*(void **)__this = GalleryMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

GalleryMenuState_obj::GalleryMenuState_obj()
{
}

void GalleryMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GalleryMenuState);
	HX_MARK_MEMBER_NAME(oldMouse,"oldMouse");
	HX_MARK_MEMBER_NAME(itemGroup,"itemGroup");
	HX_MARK_MEMBER_NAME(nastyaGroup,"nastyaGroup");
	HX_MARK_MEMBER_NAME(otherGroup,"otherGroup");
	HX_MARK_MEMBER_NAME(conceptGroup,"conceptGroup");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(itemOffsets,"itemOffsets");
	HX_MARK_MEMBER_NAME(URL,"URL");
	HX_MARK_MEMBER_NAME(curSelectedButton,"curSelectedButton");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ready,"ready");
	HX_MARK_MEMBER_NAME(nameMap,"nameMap");
	HX_MARK_MEMBER_NAME(arrowUP,"arrowUP");
	HX_MARK_MEMBER_NAME(arrowDOWN,"arrowDOWN");
	HX_MARK_MEMBER_NAME(imagesText,"imagesText");
	HX_MARK_MEMBER_NAME(nastya,"nastya");
	HX_MARK_MEMBER_NAME(loadingBar,"loadingBar");
	HX_MARK_MEMBER_NAME(progressBar,"progressBar");
	HX_MARK_MEMBER_NAME(progressText,"progressText");
	HX_MARK_MEMBER_NAME(GYAT,"GYAT");
	HX_MARK_MEMBER_NAME(lurpLoadingBar,"lurpLoadingBar");
	HX_MARK_MEMBER_NAME(imageList,"imageList");
	HX_MARK_MEMBER_NAME(imageListLength,"imageListLength");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(errorText,"errorText");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GalleryMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(oldMouse,"oldMouse");
	HX_VISIT_MEMBER_NAME(itemGroup,"itemGroup");
	HX_VISIT_MEMBER_NAME(nastyaGroup,"nastyaGroup");
	HX_VISIT_MEMBER_NAME(otherGroup,"otherGroup");
	HX_VISIT_MEMBER_NAME(conceptGroup,"conceptGroup");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(itemOffsets,"itemOffsets");
	HX_VISIT_MEMBER_NAME(URL,"URL");
	HX_VISIT_MEMBER_NAME(curSelectedButton,"curSelectedButton");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ready,"ready");
	HX_VISIT_MEMBER_NAME(nameMap,"nameMap");
	HX_VISIT_MEMBER_NAME(arrowUP,"arrowUP");
	HX_VISIT_MEMBER_NAME(arrowDOWN,"arrowDOWN");
	HX_VISIT_MEMBER_NAME(imagesText,"imagesText");
	HX_VISIT_MEMBER_NAME(nastya,"nastya");
	HX_VISIT_MEMBER_NAME(loadingBar,"loadingBar");
	HX_VISIT_MEMBER_NAME(progressBar,"progressBar");
	HX_VISIT_MEMBER_NAME(progressText,"progressText");
	HX_VISIT_MEMBER_NAME(GYAT,"GYAT");
	HX_VISIT_MEMBER_NAME(lurpLoadingBar,"lurpLoadingBar");
	HX_VISIT_MEMBER_NAME(imageList,"imageList");
	HX_VISIT_MEMBER_NAME(imageListLength,"imageListLength");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(errorText,"errorText");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GalleryMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"URL") ) { return ::hx::Val( URL ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"GYAT") ) { return ::hx::Val( GYAT ); }
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return ::hx::Val( items ); }
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nastya") ) { return ::hx::Val( nastya ); }
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nameMap") ) { return ::hx::Val( nameMap ); }
		if (HX_FIELD_EQ(inName,"arrowUP") ) { return ::hx::Val( arrowUP ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldMouse") ) { return ::hx::Val( oldMouse ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { return ::hx::Val( itemGroup ); }
		if (HX_FIELD_EQ(inName,"arrowDOWN") ) { return ::hx::Val( arrowDOWN ); }
		if (HX_FIELD_EQ(inName,"imageList") ) { return ::hx::Val( imageList ); }
		if (HX_FIELD_EQ(inName,"errorText") ) { return ::hx::Val( errorText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"otherGroup") ) { return ::hx::Val( otherGroup ); }
		if (HX_FIELD_EQ(inName,"imagesText") ) { return ::hx::Val( imagesText ); }
		if (HX_FIELD_EQ(inName,"loadingBar") ) { return ::hx::Val( loadingBar ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nastyaGroup") ) { return ::hx::Val( nastyaGroup ); }
		if (HX_FIELD_EQ(inName,"itemOffsets") ) { return ::hx::Val( itemOffsets ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"progressBar") ) { return ::hx::Val( progressBar ); }
		if (HX_FIELD_EQ(inName,"callHScript") ) { return ::hx::Val( callHScript_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conceptGroup") ) { return ::hx::Val( conceptGroup ); }
		if (HX_FIELD_EQ(inName,"progressText") ) { return ::hx::Val( progressText ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lurpLoadingBar") ) { return ::hx::Val( lurpLoadingBar ); }
		if (HX_FIELD_EQ(inName,"addGroupImages") ) { return ::hx::Val( addGroupImages_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"imageListLength") ) { return ::hx::Val( imageListLength ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"curSelectedButton") ) { return ::hx::Val( curSelectedButton ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GalleryMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"thisStateIsDestroyed") ) { outValue = ( thisStateIsDestroyed ); return true; }
	}
	return false;
}

::hx::Val GalleryMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"URL") ) { URL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"GYAT") ) { GYAT=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nastya") ) { nastya=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::psychlua::HScript >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nameMap") ) { nameMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowUP") ) { arrowUP=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldMouse") ) { oldMouse=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { itemGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowDOWN") ) { arrowDOWN=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageList") ) { imageList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"errorText") ) { errorText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"otherGroup") ) { otherGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imagesText") ) { imagesText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadingBar") ) { loadingBar=inValue.Cast<  ::states::GalleryBar >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nastyaGroup") ) { nastyaGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemOffsets") ) { itemOffsets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"progressBar") ) { progressBar=inValue.Cast<  ::states::GalleryBar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conceptGroup") ) { conceptGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"progressText") ) { progressText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lurpLoadingBar") ) { lurpLoadingBar=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"imageListLength") ) { imageListLength=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"curSelectedButton") ) { curSelectedButton=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GalleryMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::states::GalleryMenuState >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"thisStateIsDestroyed") ) { thisStateIsDestroyed=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void GalleryMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("oldMouse",fe,2f,30,f3));
	outFields->push(HX_("itemGroup",2c,19,e0,99));
	outFields->push(HX_("nastyaGroup",43,a7,7c,86));
	outFields->push(HX_("otherGroup",4f,0a,f5,5b));
	outFields->push(HX_("conceptGroup",b7,fb,a5,d1));
	outFields->push(HX_("items",00,ac,0c,c2));
	outFields->push(HX_("itemOffsets",ad,84,67,35));
	outFields->push(HX_("URL",4f,c7,40,00));
	outFields->push(HX_("curSelectedButton",4d,70,ee,0c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("ready",63,a0,ba,e6));
	outFields->push(HX_("nameMap",11,91,81,ac));
	outFields->push(HX_("arrowUP",64,88,b8,43));
	outFields->push(HX_("arrowDOWN",ab,52,f9,fd));
	outFields->push(HX_("imagesText",85,05,88,e7));
	outFields->push(HX_("nastya",5c,ee,7b,21));
	outFields->push(HX_("loadingBar",b7,d0,6a,16));
	outFields->push(HX_("progressBar",26,bc,55,e6));
	outFields->push(HX_("progressText",fa,ca,97,b0));
	outFields->push(HX_("GYAT",a5,e7,31,2f));
	outFields->push(HX_("lurpLoadingBar",1e,1a,c2,b7));
	outFields->push(HX_("imageList",59,b1,e7,29));
	outFields->push(HX_("imageListLength",1f,c3,d4,b0));
	outFields->push(HX_("script",0b,4e,60,47));
	outFields->push(HX_("errorText",95,48,62,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GalleryMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(GalleryMenuState_obj,oldMouse),HX_("oldMouse",fe,2f,30,f3)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GalleryMenuState_obj,itemGroup),HX_("itemGroup",2c,19,e0,99)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GalleryMenuState_obj,nastyaGroup),HX_("nastyaGroup",43,a7,7c,86)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GalleryMenuState_obj,otherGroup),HX_("otherGroup",4f,0a,f5,5b)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GalleryMenuState_obj,conceptGroup),HX_("conceptGroup",b7,fb,a5,d1)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(GalleryMenuState_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GalleryMenuState_obj,itemOffsets),HX_("itemOffsets",ad,84,67,35)},
	{::hx::fsString,(int)offsetof(GalleryMenuState_obj,URL),HX_("URL",4f,c7,40,00)},
	{::hx::fsInt,(int)offsetof(GalleryMenuState_obj,curSelectedButton),HX_("curSelectedButton",4d,70,ee,0c)},
	{::hx::fsInt,(int)offsetof(GalleryMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(int)offsetof(GalleryMenuState_obj,ready),HX_("ready",63,a0,ba,e6)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(GalleryMenuState_obj,nameMap),HX_("nameMap",11,91,81,ac)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GalleryMenuState_obj,arrowUP),HX_("arrowUP",64,88,b8,43)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GalleryMenuState_obj,arrowDOWN),HX_("arrowDOWN",ab,52,f9,fd)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,imagesText),HX_("imagesText",85,05,88,e7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GalleryMenuState_obj,nastya),HX_("nastya",5c,ee,7b,21)},
	{::hx::fsObject /*  ::states::GalleryBar */ ,(int)offsetof(GalleryMenuState_obj,loadingBar),HX_("loadingBar",b7,d0,6a,16)},
	{::hx::fsObject /*  ::states::GalleryBar */ ,(int)offsetof(GalleryMenuState_obj,progressBar),HX_("progressBar",26,bc,55,e6)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,progressText),HX_("progressText",fa,ca,97,b0)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,GYAT),HX_("GYAT",a5,e7,31,2f)},
	{::hx::fsFloat,(int)offsetof(GalleryMenuState_obj,lurpLoadingBar),HX_("lurpLoadingBar",1e,1a,c2,b7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(GalleryMenuState_obj,imageList),HX_("imageList",59,b1,e7,29)},
	{::hx::fsInt,(int)offsetof(GalleryMenuState_obj,imageListLength),HX_("imageListLength",1f,c3,d4,b0)},
	{::hx::fsObject /*  ::psychlua::HScript */ ,(int)offsetof(GalleryMenuState_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,errorText),HX_("errorText",95,48,62,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GalleryMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &GalleryMenuState_obj::thisStateIsDestroyed,HX_("thisStateIsDestroyed",7c,16,57,ee)},
	{::hx::fsObject /*  ::states::GalleryMenuState */ ,(void *) &GalleryMenuState_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GalleryMenuState_obj_sMemberFields[] = {
	HX_("oldMouse",fe,2f,30,f3),
	HX_("itemGroup",2c,19,e0,99),
	HX_("nastyaGroup",43,a7,7c,86),
	HX_("otherGroup",4f,0a,f5,5b),
	HX_("conceptGroup",b7,fb,a5,d1),
	HX_("items",00,ac,0c,c2),
	HX_("itemOffsets",ad,84,67,35),
	HX_("URL",4f,c7,40,00),
	HX_("curSelectedButton",4d,70,ee,0c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("ready",63,a0,ba,e6),
	HX_("nameMap",11,91,81,ac),
	HX_("arrowUP",64,88,b8,43),
	HX_("arrowDOWN",ab,52,f9,fd),
	HX_("imagesText",85,05,88,e7),
	HX_("nastya",5c,ee,7b,21),
	HX_("loadingBar",b7,d0,6a,16),
	HX_("progressBar",26,bc,55,e6),
	HX_("progressText",fa,ca,97,b0),
	HX_("GYAT",a5,e7,31,2f),
	HX_("lurpLoadingBar",1e,1a,c2,b7),
	HX_("imageList",59,b1,e7,29),
	HX_("imageListLength",1f,c3,d4,b0),
	HX_("script",0b,4e,60,47),
	HX_("create",fc,66,0f,7c),
	HX_("addGroupImages",b6,f8,c2,0f),
	HX_("errorText",95,48,62,73),
	HX_("call",9e,18,ba,41),
	HX_("callHScript",95,7f,59,ff),
	HX_("changeSelection",bc,98,b5,48),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void GalleryMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GalleryMenuState_obj::thisStateIsDestroyed,"thisStateIsDestroyed");
	HX_MARK_MEMBER_NAME(GalleryMenuState_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GalleryMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GalleryMenuState_obj::thisStateIsDestroyed,"thisStateIsDestroyed");
	HX_VISIT_MEMBER_NAME(GalleryMenuState_obj::instance,"instance");
};

#endif

::hx::Class GalleryMenuState_obj::__mClass;

static ::String GalleryMenuState_obj_sStaticFields[] = {
	HX_("thisStateIsDestroyed",7c,16,57,ee),
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void GalleryMenuState_obj::__register()
{
	GalleryMenuState_obj _hx_dummy;
	GalleryMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.GalleryMenuState",cc,d1,35,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GalleryMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &GalleryMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = GalleryMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GalleryMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GalleryMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GalleryMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GalleryMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GalleryMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GalleryMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GalleryMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_55_boot)
HXDLIN(  55)		thisStateIsDestroyed = true;
            	}
}

} // end namespace states
