#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_states_stages_objects_BackgroundTank
#include <states/stages/objects/BackgroundTank.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f2ee4faacc5d1b9d_3_new,"states.stages.objects.BackgroundTank","new",0xaed0f611,"states.stages.objects.BackgroundTank.new","states/stages/objects/BackgroundTank.hx",3,0x21df2f3e)
static const ::String _hx_array_data_8d9e999f_1[] = {
	HX_("BG tank w lighting",b0,17,6b,18),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f2ee4faacc5d1b9d_18_update,"states.stages.objects.BackgroundTank","update",0x2e8c44f8,"states.stages.objects.BackgroundTank.update","states/stages/objects/BackgroundTank.hx",18,0x21df2f3e)
namespace states{
namespace stages{
namespace objects{

void BackgroundTank_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f2ee4faacc5d1b9d_3_new)
HXLINE(   8)		this->tankAngle = ((Float)0);
HXLINE(   7)		this->tankSpeed = ((Float)0);
HXLINE(   6)		this->offsetY = ((Float)1300);
HXLINE(   5)		this->offsetX = ((Float)400);
HXLINE(  11)		super::__construct(HX_("tankRolling",bb,ab,47,f7),0,0,((Float)0.5),((Float)0.5),::Array_obj< ::String >::fromData( _hx_array_data_8d9e999f_1,1),true);
HXLINE(  12)		this->tankSpeed = ::flixel::FlxG_obj::random->_hx_float(5,7,null());
HXLINE(  13)		this->tankAngle = ( (Float)(::flixel::FlxG_obj::random->_hx_int(-90,45,null())) );
HXLINE(  14)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            	}

Dynamic BackgroundTank_obj::__CreateEmpty() { return new BackgroundTank_obj; }

void *BackgroundTank_obj::_hx_vtable = 0;

Dynamic BackgroundTank_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackgroundTank_obj > _hx_result = new BackgroundTank_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BackgroundTank_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x54cf8071) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x199d8d7e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x199d8d7e;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x54cf8071;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void BackgroundTank_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f2ee4faacc5d1b9d_18_update)
HXLINE(  19)		this->super::update(elapsed);
HXLINE(  21)		 ::states::stages::objects::BackgroundTank _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  21)		_hx_tmp->tankAngle = (_hx_tmp->tankAngle + (elapsed * this->tankSpeed));
HXLINE(  22)		this->set_angle(((this->tankAngle - ( (Float)(90) )) + 15));
HXLINE(  23)		this->set_x((this->offsetX + (( (Float)(1500) ) * ::Math_obj::cos(((::Math_obj::PI / ( (Float)(180) )) * (this->tankAngle + 180))))));
HXLINE(  24)		this->set_y((this->offsetY + (( (Float)(1100) ) * ::Math_obj::sin(((::Math_obj::PI / ( (Float)(180) )) * (this->tankAngle + 180))))));
            	}



::hx::ObjectPtr< BackgroundTank_obj > BackgroundTank_obj::__new() {
	::hx::ObjectPtr< BackgroundTank_obj > __this = new BackgroundTank_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BackgroundTank_obj > BackgroundTank_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BackgroundTank_obj *__this = (BackgroundTank_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackgroundTank_obj), true, "states.stages.objects.BackgroundTank"));
	*(void **)__this = BackgroundTank_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BackgroundTank_obj::BackgroundTank_obj()
{
}

::hx::Val BackgroundTank_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tankSpeed") ) { return ::hx::Val( tankSpeed ); }
		if (HX_FIELD_EQ(inName,"tankAngle") ) { return ::hx::Val( tankAngle ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BackgroundTank_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tankSpeed") ) { tankSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tankAngle") ) { tankAngle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundTank_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("tankSpeed",3d,7c,80,fc));
	outFields->push(HX_("tankAngle",89,28,f9,9d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BackgroundTank_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(BackgroundTank_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(BackgroundTank_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(BackgroundTank_obj,tankSpeed),HX_("tankSpeed",3d,7c,80,fc)},
	{::hx::fsFloat,(int)offsetof(BackgroundTank_obj,tankAngle),HX_("tankAngle",89,28,f9,9d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BackgroundTank_obj_sStaticStorageInfo = 0;
#endif

static ::String BackgroundTank_obj_sMemberFields[] = {
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("tankSpeed",3d,7c,80,fc),
	HX_("tankAngle",89,28,f9,9d),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class BackgroundTank_obj::__mClass;

void BackgroundTank_obj::__register()
{
	BackgroundTank_obj _hx_dummy;
	BackgroundTank_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.objects.BackgroundTank",9f,99,9e,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BackgroundTank_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BackgroundTank_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackgroundTank_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackgroundTank_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
} // end namespace objects
