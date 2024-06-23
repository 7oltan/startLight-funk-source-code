#ifndef INCLUDED_states_MenuItem
#define INCLUDED_states_MenuItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,MenuItem)

namespace states{


class HXCPP_CLASS_ATTRIBUTES MenuItem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MenuItem_obj OBJ_;
		MenuItem_obj();

	public:
		enum { _hx_ClassId = 0x7987e67c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.MenuItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.MenuItem"); }
		static ::hx::ObjectPtr< MenuItem_obj > __new();
		static ::hx::ObjectPtr< MenuItem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuItem",72,ae,e0,25); }

		::String name;
		bool isMouse;
		Float x;
		Float y;
		bool isLocked;
		::Array< int > offsetSelected;
		 ::flixel::FlxState state;
		 ::flixel::FlxSprite lockSprite;
		::String lockText;
		::String set_lockText(::String newText);
		::Dynamic set_lockText_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_MenuItem */ 
