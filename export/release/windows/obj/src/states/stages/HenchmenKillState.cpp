#include <hxcpp.h>

#ifndef INCLUDED_states_stages_HenchmenKillState
#include <states/stages/HenchmenKillState.h>
#endif
namespace states{
namespace stages{

::states::stages::HenchmenKillState HenchmenKillState_obj::KILLING;

::states::stages::HenchmenKillState HenchmenKillState_obj::SPEEDING;

::states::stages::HenchmenKillState HenchmenKillState_obj::SPEEDING_OFFSCREEN;

::states::stages::HenchmenKillState HenchmenKillState_obj::STOPPING;

::states::stages::HenchmenKillState HenchmenKillState_obj::WAIT;

bool HenchmenKillState_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("KILLING",e4,17,bf,53)) { outValue = HenchmenKillState_obj::KILLING; return true; }
	if (inName==HX_("SPEEDING",bb,33,80,08)) { outValue = HenchmenKillState_obj::SPEEDING; return true; }
	if (inName==HX_("SPEEDING_OFFSCREEN",37,c3,01,8b)) { outValue = HenchmenKillState_obj::SPEEDING_OFFSCREEN; return true; }
	if (inName==HX_("STOPPING",74,9b,be,0b)) { outValue = HenchmenKillState_obj::STOPPING; return true; }
	if (inName==HX_("WAIT",75,22,b3,39)) { outValue = HenchmenKillState_obj::WAIT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(HenchmenKillState_obj)

int HenchmenKillState_obj::__FindIndex(::String inName)
{
	if (inName==HX_("KILLING",e4,17,bf,53)) return 1;
	if (inName==HX_("SPEEDING",bb,33,80,08)) return 3;
	if (inName==HX_("SPEEDING_OFFSCREEN",37,c3,01,8b)) return 2;
	if (inName==HX_("STOPPING",74,9b,be,0b)) return 4;
	if (inName==HX_("WAIT",75,22,b3,39)) return 0;
	return super::__FindIndex(inName);
}

int HenchmenKillState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("KILLING",e4,17,bf,53)) return 0;
	if (inName==HX_("SPEEDING",bb,33,80,08)) return 0;
	if (inName==HX_("SPEEDING_OFFSCREEN",37,c3,01,8b)) return 0;
	if (inName==HX_("STOPPING",74,9b,be,0b)) return 0;
	if (inName==HX_("WAIT",75,22,b3,39)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val HenchmenKillState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("KILLING",e4,17,bf,53)) return KILLING;
	if (inName==HX_("SPEEDING",bb,33,80,08)) return SPEEDING;
	if (inName==HX_("SPEEDING_OFFSCREEN",37,c3,01,8b)) return SPEEDING_OFFSCREEN;
	if (inName==HX_("STOPPING",74,9b,be,0b)) return STOPPING;
	if (inName==HX_("WAIT",75,22,b3,39)) return WAIT;
	return super::__Field(inName,inCallProp);
}

static ::String HenchmenKillState_obj_sStaticFields[] = {
	HX_("WAIT",75,22,b3,39),
	HX_("KILLING",e4,17,bf,53),
	HX_("SPEEDING_OFFSCREEN",37,c3,01,8b),
	HX_("SPEEDING",bb,33,80,08),
	HX_("STOPPING",74,9b,be,0b),
	::String(null())
};

::hx::Class HenchmenKillState_obj::__mClass;

Dynamic __Create_HenchmenKillState_obj() { return new HenchmenKillState_obj; }

void HenchmenKillState_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("states.stages.HenchmenKillState",26,1f,ee,8f), ::hx::TCanCast< HenchmenKillState_obj >,HenchmenKillState_obj_sStaticFields,0,
	&__Create_HenchmenKillState_obj, &__Create,
	&super::__SGetClass(), &CreateHenchmenKillState_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &HenchmenKillState_obj::__GetStatic;
}

void HenchmenKillState_obj::__boot()
{
KILLING = ::hx::CreateConstEnum< HenchmenKillState_obj >(HX_("KILLING",e4,17,bf,53),1);
SPEEDING = ::hx::CreateConstEnum< HenchmenKillState_obj >(HX_("SPEEDING",bb,33,80,08),3);
SPEEDING_OFFSCREEN = ::hx::CreateConstEnum< HenchmenKillState_obj >(HX_("SPEEDING_OFFSCREEN",37,c3,01,8b),2);
STOPPING = ::hx::CreateConstEnum< HenchmenKillState_obj >(HX_("STOPPING",74,9b,be,0b),4);
WAIT = ::hx::CreateConstEnum< HenchmenKillState_obj >(HX_("WAIT",75,22,b3,39),0);
}


} // end namespace states
} // end namespace stages
