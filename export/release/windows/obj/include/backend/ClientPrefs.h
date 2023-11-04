#ifndef INCLUDED_backend_ClientPrefs
#define INCLUDED_backend_ClientPrefs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,ClientPrefs)
HX_DECLARE_CLASS1(backend,SaveVariables)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES ClientPrefs_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClientPrefs_obj OBJ_;
		ClientPrefs_obj();

	public:
		enum { _hx_ClassId = 0x0a517989 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.ClientPrefs")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.ClientPrefs"); }

		inline static ::hx::ObjectPtr< ClientPrefs_obj > __new() {
			::hx::ObjectPtr< ClientPrefs_obj > __this = new ClientPrefs_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ClientPrefs_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ClientPrefs_obj *__this = (ClientPrefs_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClientPrefs_obj), false, "backend.ClientPrefs"));
			*(void **)__this = ClientPrefs_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClientPrefs_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClientPrefs",c5,55,e0,8a); }

		static void __boot();
		static  ::backend::SaveVariables data;
		static  ::backend::SaveVariables defaultData;
		static  ::haxe::ds::StringMap keyBinds;
		static  ::haxe::ds::StringMap gamepadBinds;
		static  ::haxe::ds::StringMap defaultKeys;
		static  ::haxe::ds::StringMap defaultButtons;
		static void resetKeys( ::Dynamic controller);
		static ::Dynamic resetKeys_dyn();

		static void clearInvalidKeys(::String key);
		static ::Dynamic clearInvalidKeys_dyn();

		static void loadDefaultKeys();
		static ::Dynamic loadDefaultKeys_dyn();

		static void saveSettings();
		static ::Dynamic saveSettings_dyn();

		static void loadPrefs();
		static ::Dynamic loadPrefs_dyn();

		static  ::Dynamic getGameplaySetting(::String name, ::Dynamic defaultValue, ::Dynamic customDefaultValue);
		static ::Dynamic getGameplaySetting_dyn();

		static void reloadVolumeKeys();
		static ::Dynamic reloadVolumeKeys_dyn();

		static void toggleVolumeKeys(bool turnOn);
		static ::Dynamic toggleVolumeKeys_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_ClientPrefs */ 
