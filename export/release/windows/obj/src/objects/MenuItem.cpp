#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_MenuItem
#include <objects/MenuItem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f389d0832565e595_3_new,"objects.MenuItem","new",0x3388a03e,"objects.MenuItem.new","objects/MenuItem.hx",3,0x5a161e91)
HX_LOCAL_STACK_FRAME(_hx_pos_f389d0832565e595_20_startFlashing,"objects.MenuItem","startFlashing",0xf4727912,"objects.MenuItem.startFlashing","objects/MenuItem.hx",20,0x5a161e91)
HX_LOCAL_STACK_FRAME(_hx_pos_f389d0832565e595_32_update,"objects.MenuItem","update",0xb23974eb,"objects.MenuItem.update","objects/MenuItem.hx",32,0x5a161e91)
namespace objects{

void MenuItem_obj::__construct(Float x,Float y,::String __o_weekName){
            		::String weekName = __o_weekName;
            		if (::hx::IsNull(__o_weekName)) weekName = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_f389d0832565e595_3_new)
HXLINE(  29)		this->alphaTO = ((Float)1);
HXLINE(  27)		this->fakeFramerate = ::Math_obj::round(((( (Float)(1) ) / ::flixel::FlxG_obj::elapsed) / ( (Float)(10) )));
HXLINE(  16)		this->isFlashing = false;
HXLINE(   6)		this->flashingInt = 0;
HXLINE(   5)		this->targetY = ((Float)0);
HXLINE(  10)		super::__construct(x,y,null());
HXLINE(  11)		this->loadGraphic(::backend::Paths_obj::image((HX_("storymenu/",9b,19,38,af) + weekName),null(),null()),null(),null(),null(),null(),null());
HXLINE(  12)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            	}

Dynamic MenuItem_obj::__CreateEmpty() { return new MenuItem_obj; }

void *MenuItem_obj::_hx_vtable = 0;

Dynamic MenuItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItem_obj > _hx_result = new MenuItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MenuItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7f879eba;
	}
}

void MenuItem_obj::startFlashing(){
            	HX_STACKFRAME(&_hx_pos_f389d0832565e595_20_startFlashing)
HXDLIN(  20)		this->isFlashing = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,startFlashing,(void))

void MenuItem_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f389d0832565e595_32_update)
HXLINE(  33)		this->super::update(elapsed);
HXLINE(  34)		Float leNextScale = ( (Float)(1) );
HXLINE(  35)		int n = ::Std_obj::_hx_int(this->targetY);
HXDLIN(  35)		int leNextScale1;
HXDLIN(  35)		if ((n > 0)) {
HXLINE(  35)			leNextScale1 = n;
            		}
            		else {
HXLINE(  35)			leNextScale1 = -(n);
            		}
HXDLIN(  35)		leNextScale = (( (Float)(1) ) - (( (Float)(leNextScale1) ) * ((Float)0.3)));
HXLINE(  36)		{
HXLINE(  36)			Float a = this->scale->x;
HXDLIN(  36)			Float Value = (elapsed * ((Float)10.2));
HXDLIN(  36)			Float lowerBound;
HXDLIN(  36)			if ((Value < 0)) {
HXLINE(  36)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE(  36)				lowerBound = Value;
            			}
HXDLIN(  36)			Float x;
HXDLIN(  36)			if ((lowerBound > 1)) {
HXLINE(  36)				x = ( (Float)(1) );
            			}
            			else {
HXLINE(  36)				x = lowerBound;
            			}
HXDLIN(  36)			this->scale->set_x((a + (x * (leNextScale - a))));
            		}
HXLINE(  37)		{
HXLINE(  37)			Float a1 = this->scale->y;
HXDLIN(  37)			Float Value1 = (elapsed * ((Float)10.2));
HXDLIN(  37)			Float lowerBound1;
HXDLIN(  37)			if ((Value1 < 0)) {
HXLINE(  37)				lowerBound1 = ( (Float)(0) );
            			}
            			else {
HXLINE(  37)				lowerBound1 = Value1;
            			}
HXDLIN(  37)			Float y;
HXDLIN(  37)			if ((lowerBound1 > 1)) {
HXLINE(  37)				y = ( (Float)(1) );
            			}
            			else {
HXLINE(  37)				y = lowerBound1;
            			}
HXDLIN(  37)			this->scale->set_y((a1 + (y * (leNextScale - a1))));
            		}
HXLINE(  40)		this->updateHitbox();
HXLINE(  41)		{
HXLINE(  41)			int axes = 16;
HXDLIN(  41)			bool _hx_tmp;
HXDLIN(  41)			if ((axes != 1)) {
HXLINE(  41)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  41)				_hx_tmp = true;
            			}
HXDLIN(  41)			if (_hx_tmp) {
HXLINE(  41)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  41)				this->set_x(((( (Float)(_hx_tmp) ) - this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  41)			bool _hx_tmp1;
HXDLIN(  41)			if ((axes != 16)) {
HXLINE(  41)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  41)				_hx_tmp1 = true;
            			}
HXDLIN(  41)			if (_hx_tmp1) {
HXLINE(  41)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  41)				this->set_y(((( (Float)(_hx_tmp) ) - this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  43)		Float a2 = this->x;
HXDLIN(  43)		Float b = this->targetY;
HXDLIN(  43)		Float b1 = (b * (this->get_width() * ((Float)1.5)));
HXDLIN(  43)		Float b2 = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(  43)		Float b3 = (b1 + (b2 - (this->get_width() / ( (Float)(2) ))));
HXDLIN(  43)		Float Value2 = (elapsed * ((Float)10.2));
HXDLIN(  43)		Float lowerBound2;
HXDLIN(  43)		if ((Value2 < 0)) {
HXLINE(  43)			lowerBound2 = ( (Float)(0) );
            		}
            		else {
HXLINE(  43)			lowerBound2 = Value2;
            		}
HXDLIN(  43)		Float _hx_tmp2;
HXDLIN(  43)		if ((lowerBound2 > 1)) {
HXLINE(  43)			_hx_tmp2 = ( (Float)(1) );
            		}
            		else {
HXLINE(  43)			_hx_tmp2 = lowerBound2;
            		}
HXDLIN(  43)		this->set_x((a2 + (_hx_tmp2 * (b3 - a2))));
HXLINE(  45)		Float a3 = this->alpha;
HXDLIN(  45)		Float Value3 = (elapsed * ((Float)10.2));
HXDLIN(  45)		Float lowerBound3;
HXDLIN(  45)		if ((Value3 < 0)) {
HXLINE(  45)			lowerBound3 = ( (Float)(0) );
            		}
            		else {
HXLINE(  45)			lowerBound3 = Value3;
            		}
HXDLIN(  45)		Float _hx_tmp3;
HXDLIN(  45)		if ((lowerBound3 > 1)) {
HXLINE(  45)			_hx_tmp3 = ( (Float)(1) );
            		}
            		else {
HXLINE(  45)			_hx_tmp3 = lowerBound3;
            		}
HXDLIN(  45)		this->set_alpha((a3 + (_hx_tmp3 * (this->alphaTO - a3))));
HXLINE(  48)		if (this->isFlashing) {
HXLINE(  49)			 ::objects::MenuItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  49)			_hx_tmp->flashingInt = (_hx_tmp->flashingInt + 1);
            		}
HXLINE(  51)		if ((::hx::Mod(this->flashingInt,this->fakeFramerate) >= ::Math_obj::floor((( (Float)(this->fakeFramerate) ) / ( (Float)(2) ))))) {
HXLINE(  52)			this->set_color(-13369345);
            		}
            		else {
HXLINE(  54)			this->set_color(-1);
            		}
            	}



::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new(Float x,Float y,::String __o_weekName) {
	::hx::ObjectPtr< MenuItem_obj > __this = new MenuItem_obj();
	__this->__construct(x,y,__o_weekName);
	return __this;
}

::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_weekName) {
	MenuItem_obj *__this = (MenuItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItem_obj), true, "objects.MenuItem"));
	*(void **)__this = MenuItem_obj::_hx_vtable;
	__this->__construct(x,y,__o_weekName);
	return __this;
}

MenuItem_obj::MenuItem_obj()
{
}

::hx::Val MenuItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"alphaTO") ) { return ::hx::Val( alphaTO ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFlashing") ) { return ::hx::Val( isFlashing ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashingInt") ) { return ::hx::Val( flashingInt ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startFlashing") ) { return ::hx::Val( startFlashing_dyn() ); }
		if (HX_FIELD_EQ(inName,"fakeFramerate") ) { return ::hx::Val( fakeFramerate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaTO") ) { alphaTO=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFlashing") ) { isFlashing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashingInt") ) { flashingInt=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fakeFramerate") ) { fakeFramerate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("flashingInt",dd,0a,bd,91));
	outFields->push(HX_("isFlashing",3c,97,97,14));
	outFields->push(HX_("fakeFramerate",38,6f,b1,5e));
	outFields->push(HX_("alphaTO",59,04,16,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuItem_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MenuItem_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,flashingInt),HX_("flashingInt",dd,0a,bd,91)},
	{::hx::fsBool,(int)offsetof(MenuItem_obj,isFlashing),HX_("isFlashing",3c,97,97,14)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,fakeFramerate),HX_("fakeFramerate",38,6f,b1,5e)},
	{::hx::fsFloat,(int)offsetof(MenuItem_obj,alphaTO),HX_("alphaTO",59,04,16,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItem_obj_sMemberFields[] = {
	HX_("targetY",e8,f3,67,88),
	HX_("flashingInt",dd,0a,bd,91),
	HX_("isFlashing",3c,97,97,14),
	HX_("startFlashing",b4,e7,a3,9e),
	HX_("fakeFramerate",38,6f,b1,5e),
	HX_("alphaTO",59,04,16,b2),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	MenuItem_obj _hx_dummy;
	MenuItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.MenuItem",4c,69,70,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
