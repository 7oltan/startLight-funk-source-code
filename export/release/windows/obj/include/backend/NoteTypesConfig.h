#ifndef INCLUDED_backend_NoteTypesConfig
#define INCLUDED_backend_NoteTypesConfig

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,NoteTypesConfig)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(objects,Note)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES NoteTypesConfig_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NoteTypesConfig_obj OBJ_;
		NoteTypesConfig_obj();

	public:
		enum { _hx_ClassId = 0x75bbaa95 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.NoteTypesConfig")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.NoteTypesConfig"); }

		inline static ::hx::ObjectPtr< NoteTypesConfig_obj > __new() {
			::hx::ObjectPtr< NoteTypesConfig_obj > __this = new NoteTypesConfig_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NoteTypesConfig_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NoteTypesConfig_obj *__this = (NoteTypesConfig_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NoteTypesConfig_obj), false, "backend.NoteTypesConfig"));
			*(void **)__this = NoteTypesConfig_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteTypesConfig_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteTypesConfig",29,e5,ce,0a); }

		static void __boot();
		static  ::haxe::ds::StringMap noteTypesData;
		static void clearNoteTypesData();
		static ::Dynamic clearNoteTypesData_dyn();

		static ::Array< ::Dynamic> loadNoteTypeData(::String name);
		static ::Dynamic loadNoteTypeData_dyn();

		static void applyNoteTypeData( ::objects::Note note,::String name);
		static ::Dynamic applyNoteTypeData_dyn();

		static  ::Dynamic _propCheckArray( ::Dynamic obj,::String slice,::hx::Null< bool >  setProp, ::Dynamic valueToSet);
		static ::Dynamic _propCheckArray_dyn();

		static  ::Dynamic _interpretValue(::String value);
		static ::Dynamic _interpretValue_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_NoteTypesConfig */ 