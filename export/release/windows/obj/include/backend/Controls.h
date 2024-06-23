#ifndef INCLUDED_backend_Controls
#define INCLUDED_backend_Controls

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,Controls)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES Controls_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Controls_obj OBJ_;
		Controls_obj();

	public:
		enum { _hx_ClassId = 0x6f0507aa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.Controls")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.Controls"); }
		static ::hx::ObjectPtr< Controls_obj > __new();
		static ::hx::ObjectPtr< Controls_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Controls_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Controls",96,42,6e,11); }

		static  ::backend::Controls instance;
		bool get_UI_UP_P();
		::Dynamic get_UI_UP_P_dyn();

		bool get_UI_DOWN_P();
		::Dynamic get_UI_DOWN_P_dyn();

		bool get_UI_LEFT_P();
		::Dynamic get_UI_LEFT_P_dyn();

		bool get_UI_RIGHT_P();
		::Dynamic get_UI_RIGHT_P_dyn();

		bool get_NOTE_UP_P();
		::Dynamic get_NOTE_UP_P_dyn();

		bool get_NOTE_DOWN_P();
		::Dynamic get_NOTE_DOWN_P_dyn();

		bool get_NOTE_LEFT_P();
		::Dynamic get_NOTE_LEFT_P_dyn();

		bool get_NOTE_RIGHT_P();
		::Dynamic get_NOTE_RIGHT_P_dyn();

		bool get_UI_UP();
		::Dynamic get_UI_UP_dyn();

		bool get_UI_DOWN();
		::Dynamic get_UI_DOWN_dyn();

		bool get_UI_LEFT();
		::Dynamic get_UI_LEFT_dyn();

		bool get_UI_RIGHT();
		::Dynamic get_UI_RIGHT_dyn();

		bool get_NOTE_UP();
		::Dynamic get_NOTE_UP_dyn();

		bool get_NOTE_DOWN();
		::Dynamic get_NOTE_DOWN_dyn();

		bool get_NOTE_LEFT();
		::Dynamic get_NOTE_LEFT_dyn();

		bool get_NOTE_RIGHT();
		::Dynamic get_NOTE_RIGHT_dyn();

		bool get_UI_UP_R();
		::Dynamic get_UI_UP_R_dyn();

		bool get_UI_DOWN_R();
		::Dynamic get_UI_DOWN_R_dyn();

		bool get_UI_LEFT_R();
		::Dynamic get_UI_LEFT_R_dyn();

		bool get_UI_RIGHT_R();
		::Dynamic get_UI_RIGHT_R_dyn();

		bool get_NOTE_UP_R();
		::Dynamic get_NOTE_UP_R_dyn();

		bool get_NOTE_DOWN_R();
		::Dynamic get_NOTE_DOWN_R_dyn();

		bool get_NOTE_LEFT_R();
		::Dynamic get_NOTE_LEFT_R_dyn();

		bool get_NOTE_RIGHT_R();
		::Dynamic get_NOTE_RIGHT_R_dyn();

		bool get_ACCEPT();
		::Dynamic get_ACCEPT_dyn();

		bool get_BACK();
		::Dynamic get_BACK_dyn();

		bool get_PAUSE();
		::Dynamic get_PAUSE_dyn();

		bool get_RESET();
		::Dynamic get_RESET_dyn();

		 ::haxe::ds::StringMap keyboardBinds;
		 ::haxe::ds::StringMap gamepadBinds;
		bool justPressed(::String key);
		::Dynamic justPressed_dyn();

		bool pressed(::String key);
		::Dynamic pressed_dyn();

		bool justReleased(::String key);
		::Dynamic justReleased_dyn();

		bool controllerMode;
		bool _myGamepadJustPressed(::Array< int > keys);
		::Dynamic _myGamepadJustPressed_dyn();

		bool _myGamepadPressed(::Array< int > keys);
		::Dynamic _myGamepadPressed_dyn();

		bool _myGamepadJustReleased(::Array< int > keys);
		::Dynamic _myGamepadJustReleased_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_Controls */ 