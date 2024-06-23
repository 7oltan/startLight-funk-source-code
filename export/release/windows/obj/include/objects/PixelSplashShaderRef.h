#ifndef INCLUDED_objects_PixelSplashShaderRef
#define INCLUDED_objects_PixelSplashShaderRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS1(objects,PixelSplashShader)
HX_DECLARE_CLASS1(objects,PixelSplashShaderRef)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,RGBPalette)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES PixelSplashShaderRef_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PixelSplashShaderRef_obj OBJ_;
		PixelSplashShaderRef_obj();

	public:
		enum { _hx_ClassId = 0x59d7d4d5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.PixelSplashShaderRef")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.PixelSplashShaderRef"); }
		static ::hx::ObjectPtr< PixelSplashShaderRef_obj > __new();
		static ::hx::ObjectPtr< PixelSplashShaderRef_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PixelSplashShaderRef_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PixelSplashShaderRef",01,85,a4,06); }

		 ::objects::PixelSplashShader shader;
		void copyValues( ::shaders::RGBPalette tempShader);
		::Dynamic copyValues_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_PixelSplashShaderRef */ 