#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
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
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
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
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_stages_MallEvil
#include <states/stages/MallEvil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9fab9837a1a7c081_6_new,"states.stages.MallEvil","new",0x3b5efb87,"states.stages.MallEvil.new","states/stages/MallEvil.hx",6,0x3de193a9)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab9837a1a7c081_9_create,"states.stages.MallEvil","create",0xffd86e35,"states.stages.MallEvil.create","states/stages/MallEvil.hx",9,0x3de193a9)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab9837a1a7c081_50_winterHorrorlandCutscene,"states.stages.MallEvil","winterHorrorlandCutscene",0xaeb92a1d,"states.stages.MallEvil.winterHorrorlandCutscene","states/stages/MallEvil.hx",50,0x3de193a9)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab9837a1a7c081_62_winterHorrorlandCutscene,"states.stages.MallEvil","winterHorrorlandCutscene",0xaeb92a1d,"states.stages.MallEvil.winterHorrorlandCutscene","states/stages/MallEvil.hx",62,0x3de193a9)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab9837a1a7c081_56_winterHorrorlandCutscene,"states.stages.MallEvil","winterHorrorlandCutscene",0xaeb92a1d,"states.stages.MallEvil.winterHorrorlandCutscene","states/stages/MallEvil.hx",56,0x3de193a9)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab9837a1a7c081_34_winterHorrorlandCutscene,"states.stages.MallEvil","winterHorrorlandCutscene",0xaeb92a1d,"states.stages.MallEvil.winterHorrorlandCutscene","states/stages/MallEvil.hx",34,0x3de193a9)
namespace states{
namespace stages{

void MallEvil_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9fab9837a1a7c081_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic MallEvil_obj::__CreateEmpty() { return new MallEvil_obj; }

void *MallEvil_obj::_hx_vtable = 0;

Dynamic MallEvil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MallEvil_obj > _hx_result = new MallEvil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MallEvil_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x230cab9d) {
		if (inClassId<=(int)0x0b7659df) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b7659df;
		} else {
			return inClassId==(int)0x230cab9d;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void MallEvil_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_9fab9837a1a7c081_9_create)
HXLINE(  10)		 ::objects::BGSprite bg =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/evilBG",86,9d,17,83),-400,-500,((Float)0.2),((Float)0.2),null(),null());
HXLINE(  11)		bg->setGraphicSize(::Std_obj::_hx_int((bg->get_width() * ((Float)0.8))),null());
HXLINE(  12)		bg->updateHitbox();
HXLINE(  13)		this->add(bg);
HXLINE(  15)		 ::objects::BGSprite evilTree =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/evilTree",7f,5b,65,3a),300,-300,((Float)0.2),((Float)0.2),null(),null());
HXLINE(  16)		this->add(evilTree);
HXLINE(  18)		 ::objects::BGSprite evilSnow =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/evilSnow",a4,24,b9,39),-200,700,null(),null(),null(),null());
HXLINE(  19)		this->add(evilSnow);
HXLINE(  20)		this->setDefaultGF(HX_("gf-christmas",94,26,b1,6d));
HXLINE(  23)		bool _hx_tmp;
HXDLIN(  23)		if (::states::PlayState_obj::isStoryMode) {
HXLINE(  23)			_hx_tmp = !(::states::PlayState_obj::seenCutscene);
            		}
            		else {
HXLINE(  23)			_hx_tmp = false;
            		}
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			if ((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) == HX_("winter-horrorland",9d,39,f4,1e))) {
HXLINE(  28)				this->setStartCallback(this->winterHorrorlandCutscene_dyn());
            			}
            		}
            	}


void MallEvil_obj::winterHorrorlandCutscene(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::stages::MallEvil,_gthis, ::flixel::FlxSprite,blackScreen2) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_GC_STACKFRAME(&_hx_pos_9fab9837a1a7c081_50_winterHorrorlandCutscene)
HXLINE(  50)			_gthis->remove(blackScreen2);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::states::stages::MallEvil,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::stages::MallEvil,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_9fab9837a1a7c081_62_winterHorrorlandCutscene)
HXLINE(  62)				_gthis->startCountdown();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_9fab9837a1a7c081_56_winterHorrorlandCutscene)
HXLINE(  57)			( ( ::flixel::FlxCamera)(_gthis->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(true);
HXLINE(  58)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),( (Float)(_gthis->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ))),((Float)2.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_9fab9837a1a7c081_34_winterHorrorlandCutscene)
HXDLIN(  34)		 ::states::stages::MallEvil _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  35)		( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(false);
HXLINE(  36)		this->game->__SetField(HX_("inCutscene",8f,21,01,56),true,::hx::paccDynamic);
HXLINE(  38)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  38)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("Lights_Turn_On",5f,e1,29,ad),null()),null(),null(),null(),null(),null());
HXLINE(  39)		::flixel::FlxG_obj::camera->set_zoom(((Float)1.5));
HXLINE(  40)		{
HXLINE(  40)			 ::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;
HXDLIN(  40)			 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,400,-2050);
HXDLIN(  40)			 ::flixel::math::FlxBasePoint point = this1;
HXDLIN(  40)			{
HXLINE(  40)				 ::flixel::math::FlxBasePoint this2 = _this->scroll;
HXDLIN(  40)				Float y = (point->y - (( (Float)(_this->height) ) * ((Float)0.5)));
HXDLIN(  40)				this2->set_x((point->x - (( (Float)(_this->width) ) * ((Float)0.5))));
HXDLIN(  40)				this2->set_y(y);
            			}
HXDLIN(  40)			if (point->_weak) {
HXLINE(  40)				point->put();
            			}
            		}
HXLINE(  43)		 ::flixel::FlxSprite blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  43)		int blackScreen1 = ::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::width * 2)) ));
HXDLIN(  43)		 ::flixel::FlxSprite blackScreen2 = blackScreen->makeGraphic(blackScreen1,::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::height * 2)) )),-16777216,null(),null());
HXLINE(  44)		{
HXLINE(  44)			 ::flixel::math::FlxBasePoint this3 = blackScreen2->scrollFactor;
HXDLIN(  44)			this3->set_x(( (Float)(0) ));
HXDLIN(  44)			this3->set_y(( (Float)(0) ));
            		}
HXLINE(  45)		this->add(blackScreen2);
HXLINE(  47)		::flixel::tweens::FlxTween_obj::tween(blackScreen2, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis,blackScreen2)))));
HXLINE(  55)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.8), ::Dynamic(new _hx_Closure_2(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MallEvil_obj,winterHorrorlandCutscene,(void))


::hx::ObjectPtr< MallEvil_obj > MallEvil_obj::__new() {
	::hx::ObjectPtr< MallEvil_obj > __this = new MallEvil_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MallEvil_obj > MallEvil_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MallEvil_obj *__this = (MallEvil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MallEvil_obj), true, "states.stages.MallEvil"));
	*(void **)__this = MallEvil_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MallEvil_obj::MallEvil_obj()
{
}

::hx::Val MallEvil_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"winterHorrorlandCutscene") ) { return ::hx::Val( winterHorrorlandCutscene_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MallEvil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MallEvil_obj_sStaticStorageInfo = 0;
#endif

static ::String MallEvil_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("winterHorrorlandCutscene",a4,e0,38,09),
	::String(null()) };

::hx::Class MallEvil_obj::__mClass;

void MallEvil_obj::__register()
{
	MallEvil_obj _hx_dummy;
	MallEvil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.MallEvil",15,2c,33,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MallEvil_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MallEvil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MallEvil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MallEvil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages