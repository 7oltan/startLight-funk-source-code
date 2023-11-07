#ifndef INCLUDED_psychlua_DebugLuaText
#define INCLUDED_psychlua_DebugLuaText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(psychlua,DebugLuaText)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES DebugLuaText_obj : public  ::flixel::text::FlxText_obj
{
	public:
		typedef  ::flixel::text::FlxText_obj super;
		typedef DebugLuaText_obj OBJ_;
		DebugLuaText_obj();

	public:
		enum { _hx_ClassId = 0x426bb62f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="psychlua.DebugLuaText")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"psychlua.DebugLuaText"); }
		static ::hx::ObjectPtr< DebugLuaText_obj > __new();
		static ::hx::ObjectPtr< DebugLuaText_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DebugLuaText_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DebugLuaText",92,f0,8d,88); }

		Float disableTime;
		void update(Float elapsed);

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_DebugLuaText */ 