#include <hxcpp.h>

#ifndef INCLUDED_backend_Countdown
#include <backend/Countdown.h>
#endif
namespace backend{

::backend::Countdown Countdown_obj::GO;

::backend::Countdown Countdown_obj::ONE;

::backend::Countdown Countdown_obj::START;

::backend::Countdown Countdown_obj::THREE;

::backend::Countdown Countdown_obj::TWO;

bool Countdown_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GO",28,3e,00,00)) { outValue = Countdown_obj::GO; return true; }
	if (inName==HX_("ONE",46,36,3c,00)) { outValue = Countdown_obj::ONE; return true; }
	if (inName==HX_("START",42,ac,f9,01)) { outValue = Countdown_obj::START; return true; }
	if (inName==HX_("THREE",3e,8c,7e,8d)) { outValue = Countdown_obj::THREE; return true; }
	if (inName==HX_("TWO",6c,09,40,00)) { outValue = Countdown_obj::TWO; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Countdown_obj)

int Countdown_obj::__FindIndex(::String inName)
{
	if (inName==HX_("GO",28,3e,00,00)) return 3;
	if (inName==HX_("ONE",46,36,3c,00)) return 2;
	if (inName==HX_("START",42,ac,f9,01)) return 4;
	if (inName==HX_("THREE",3e,8c,7e,8d)) return 0;
	if (inName==HX_("TWO",6c,09,40,00)) return 1;
	return super::__FindIndex(inName);
}

int Countdown_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("GO",28,3e,00,00)) return 0;
	if (inName==HX_("ONE",46,36,3c,00)) return 0;
	if (inName==HX_("START",42,ac,f9,01)) return 0;
	if (inName==HX_("THREE",3e,8c,7e,8d)) return 0;
	if (inName==HX_("TWO",6c,09,40,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Countdown_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GO",28,3e,00,00)) return GO;
	if (inName==HX_("ONE",46,36,3c,00)) return ONE;
	if (inName==HX_("START",42,ac,f9,01)) return START;
	if (inName==HX_("THREE",3e,8c,7e,8d)) return THREE;
	if (inName==HX_("TWO",6c,09,40,00)) return TWO;
	return super::__Field(inName,inCallProp);
}

static ::String Countdown_obj_sStaticFields[] = {
	HX_("THREE",3e,8c,7e,8d),
	HX_("TWO",6c,09,40,00),
	HX_("ONE",46,36,3c,00),
	HX_("GO",28,3e,00,00),
	HX_("START",42,ac,f9,01),
	::String(null())
};

::hx::Class Countdown_obj::__mClass;

Dynamic __Create_Countdown_obj() { return new Countdown_obj; }

void Countdown_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("backend.Countdown",b7,d7,54,4b), ::hx::TCanCast< Countdown_obj >,Countdown_obj_sStaticFields,0,
	&__Create_Countdown_obj, &__Create,
	&super::__SGetClass(), &CreateCountdown_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Countdown_obj::__GetStatic;
}

void Countdown_obj::__boot()
{
GO = ::hx::CreateConstEnum< Countdown_obj >(HX_("GO",28,3e,00,00),3);
ONE = ::hx::CreateConstEnum< Countdown_obj >(HX_("ONE",46,36,3c,00),2);
START = ::hx::CreateConstEnum< Countdown_obj >(HX_("START",42,ac,f9,01),4);
THREE = ::hx::CreateConstEnum< Countdown_obj >(HX_("THREE",3e,8c,7e,8d),0);
TWO = ::hx::CreateConstEnum< Countdown_obj >(HX_("TWO",6c,09,40,00),1);
}


} // end namespace backend
