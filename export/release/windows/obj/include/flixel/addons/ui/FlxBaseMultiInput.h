#ifndef INCLUDED_flixel_addons_ui_FlxBaseMultiInput
#define INCLUDED_flixel_addons_ui_FlxBaseMultiInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,ui,FlxBaseMultiInput)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxBaseMultiInput_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBaseMultiInput_obj OBJ_;
		FlxBaseMultiInput_obj();

	public:
		enum { _hx_ClassId = 0x2c2c85f1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxBaseMultiInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxBaseMultiInput"); }
		static ::hx::ObjectPtr< FlxBaseMultiInput_obj > __new();
		static ::hx::ObjectPtr< FlxBaseMultiInput_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBaseMultiInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxBaseMultiInput",34,5a,ce,30); }

		int input;
		::Array< int > combos;
		::Array< int > forbiddens;
		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual bool checkJustPressed();
		::Dynamic checkJustPressed_dyn();

		virtual bool checkJustReleased();
		::Dynamic checkJustReleased_dyn();

		virtual bool checkPressed();
		::Dynamic checkPressed_dyn();

		bool justPressed();
		::Dynamic justPressed_dyn();

		bool justReleased();
		::Dynamic justReleased_dyn();

		bool pressed();
		::Dynamic pressed_dyn();

		bool equals( ::flixel::addons::ui::FlxBaseMultiInput other);
		::Dynamic equals_dyn();

		bool passCombosAndForbiddens(::hx::Null< bool >  comboValue,::hx::Null< bool >  forbiddenValue);
		::Dynamic passCombosAndForbiddens_dyn();

		virtual bool checkCombos(bool value);
		::Dynamic checkCombos_dyn();

		virtual bool checkForbiddens(bool value);
		::Dynamic checkForbiddens_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxBaseMultiInput */ 
