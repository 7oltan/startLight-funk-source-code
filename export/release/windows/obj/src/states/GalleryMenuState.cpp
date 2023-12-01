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
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_149_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",149,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_157_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",157,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_162_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",162,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_193_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",193,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_52_create,"states.GalleryMenuState","create",0xd6b3fd5e,"states.GalleryMenuState.create","states/GalleryMenuState.hx",52,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_220_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",220,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_225_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",225,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_233_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",233,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_229_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",229,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_214_call,"states.GalleryMenuState","call",0x030af280,"states.GalleryMenuState.call","states/GalleryMenuState.hx",214,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_278_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",278,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_279_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",279,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_280_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",280,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_282_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",282,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_250_changeSelection,"states.GalleryMenuState","changeSelection",0xb850261a,"states.GalleryMenuState.changeSelection","states/GalleryMenuState.hx",250,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_302_update,"states.GalleryMenuState","update",0xe1aa1c6b,"states.GalleryMenuState.update","states/GalleryMenuState.hx",302,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_294_update,"states.GalleryMenuState","update",0xe1aa1c6b,"states.GalleryMenuState.update","states/GalleryMenuState.hx",294,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_347_destroy,"states.GalleryMenuState","destroy",0x19e52c58,"states.GalleryMenuState.destroy","states/GalleryMenuState.hx",347,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_95ef7d317be649f3_51_boot,"states.GalleryMenuState","boot",0x026c5e14,"states.GalleryMenuState.boot","states/GalleryMenuState.hx",51,0xdfe23d11)
namespace states{

void GalleryMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_16_new)
HXLINE(  49)		this->lurpLoadingBar = ((Float)0.0);
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
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween t){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_149_create)
HXLINE( 149)			_gthis->GYAT->set_x(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1, ::flixel::FlxSprite,blackBG) HXARGC(1)
            		void _hx_run(::String dataText){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_157_create)
HXLINE( 158)			::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXDLIN( 158)			daList = ::StringTools_obj::trim(dataText).split(HX_("\n",0a,00,00,00));
HXDLIN( 158)			{
HXLINE( 158)				int _g = 0;
HXDLIN( 158)				int _g1 = daList->length;
HXDLIN( 158)				while((_g < _g1)){
HXLINE( 158)					_g = (_g + 1);
HXDLIN( 158)					int i = (_g - 1);
HXDLIN( 158)					daList[i] = ::StringTools_obj::trim(daList->__get(i));
            				}
            			}
HXDLIN( 158)			::Array< ::String > imageList = daList;
HXLINE( 159)			{
HXLINE( 159)				int _g2 = 0;
HXDLIN( 159)				int _g3 = imageList->length;
HXDLIN( 159)				while((_g2 < _g3)){
            					HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_2,::String,name, ::states::GalleryMenuState,_gthis,::String,type,::Array< ::String >,imageList, ::flixel::FlxSprite,black1, ::flixel::FlxSprite,blackBG) HXARGC(1)
            					void _hx_run( ::openfl::utils::ByteArrayData data){
            						HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_162_create)
HXLINE( 163)						::haxe::Log_obj::trace(name,::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),163,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("create",fc,66,0f,7c)));
HXLINE( 164)						 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 164)						 ::openfl::utils::ByteArrayData dataBYTE = this1;
HXLINE( 165)						data->__Field(HX_("readBytes",35,55,7f,8e),::hx::paccDynamic)(dataBYTE,0,(( (int)(data->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) ) - ( (int)(data->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) )));
HXLINE( 167)						 ::flixel::FlxSprite image =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,790,160,null());
HXDLIN( 167)						 ::openfl::display::BitmapData image1 = ::openfl::display::BitmapData_obj::fromBytes(data,null());
HXDLIN( 167)						 ::flixel::FlxSprite image2 = image->loadGraphic(::flixel::graphics::FlxGraphic_obj::fromBitmapData(image1,false,name,null()),null(),null(),null(),null(),null());
HXLINE( 168)						image2->updateHitbox();
HXLINE( 169)						Float _hx_tmp = image2->get_width();
HXDLIN( 169)						if ((_hx_tmp > image2->get_height())) {
HXLINE( 170)							image2->setGraphicSize(400,null());
            						}
            						else {
HXLINE( 172)							image2->setGraphicSize(-1,400);
            						}
HXLINE( 173)						image2->updateHitbox();
HXLINE( 175)						Float image3 = image2->x;
HXDLIN( 175)						image2->set_x((image3 + ((( (Float)(400) ) - image2->get_width()) / ( (Float)(2) ))));
HXLINE( 176)						Float image4 = image2->y;
HXDLIN( 176)						image2->set_y((image4 + ((( (Float)(400) ) - image2->get_height()) / ( (Float)(2) ))));
HXLINE( 178)						image2->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 179)						image2->set_alpha(((Float)0.00000000000001));
HXLINE( 180)						::String _hx_switch_0 = type;
            						if (  (_hx_switch_0==HX_("C",43,00,00,00)) ){
HXLINE( 185)							image2->ID = _gthis->conceptGroup->members->get_length();
HXLINE( 186)							_gthis->conceptGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 184)							goto _hx_goto_8;
            						}
            						if (  (_hx_switch_0==HX_("N",4e,00,00,00)) ){
HXLINE( 182)							image2->ID = _gthis->nastyaGroup->members->get_length();
HXLINE( 183)							_gthis->nastyaGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 181)							goto _hx_goto_8;
            						}
            						if (  (_hx_switch_0==HX_("O",4f,00,00,00)) ){
HXLINE( 188)							image2->ID = _gthis->otherGroup->members->get_length();
HXLINE( 189)							_gthis->otherGroup->add(image2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 187)							goto _hx_goto_8;
            						}
            						_hx_goto_8:;
HXLINE( 191)						if ((imageList->length == ((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length()))) {
            							HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::states::GalleryMenuState,_gthis, ::flixel::FlxSprite,black1) HXARGC(1)
            							void _hx_run( ::flixel::tweens::FlxTween t){
            								HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_193_create)
HXLINE( 193)								_gthis->remove(black1,null()).StaticCast<  ::flixel::FlxBasic >();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 192)							_gthis->ready = true;
HXLINE( 193)							::flixel::tweens::FlxTween_obj::tween(black1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            								->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis,black1)))));
HXLINE( 194)							::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("volume",da,29,53,5f),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 195)							::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE( 196)							blackBG->set_alpha(( (Float)(0) ));
HXLINE( 197)							_gthis->GYAT->set_alpha(( (Float)(0) ));
HXLINE( 198)							_gthis->loadingBar->set_alpha(( (Float)(0) ));
HXLINE( 199)							_gthis->progressBar->set_alpha(( (Float)(0) ));
HXLINE( 200)							_gthis->progressText->set_alpha(( (Float)(0) ));
HXLINE( 201)							_gthis->errorText->set_alpha(( (Float)(0) ));
            						}
HXLINE( 203)						_gthis->progressBar->percent = (( (Float)(((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length())) ) / ( (Float)(imageList->length) ));
HXLINE( 204)						 ::flixel::text::FlxText _gthis1 = _gthis->progressText;
HXDLIN( 204)						::String _hx_tmp1 = (((((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length()) + HX_(" / ",31,71,18,00)) + imageList->length) + HX_(" || ",80,57,85,15));
HXDLIN( 204)						_gthis1->set_text(((_hx_tmp1 + ::Std_obj::_hx_int(((( (Float)(((_gthis->nastyaGroup->members->get_length() + _gthis->conceptGroup->members->get_length()) + _gthis->otherGroup->members->get_length())) ) / ( (Float)(imageList->length) )) * ( (Float)(100) )))) + HX_("%",25,00,00,00)));
HXLINE( 205)						 ::flixel::text::FlxText _gthis2 = _gthis->progressText;
HXDLIN( 205)						Float _gthis3 = _gthis->loadingBar->x;
HXDLIN( 205)						Float _hx_tmp2 = (_gthis3 + _gthis->loadingBar->get_width());
HXDLIN( 205)						Float _hx_tmp3 = _gthis->progressBar->get_width();
HXDLIN( 205)						Float _hx_tmp4 = (_hx_tmp2 + ((_hx_tmp3 - _gthis->loadingBar->get_width()) / ( (Float)(4) )));
HXDLIN( 205)						_gthis2->set_x((_hx_tmp4 - (_gthis->progressText->get_width() / ( (Float)(2) ))));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 159)					_g2 = (_g2 + 1);
HXDLIN( 159)					int i = (_g2 - 1);
HXLINE( 160)					::String name = imageList->__get(i).split(HX_(">",3e,00,00,00))->__get(0);
HXLINE( 161)					::String type = imageList->__get(i).split(HX_(">",3e,00,00,00))->__get(1);
HXLINE( 162)					_gthis->call((_gthis->URL + name), ::Dynamic(new _hx_Closure_2(name,_gthis,type,imageList,black1,blackBG)),0);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_52_create)
HXDLIN(  52)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  53)		this->super::create();
HXLINE(  54)		::states::GalleryMenuState_obj::thisStateIsDestroyed = false;
HXLINE(  56)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  58)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  58)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("gallery-bg",e0,21,9c,4d),null(),null()),null(),null(),null(),null(),null());
HXLINE(  59)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  60)		{
HXLINE(  60)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  60)			this1->set_x(( (Float)(0) ));
HXDLIN(  60)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  61)		{
HXLINE(  61)			int axes = 17;
HXDLIN(  61)			bool _hx_tmp;
HXDLIN(  61)			if ((axes != 1)) {
HXLINE(  61)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  61)				_hx_tmp = true;
            			}
HXDLIN(  61)			if (_hx_tmp) {
HXLINE(  61)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  61)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  61)			bool _hx_tmp1;
HXDLIN(  61)			if ((axes != 16)) {
HXLINE(  61)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  61)				_hx_tmp1 = true;
            			}
HXDLIN(  61)			if (_hx_tmp1) {
HXLINE(  61)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  61)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  62)		this->add(bg1);
HXLINE(  64)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  64)		::String _hx_tmp3;
HXDLIN(  64)		if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 10)) {
HXLINE(  64)			_hx_tmp3 = HX_("nastya-funky",bc,4f,71,dc);
            		}
            		else {
HXLINE(  64)			_hx_tmp3 = HX_("nastya-gallery",61,3a,71,db);
            		}
HXDLIN(  64)		this->nastya = _hx_tmp2->loadGraphic(::backend::Paths_obj::image(_hx_tmp3,null(),null()),null(),null(),null(),null(),null());
HXLINE(  65)		this->nastya->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  66)		{
HXLINE(  66)			 ::flixel::math::FlxBasePoint this2 = this->nastya->scrollFactor;
HXDLIN(  66)			this2->set_x(( (Float)(0) ));
HXDLIN(  66)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  67)		 ::flixel::FlxSprite _hx_tmp4 = this->nastya;
HXDLIN(  67)		_hx_tmp4->setGraphicSize(::Std_obj::_hx_int((this->nastya->get_width() * ((Float)0.4))),null());
HXLINE(  68)		this->nastya->updateHitbox();
HXLINE(  69)		 ::flixel::FlxSprite _hx_tmp5 = this->nastya;
HXDLIN(  69)		Float _hx_tmp6 = ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(100) ));
HXDLIN(  69)		int _hx_tmp7 = ::flixel::FlxG_obj::height;
HXDLIN(  69)		_hx_tmp5->setPosition(_hx_tmp6,(( (Float)(_hx_tmp7) ) - this->nastya->get_height()));
HXLINE(  70)		this->add(this->nastya);
HXLINE(  72)		this->imagesText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.8)),HX_("( ? / ? )",fe,72,66,48),20,null());
HXLINE(  73)		{
HXLINE(  73)			 ::flixel::text::FlxText _this = this->imagesText;
HXDLIN(  73)			int axes1 = 1;
HXDLIN(  73)			bool _hx_tmp8;
HXDLIN(  73)			if ((axes1 != 1)) {
HXLINE(  73)				_hx_tmp8 = (axes1 == 17);
            			}
            			else {
HXLINE(  73)				_hx_tmp8 = true;
            			}
HXDLIN(  73)			if (_hx_tmp8) {
HXLINE(  73)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  73)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  73)			bool _hx_tmp9;
HXDLIN(  73)			if ((axes1 != 16)) {
HXLINE(  73)				_hx_tmp9 = (axes1 == 17);
            			}
            			else {
HXLINE(  73)				_hx_tmp9 = true;
            			}
HXDLIN(  73)			if (_hx_tmp9) {
HXLINE(  73)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  73)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  74)		 ::flixel::text::FlxText _hx_tmp10 = this->imagesText;
HXDLIN(  74)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  74)		::String _hx_tmp11;
HXDLIN(  74)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  74)			_hx_tmp11 = file;
            		}
            		else {
HXLINE(  74)			_hx_tmp11 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  74)		_hx_tmp10->setFormat(_hx_tmp11,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  75)		this->imagesText->set_borderSize(( (Float)(2) ));
HXLINE(  76)		this->add(this->imagesText);
HXLINE(  78)		this->itemGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  79)		this->add(this->itemGroup);
HXLINE(  81)		{
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			int _g1 = this->items->length;
HXDLIN(  81)			while((_g < _g1)){
HXLINE(  81)				_g = (_g + 1);
HXDLIN(  81)				int i = (_g - 1);
HXLINE(  82)				 ::flixel::FlxSprite button =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(50 + (i * 100)),(200 + (i * 170)),null());
HXLINE(  83)				::String library = null();
HXDLIN(  83)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("gallery-ui",6f,32,9c,4d),null(),true);
HXDLIN(  83)				bool xmlExists = false;
HXDLIN(  83)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("gallery-ui",6f,32,9c,4d)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  83)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  83)					xmlExists = true;
            				}
HXDLIN(  83)				 ::Dynamic _hx_tmp;
HXDLIN(  83)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  83)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  83)					_hx_tmp = ::backend::Paths_obj::image(HX_("gallery-ui",6f,32,9c,4d),library,true);
            				}
HXDLIN(  83)				::String _hx_tmp1;
HXDLIN(  83)				if (xmlExists) {
HXLINE(  83)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE(  83)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gallery-ui",6f,32,9c,4d)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN(  83)				button->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  84)				button->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->items->__get(i) + HX_("0",30,00,00,00)),24,true,null(),null());
HXLINE(  85)				button->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->items->__get(i) + HX_(" select",1c,f3,e1,9c)),24,true,null(),null());
HXLINE(  86)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  87)				button->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  88)				{
HXLINE(  88)					 ::flixel::math::FlxBasePoint this1 = button->scrollFactor;
HXDLIN(  88)					this1->set_x(( (Float)(0) ));
HXDLIN(  88)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(  89)				button->ID = i;
HXLINE(  90)				this->itemGroup->add(button).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  93)		this->nastyaGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  94)		this->add(this->nastyaGroup);
HXLINE(  96)		this->conceptGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  97)		this->add(this->conceptGroup);
HXLINE(  99)		this->otherGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 100)		this->add(this->otherGroup);
HXLINE( 102)		this->arrowUP =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,950,10,null());
HXLINE( 103)		 ::flixel::FlxSprite _hx_tmp12 = this->arrowUP;
HXDLIN( 103)		::String library = null();
HXDLIN( 103)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null(),true);
HXDLIN( 103)		bool xmlExists = false;
HXDLIN( 103)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 103)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 103)			xmlExists = true;
            		}
HXDLIN( 103)		 ::Dynamic _hx_tmp13;
HXDLIN( 103)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 103)			_hx_tmp13 = imageLoaded;
            		}
            		else {
HXLINE( 103)			_hx_tmp13 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library,true);
            		}
HXDLIN( 103)		::String _hx_tmp14;
HXDLIN( 103)		if (xmlExists) {
HXLINE( 103)			_hx_tmp14 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 103)			_hx_tmp14 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 103)		_hx_tmp12->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp13,_hx_tmp14));
HXLINE( 104)		this->arrowUP->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow push left",f6,7a,62,0c),24,true,null(),null());
HXLINE( 105)		this->arrowUP->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("arrow left",be,05,f8,94),24,true,null(),null());
HXLINE( 106)		this->arrowUP->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 107)		this->arrowUP->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 108)		this->arrowUP->set_angle(( (Float)(90) ));
HXLINE( 109)		this->arrowUP->set_flipY(true);
HXLINE( 110)		this->arrowUP->set_visible(false);
HXLINE( 111)		this->add(this->arrowUP);
HXLINE( 113)		this->arrowDOWN =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,950,(::flixel::FlxG_obj::height - 100),null());
HXLINE( 114)		 ::flixel::FlxSprite _hx_tmp15 = this->arrowDOWN;
HXDLIN( 114)		::String library1 = null();
HXDLIN( 114)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null(),true);
HXDLIN( 114)		bool xmlExists1 = false;
HXDLIN( 114)		::String xml1 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 114)		if (::sys::FileSystem_obj::exists(xml1)) {
HXLINE( 114)			xmlExists1 = true;
            		}
HXDLIN( 114)		 ::Dynamic _hx_tmp16;
HXDLIN( 114)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE( 114)			_hx_tmp16 = imageLoaded1;
            		}
            		else {
HXLINE( 114)			_hx_tmp16 = ::backend::Paths_obj::image(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library1,true);
            		}
HXDLIN( 114)		::String _hx_tmp17;
HXDLIN( 114)		if (xmlExists1) {
HXLINE( 114)			_hx_tmp17 = ::sys::io::File_obj::getContent(xml1);
            		}
            		else {
HXLINE( 114)			_hx_tmp17 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),null(),library1,null());
            		}
HXDLIN( 114)		_hx_tmp15->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp16,_hx_tmp17));
HXLINE( 115)		this->arrowDOWN->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow push left",f6,7a,62,0c),24,true,null(),null());
HXLINE( 116)		this->arrowDOWN->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("arrow left",be,05,f8,94),24,true,null(),null());
HXLINE( 117)		this->arrowDOWN->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 118)		this->arrowDOWN->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 119)		this->arrowDOWN->set_angle(( (Float)(-90) ));
HXLINE( 120)		this->arrowDOWN->set_flipY(true);
HXLINE( 121)		this->arrowDOWN->set_visible(false);
HXLINE( 122)		this->add(this->arrowDOWN);
HXLINE( 124)		 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 124)		 ::flixel::FlxSprite black1 = black->loadGraphic(::backend::Paths_obj::image(HX_("loadingScreen",08,83,58,30),null(),null()),null(),null(),null(),null(),null());
HXLINE( 125)		{
HXLINE( 125)			int axes2 = 17;
HXDLIN( 125)			bool _hx_tmp18;
HXDLIN( 125)			if ((axes2 != 1)) {
HXLINE( 125)				_hx_tmp18 = (axes2 == 17);
            			}
            			else {
HXLINE( 125)				_hx_tmp18 = true;
            			}
HXDLIN( 125)			if (_hx_tmp18) {
HXLINE( 125)				 ::flixel::FlxSprite black = black1;
HXDLIN( 125)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 125)				black->set_x(((( (Float)(_hx_tmp) ) - black1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 125)			bool _hx_tmp19;
HXDLIN( 125)			if ((axes2 != 16)) {
HXLINE( 125)				_hx_tmp19 = (axes2 == 17);
            			}
            			else {
HXLINE( 125)				_hx_tmp19 = true;
            			}
HXDLIN( 125)			if (_hx_tmp19) {
HXLINE( 125)				 ::flixel::FlxSprite black = black1;
HXDLIN( 125)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 125)				black->set_y(((( (Float)(_hx_tmp) ) - black1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 126)		this->add(black1);
HXLINE( 128)		this->progressBar =  ::states::GalleryBar_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) - (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.85))) / ( (Float)(2) )),(::flixel::FlxG_obj::height - 100),(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.85)),( (Float)(30) ),-16744448,-16777216);
HXLINE( 129)		this->add(this->progressBar);
HXLINE( 131)		Float _hx_tmp20 = ((( (Float)(::flixel::FlxG_obj::width) ) - (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))) / ( (Float)(2) ));
HXDLIN( 131)		Float _hx_tmp21 = this->progressBar->y;
HXDLIN( 131)		Float _hx_tmp22 = (_hx_tmp21 + this->progressBar->get_height());
HXDLIN( 131)		this->loadingBar =  ::states::GalleryBar_obj::__alloc( HX_CTX ,_hx_tmp20,_hx_tmp22,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6)),( (Float)(15) ),-1,-16777216);
HXLINE( 132)		this->add(this->loadingBar);
HXLINE( 134)		Float _hx_tmp23 = this->loadingBar->y;
HXDLIN( 134)		Float _hx_tmp24 = this->progressBar->get_width();
HXDLIN( 134)		this->progressText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-5000,_hx_tmp23,((_hx_tmp24 - this->loadingBar->get_width()) / ( (Float)(2) )),HX_(" ",20,00,00,00),20,null());
HXLINE( 135)		 ::flixel::text::FlxText _hx_tmp25 = this->progressText;
HXDLIN( 135)		::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 135)		::String _hx_tmp26;
HXDLIN( 135)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 135)			_hx_tmp26 = file1;
            		}
            		else {
HXLINE( 135)			_hx_tmp26 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 135)		_hx_tmp25->setFormat(_hx_tmp26,15,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 136)		this->progressText->set_borderSize(( (Float)(2) ));
HXLINE( 137)		this->add(this->progressText);
HXLINE( 139)		::String shitAhhText = HX_("| this Gallery is online! so it takes time to load the images, if you want to submit fanart post it on twitter/X tagging @starlightFunk(fake account) or @___etoile___ |",b2,49,74,8a);
HXLINE( 141)		 ::flixel::FlxSprite blackBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 100),null())->makeGraphic(::flixel::FlxG_obj::width,20,-16777216,null(),null());
HXLINE( 142)		blackBG->set_alpha(((Float)0.7));
HXLINE( 143)		this->add(blackBG);
HXLINE( 145)		this->GYAT =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 100),0,(shitAhhText + shitAhhText),20,null());
HXLINE( 146)		 ::flixel::text::FlxText _hx_tmp27 = this->GYAT;
HXDLIN( 146)		::String file2 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 146)		::String _hx_tmp28;
HXDLIN( 146)		if (::sys::FileSystem_obj::exists(file2)) {
HXLINE( 146)			_hx_tmp28 = file2;
            		}
            		else {
HXLINE( 146)			_hx_tmp28 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 146)		_hx_tmp27->setFormat(_hx_tmp28,20,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 147)		this->GYAT->set_borderSize(( (Float)(2) ));
HXLINE( 148)		this->add(this->GYAT);
HXLINE( 149)		 ::flixel::text::FlxText _hx_tmp29 = this->GYAT;
HXDLIN( 149)		Float _hx_tmp30 = (-(this->GYAT->get_width()) / ( (Float)(2) ));
HXDLIN( 149)		::flixel::tweens::FlxTween_obj::tween(_hx_tmp29, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),_hx_tmp30)),20, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("type",ba,f2,08,4d),2)
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 151)		this->errorText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.8)),HX_("slay",d1,d1,55,4c),20,null());
HXLINE( 152)		this->errorText->set_alpha(( (Float)(0) ));
HXLINE( 153)		this->errorText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 154)		this->add(this->errorText);
HXLINE( 156)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::sound->music, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("volume",da,29,53,5f),((Float)0.5))),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 157)		this->call((this->URL + HX_("image-list.txt",d2,f4,be,54)), ::Dynamic(new _hx_Closure_3(_gthis,black1,blackBG)),1);
            	}


void GalleryMenuState_obj::call(::String url, ::Dynamic callBack, ::Dynamic dataFormat){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis, ::openfl::net::URLLoader,file, ::Dynamic,callBack) HXARGC(1)
            		void _hx_run( ::openfl::events::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_220_call)
HXLINE( 221)			if (::states::GalleryMenuState_obj::thisStateIsDestroyed) {
HXLINE( 221)				return;
            			}
HXLINE( 222)			callBack(file->data);
HXLINE( 223)			_gthis->errorText->set_alpha(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::ProgressEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_225_call)
HXLINE( 226)			_gthis->lurpLoadingBar = (e->bytesLoaded / e->bytesTotal);
HXLINE( 227)			::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),227,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("call",9e,18,ba,41)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_3, ::states::GalleryMenuState,_gthis, ::Dynamic,dataFormat,::String,url, ::Dynamic,callBack) HXARGC(1)
            		void _hx_run( ::openfl::events::IOErrorEvent e){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,dataFormat, ::states::GalleryMenuState,_gthis, ::Dynamic,callBack,::String,url) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_233_call)
HXLINE( 233)				_gthis->call(url,callBack,dataFormat);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_229_call)
HXLINE( 230)			::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/states/GalleryMenuState.hx",05,2d,e9,cc),230,HX_("states.GalleryMenuState",cc,d1,35,c2),HX_("call",9e,18,ba,41)));
HXLINE( 232)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2(dataFormat,_gthis,callBack,url)),null());
HXLINE( 236)			::String shortText = e->text;
HXLINE( 237)			if ((shortText == HX_("Couldn't resolve host name",49,5c,ee,f5))) {
HXLINE( 238)				shortText = HX_("no internet",80,9a,7f,46);
            			}
HXLINE( 239)			if ((shortText.indexOf(HX_("404",38,9f,27,00),null()) != -1)) {
HXLINE( 240)				shortText = HX_("file not found, please contact _etoile_ on discord about this if you can",97,4c,d7,9a);
            			}
HXLINE( 242)			_gthis->errorText->set_alpha(( (Float)(1) ));
HXLINE( 243)			_gthis->errorText->set_text(((HX_("ERROR CAUGHT : ",52,ce,0b,0f) + shortText) + HX_("\nrestart the menu or wait one seconed\nthis menu is very rushed so please be patient",b6,a0,19,c2)));
HXLINE( 244)			{
HXLINE( 244)				 ::flixel::text::FlxText _this = _gthis->errorText;
HXDLIN( 244)				int axes = 1;
HXDLIN( 244)				bool _hx_tmp;
HXDLIN( 244)				if ((axes != 1)) {
HXLINE( 244)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 244)					_hx_tmp = true;
            				}
HXDLIN( 244)				if (_hx_tmp) {
HXLINE( 244)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 244)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 244)				bool _hx_tmp1;
HXDLIN( 244)				if ((axes != 16)) {
HXLINE( 244)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 244)					_hx_tmp1 = true;
            				}
HXDLIN( 244)				if (_hx_tmp1) {
HXLINE( 244)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 244)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_214_call)
HXDLIN( 214)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 215)		 ::openfl::net::URLRequest request =  ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url);
HXLINE( 217)		 ::openfl::net::URLLoader file =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 218)		file->dataFormat = dataFormat;
HXLINE( 220)		file->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_0(_gthis,file,callBack)),null(),null(),null());
HXLINE( 225)		file->addEventListener(HX_("progress",ad,f7,2a,86), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
HXLINE( 229)		file->addEventListener(HX_("ioError",02,fe,41,76), ::Dynamic(new _hx_Closure_3(_gthis,dataFormat,url,callBack)),null(),null(),null());
HXLINE( 247)		file->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC3(GalleryMenuState_obj,call,(void))

void GalleryMenuState_obj::changeSelection(int num){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_278_changeSelection)
HXLINE( 278)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_279_changeSelection)
HXLINE( 279)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_280_changeSelection)
HXLINE( 280)			image->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite image){
            			HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_282_changeSelection)
HXLINE( 282)			if ((image->ID == _gthis->curSelected)) {
HXLINE( 283)				image->set_visible(true);
HXLINE( 284)				image->set_alpha(((Float)0.6));
HXLINE( 285)				image->set_y(( (Float)(150) ));
HXLINE( 286)				Float image1 = image->y;
HXDLIN( 286)				image->set_y((image1 + ((( (Float)(400) ) - image->get_height()) / ( (Float)(2) ))));
HXLINE( 287)				::flixel::tweens::FlxTween_obj::tween(image, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("y",79,00,00,00),(image->y + 10))
            					->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.07),null());
            			}
            			else {
HXLINE( 290)				image->set_visible(false);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_250_changeSelection)
HXDLIN( 250)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 251)		if (!(this->ready)) {
HXLINE( 251)			return;
            		}
HXLINE( 252)		this->nastya->set_visible(false);
HXLINE( 254)		this->arrowUP->set_visible(true);
HXLINE( 255)		this->arrowDOWN->set_visible(true);
HXLINE( 257)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 257)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 258)		 ::states::GalleryMenuState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 258)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + num);
HXLINE( 260)		 ::flixel::group::FlxTypedGroup curGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 261)		::String _hx_switch_0 = this->items->__get(this->curSelectedButton);
            		if (  (_hx_switch_0==HX_("concept",68,ee,3a,0e)) ){
HXLINE( 265)			curGroup = this->conceptGroup;
HXDLIN( 265)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("nastya",5c,ee,7b,21)) ){
HXLINE( 263)			curGroup = this->nastyaGroup;
HXDLIN( 263)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("other",d0,66,76,36)) ){
HXLINE( 267)			curGroup = this->otherGroup;
HXDLIN( 267)			goto _hx_goto_19;
            		}
            		_hx_goto_19:;
HXLINE( 270)		if ((this->curSelected > (curGroup->members->get_length() - 1))) {
HXLINE( 271)			this->curSelected = 0;
            		}
HXLINE( 272)		if ((this->curSelected < 0)) {
HXLINE( 273)			this->curSelected = ::Std_obj::_hx_int(( (Float)((curGroup->members->get_length() - 1)) ));
            		}
HXLINE( 275)		this->imagesText->set_text(((((HX_("(",28,00,00,00) + (this->curSelected + 1)) + HX_(" / ",31,71,18,00)) + curGroup->members->get_length()) + HX_(")",29,00,00,00)));
HXLINE( 276)		{
HXLINE( 276)			 ::flixel::text::FlxText _this = this->imagesText;
HXDLIN( 276)			int axes = 1;
HXDLIN( 276)			bool _hx_tmp2;
HXDLIN( 276)			if ((axes != 1)) {
HXLINE( 276)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE( 276)				_hx_tmp2 = true;
            			}
HXDLIN( 276)			if (_hx_tmp2) {
HXLINE( 276)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 276)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 276)			bool _hx_tmp3;
HXDLIN( 276)			if ((axes != 16)) {
HXLINE( 276)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE( 276)				_hx_tmp3 = true;
            			}
HXDLIN( 276)			if (_hx_tmp3) {
HXLINE( 276)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 276)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 278)		this->nastyaGroup->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 279)		this->conceptGroup->forEach( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 280)		this->otherGroup->forEach( ::Dynamic(new _hx_Closure_2()),null());
HXLINE( 281)		curGroup->forEach( ::Dynamic(new _hx_Closure_3(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalleryMenuState_obj,changeSelection,(void))

void GalleryMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::GalleryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite button){
            			HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_302_update)
HXLINE( 303)			if (::flixel::FlxG_obj::mouse->overlaps(button,null())) {
HXLINE( 304)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 305)					_gthis->curSelectedButton = button->ID;
HXLINE( 306)					_gthis->curSelected = 0;
HXLINE( 307)					_gthis->changeSelection(0);
            				}
HXLINE( 309)				button->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 311)				button->set_alpha(((Float)0.9));
            			}
HXLINE( 313)			if ((button->ID == _gthis->curSelectedButton)) {
HXLINE( 314)				button->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 315)				{
HXLINE( 315)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 315)					Float y = ( (Float)(_gthis->itemOffsets->__get(button->ID).StaticCast< ::Array< int > >()->__get(1)) );
HXDLIN( 315)					this1->set_x(( (Float)(_gthis->itemOffsets->__get(button->ID).StaticCast< ::Array< int > >()->__get(0)) ));
HXDLIN( 315)					this1->set_y(y);
            				}
HXLINE( 316)				button->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 319)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 320)				{
HXLINE( 320)					 ::flixel::math::FlxBasePoint this1 = button->offset;
HXDLIN( 320)					this1->set_x(( (Float)(0) ));
HXDLIN( 320)					this1->set_y(( (Float)(0) ));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95ef7d317be649f3_294_update)
HXDLIN( 294)		 ::states::GalleryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 295)		this->super::update(elapsed);
HXLINE( 297)		if ((this->lurpLoadingBar >= this->loadingBar->percent)) {
HXLINE( 298)			Float a = this->loadingBar->percent;
HXDLIN( 298)			Float Value = (elapsed * ( (Float)(30) ));
HXDLIN( 298)			Float lowerBound;
HXDLIN( 298)			if ((Value < 0)) {
HXLINE( 298)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 298)				lowerBound = Value;
            			}
HXDLIN( 298)			Float _hx_tmp;
HXDLIN( 298)			if ((lowerBound > 1)) {
HXLINE( 298)				_hx_tmp = ( (Float)(1) );
            			}
            			else {
HXLINE( 298)				_hx_tmp = lowerBound;
            			}
HXDLIN( 298)			this->loadingBar->percent = (a + (_hx_tmp * (this->lurpLoadingBar - a)));
            		}
            		else {
HXLINE( 300)			this->loadingBar->percent = this->lurpLoadingBar;
            		}
HXLINE( 302)		this->itemGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 324)		if (this->get_controls()->get_UI_UP_P()) {
HXLINE( 325)			this->changeSelection(-1);
            		}
HXLINE( 326)		if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE( 327)			this->changeSelection(1);
            		}
HXLINE( 329)		if (this->get_controls()->get_UI_UP()) {
HXLINE( 330)			this->arrowUP->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
            		}
            		else {
HXLINE( 332)			this->arrowUP->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 334)		if (this->get_controls()->get_UI_DOWN()) {
HXLINE( 335)			this->arrowDOWN->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
            		}
            		else {
HXLINE( 337)			this->arrowDOWN->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 339)		if (this->get_controls()->get_BACK()) {
HXLINE( 340)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 341)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 341)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 342)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
HXLINE( 343)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(1) ));
            		}
            	}


void GalleryMenuState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_347_destroy)
HXLINE( 348)		this->super::destroy();
HXLINE( 349)		::states::GalleryMenuState_obj::thisStateIsDestroyed = true;
            	}


bool GalleryMenuState_obj::thisStateIsDestroyed;


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
	HX_MARK_MEMBER_NAME(loadingBar,"loadingBar");
	HX_MARK_MEMBER_NAME(progressBar,"progressBar");
	HX_MARK_MEMBER_NAME(progressText,"progressText");
	HX_MARK_MEMBER_NAME(GYAT,"GYAT");
	HX_MARK_MEMBER_NAME(lurpLoadingBar,"lurpLoadingBar");
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
	HX_VISIT_MEMBER_NAME(loadingBar,"loadingBar");
	HX_VISIT_MEMBER_NAME(progressBar,"progressBar");
	HX_VISIT_MEMBER_NAME(progressText,"progressText");
	HX_VISIT_MEMBER_NAME(GYAT,"GYAT");
	HX_VISIT_MEMBER_NAME(lurpLoadingBar,"lurpLoadingBar");
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
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arrowUP") ) { return ::hx::Val( arrowUP ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
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
		if (HX_FIELD_EQ(inName,"loadingBar") ) { return ::hx::Val( loadingBar ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nastyaGroup") ) { return ::hx::Val( nastyaGroup ); }
		if (HX_FIELD_EQ(inName,"itemOffsets") ) { return ::hx::Val( itemOffsets ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"progressBar") ) { return ::hx::Val( progressBar ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conceptGroup") ) { return ::hx::Val( conceptGroup ); }
		if (HX_FIELD_EQ(inName,"progressText") ) { return ::hx::Val( progressText ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lurpLoadingBar") ) { return ::hx::Val( lurpLoadingBar ); }
		break;
	case 15:
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
	case 17:
		if (HX_FIELD_EQ(inName,"curSelectedButton") ) { curSelectedButton=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GalleryMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
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
	outFields->push(HX_("arrowUP",64,88,b8,43));
	outFields->push(HX_("arrowDOWN",ab,52,f9,fd));
	outFields->push(HX_("imagesText",85,05,88,e7));
	outFields->push(HX_("nastya",5c,ee,7b,21));
	outFields->push(HX_("loadingBar",b7,d0,6a,16));
	outFields->push(HX_("progressBar",26,bc,55,e6));
	outFields->push(HX_("progressText",fa,ca,97,b0));
	outFields->push(HX_("GYAT",a5,e7,31,2f));
	outFields->push(HX_("lurpLoadingBar",1e,1a,c2,b7));
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
	{::hx::fsObject /*  ::states::GalleryBar */ ,(int)offsetof(GalleryMenuState_obj,loadingBar),HX_("loadingBar",b7,d0,6a,16)},
	{::hx::fsObject /*  ::states::GalleryBar */ ,(int)offsetof(GalleryMenuState_obj,progressBar),HX_("progressBar",26,bc,55,e6)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,progressText),HX_("progressText",fa,ca,97,b0)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,GYAT),HX_("GYAT",a5,e7,31,2f)},
	{::hx::fsFloat,(int)offsetof(GalleryMenuState_obj,lurpLoadingBar),HX_("lurpLoadingBar",1e,1a,c2,b7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryMenuState_obj,errorText),HX_("errorText",95,48,62,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GalleryMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &GalleryMenuState_obj::thisStateIsDestroyed,HX_("thisStateIsDestroyed",7c,16,57,ee)},
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
	HX_("arrowUP",64,88,b8,43),
	HX_("arrowDOWN",ab,52,f9,fd),
	HX_("imagesText",85,05,88,e7),
	HX_("nastya",5c,ee,7b,21),
	HX_("loadingBar",b7,d0,6a,16),
	HX_("progressBar",26,bc,55,e6),
	HX_("progressText",fa,ca,97,b0),
	HX_("GYAT",a5,e7,31,2f),
	HX_("lurpLoadingBar",1e,1a,c2,b7),
	HX_("create",fc,66,0f,7c),
	HX_("errorText",95,48,62,73),
	HX_("call",9e,18,ba,41),
	HX_("changeSelection",bc,98,b5,48),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void GalleryMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GalleryMenuState_obj::thisStateIsDestroyed,"thisStateIsDestroyed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GalleryMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GalleryMenuState_obj::thisStateIsDestroyed,"thisStateIsDestroyed");
};

#endif

::hx::Class GalleryMenuState_obj::__mClass;

static ::String GalleryMenuState_obj_sStaticFields[] = {
	HX_("thisStateIsDestroyed",7c,16,57,ee),
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
            	HX_STACKFRAME(&_hx_pos_95ef7d317be649f3_51_boot)
HXDLIN(  51)		thisStateIsDestroyed = true;
            	}
}

} // end namespace states
