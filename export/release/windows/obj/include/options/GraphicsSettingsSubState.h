#ifndef INCLUDED_options_GraphicsSettingsSubState
#define INCLUDED_options_GraphicsSettingsSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Character)
HX_DECLARE_CLASS1(options,BaseOptionsMenu)
HX_DECLARE_CLASS1(options,GraphicsSettingsSubState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES GraphicsSettingsSubState_obj : public  ::options::BaseOptionsMenu_obj
{
	public:
		typedef  ::options::BaseOptionsMenu_obj super;
		typedef GraphicsSettingsSubState_obj OBJ_;
		GraphicsSettingsSubState_obj();

	public:
		enum { _hx_ClassId = 0x776f905d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.GraphicsSettingsSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.GraphicsSettingsSubState"); }
		static ::hx::ObjectPtr< GraphicsSettingsSubState_obj > __new();
		static ::hx::ObjectPtr< GraphicsSettingsSubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicsSettingsSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicsSettingsSubState",7f,77,94,8b); }

		int antialiasingOption;
		 ::objects::Character boyfriend;
		void onChangeAntiAliasing();
		::Dynamic onChangeAntiAliasing_dyn();

		void onChangeFramerate();
		::Dynamic onChangeFramerate_dyn();

		void changeSelection(::hx::Null< int >  change);

};

} // end namespace options

#endif /* INCLUDED_options_GraphicsSettingsSubState */ 
