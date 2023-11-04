#ifndef INCLUDED_flixel_util__FlxSave_FlxSharedObject
#define INCLUDED_flixel_util__FlxSave_FlxSharedObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_net_SharedObject
#include <openfl/net/SharedObject.h>
#endif
HX_DECLARE_CLASS3(flixel,util,_FlxSave,FlxSharedObject)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,SharedObject)

namespace flixel{
namespace util{
namespace _FlxSave{


class HXCPP_CLASS_ATTRIBUTES FlxSharedObject_obj : public  ::openfl::net::SharedObject_obj
{
	public:
		typedef  ::openfl::net::SharedObject_obj super;
		typedef FlxSharedObject_obj OBJ_;
		FlxSharedObject_obj();

	public:
		enum { _hx_ClassId = 0x66b864e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxSave.FlxSharedObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util._FlxSave.FlxSharedObject"); }
		static ::hx::ObjectPtr< FlxSharedObject_obj > __new();
		static ::hx::ObjectPtr< FlxSharedObject_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSharedObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSharedObject",b6,56,69,20); }

		static  ::haxe::ds::StringMap all;
		static void init();
		static ::Dynamic init_dyn();

		static void onExit(int _);
		static ::Dynamic onExit_dyn();

		static ::String getDefaultLocalPath();
		static ::Dynamic getDefaultLocalPath_dyn();

		static  ::openfl::net::SharedObject getLocal(::String name,::String localPath);
		static ::Dynamic getLocal_dyn();

		static ::String getData(::String name,::String localPath);
		static ::Dynamic getData_dyn();

		static ::String getPath(::String localPath,::String name);
		static ::Dynamic getPath_dyn();

		static bool exists(::String name,::String localPath);
		static ::Dynamic exists_dyn();

		static bool newExists(::String name,::String localPath);
		static ::Dynamic newExists_dyn();

		static ::String getLegacyPath(::String localPath,::String name);
		static ::Dynamic getLegacyPath_dyn();

		static bool legacyExists(::String name,::String localPath);
		static ::Dynamic legacyExists_dyn();

		 ::Dynamic flush(::hx::Null< int >  minDiskSpace);

		void clear();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSave

#endif /* INCLUDED_flixel_util__FlxSave_FlxSharedObject */ 
