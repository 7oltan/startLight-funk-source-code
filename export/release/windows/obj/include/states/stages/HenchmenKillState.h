#ifndef INCLUDED_states_stages_HenchmenKillState
#define INCLUDED_states_stages_HenchmenKillState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(states,stages,HenchmenKillState)
namespace states{
namespace stages{


class HenchmenKillState_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef HenchmenKillState_obj OBJ_;

	public:
		HenchmenKillState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("states.stages.HenchmenKillState",26,1f,ee,8f); }
		::String __ToString() const { return HX_("HenchmenKillState.",9b,db,80,e5) + _hx_tag; }

		static ::states::stages::HenchmenKillState KILLING;
		static inline ::states::stages::HenchmenKillState KILLING_dyn() { return KILLING; }
		static ::states::stages::HenchmenKillState SPEEDING;
		static inline ::states::stages::HenchmenKillState SPEEDING_dyn() { return SPEEDING; }
		static ::states::stages::HenchmenKillState SPEEDING_OFFSCREEN;
		static inline ::states::stages::HenchmenKillState SPEEDING_OFFSCREEN_dyn() { return SPEEDING_OFFSCREEN; }
		static ::states::stages::HenchmenKillState STOPPING;
		static inline ::states::stages::HenchmenKillState STOPPING_dyn() { return STOPPING; }
		static ::states::stages::HenchmenKillState WAIT;
		static inline ::states::stages::HenchmenKillState WAIT_dyn() { return WAIT; }
};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_HenchmenKillState */ 