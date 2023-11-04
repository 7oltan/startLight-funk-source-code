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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_95ef7d317be649f3_16_new,"states.GalleryMenuState","new",0xd46c48be,"states.GalleryMenuState.new","states/GalleryMenuState.hx",16,0xdfe23d11)
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
	HX_("nastya",5c,ee,7b,21),HX_("concept",68,ee,3a,0e),HX_("other",d0,66,76,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_114_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",114,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_120_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",120,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_142_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",142,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_42_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",42,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_161_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",161,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_170_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",170,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_167_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",167,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_155_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",155,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_210_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",210,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_211_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",211,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_212_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",212,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_214_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",214,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_187_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",187,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_228_update,"states.GalleryMenuState","update",0xe1aa1c6b,"states.GalleryMenuState.update","states/GalleryMenuState.hx",228,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_225_update,"states.GalleryMenuState","update",0xe1aa1c6b,"states.GalleryMenuState.update","states/GalleryMenuState.hx",225,0xdfe23d11)
namespace states{

void GalleryMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_16_new)
HXLINE(  36)		this->ready = false;
HXLINE(  35)		this->curSelected = 0;
HXLINE(  34)		this->curSelectedButton = 0;
HXLINE(  32)		this->URL = HX_("https://raw.githubusercontent.com/7oltan/nastya-art-test/main/",38,ba,13,da);
HXLINE(  26)		this->itemOffsets = ::Array_obj< ::Dynamic>::__new(3)->init(0,::Array_obj< int >::fromData( _hx_array_data_c235d1cc_1,2))->init(1,::Array_obj< int >::fromData( _hx_array_data_c235d1cc_2,2))->init(2,::Array_obj< int >::fromData( _hx_array_data_c235d1cc_3,2));
HXLINE(  24)		this->items = ::Array_obj< ::String >::fromData( _hx_array_data_c235d1cc_4,3);
HXLINE(  16)		super::__construct(TransIn,TransOut);
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
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1) HXARGC(1)
            		void _hx_run(::String dataText){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_114_create)
HXLINE( 115)			::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXDLIN( 115)			daList = ::StringTools_obj::trim(dataText).split(HX_("\n",0a,00,00,00));
HXDLIN( 115)			{
HXLINE( 115)				int _g = 0;
HXDLIN( 115)				int _g1 = daList->length;
HXDLIN( 115)				while((_g < _g1)){
HXLINE( 115)					_g = (_g + 1);
HXDLIN( 115)					int i = (_g - 1);
HXDLIN( 115)					daList[i] = ::StringTools_obj::trim(daList->__get(i));
            				}
            			}
HXDLIN( 115)			::Array< ::String > imageList = daList;
HXLINE( 117)			{
HXLINE( 117)				int _g2 = 0;
HXDLIN( 117)				int _g3 = imageList->length;
HXDLIN( 117)				while((_g2 < _g3)){
            					HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_1,::String,name, ::states::GalleryMenuState,_gthis,::String,type,::Array< ::String >,imageList, ::flixel::FlxSprite,black1) HXARGC(1)
            					void _hx_run( ::openfl::utils::ByteArrayData data){
            						HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_120_create)
HXLINE( 121)						 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 121)						 ::openfl::utils::ByteArrayData dataBYTE = this1;
HXLINE( 122)						data->__Field(HX_("readBytes",35,55,7f,8e),::hx::paccDynamic)(dataBYTE,0,(( (int)(data->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) ) - ( (int)(data->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) )));
HXLINE( 124)						 ::flixel::FlxSprite image =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,770,160,null());
HXDLIN( 124)						 ::openfl::display::BitmapData image1 = ::openfl::display::BitmapData_obj::fromBytes(data,null());
HXDLIN( 124)						 ::flixel::FlxSprite image2 = image->loadGraphic(::flixel::graphics::FlxGraphic_obj::fromBitmapData(image1,false,name,null()),null(),null(),null(),null(),null());
HXLINE( 125)						image2->setGraphicSize(400,400);
HXLINE( 126)						image2->updateHitbox();
HXLINE( 127)						image2->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 128)						image2->set_alpha(((Float)0.00000000000001));
HXLINE( 129)						::String _hx_switch_0 = type;
            						if (  (_hx_switch_0==HX_("C",43,00,00,00)) ){
HXLINE( 134)							image2->ID = _gthis->conceptGroup->members->get_length();
HXLINE( 135)							_gthis->conceptGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 133)							goto _hx_goto_8;
            						}
            						if (  (_hx_switch_0==HX_("N",4e,00,00,00)) ){
HXLINE( 131)							image2->ID = _gthis->nastyaGroup->members->get_length();
HXLINE( 132)							_gthis->nastyaGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 130)							goto _hx_goto_8;
            						}
            						if (  (_hx_switch_0==HX_("O",4f,00,00,00)) ){
HXLINE( 137)							image2->ID = _gthis->otherGroup->members->get_length();
HXLINE( 138)							_gthis->otherGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 136)							goto _hx_goto_8;
            						}
            						_hx_goto_8:;
HXLINE( 140)						if ((imageList->length == ((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length()))) {
            							HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1) HXARGC(1)
            							void _hx_run( ::flixel::tweens::FlxTween t){
            								HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_142_create)
HXLINE( 142)								_gthis->remove(black1,null()).StaticCast<  ::flixel::FlxBasic >();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 141)							_gthis->ready = true;
HXLINE( 142)							::flixel::tweens::FlxTween_obj::tween(black1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            								->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis,black1)))));
HXLINE( 143)							::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("volume",da,29,53,5f),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 144)							_gthis->changeSelection(0);
HXLINE( 145)							_gthis->errorText->set_alpha(( (Float)(0) ));
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 117)					_g2 = (_g2 + 1);
HXDLIN( 117)					int i = (_g2 - 1);
HXLINE( 118)					::String name = imageList->__get(i).split(HX_(">",3e,00,00,00))->__get(0);
HXLINE( 119)					::String type = imageList->__get(i).split(HX_(">",3e,00,00,00))->__get(1);
HXLINE( 120)					_gthis->call((_gthis->URL + name), ::Dynamic(new _hx_Closure_1(name,_gthis,type,imageList,black1)),0);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_42_create)
HXDLIN(  42)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  43)		this->super::create();
HXLINE(  45)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  46)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  48)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  48)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("gallery-bg",e0,21,9c,4d),null(),null()),null(),null(),null(),null(),null());
HXLINE(  49)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  50)		{
HXLINE(  50)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  50)			this1->set_x(( (Float)(0) ));
HXDLIN(  50)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  51)		{
HXLINE(  51)			int axes = 17;
HXDLIN(  51)			bool _hx_tmp;
HXDLIN(  51)			if ((axes != 1)) {
HXLINE(  51)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  51)				_hx_tmp = true;
            			}
HXDLIN(  51)			if (_hx_tmp) {
HXLINE(  51)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  51)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  51)			bool _hx_tmp1;
HXDLIN(  51)			if ((axes != 16)) {
HXLINE(  51)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  51)				_hx_tmp1 = true;
            			}
HXDLIN(  51)			if (_hx_tmp1) {
HXLINE(  51)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  51)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  52)		this->add(bg1);
HXLINE(  54)		this->imagesText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.8)),HX_("( 4 / 5 )",29,c2,f2,7e),20,null());
HXLINE(  55)		{
HXLINE(  55)			 ::flixel::text::FlxText _this = this->imagesText;
HXDLIN(  55)			int axes1 = 1;
HXDLIN(  55)			bool _hx_tmp2;
HXDLIN(  55)			if ((axes1 != 1)) {
HXLINE(  55)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  55)				_hx_tmp2 = true;
            			}
HXDLIN(  55)			if (_hx_tmp2) {
HXLINE(  55)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  55)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  55)			bool _hx_tmp3;
HXDLIN(  55)			if ((axes1 != 16)) {
HXLINE(  55)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  55)				_hx_tmp3 = true;
            			}
HXDLIN(  55)			if (_hx_tmp3) {
HXLINE(  55)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  55)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  56)		 ::flixel::text::FlxText _hx_tmp4 = this->imagesText;
HXDLIN(  56)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  56)		::String _hx_tmp5;
HXDLIN(  56)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  56)			_hx_tmp5 = file;
            		}
            		else {
HXLINE(  56)			_hx_tmp5 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  56)		_hx_tmp4->setFormat(_hx_tmp5,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  57)		this->imagesText->set_borderSize(( (Float)(2) ));
HXLINE(  58)		this->add(this->imagesText);
HXLINE(  60)		this->itemGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  61)		this->add(this->itemGroup);
HXLINE(  63)		{
HXLINE(  63)			int _g = 0;
HXDLIN(  63)			int _g1 = this->items->length;
HXDLIN(  63)			while((_g < _g1)){
HXLINE(  63)				_g = (_g + 1);
HXDLIN(  63)				int i = (_g - 1);
HXLINE(  64)				 ::flixel::FlxSprite button =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(50 + (i * 100)),(200 + (i * 170)),null());
HXLINE(  65)				::String library = null();
HXDLIN(  65)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("gallery-ui",6f,32,9c,4d),null(),true);
HXDLIN(  65)				bool xmlExists = false;
HXDLIN(  65)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("gallery-ui",6f,32,9c,4d)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  65)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  65)					xmlExists = true;
            				}
HXDLIN(  65)				 ::Dynamic _hx_tmp;
HXDLIN(  65)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  65)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  65)					_hx_tmp = ::backend::Paths_obj::image(HX_("gallery-ui",6f,32,9c,4d),library,true);
            				}
HXDLIN(  65)				::String _hx_tmp1;
HXDLIN(  65)				if (xmlExists) {
HXLINE(  65)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE(  65)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gallery-ui",6f,32,9c,4d)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN(  65)				button->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  66)				button->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->items->__get(i) + HX_("0",30,00,00,00)),24,true,null(),null());
HXLINE(  67)				button->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->items->__get(i) + HX_(" select",1c,f3,e1,9c)),24,true,null(),null());
HXLINE(  68)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  69)				button->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  70)				{
HXLINE(  70)					 ::flixel::math::FlxBasePoint this1 = button->scrollFactor;
HXDLIN(  70)					this1->set_x(( (Float)(0) ));
HXDLIN(  70)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(  71)				button->ID = i;
HXLINE(  72)				this->itemGroup->add(button).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  75)		this->nastyaGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  76)		this->add(this->nastyaGroup);
HXLINE(  78)		this->conceptGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  79)		this->add(this->conceptGroup);
HXLINE(  81)		this->otherGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  82)		this->add(this->otherGroup);
HXLINE(  84)		this->arrowUP =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,950,10,null());
HXLINE(  85)		 ::flixel::FlxSprite _hx_tmp6 = this->arrowUP;
HXDLIN(  85)		::String library = null();
HXDLIN(  85)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null(),true);
HXDLIN(  85)		bool xmlExists = false;
HXDLIN(  85)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  85)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  85)			xmlExists = true;
            		}
HXDLIN(  85)		 ::Dynamic _hx_tmp7;
HXDLIN(  85)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  85)			_hx_tmp7 = imageLoaded;
            		}
            		else {
HXLINE(  85)			_hx_tmp7 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library,true);
            		}
HXDLIN(  85)		::String _hx_tmp8;
HXDLIN(  85)		if (xmlExists) {
HXLINE(  85)			_hx_tmp8 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE(  85)			_hx_tmp8 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN(  85)		_hx_tmp6->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp7,_hx_tmp8));
HXLINE(  86)		this->arrowUP->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow push left",f6,7a,62,0c),24,true,null(),null());
HXLINE(  87)		this->arrowUP->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("arrow left",be,05,f8,94),24,true,null(),null());
HXLINE(  88)		this->arrowUP->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  89)		this->arrowUP->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  90)		this->arrowUP->set_angle(( (Float)(90) ));
HXLINE(  91)		this->arrowUP->set_flipY(true);
HXLINE(  92)		this->add(this->arrowUP);
HXLINE(  94)		this->arrowDOWN =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,950,(::flixel::FlxG_obj::height - 100),null());
HXLINE(  95)		 ::flixel::FlxSprite _hx_tmp9 = this->arrowDOWN;
HXDLIN(  95)		::String library1 = null();
HXDLIN(  95)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null(),true);
HXDLIN(  95)		bool xmlExists1 = false;
HXDLIN(  95)		::String xml1 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  95)		if (::sys::FileSystem_obj::exists(xml1)) {
HXLINE(  95)			xmlExists1 = true;
            		}
HXDLIN(  95)		 ::Dynamic _hx_tmp10;
HXDLIN(  95)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE(  95)			_hx_tmp10 = imageLoaded1;
            		}
            		else {
HXLINE(  95)			_hx_tmp10 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library1,true);
            		}
HXDLIN(  95)		::String _hx_tmp11;
HXDLIN(  95)		if (xmlExists1) {
HXLINE(  95)			_hx_tmp11 = ::sys::io::File_obj::getContent(xml1);
            		}
            		else {
HXLINE(  95)			_hx_tmp11 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),null(),library1,null());
            		}
HXDLIN(  95)		_hx_tmp9->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp10,_hx_tmp11));
HXLINE(  96)		this->arrowDOWN->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow push left",f6,7a,62,0c),24,true,null(),null());
HXLINE(  97)		this->arrowDOWN->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("arrow left",be,05,f8,94),24,true,null(),null());
HXLINE(  98)		this->arrowDOWN->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  99)		this->arrowDOWN->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 100)		this->arrowDOWN->set_angle(( (Float)(-90) ));
HXLINE( 101)		this->arrowDOWN->set_flipY(true);
HXLINE( 102)		this->add(this->arrowDOWN);
HXLINE( 104)		 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 104)		 ::flixel::FlxSprite black1 = black->loadGraphic(::backend::Paths_obj::image(HX_("loadingScreen",08,83,58,30),null(),null()),null(),null(),null(),null(),null());
HXLINE( 105)		{
HXLINE( 105)			int axes2 = 17;
HXDLIN( 105)			bool _hx_tmp12;
HXDLIN( 105)			if ((axes2 != 1)) {
HXLINE( 105)				_hx_tmp12 = (axes2 == 17);
            			}
            			else {
HXLINE( 105)				_hx_tmp12 = true;
            			}
HXDLIN( 105)			if (_hx_tmp12) {
HXLINE( 105)				 ::flixel::FlxSprite black = black1;
HXDLIN( 105)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 105)				black->set_x(((( (Float)(_hx_tmp) ) - black1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 105)			bool _hx_tmp13;
HXDLIN( 105)			if ((axes2 != 16)) {
HXLINE( 105)				_hx_tmp13 = (axes2 == 17);
            			}
            			else {
HXLINE( 105)				_hx_tmp13 = true;
            			}
HXDLIN( 105)			if (_hx_tmp13) {
HXLINE( 105)				 ::flixel::FlxSprite black = black1;
HXDLIN( 105)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 105)				black->set_y(((( (Float)(_hx_tmp) ) - black1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 106)		this->add(black1);
HXLINE( 108)		this->errorText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.8)),HX_("slay",d1,d1,55,4c),20,null());
HXLINE( 109)		this->errorText->set_alpha(( (Float)(0) ));
HXLINE( 110)		this->errorText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 111)		this->add(this->errorText);
HXLINE( 113)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("volume",da,29,53,5f),((Float)0.5))),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 114)		this->call((this->URL + HX_("image-list.txt",d2,f4,be,54)), ::Dynamic(new _hx_Closure_2(_gthis,black1)),1);
            	}


void GalleryMenuState_obj::call(::String url, ::Dynamic callBack, ::Dynamic dataFormat){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis, ::openfl::net::URLLoader,file, ::Dynamic,callBack) HXARGC(1)
            		void _hx_run( ::openfl::events::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_161_call)
HXLINE( 161)			callBack(file->data);
HXDLIN( 161)			_gthis->errorText->set_alpha(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_2, ::states::GalleryMenuState,_gthis, ::Dynamic,dataFormat,::String,url, ::Dynamic,callBack) HXARGC(1)
            		void _hx_run( ::openfl::events::IOErrorEvent e){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,dataFormat, ::states::GalleryMenuState,_gthis, ::Dynamic,callBack,::String,url) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_170_call)
HXLINE( 170)				_gthis->call(url,callBack,dataFormat);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_167_call)
HXLINE( 168)			::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),168,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("call",9e,18,ba,41)));
HXLINE( 169)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_1(dataFormat,_gthis,callBack,url)),null());
HXLINE( 173)			::String shortText = e->text;
HXLINE( 174)			if ((shortText == HX_("Couldn't resolve host name",49,5c,ee,f5))) {
HXLINE( 175)				shortText = HX_("no internet",80,9a,7f,46);
            			}
HXLINE( 176)			if ((shortText.indexOf(HX_("404",38,9f,27,00),null()) != -1)) {
HXLINE( 177)				shortText = HX_("file not found, please contact _etoile_ on discord about this if you can",97,4c,d7,9a);
            			}
HXLINE( 179)			_gthis->errorText->set_alpha(( (Float)(1) ));
HXLINE( 180)			_gthis->errorText->set_text(((HX_("ERROR CAUGHT : ",52,ce,0b,0f) + shortText) + HX_("\nrestart the menu or wait one seconed\nthis menu is very rushed so please be patient",b6,a0,19,c2)));
HXLINE( 181)			{
HXLINE( 181)				 ::flixel::text::FlxText _this = _gthis->errorText;
HXDLIN( 181)				int axes = 1;
HXDLIN( 181)				bool _hx_tmp;
HXDLIN( 181)				if ((axes != 1)) {
HXLINE( 181)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 181)					_hx_tmp = true;
            				}
HXDLIN( 181)				if (_hx_tmp) {
HXLINE( 181)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 181)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 181)				bool _hx_tmp1;
HXDLIN( 181)				if ((axes != 16)) {
HXLINE( 181)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 181)					_hx_tmp1 = true;
            				}
HXDLIN( 181)				if (_hx_tmp1) {
HXLINE( 181)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 181)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_155_call)
HXDLIN( 155)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 156)		 ::openfl::net::URLRequest request =  ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url);
HXLINE( 158)		 ::openfl::net::URLLoader file =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 159)		file->dataFormat = dataFormat;
HXLINE( 161)		file->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_0(_gthis,file,callBack)),null(),null(),null());
HXLINE( 167)		file->addEventListener(HX_("ioError",02,fe,41,76), ::Dynamic(new _hx_Closure_2(_gthis,dataFormat,url,callBack)),null(),null(),null());
HXLINE( 184)		file->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC3(GalleryMenuState_obj,call,(void))

void GalleryMenuState_obj::changeSelection(int num){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_210_changeSelection)
HXLINE( 210)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_211_changeSelection)
HXLINE( 211)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_212_changeSelection)
HXLINE( 212)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_214_changeSelection)
HXLINE( 214)			if ((image->ID == _gthis->curSelected)) {
HXLINE( 215)				image->set_visible(true);
HXLINE( 216)				image->set_alpha(((Float)0.6));
HXLINE( 217)				image->set_y(( (Float)(150) ));
HXLINE( 218)				::flixel::tweens::FlxTween_obj::tween(image, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("y",79,00,00,00),160)
            					->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.07),null());
            			}
            			else {
HXLINE( 221)				image->set_visible(false);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_187_changeSelection)
HXDLIN( 187)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 188)		if (!(this->ready)) {
HXLINE( 188)			return;
            		}
HXLINE( 189)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 189)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 190)		 ::states::GalleryMenuState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + num);
HXLINE( 192)		 ::flixel::group::FlxTypedGroup curGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 193)		::String _hx_switch_0 = this->items->__get(this->curSelectedButton);
            		if (  (_hx_switch_0==HX_("concept",68,ee,3a,0e)) ){
HXLINE( 197)			curGroup = this->conceptGroup;
HXDLIN( 197)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("nastya",5c,ee,7b,21)) ){
HXLINE( 195)			curGroup = this->nastyaGroup;
HXDLIN( 195)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("other",d0,66,76,36)) ){
HXLINE( 199)			curGroup = this->otherGroup;
HXDLIN( 199)			goto _hx_goto_17;
            		}
            		_hx_goto_17:;
HXLINE( 202)		if ((this->curSelected > (curGroup->members->get_length() - 1))) {
HXLINE( 203)			this->curSelected = 0;
            		}
HXLINE( 204)		if ((this->curSelected < 0)) {
HXLINE( 205)			this->curSelected = ::Std_obj::_hx_int(( (Float)((curGroup->members->get_length() - 1)) ));
            		}
HXLINE( 207)		this->imagesText->set_text(((((HX_("(",28,00,00,00) + (this->curSelected + 1)) + HX_(" / ",31,71,18,00)) + curGroup->members->get_length()) + HX_(")",29,00,00,00)));
HXLINE( 208)		{
HXLINE( 208)			 ::flixel::text::FlxText _this = this->imagesText;
HXDLIN( 208)			int axes = 1;
HXDLIN( 208)			bool _hx_tmp2;
HXDLIN( 208)			if ((axes != 1)) {
HXLINE( 208)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE( 208)				_hx_tmp2 = true;
            			}
HXDLIN( 208)			if (_hx_tmp2) {
HXLINE( 208)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 208)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 208)			bool _hx_tmp3;
HXDLIN( 208)			if ((axes != 16)) {
HXLINE( 208)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE( 208)				_hx_tmp3 = true;
            			}
HXDLIN( 208)			if (_hx_tmp3) {
HXLINE( 208)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 208)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 210)		this->nastyaGroup->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 211)		this->conceptGroup->forEach( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 212)		this->otherGroup->forEach( ::Dynamic(new _hx_Closure_2()),null());
HXLINE( 213)		curGroup->forEach( ::Dynamic(new _hx_Closure_3(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalleryMenuState_obj,changeSelection,(void))

void GalleryMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_228_update)
HXLINE( 229)			if (::flixel::FlxG_obj::mouse->overlaps(button,null())) {
HXLINE( 230)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 231)					_gthis->curSelectedButton = button->ID;
HXLINE( 232)					_gthis->changeSelection(0);
            				}
HXLINE( 234)				button->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 236)				button->set_alpha(((Float)0.9));
            			}
HXLINE( 238)			if ((button->ID == _gthis->curSelectedButton)) {
HXLINE( 239)				button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 240)				{
HXLINE( 240)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 240)					Float y = ( (Float)(_gthis->itemOffsets->__get(button->ID).StaticCast< ::Array< int > >()->__get(1)) );
HXDLIN( 240)					this1->set_x(( (Float)(_gthis->itemOffsets->__get(button->ID).StaticCast< ::Array< int > >()->__get(0)) ));
HXDLIN( 240)					this1->set_y(y);
            				}
HXLINE( 241)				button->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 244)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 245)				{
HXLINE( 245)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 245)					this1->set_x(( (Float)(0) ));
HXDLIN( 245)					this1->set_y(( (Float)(0) ));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_225_update)
HXDLIN( 225)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 226)		this->super::update(elapsed);
HXLINE( 228)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 249)		if (this->get_controls()->get_UI_UP_P()) {
HXLINE( 250)			this->changeSelection(-1);
            		}
HXLINE( 251)		if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE( 252)			this->changeSelection(1);
            		}
HXLINE( 254)		if (this->get_controls()->get_UI_UP()) {
HXLINE( 255)			this->arrowUP->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
            		}
            		else {
HXLINE( 257)			this->arrowUP->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 259)		if (this->get_controls()->get_UI_DOWN()) {
HXLINE( 260)			this->arrowDOWN->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
            		}
            		else {
HXLINE( 262)			this->arrowDOWN->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 264)		if (this->get_controls()->get_BACK()) {
HXLINE( 265)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 266)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 266)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 267)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
HXLINE( 268)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(1) ));
            		}
            	}



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
	HX_MARK_MEMBER_NAME(arrowUP,"arrowUP");
	HX_MARK_MEMBER_NAME(arrowDOWN,"arrowDOWN");
	HX_MARK_MEMBER_NAME(imagesText,"imagesText");
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
	HX_VISIT_MEMBER_NAME(arrowUP,"arrowUP");
	HX_VISIT_MEMBER_NAME(arrowDOWN,"arrowDOWN");
	HX_VISIT_MEMBER_NAME(imagesText,"imagesText");
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
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return ::hx::Val( items ); }
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arrowUP") ) { return ::hx::Val( arrowUP ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldMouse") ) { return ::hx::Val( oldMouse ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { return ::hx::Val( itemGroup ); }
		if (HX_FIELD_EQ(inName,"arrowDOWN") ) { return ::hx::Val( arrowDOWN ); }
		if (HX_FIELD_EQ(inName,"errorText") ) { return ::hx::Val( errorText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"otherGroup") ) { return ::hx::Val( otherGroup ); }
		if (HX_FIELD_EQ(inName,"imagesText") ) { return ::hx::Val( imagesText ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nastyaGroup") ) { return ::hx::Val( nastyaGroup ); }
		if (HX_FIELD_EQ(inName,"itemOffsets") ) { return ::hx::Val( itemOffsets ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conceptGroup") ) { return ::hx::Val( conceptGroup ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"curSelectedButton") ) { return ::hx::Val( curSelectedButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GalleryMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"URL") ) { URL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arrowUP") ) { arrowUP=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldMouse") ) { oldMouse=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemGroup") ) { itemGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowDOWN") ) { arrowDOWN=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"errorText") ) { errorText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"otherGroup") ) { otherGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imagesText") ) { imagesText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nastyaGroup") ) { nastyaGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemOffsets") ) { itemOffsets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conceptGroup") ) { conceptGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"curSelectedButton") ) { curSelectedButton=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
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
	outFields->push(HX_("arrowUP",64,88,b8,43));
	outFields->push(HX_("arrowDOWN",ab,52,f9,fd));
	outFields->push(HX_("imagesText",85,05,88,e7));
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
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GalleryMenuState_obj,arrowUP),HX_("arrowUP",64,88,b8,43)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GalleryMenuState_obj,arrowDOWN),HX_("arrowDOWN",ab,52,f9,fd)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,imagesText),HX_("imagesText",85,05,88,e7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,errorText),HX_("errorText",95,48,62,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GalleryMenuState_obj_sStaticStorageInfo = 0;
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
	HX_("arrowUP",64,88,b8,43),
	HX_("arrowDOWN",ab,52,f9,fd),
	HX_("imagesText",85,05,88,e7),
	HX_("create",fc,66,0f,7c),
	HX_("errorText",95,48,62,73),
	HX_("call",9e,18,ba,41),
	HX_("changeSelection",bc,98,b5,48),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class GalleryMenuState_obj::__mClass;

void GalleryMenuState_obj::__register()
{
	GalleryMenuState_obj _hx_dummy;
	GalleryMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.GalleryMenuState",cc,d1,35,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GalleryMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GalleryMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GalleryMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GalleryMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
