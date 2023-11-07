#ifndef INCLUDED_psychlua_FunkinLua
#define INCLUDED_psychlua_FunkinLua

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(psychlua,FunkinLua)
HX_DECLARE_CLASS1(psychlua,HScript)
HX_DECLARE_CLASS1(tea,SScript)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES FunkinLua_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FunkinLua_obj OBJ_;
		FunkinLua_obj();

	public:
		enum { _hx_ClassId = 0x44b73a2a };

		void __construct(::String scriptName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="psychlua.FunkinLua")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"psychlua.FunkinLua"); }
		static ::hx::ObjectPtr< FunkinLua_obj > __new(::String scriptName);
		static ::hx::ObjectPtr< FunkinLua_obj > __alloc(::hx::Ctx *_hx_ctx,::String scriptName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FunkinLua_obj();

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
		::String __ToString() const { return HX_("FunkinLua",e7,f3,7b,36); }

		static void __boot();
		static  ::Dynamic Function_Stop;
		static  ::Dynamic Function_Continue;
		static  ::Dynamic Function_StopLua;
		static  ::Dynamic Function_StopHScript;
		static  ::Dynamic Function_StopAll;
		static  ::haxe::ds::StringMap customFunctions;
		static  ::psychlua::FunkinLua lastCalledScript;
		static ::String getBuildTarget();
		static ::Dynamic getBuildTarget_dyn();

		static void luaTrace(::String text,::hx::Null< bool >  ignoreCheck,::hx::Null< bool >  deprecated,::hx::Null< int >  color);
		static ::Dynamic luaTrace_dyn();

		static bool getBool(::String variable);
		static ::Dynamic getBool_dyn();

		 cpp::Reference<lua_State> lua;
		 ::flixel::FlxCamera camTarget;
		::String scriptName;
		bool closed;
		 ::psychlua::HScript hscript;
		 ::haxe::ds::StringMap callbacks;
		::String lastCalledFunction;
		 ::Dynamic call(::String func,::cpp::VirtualArray args);
		::Dynamic call_dyn();

		void set(::String variable, ::Dynamic data);
		::Dynamic set_dyn();

		void stop();
		::Dynamic stop_dyn();

		void oldTweenFunction(::String tag,::String vars, ::Dynamic tweenValue,Float duration,::String ease,::String funcName);
		::Dynamic oldTweenFunction_dyn();

		::String findScript(::String scriptFile,::String ext);
		::Dynamic findScript_dyn();

		::String getErrorMessage(int status);
		::Dynamic getErrorMessage_dyn();

		void addLocalCallback(::String name, ::Dynamic myFunction);
		::Dynamic addLocalCallback_dyn();

		 ::haxe::ds::StringMap runtimeShaders;
		bool initLuaShader(::String name, ::Dynamic glslVersion);
		::Dynamic initLuaShader_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_FunkinLua */ 