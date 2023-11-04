#include <hxcpp.h>

#ifndef INCLUDED_objects_Alignment
#include <objects/Alignment.h>
#endif
namespace objects{

::objects::Alignment Alignment_obj::CENTERED;

::objects::Alignment Alignment_obj::LEFT;

::objects::Alignment Alignment_obj::RIGHT;

bool Alignment_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTERED",74,ed,d5,e8)) { outValue = Alignment_obj::CENTERED; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = Alignment_obj::LEFT; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = Alignment_obj::RIGHT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Alignment_obj)

int Alignment_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CENTERED",74,ed,d5,e8)) return 1;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 2;
	return super::__FindIndex(inName);
}

int Alignment_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CENTERED",74,ed,d5,e8)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Alignment_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTERED",74,ed,d5,e8)) return CENTERED;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String Alignment_obj_sStaticFields[] = {
	HX_("LEFT",07,d0,70,32),
	HX_("CENTERED",74,ed,d5,e8),
	HX_("RIGHT",bc,43,52,67),
	::String(null())
};

::hx::Class Alignment_obj::__mClass;

Dynamic __Create_Alignment_obj() { return new Alignment_obj; }

void Alignment_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("objects.Alignment",a9,86,44,48), ::hx::TCanCast< Alignment_obj >,Alignment_obj_sStaticFields,0,
	&__Create_Alignment_obj, &__Create,
	&super::__SGetClass(), &CreateAlignment_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Alignment_obj::__GetStatic;
}

void Alignment_obj::__boot()
{
CENTERED = ::hx::CreateConstEnum< Alignment_obj >(HX_("CENTERED",74,ed,d5,e8),1);
LEFT = ::hx::CreateConstEnum< Alignment_obj >(HX_("LEFT",07,d0,70,32),0);
RIGHT = ::hx::CreateConstEnum< Alignment_obj >(HX_("RIGHT",bc,43,52,67),2);
}


} // end namespace objects
