#ifndef INCLUDED_psychlua_CustomSubstate
#define INCLUDED_psychlua_CustomSubstate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(psychlua,CustomSubstate)
HX_DECLARE_CLASS1(psychlua,FunkinLua)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES CustomSubstate_obj : public  ::backend::MusicBeatSubstate_obj
{
	public:
		typedef  ::backend::MusicBeatSubstate_obj super;
		typedef CustomSubstate_obj OBJ_;
		CustomSubstate_obj();

	public:
		enum { _hx_ClassId = 0x73eff45f };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="psychlua.CustomSubstate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"psychlua.CustomSubstate"); }
		static ::hx::ObjectPtr< CustomSubstate_obj > __new(::String name);
		static ::hx::ObjectPtr< CustomSubstate_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CustomSubstate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CustomSubstate",82,cd,df,32); }

		static void __boot();
		static ::String name;
		static  ::psychlua::CustomSubstate instance;
		static void implement( ::psychlua::FunkinLua funk);
		static ::Dynamic implement_dyn();

		static void openCustomSubstate(::String name, ::Dynamic pauseGame);
		static ::Dynamic openCustomSubstate_dyn();

		static bool closeCustomSubstate();
		static ::Dynamic closeCustomSubstate_dyn();

		static bool insertToCustomSubstate(::String tag, ::Dynamic pos);
		static ::Dynamic insertToCustomSubstate_dyn();

		void create();

		void update(Float elapsed);

		void destroy();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_CustomSubstate */ 