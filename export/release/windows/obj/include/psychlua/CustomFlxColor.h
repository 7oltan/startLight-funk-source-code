#ifndef INCLUDED_psychlua_CustomFlxColor
#define INCLUDED_psychlua_CustomFlxColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(psychlua,CustomFlxColor)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES CustomFlxColor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CustomFlxColor_obj OBJ_;
		CustomFlxColor_obj();

	public:
		enum { _hx_ClassId = 0x3b77575f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="psychlua.CustomFlxColor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"psychlua.CustomFlxColor"); }

		inline static ::hx::ObjectPtr< CustomFlxColor_obj > __new() {
			::hx::ObjectPtr< CustomFlxColor_obj > __this = new CustomFlxColor_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CustomFlxColor_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CustomFlxColor_obj *__this = (CustomFlxColor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomFlxColor_obj), false, "psychlua.CustomFlxColor"));
			*(void **)__this = CustomFlxColor_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CustomFlxColor_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CustomFlxColor",82,30,67,fa); }

		static void __boot();
		static int TRANSPARENT;
		static int BLACK;
		static int WHITE;
		static int GRAY;
		static int GREEN;
		static int LIME;
		static int YELLOW;
		static int ORANGE;
		static int RED;
		static int PURPLE;
		static int BLUE;
		static int BROWN;
		static int PINK;
		static int MAGENTA;
		static int CYAN;
		static int fromRGB(int Red,int Green,int Blue,::hx::Null< int >  Alpha);
		static ::Dynamic fromRGB_dyn();

		static int fromRGBFloat(Float Red,Float Green,Float Blue,::hx::Null< Float >  Alpha);
		static ::Dynamic fromRGBFloat_dyn();

		static int fromHSB(Float Hue,Float Sat,Float Brt,::hx::Null< Float >  Alpha);
		static ::Dynamic fromHSB_dyn();

		static int fromHSL(Float Hue,Float Sat,Float Light,::hx::Null< Float >  Alpha);
		static ::Dynamic fromHSL_dyn();

		static int fromString(::String str);
		static ::Dynamic fromString_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_CustomFlxColor */ 