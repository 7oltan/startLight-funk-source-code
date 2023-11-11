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
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_125_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",125,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_131_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",131,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_154_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",154,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_43_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",43,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_172_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",172,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_181_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",181,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_178_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",178,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_166_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",166,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_226_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",226,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_227_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",227,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_228_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",228,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_230_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",230,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_198_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",198,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_244_update,"states.GalleryMenuState","update",0xe1aa1c6b,"states.GalleryMenuState.update","states/GalleryMenuState.hx",244,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_241_update,"states.GalleryMenuState","update",0xe1aa1c6b,"states.GalleryMenuState.update","states/GalleryMenuState.hx",241,0xdfe23d11)
namespace states{

void GalleryMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_16_new)
HXLINE(  36)		this->ready = false;
HXLINE(  35)		this->curSelected = 0;
HXLINE(  34)		this->curSelectedButton = 0;
HXLINE(  32)		this->URL = HX_("https://raw.githack.com/1Etoile1/eee/main/",f9,74,3a,44);
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
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_125_create)
HXLINE( 126)			::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXDLIN( 126)			daList = ::StringTools_obj::trim(dataText).split(HX_("\n",0a,00,00,00));
HXDLIN( 126)			{
HXLINE( 126)				int _g = 0;
HXDLIN( 126)				int _g1 = daList->length;
HXDLIN( 126)				while((_g < _g1)){
HXLINE( 126)					_g = (_g + 1);
HXDLIN( 126)					int i = (_g - 1);
HXDLIN( 126)					daList[i] = ::StringTools_obj::trim(daList->__get(i));
            				}
            			}
HXDLIN( 126)			::Array< ::String > imageList = daList;
HXLINE( 128)			{
HXLINE( 128)				int _g2 = 0;
HXDLIN( 128)				int _g3 = imageList->length;
HXDLIN( 128)				while((_g2 < _g3)){
            					HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_1,::String,name, ::states::GalleryMenuState,_gthis,::String,type,::Array< ::String >,imageList, ::flixel::FlxSprite,black1) HXARGC(1)
            					void _hx_run( ::openfl::utils::ByteArrayData data){
            						HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_131_create)
HXLINE( 132)						::haxe::Log_obj::trace(name,::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),132,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("create",fc,66,0f,7c)));
HXLINE( 133)						 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 133)						 ::openfl::utils::ByteArrayData dataBYTE = this1;
HXLINE( 134)						data->__Field(HX_("readBytes",35,55,7f,8e),::hx::paccDynamic)(dataBYTE,0,(( (int)(data->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) ) - ( (int)(data->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) )));
HXLINE( 136)						 ::flixel::FlxSprite image =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,770,160,null());
HXDLIN( 136)						 ::openfl::display::BitmapData image1 = ::openfl::display::BitmapData_obj::fromBytes(data,null());
HXDLIN( 136)						 ::flixel::FlxSprite image2 = image->loadGraphic(::flixel::graphics::FlxGraphic_obj::fromBitmapData(image1,false,name,null()),null(),null(),null(),null(),null());
HXLINE( 137)						image2->setGraphicSize(400,400);
HXLINE( 138)						image2->updateHitbox();
HXLINE( 139)						image2->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 140)						image2->set_alpha(((Float)0.00000000000001));
HXLINE( 141)						::String _hx_switch_0 = type;
            						if (  (_hx_switch_0==HX_("C",43,00,00,00)) ){
HXLINE( 146)							image2->ID = _gthis->conceptGroup->members->get_length();
HXLINE( 147)							_gthis->conceptGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 145)							goto _hx_goto_8;
            						}
            						if (  (_hx_switch_0==HX_("N",4e,00,00,00)) ){
HXLINE( 143)							image2->ID = _gthis->nastyaGroup->members->get_length();
HXLINE( 144)							_gthis->nastyaGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 142)							goto _hx_goto_8;
            						}
            						if (  (_hx_switch_0==HX_("O",4f,00,00,00)) ){
HXLINE( 149)							image2->ID = _gthis->otherGroup->members->get_length();
HXLINE( 150)							_gthis->otherGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 148)							goto _hx_goto_8;
            						}
            						_hx_goto_8:;
HXLINE( 152)						if ((imageList->length == ((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length()))) {
            							HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1) HXARGC(1)
            							void _hx_run( ::flixel::tweens::FlxTween t){
            								HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_154_create)
HXLINE( 154)								_gthis->remove(black1,null()).StaticCast<  ::flixel::FlxBasic >();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 153)							_gthis->ready = true;
HXLINE( 154)							::flixel::tweens::FlxTween_obj::tween(black1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            								->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis,black1)))));
HXLINE( 155)							::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("volume",da,29,53,5f),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 156)							_gthis->errorText->set_alpha(( (Float)(0) ));
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 128)					_g2 = (_g2 + 1);
HXDLIN( 128)					int i = (_g2 - 1);
HXLINE( 129)					::String name = imageList->__get(i).split(HX_(">",3e,00,00,00))->__get(0);
HXLINE( 130)					::String type = imageList->__get(i).split(HX_(">",3e,00,00,00))->__get(1);
HXLINE( 131)					_gthis->call((_gthis->URL + name), ::Dynamic(new _hx_Closure_1(name,_gthis,type,imageList,black1)),0);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_43_create)
HXDLIN(  43)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  44)		this->super::create();
HXLINE(  46)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  47)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  49)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  49)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("gallery-bg",e0,21,9c,4d),null(),null()),null(),null(),null(),null(),null());
HXLINE(  50)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  51)		{
HXLINE(  51)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  51)			this1->set_x(( (Float)(0) ));
HXDLIN(  51)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  52)		{
HXLINE(  52)			int axes = 17;
HXDLIN(  52)			bool _hx_tmp;
HXDLIN(  52)			if ((axes != 1)) {
HXLINE(  52)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  52)				_hx_tmp = true;
            			}
HXDLIN(  52)			if (_hx_tmp) {
HXLINE(  52)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  52)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  52)			bool _hx_tmp1;
HXDLIN(  52)			if ((axes != 16)) {
HXLINE(  52)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  52)				_hx_tmp1 = true;
            			}
HXDLIN(  52)			if (_hx_tmp1) {
HXLINE(  52)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  52)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  53)		this->add(bg1);
HXLINE(  55)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  55)		::String _hx_tmp3;
HXDLIN(  55)		if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 10)) {
HXLINE(  55)			_hx_tmp3 = HX_("nastya-funky",bc,4f,71,dc);
            		}
            		else {
HXLINE(  55)			_hx_tmp3 = HX_("nastya-gallery",61,3a,71,db);
            		}
HXDLIN(  55)		this->nastya = _hx_tmp2->loadGraphic(::backend::Paths_obj::image(_hx_tmp3,null(),null()),null(),null(),null(),null(),null());
HXLINE(  56)		this->nastya->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  57)		{
HXLINE(  57)			 ::flixel::math::FlxBasePoint this2 = this->nastya->scrollFactor;
HXDLIN(  57)			this2->set_x(( (Float)(0) ));
HXDLIN(  57)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  58)		 ::flixel::FlxSprite _hx_tmp4 = this->nastya;
HXDLIN(  58)		_hx_tmp4->setGraphicSize(::Std_obj::_hx_int((this->nastya->get_width() * ((Float)0.4))),null());
HXLINE(  59)		this->nastya->updateHitbox();
HXLINE(  60)		 ::flixel::FlxSprite _hx_tmp5 = this->nastya;
HXDLIN(  60)		Float _hx_tmp6 = ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(100) ));
HXDLIN(  60)		int _hx_tmp7 = ::flixel::FlxG_obj::height;
HXDLIN(  60)		_hx_tmp5->setPosition(_hx_tmp6,(( (Float)(_hx_tmp7) ) - this->nastya->get_height()));
HXLINE(  61)		this->add(this->nastya);
HXLINE(  63)		this->imagesText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.8)),HX_("( ? / ? )",fe,72,66,48),20,null());
HXLINE(  64)		{
HXLINE(  64)			 ::flixel::text::FlxText _this = this->imagesText;
HXDLIN(  64)			int axes1 = 1;
HXDLIN(  64)			bool _hx_tmp8;
HXDLIN(  64)			if ((axes1 != 1)) {
HXLINE(  64)				_hx_tmp8 = (axes1 == 17);
            			}
            			else {
HXLINE(  64)				_hx_tmp8 = true;
            			}
HXDLIN(  64)			if (_hx_tmp8) {
HXLINE(  64)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  64)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  64)			bool _hx_tmp9;
HXDLIN(  64)			if ((axes1 != 16)) {
HXLINE(  64)				_hx_tmp9 = (axes1 == 17);
            			}
            			else {
HXLINE(  64)				_hx_tmp9 = true;
            			}
HXDLIN(  64)			if (_hx_tmp9) {
HXLINE(  64)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  64)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  65)		 ::flixel::text::FlxText _hx_tmp10 = this->imagesText;
HXDLIN(  65)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  65)		::String _hx_tmp11;
HXDLIN(  65)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  65)			_hx_tmp11 = file;
            		}
            		else {
HXLINE(  65)			_hx_tmp11 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  65)		_hx_tmp10->setFormat(_hx_tmp11,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  66)		this->imagesText->set_borderSize(( (Float)(2) ));
HXLINE(  67)		this->add(this->imagesText);
HXLINE(  69)		this->itemGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  70)		this->add(this->itemGroup);
HXLINE(  72)		{
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			int _g1 = this->items->length;
HXDLIN(  72)			while((_g < _g1)){
HXLINE(  72)				_g = (_g + 1);
HXDLIN(  72)				int i = (_g - 1);
HXLINE(  73)				 ::flixel::FlxSprite button =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(50 + (i * 100)),(200 + (i * 170)),null());
HXLINE(  74)				::String library = null();
HXDLIN(  74)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("gallery-ui",6f,32,9c,4d),null(),true);
HXDLIN(  74)				bool xmlExists = false;
HXDLIN(  74)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("gallery-ui",6f,32,9c,4d)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  74)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  74)					xmlExists = true;
            				}
HXDLIN(  74)				 ::Dynamic _hx_tmp;
HXDLIN(  74)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  74)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  74)					_hx_tmp = ::backend::Paths_obj::image(HX_("gallery-ui",6f,32,9c,4d),library,true);
            				}
HXDLIN(  74)				::String _hx_tmp1;
HXDLIN(  74)				if (xmlExists) {
HXLINE(  74)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE(  74)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gallery-ui",6f,32,9c,4d)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN(  74)				button->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  75)				button->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->items->__get(i) + HX_("0",30,00,00,00)),24,true,null(),null());
HXLINE(  76)				button->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->items->__get(i) + HX_(" select",1c,f3,e1,9c)),24,true,null(),null());
HXLINE(  77)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  78)				button->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  79)				{
HXLINE(  79)					 ::flixel::math::FlxBasePoint this1 = button->scrollFactor;
HXDLIN(  79)					this1->set_x(( (Float)(0) ));
HXDLIN(  79)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(  80)				button->ID = i;
HXLINE(  81)				this->itemGroup->add(button).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  84)		this->nastyaGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  85)		this->add(this->nastyaGroup);
HXLINE(  87)		this->conceptGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  88)		this->add(this->conceptGroup);
HXLINE(  90)		this->otherGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  91)		this->add(this->otherGroup);
HXLINE(  93)		this->arrowUP =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,950,10,null());
HXLINE(  94)		 ::flixel::FlxSprite _hx_tmp12 = this->arrowUP;
HXDLIN(  94)		::String library = null();
HXDLIN(  94)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null(),true);
HXDLIN(  94)		bool xmlExists = false;
HXDLIN(  94)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  94)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  94)			xmlExists = true;
            		}
HXDLIN(  94)		 ::Dynamic _hx_tmp13;
HXDLIN(  94)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  94)			_hx_tmp13 = imageLoaded;
            		}
            		else {
HXLINE(  94)			_hx_tmp13 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library,true);
            		}
HXDLIN(  94)		::String _hx_tmp14;
HXDLIN(  94)		if (xmlExists) {
HXLINE(  94)			_hx_tmp14 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE(  94)			_hx_tmp14 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN(  94)		_hx_tmp12->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp13,_hx_tmp14));
HXLINE(  95)		this->arrowUP->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow push left",f6,7a,62,0c),24,true,null(),null());
HXLINE(  96)		this->arrowUP->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("arrow left",be,05,f8,94),24,true,null(),null());
HXLINE(  97)		this->arrowUP->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  98)		this->arrowUP->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  99)		this->arrowUP->set_angle(( (Float)(90) ));
HXLINE( 100)		this->arrowUP->set_flipY(true);
HXLINE( 101)		this->arrowUP->set_visible(false);
HXLINE( 102)		this->add(this->arrowUP);
HXLINE( 104)		this->arrowDOWN =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,950,(::flixel::FlxG_obj::height - 100),null());
HXLINE( 105)		 ::flixel::FlxSprite _hx_tmp15 = this->arrowDOWN;
HXDLIN( 105)		::String library1 = null();
HXDLIN( 105)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null(),true);
HXDLIN( 105)		bool xmlExists1 = false;
HXDLIN( 105)		::String xml1 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 105)		if (::sys::FileSystem_obj::exists(xml1)) {
HXLINE( 105)			xmlExists1 = true;
            		}
HXDLIN( 105)		 ::Dynamic _hx_tmp16;
HXDLIN( 105)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE( 105)			_hx_tmp16 = imageLoaded1;
            		}
            		else {
HXLINE( 105)			_hx_tmp16 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library1,true);
            		}
HXDLIN( 105)		::String _hx_tmp17;
HXDLIN( 105)		if (xmlExists1) {
HXLINE( 105)			_hx_tmp17 = ::sys::io::File_obj::getContent(xml1);
            		}
            		else {
HXLINE( 105)			_hx_tmp17 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),null(),library1,null());
            		}
HXDLIN( 105)		_hx_tmp15->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp16,_hx_tmp17));
HXLINE( 106)		this->arrowDOWN->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow push left",f6,7a,62,0c),24,true,null(),null());
HXLINE( 107)		this->arrowDOWN->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("arrow left",be,05,f8,94),24,true,null(),null());
HXLINE( 108)		this->arrowDOWN->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 109)		this->arrowDOWN->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 110)		this->arrowDOWN->set_angle(( (Float)(-90) ));
HXLINE( 111)		this->arrowDOWN->set_flipY(true);
HXLINE( 112)		this->arrowDOWN->set_visible(false);
HXLINE( 113)		this->add(this->arrowDOWN);
HXLINE( 115)		 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 115)		 ::flixel::FlxSprite black1 = black->loadGraphic(::backend::Paths_obj::image(HX_("loadingScreen",08,83,58,30),null(),null()),null(),null(),null(),null(),null());
HXLINE( 116)		{
HXLINE( 116)			int axes2 = 17;
HXDLIN( 116)			bool _hx_tmp18;
HXDLIN( 116)			if ((axes2 != 1)) {
HXLINE( 116)				_hx_tmp18 = (axes2 == 17);
            			}
            			else {
HXLINE( 116)				_hx_tmp18 = true;
            			}
HXDLIN( 116)			if (_hx_tmp18) {
HXLINE( 116)				 ::flixel::FlxSprite black = black1;
HXDLIN( 116)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 116)				black->set_x(((( (Float)(_hx_tmp) ) - black1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 116)			bool _hx_tmp19;
HXDLIN( 116)			if ((axes2 != 16)) {
HXLINE( 116)				_hx_tmp19 = (axes2 == 17);
            			}
            			else {
HXLINE( 116)				_hx_tmp19 = true;
            			}
HXDLIN( 116)			if (_hx_tmp19) {
HXLINE( 116)				 ::flixel::FlxSprite black = black1;
HXDLIN( 116)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 116)				black->set_y(((( (Float)(_hx_tmp) ) - black1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 117)		this->add(black1);
HXLINE( 119)		this->errorText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.8)),HX_("slay",d1,d1,55,4c),20,null());
HXLINE( 120)		this->errorText->set_alpha(( (Float)(0) ));
HXLINE( 121)		this->errorText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 122)		this->add(this->errorText);
HXLINE( 124)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("volume",da,29,53,5f),((Float)0.5))),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 125)		this->call((this->URL + HX_("image-list.txt",d2,f4,be,54)), ::Dynamic(new _hx_Closure_2(_gthis,black1)),1);
            	}


void GalleryMenuState_obj::call(::String url, ::Dynamic callBack, ::Dynamic dataFormat){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis, ::openfl::net::URLLoader,file, ::Dynamic,callBack) HXARGC(1)
            		void _hx_run( ::openfl::events::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_172_call)
HXLINE( 172)			callBack(file->data);
HXDLIN( 172)			_gthis->errorText->set_alpha(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_2, ::states::GalleryMenuState,_gthis, ::Dynamic,dataFormat,::String,url, ::Dynamic,callBack) HXARGC(1)
            		void _hx_run( ::openfl::events::IOErrorEvent e){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,dataFormat, ::states::GalleryMenuState,_gthis, ::Dynamic,callBack,::String,url) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_181_call)
HXLINE( 181)				_gthis->call(url,callBack,dataFormat);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_178_call)
HXLINE( 179)			::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),179,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("call",9e,18,ba,41)));
HXLINE( 180)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_1(dataFormat,_gthis,callBack,url)),null());
HXLINE( 184)			::String shortText = e->text;
HXLINE( 185)			if ((shortText == HX_("Couldn't resolve host name",49,5c,ee,f5))) {
HXLINE( 186)				shortText = HX_("no internet",80,9a,7f,46);
            			}
HXLINE( 187)			if ((shortText.indexOf(HX_("404",38,9f,27,00),null()) != -1)) {
HXLINE( 188)				shortText = HX_("file not found, please contact _etoile_ on discord about this if you can",97,4c,d7,9a);
            			}
HXLINE( 190)			_gthis->errorText->set_alpha(( (Float)(1) ));
HXLINE( 191)			_gthis->errorText->set_text(((HX_("ERROR CAUGHT : ",52,ce,0b,0f) + shortText) + HX_("\nrestart the menu or wait one seconed\nthis menu is very rushed so please be patient",b6,a0,19,c2)));
HXLINE( 192)			{
HXLINE( 192)				 ::flixel::text::FlxText _this = _gthis->errorText;
HXDLIN( 192)				int axes = 1;
HXDLIN( 192)				bool _hx_tmp;
HXDLIN( 192)				if ((axes != 1)) {
HXLINE( 192)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 192)					_hx_tmp = true;
            				}
HXDLIN( 192)				if (_hx_tmp) {
HXLINE( 192)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 192)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 192)				bool _hx_tmp1;
HXDLIN( 192)				if ((axes != 16)) {
HXLINE( 192)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 192)					_hx_tmp1 = true;
            				}
HXDLIN( 192)				if (_hx_tmp1) {
HXLINE( 192)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 192)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_166_call)
HXDLIN( 166)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 167)		 ::openfl::net::URLRequest request =  ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url);
HXLINE( 169)		 ::openfl::net::URLLoader file =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 170)		file->dataFormat = dataFormat;
HXLINE( 172)		file->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_0(_gthis,file,callBack)),null(),null(),null());
HXLINE( 178)		file->addEventListener(HX_("ioError",02,fe,41,76), ::Dynamic(new _hx_Closure_2(_gthis,dataFormat,url,callBack)),null(),null(),null());
HXLINE( 195)		file->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC3(GalleryMenuState_obj,call,(void))

void GalleryMenuState_obj::changeSelection(int num){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_226_changeSelection)
HXLINE( 226)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_227_changeSelection)
HXLINE( 227)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_228_changeSelection)
HXLINE( 228)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_230_changeSelection)
HXLINE( 230)			if ((image->ID == _gthis->curSelected)) {
HXLINE( 231)				image->set_visible(true);
HXLINE( 232)				image->set_alpha(((Float)0.6));
HXLINE( 233)				image->set_y(( (Float)(150) ));
HXLINE( 234)				::flixel::tweens::FlxTween_obj::tween(image, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("y",79,00,00,00),160)
            					->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.07),null());
            			}
            			else {
HXLINE( 237)				image->set_visible(false);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_198_changeSelection)
HXDLIN( 198)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 199)		if (!(this->ready)) {
HXLINE( 199)			return;
            		}
HXLINE( 200)		this->nastya->set_visible(false);
HXLINE( 202)		this->arrowUP->set_visible(true);
HXLINE( 203)		this->arrowDOWN->set_visible(true);
HXLINE( 205)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 205)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 206)		 ::states::GalleryMenuState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 206)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + num);
HXLINE( 208)		 ::flixel::group::FlxTypedGroup curGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 209)		::String _hx_switch_0 = this->items->__get(this->curSelectedButton);
            		if (  (_hx_switch_0==HX_("concept",68,ee,3a,0e)) ){
HXLINE( 213)			curGroup = this->conceptGroup;
HXDLIN( 213)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("nastya",5c,ee,7b,21)) ){
HXLINE( 211)			curGroup = this->nastyaGroup;
HXDLIN( 211)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("other",d0,66,76,36)) ){
HXLINE( 215)			curGroup = this->otherGroup;
HXDLIN( 215)			goto _hx_goto_17;
            		}
            		_hx_goto_17:;
HXLINE( 218)		if ((this->curSelected > (curGroup->members->get_length() - 1))) {
HXLINE( 219)			this->curSelected = 0;
            		}
HXLINE( 220)		if ((this->curSelected < 0)) {
HXLINE( 221)			this->curSelected = ::Std_obj::_hx_int(( (Float)((curGroup->members->get_length() - 1)) ));
            		}
HXLINE( 223)		this->imagesText->set_text(((((HX_("(",28,00,00,00) + (this->curSelected + 1)) + HX_(" / ",31,71,18,00)) + curGroup->members->get_length()) + HX_(")",29,00,00,00)));
HXLINE( 224)		{
HXLINE( 224)			 ::flixel::text::FlxText _this = this->imagesText;
HXDLIN( 224)			int axes = 1;
HXDLIN( 224)			bool _hx_tmp2;
HXDLIN( 224)			if ((axes != 1)) {
HXLINE( 224)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE( 224)				_hx_tmp2 = true;
            			}
HXDLIN( 224)			if (_hx_tmp2) {
HXLINE( 224)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 224)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 224)			bool _hx_tmp3;
HXDLIN( 224)			if ((axes != 16)) {
HXLINE( 224)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE( 224)				_hx_tmp3 = true;
            			}
HXDLIN( 224)			if (_hx_tmp3) {
HXLINE( 224)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 224)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 226)		this->nastyaGroup->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 227)		this->conceptGroup->forEach( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 228)		this->otherGroup->forEach( ::Dynamic(new _hx_Closure_2()),null());
HXLINE( 229)		curGroup->forEach( ::Dynamic(new _hx_Closure_3(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalleryMenuState_obj,changeSelection,(void))

void GalleryMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_244_update)
HXLINE( 245)			if (::flixel::FlxG_obj::mouse->overlaps(button,null())) {
HXLINE( 246)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 247)					_gthis->curSelectedButton = button->ID;
HXLINE( 248)					_gthis->curSelected = 0;
HXLINE( 249)					_gthis->changeSelection(0);
            				}
HXLINE( 251)				button->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 253)				button->set_alpha(((Float)0.9));
            			}
HXLINE( 255)			if ((button->ID == _gthis->curSelectedButton)) {
HXLINE( 256)				button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 257)				{
HXLINE( 257)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 257)					Float y = ( (Float)(_gthis->itemOffsets->__get(button->ID).StaticCast< ::Array< int > >()->__get(1)) );
HXDLIN( 257)					this1->set_x(( (Float)(_gthis->itemOffsets->__get(button->ID).StaticCast< ::Array< int > >()->__get(0)) ));
HXDLIN( 257)					this1->set_y(y);
            				}
HXLINE( 258)				button->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 261)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 262)				{
HXLINE( 262)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 262)					this1->set_x(( (Float)(0) ));
HXDLIN( 262)					this1->set_y(( (Float)(0) ));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_241_update)
HXDLIN( 241)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 242)		this->super::update(elapsed);
HXLINE( 244)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 266)		if (this->get_controls()->get_UI_UP_P()) {
HXLINE( 267)			this->changeSelection(-1);
            		}
HXLINE( 268)		if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE( 269)			this->changeSelection(1);
            		}
HXLINE( 271)		if (this->get_controls()->get_UI_UP()) {
HXLINE( 272)			this->arrowUP->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
            		}
            		else {
HXLINE( 274)			this->arrowUP->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 276)		if (this->get_controls()->get_UI_DOWN()) {
HXLINE( 277)			this->arrowDOWN->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
            		}
            		else {
HXLINE( 279)			this->arrowDOWN->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 281)		if (this->get_controls()->get_BACK()) {
HXLINE( 282)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 283)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 283)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 284)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
HXLINE( 285)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(1) ));
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
	HX_MARK_MEMBER_NAME(nastya,"nastya");
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
	HX_VISIT_MEMBER_NAME(nastya,"nastya");
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
		if (HX_FIELD_EQ(inName,"nastya") ) { return ::hx::Val( nastya ); }
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
	case 6:
		if (HX_FIELD_EQ(inName,"nastya") ) { nastya=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
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
	outFields->push(HX_("nastya",5c,ee,7b,21));
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
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GalleryMenuState_obj,nastya),HX_("nastya",5c,ee,7b,21)},
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
	HX_("nastya",5c,ee,7b,21),
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
