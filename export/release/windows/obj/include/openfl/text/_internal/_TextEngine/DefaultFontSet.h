#ifndef INCLUDED_openfl_text__internal__TextEngine_DefaultFontSet
#define INCLUDED_openfl_text__internal__TextEngine_DefaultFontSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS4(openfl,text,_internal,_TextEngine,DefaultFontSet)

namespace openfl{
namespace text{
namespace _internal{
namespace _TextEngine{


class HXCPP_CLASS_ATTRIBUTES DefaultFontSet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DefaultFontSet_obj OBJ_;
		DefaultFontSet_obj();

	public:
		enum { _hx_ClassId = 0x4e0ac161 };

		void __construct( ::openfl::text::Font normal, ::openfl::text::Font bold, ::openfl::text::Font italic, ::openfl::text::Font boldItalic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text._internal._TextEngine.DefaultFontSet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.text._internal._TextEngine.DefaultFontSet"); }
		static ::hx::ObjectPtr< DefaultFontSet_obj > __new( ::openfl::text::Font normal, ::openfl::text::Font bold, ::openfl::text::Font italic, ::openfl::text::Font boldItalic);
		static ::hx::ObjectPtr< DefaultFontSet_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::text::Font normal, ::openfl::text::Font bold, ::openfl::text::Font italic, ::openfl::text::Font boldItalic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultFontSet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultFontSet",72,2e,c0,6f); }

		 ::openfl::text::Font bold;
		 ::openfl::text::Font boldItalic;
		 ::openfl::text::Font italic;
		 ::openfl::text::Font normal;
		 ::openfl::text::Font getFont(bool isBold,bool isItalic);
		::Dynamic getFont_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _internal
} // end namespace _TextEngine

#endif /* INCLUDED_openfl_text__internal__TextEngine_DefaultFontSet */ 
