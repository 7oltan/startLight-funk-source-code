#ifndef INCLUDED_psychlua_TextFunctions
#define INCLUDED_psychlua_TextFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(psychlua,FunkinLua)
HX_DECLARE_CLASS1(psychlua,TextFunctions)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES TextFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextFunctions_obj OBJ_;
		TextFunctions_obj();

	public:
		enum { _hx_ClassId = 0x0d8cdead };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="psychlua.TextFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"psychlua.TextFunctions"); }

		inline static ::hx::ObjectPtr< TextFunctions_obj > __new() {
			::hx::ObjectPtr< TextFunctions_obj > __this = new TextFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextFunctions_obj *__this = (TextFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFunctions_obj), false, "psychlua.TextFunctions"));
			*(void **)__this = TextFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFunctions",ce,ef,85,b3); }

		static void implement( ::psychlua::FunkinLua funk);
		static ::Dynamic implement_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_TextFunctions */ 