#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_states_stages_StageWeek1
#include <states/stages/StageWeek1.h>
#endif
#ifndef INCLUDED_states_stages_objects_DadBattleFog
#include <states/stages/objects/DadBattleFog.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae273a01592b4052_6_new,"states.stages.StageWeek1","new",0x09a746de,"states.stages.StageWeek1.new","states/stages/StageWeek1.hx",6,0xd9fc7832)
HX_LOCAL_STACK_FRAME(_hx_pos_ae273a01592b4052_12_create,"states.stages.StageWeek1","create",0x1b12933e,"states.stages.StageWeek1.create","states/stages/StageWeek1.hx",12,0xd9fc7832)
HX_LOCAL_STACK_FRAME(_hx_pos_ae273a01592b4052_39_eventPushed,"states.stages.StageWeek1","eventPushed",0xf30584f1,"states.stages.StageWeek1.eventPushed","states/stages/StageWeek1.hx",39,0xd9fc7832)
HX_LOCAL_STACK_FRAME(_hx_pos_ae273a01592b4052_61_eventCalled,"states.stages.StageWeek1","eventCalled",0x37c0c4b5,"states.stages.StageWeek1.eventCalled","states/stages/StageWeek1.hx",61,0xd9fc7832)
HX_LOCAL_STACK_FRAME(_hx_pos_ae273a01592b4052_84_eventCalled,"states.stages.StageWeek1","eventCalled",0x37c0c4b5,"states.stages.StageWeek1.eventCalled","states/stages/StageWeek1.hx",84,0xd9fc7832)
HX_LOCAL_STACK_FRAME(_hx_pos_ae273a01592b4052_93_eventCalled,"states.stages.StageWeek1","eventCalled",0x37c0c4b5,"states.stages.StageWeek1.eventCalled","states/stages/StageWeek1.hx",93,0xd9fc7832)
namespace states{
namespace stages{

void StageWeek1_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ae273a01592b4052_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic StageWeek1_obj::__CreateEmpty() { return new StageWeek1_obj; }

void *StageWeek1_obj::_hx_vtable = 0;

Dynamic StageWeek1_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StageWeek1_obj > _hx_result = new StageWeek1_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageWeek1_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6d10f436) {
		if (inClassId<=(int)0x230cab9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
		} else {
			return inClassId==(int)0x6d10f436;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void StageWeek1_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_ae273a01592b4052_12_create)
HXLINE(  13)		 ::objects::BGSprite bg =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stageback",e5,7b,3b,06),-600,-200,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  14)		this->add(bg);
HXLINE(  16)		 ::objects::BGSprite stageFront =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stagefront",2b,fd,b0,c6),-650,600,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  17)		stageFront->setGraphicSize(::Std_obj::_hx_int((stageFront->get_width() * ((Float)1.1))),null());
HXLINE(  18)		stageFront->updateHitbox();
HXLINE(  19)		this->add(stageFront);
HXLINE(  20)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  21)			 ::objects::BGSprite stageLight =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stage_light",55,e5,48,cf),-125,-100,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  22)			stageLight->setGraphicSize(::Std_obj::_hx_int((stageLight->get_width() * ((Float)1.1))),null());
HXLINE(  23)			stageLight->updateHitbox();
HXLINE(  24)			this->add(stageLight);
HXLINE(  25)			 ::objects::BGSprite stageLight1 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stage_light",55,e5,48,cf),1225,-100,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  26)			stageLight1->setGraphicSize(::Std_obj::_hx_int((stageLight1->get_width() * ((Float)1.1))),null());
HXLINE(  27)			stageLight1->updateHitbox();
HXLINE(  28)			stageLight1->set_flipX(true);
HXLINE(  29)			this->add(stageLight1);
HXLINE(  31)			 ::objects::BGSprite stageCurtains =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stagecurtains",df,ec,1a,4b),-500,-300,((Float)1.3),((Float)1.3),null(),null());
HXLINE(  32)			stageCurtains->setGraphicSize(::Std_obj::_hx_int((stageCurtains->get_width() * ((Float)0.9))),null());
HXLINE(  33)			stageCurtains->updateHitbox();
HXLINE(  34)			this->add(stageCurtains);
            		}
            	}


void StageWeek1_obj::eventPushed( ::Dynamic event){
            	HX_GC_STACKFRAME(&_hx_pos_ae273a01592b4052_39_eventPushed)
HXDLIN(  39)		if (::hx::IsEq( event->__Field(HX_("event",1a,c8,c4,75),::hx::paccDynamic),HX_("Dadbattle Spotlight",b3,45,78,e2) )) {
HXLINE(  42)			this->dadbattleBlack =  ::objects::BGSprite_obj::__alloc( HX_CTX ,null(),-800,-400,0,0,null(),null());
HXLINE(  43)			 ::objects::BGSprite _hx_tmp = this->dadbattleBlack;
HXDLIN(  43)			int _hx_tmp1 = ::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::width * 2)) ));
HXDLIN(  43)			_hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::height * 2)) )),-16777216,null(),null());
HXLINE(  44)			this->dadbattleBlack->set_alpha(((Float)0.25));
HXLINE(  45)			this->dadbattleBlack->set_visible(false);
HXLINE(  46)			this->add(this->dadbattleBlack);
HXLINE(  48)			this->dadbattleLight =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("spotlight",94,02,b5,a6),400,-400,null(),null(),null(),null());
HXLINE(  49)			this->dadbattleLight->set_alpha(((Float)0.375));
HXLINE(  50)			this->dadbattleLight->set_blend(0);
HXLINE(  51)			this->dadbattleLight->set_visible(false);
HXLINE(  52)			this->add(this->dadbattleLight);
HXLINE(  54)			this->dadbattleFog =  ::states::stages::objects::DadBattleFog_obj::__alloc( HX_CTX );
HXLINE(  55)			this->dadbattleFog->set_visible(false);
HXLINE(  56)			this->add(this->dadbattleFog);
            		}
            	}


void StageWeek1_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_GC_STACKFRAME(&_hx_pos_ae273a01592b4052_61_eventCalled)
HXDLIN(  61)		 ::states::stages::StageWeek1 _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  62)		if ((eventName == HX_("Dadbattle Spotlight",b3,45,78,e2))) {
HXLINE(  65)			if (::hx::IsNull( flValue1 )) {
HXLINE(  65)				flValue1 = 0;
            			}
HXLINE(  66)			int val = ::Math_obj::round(( (Float)(flValue1) ));
HXLINE(  68)			switch((int)(val)){
            				case (int)1: case (int)2: case (int)3: {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::stages::StageWeek1,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_ae273a01592b4052_84_eventCalled)
HXLINE(  84)						_gthis->dadbattleLight->set_alpha(((Float)0.375));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  71)					if ((val == 1)) {
HXLINE(  73)						this->dadbattleBlack->set_visible(true);
HXLINE(  74)						this->dadbattleLight->set_visible(true);
HXLINE(  75)						this->dadbattleFog->set_visible(true);
HXLINE(  76)						this->game->__SetField(HX_("defaultCamZoom",01,50,2a,0b),(( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ) + ((Float)0.12)),::hx::paccDynamic);
            					}
HXLINE(  79)					 ::objects::Character who = ( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) );
HXLINE(  80)					if ((val > 2)) {
HXLINE(  80)						who = ( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) );
            					}
HXLINE(  82)					this->dadbattleLight->set_alpha(( (Float)(0) ));
HXLINE(  83)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.12), ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE(  86)					 ::objects::BGSprite _hx_tmp = this->dadbattleLight;
HXDLIN(  86)					Float _hx_tmp1 = who->getGraphicMidpoint(null())->x;
HXDLIN(  86)					Float _hx_tmp2 = (_hx_tmp1 - (this->dadbattleLight->get_width() / ( (Float)(2) )));
HXDLIN(  86)					Float who1 = who->y;
HXDLIN(  86)					Float _hx_tmp3 = (who1 + who->get_height());
HXDLIN(  86)					_hx_tmp->setPosition(_hx_tmp2,((_hx_tmp3 - this->dadbattleLight->get_height()) + 50));
HXLINE(  87)					::flixel::tweens::FlxTween_obj::tween(this->dadbattleFog, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.7))),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
            				}
            				break;
            				default:{
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::StageWeek1,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween twn){
            						HX_STACKFRAME(&_hx_pos_ae273a01592b4052_93_eventCalled)
HXLINE(  93)						_gthis->dadbattleFog->set_visible(false);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  90)					this->dadbattleBlack->set_visible(false);
HXLINE(  91)					this->dadbattleLight->set_visible(false);
HXLINE(  92)					this->game->__SetField(HX_("defaultCamZoom",01,50,2a,0b),(( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ) - ((Float)0.12)),::hx::paccDynamic);
HXLINE(  93)					::flixel::tweens::FlxTween_obj::tween(this->dadbattleFog, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            				}
            			}
            		}
            	}



::hx::ObjectPtr< StageWeek1_obj > StageWeek1_obj::__new() {
	::hx::ObjectPtr< StageWeek1_obj > __this = new StageWeek1_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StageWeek1_obj > StageWeek1_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StageWeek1_obj *__this = (StageWeek1_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StageWeek1_obj), true, "states.stages.StageWeek1"));
	*(void **)__this = StageWeek1_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StageWeek1_obj::StageWeek1_obj()
{
}

void StageWeek1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StageWeek1);
	HX_MARK_MEMBER_NAME(dadbattleBlack,"dadbattleBlack");
	HX_MARK_MEMBER_NAME(dadbattleLight,"dadbattleLight");
	HX_MARK_MEMBER_NAME(dadbattleFog,"dadbattleFog");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StageWeek1_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dadbattleBlack,"dadbattleBlack");
	HX_VISIT_MEMBER_NAME(dadbattleLight,"dadbattleLight");
	HX_VISIT_MEMBER_NAME(dadbattleFog,"dadbattleFog");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StageWeek1_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventPushed") ) { return ::hx::Val( eventPushed_dyn() ); }
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dadbattleFog") ) { return ::hx::Val( dadbattleFog ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dadbattleBlack") ) { return ::hx::Val( dadbattleBlack ); }
		if (HX_FIELD_EQ(inName,"dadbattleLight") ) { return ::hx::Val( dadbattleLight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StageWeek1_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"dadbattleFog") ) { dadbattleFog=inValue.Cast<  ::states::stages::objects::DadBattleFog >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dadbattleBlack") ) { dadbattleBlack=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dadbattleLight") ) { dadbattleLight=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StageWeek1_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dadbattleBlack",80,86,3f,0f));
	outFields->push(HX_("dadbattleLight",97,41,4a,cf));
	outFields->push(HX_("dadbattleFog",7f,15,0a,b8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StageWeek1_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(StageWeek1_obj,dadbattleBlack),HX_("dadbattleBlack",80,86,3f,0f)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(StageWeek1_obj,dadbattleLight),HX_("dadbattleLight",97,41,4a,cf)},
	{::hx::fsObject /*  ::states::stages::objects::DadBattleFog */ ,(int)offsetof(StageWeek1_obj,dadbattleFog),HX_("dadbattleFog",7f,15,0a,b8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StageWeek1_obj_sStaticStorageInfo = 0;
#endif

static ::String StageWeek1_obj_sMemberFields[] = {
	HX_("dadbattleBlack",80,86,3f,0f),
	HX_("dadbattleLight",97,41,4a,cf),
	HX_("dadbattleFog",7f,15,0a,b8),
	HX_("create",fc,66,0f,7c),
	HX_("eventPushed",73,60,7a,c5),
	HX_("eventCalled",37,a0,35,0a),
	::String(null()) };

::hx::Class StageWeek1_obj::__mClass;

void StageWeek1_obj::__register()
{
	StageWeek1_obj _hx_dummy;
	StageWeek1_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.StageWeek1",ec,3f,4f,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StageWeek1_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StageWeek1_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageWeek1_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageWeek1_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages