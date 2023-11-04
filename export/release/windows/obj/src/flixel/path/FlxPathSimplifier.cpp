#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPathSimplifier
#include <flixel/path/FlxPathSimplifier.h>
#endif
#ifndef INCLUDED_flixel_path_FlxTypedPathfinderData
#include <flixel/path/FlxTypedPathfinderData.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace path{

::flixel::path::FlxPathSimplifier FlxPathSimplifier_obj::CUSTOM( ::Dynamic method)
{
	return ::hx::CreateEnum< FlxPathSimplifier_obj >(HX_("CUSTOM",b1,33,15,f2),5,1)->_hx_init(0,method);
}

::flixel::path::FlxPathSimplifier FlxPathSimplifier_obj::LINE;

::flixel::path::FlxPathSimplifier FlxPathSimplifier_obj::NONE;

::flixel::path::FlxPathSimplifier FlxPathSimplifier_obj::RAY;

::flixel::path::FlxPathSimplifier FlxPathSimplifier_obj::RAY_BOX(Float width,Float height)
{
	return ::hx::CreateEnum< FlxPathSimplifier_obj >(HX_("RAY_BOX",b6,bd,b9,cc),4,2)->_hx_init(0,width)->_hx_init(1,height);
}

::flixel::path::FlxPathSimplifier FlxPathSimplifier_obj::RAY_STEP(Float resolution)
{
	return ::hx::CreateEnum< FlxPathSimplifier_obj >(HX_("RAY_STEP",21,9d,0c,61),3,1)->_hx_init(0,resolution);
}

bool FlxPathSimplifier_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) { outValue = FlxPathSimplifier_obj::CUSTOM_dyn(); return true; }
	if (inName==HX_("LINE",f4,df,73,32)) { outValue = FlxPathSimplifier_obj::LINE; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = FlxPathSimplifier_obj::NONE; return true; }
	if (inName==HX_("RAY",ca,71,3e,00)) { outValue = FlxPathSimplifier_obj::RAY; return true; }
	if (inName==HX_("RAY_BOX",b6,bd,b9,cc)) { outValue = FlxPathSimplifier_obj::RAY_BOX_dyn(); return true; }
	if (inName==HX_("RAY_STEP",21,9d,0c,61)) { outValue = FlxPathSimplifier_obj::RAY_STEP_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxPathSimplifier_obj)

int FlxPathSimplifier_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 5;
	if (inName==HX_("LINE",f4,df,73,32)) return 1;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("RAY",ca,71,3e,00)) return 2;
	if (inName==HX_("RAY_BOX",b6,bd,b9,cc)) return 4;
	if (inName==HX_("RAY_STEP",21,9d,0c,61)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPathSimplifier_obj,CUSTOM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPathSimplifier_obj,RAY_BOX,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPathSimplifier_obj,RAY_STEP,return)

int FlxPathSimplifier_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 1;
	if (inName==HX_("LINE",f4,df,73,32)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("RAY",ca,71,3e,00)) return 0;
	if (inName==HX_("RAY_BOX",b6,bd,b9,cc)) return 2;
	if (inName==HX_("RAY_STEP",21,9d,0c,61)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val FlxPathSimplifier_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return CUSTOM_dyn();
	if (inName==HX_("LINE",f4,df,73,32)) return LINE;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("RAY",ca,71,3e,00)) return RAY;
	if (inName==HX_("RAY_BOX",b6,bd,b9,cc)) return RAY_BOX_dyn();
	if (inName==HX_("RAY_STEP",21,9d,0c,61)) return RAY_STEP_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FlxPathSimplifier_obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("LINE",f4,df,73,32),
	HX_("RAY",ca,71,3e,00),
	HX_("RAY_STEP",21,9d,0c,61),
	HX_("RAY_BOX",b6,bd,b9,cc),
	HX_("CUSTOM",b1,33,15,f2),
	::String(null())
};

::hx::Class FlxPathSimplifier_obj::__mClass;

Dynamic __Create_FlxPathSimplifier_obj() { return new FlxPathSimplifier_obj; }

void FlxPathSimplifier_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.path.FlxPathSimplifier",66,60,ee,ec), ::hx::TCanCast< FlxPathSimplifier_obj >,FlxPathSimplifier_obj_sStaticFields,0,
	&__Create_FlxPathSimplifier_obj, &__Create,
	&super::__SGetClass(), &CreateFlxPathSimplifier_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxPathSimplifier_obj::__GetStatic;
}

void FlxPathSimplifier_obj::__boot()
{
LINE = ::hx::CreateConstEnum< FlxPathSimplifier_obj >(HX_("LINE",f4,df,73,32),1);
NONE = ::hx::CreateConstEnum< FlxPathSimplifier_obj >(HX_("NONE",b8,da,ca,33),0);
RAY = ::hx::CreateConstEnum< FlxPathSimplifier_obj >(HX_("RAY",ca,71,3e,00),2);
}


} // end namespace flixel
} // end namespace path
