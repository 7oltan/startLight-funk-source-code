#ifndef INCLUDED_psychlua_DeprecatedFunctions
#define INCLUDED_psychlua_DeprecatedFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(psychlua,DeprecatedFunctions)
HX_DECLARE_CLASS1(psychlua,FunkinLua)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES DeprecatedFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DeprecatedFunctions_obj OBJ_;
		DeprecatedFunctions_obj();

	public:
		enum { _hx_ClassId = 0x7eb20e23 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="psychlua.DeprecatedFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"psychlua.DeprecatedFunctions"); }

		inline static ::hx::ObjectPtr< DeprecatedFunctions_obj > __new() {
			::hx::ObjectPtr< DeprecatedFunctions_obj > __this = new DeprecatedFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DeprecatedFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DeprecatedFunctions_obj *__this = (DeprecatedFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DeprecatedFunctions_obj), false, "psychlua.DeprecatedFunctions"));
			*(void **)__this = DeprecatedFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DeprecatedFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DeprecatedFunctions",48,5c,ac,2a); }

		static void implement( ::psychlua::FunkinLua funk);
		static ::Dynamic implement_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_DeprecatedFunctions */ 
