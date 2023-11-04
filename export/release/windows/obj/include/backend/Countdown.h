#ifndef INCLUDED_backend_Countdown
#define INCLUDED_backend_Countdown

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,Countdown)
namespace backend{


class Countdown_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Countdown_obj OBJ_;

	public:
		Countdown_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("backend.Countdown",b7,d7,54,4b); }
		::String __ToString() const { return HX_("Countdown.",7d,4e,a2,0b) + _hx_tag; }

		static ::backend::Countdown GO;
		static inline ::backend::Countdown GO_dyn() { return GO; }
		static ::backend::Countdown ONE;
		static inline ::backend::Countdown ONE_dyn() { return ONE; }
		static ::backend::Countdown START;
		static inline ::backend::Countdown START_dyn() { return START; }
		static ::backend::Countdown THREE;
		static inline ::backend::Countdown THREE_dyn() { return THREE; }
		static ::backend::Countdown TWO;
		static inline ::backend::Countdown TWO_dyn() { return TWO; }
};

} // end namespace backend

#endif /* INCLUDED_backend_Countdown */ 
