#ifndef INCLUDED_shaders_RGBPalette
#define INCLUDED_shaders_RGBPalette

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,RGBPalette)
HX_DECLARE_CLASS1(shaders,RGBPaletteShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES RGBPalette_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RGBPalette_obj OBJ_;
		RGBPalette_obj();

	public:
		enum { _hx_ClassId = 0x4418aed8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.RGBPalette")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.RGBPalette"); }
		static ::hx::ObjectPtr< RGBPalette_obj > __new();
		static ::hx::ObjectPtr< RGBPalette_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RGBPalette_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RGBPalette",0e,ab,84,11); }

		 ::shaders::RGBPaletteShader shader;
		int r;
		int g;
		int b;
		Float mult;
		int set_r(int color);
		::Dynamic set_r_dyn();

		int set_g(int color);
		::Dynamic set_g_dyn();

		int set_b(int color);
		::Dynamic set_b_dyn();

		Float set_mult(Float value);
		::Dynamic set_mult_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_RGBPalette */ 
