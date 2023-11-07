#ifndef INCLUDED_psychlua_ReflectionFunctions
#define INCLUDED_psychlua_ReflectionFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(psychlua,FunkinLua)
HX_DECLARE_CLASS1(psychlua,ReflectionFunctions)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES ReflectionFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ReflectionFunctions_obj OBJ_;
		ReflectionFunctions_obj();

	public:
		enum { _hx_ClassId = 0x5fe99f13 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="psychlua.ReflectionFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"psychlua.ReflectionFunctions"); }

		inline static ::hx::ObjectPtr< ReflectionFunctions_obj > __new() {
			::hx::ObjectPtr< ReflectionFunctions_obj > __this = new ReflectionFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ReflectionFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ReflectionFunctions_obj *__this = (ReflectionFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ReflectionFunctions_obj), false, "psychlua.ReflectionFunctions"));
			*(void **)__this = ReflectionFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ReflectionFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ReflectionFunctions",10,c7,64,8e); }

		static void implement( ::psychlua::FunkinLua funk);
		static ::Dynamic implement_dyn();

		static  ::Dynamic callMethodFromObject( ::Dynamic classObj,::String funcStr,::cpp::VirtualArray args);
		static ::Dynamic callMethodFromObject_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_ReflectionFunctions */ 