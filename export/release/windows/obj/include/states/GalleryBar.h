#ifndef INCLUDED_states_GalleryBar
#define INCLUDED_states_GalleryBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,GalleryBar)

namespace states{


class HXCPP_CLASS_ATTRIBUTES GalleryBar_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef GalleryBar_obj OBJ_;
		GalleryBar_obj();

	public:
		enum { _hx_ClassId = 0x6c61ce43 };

		void __construct( ::Dynamic x, ::Dynamic y,Float barWidth,Float barHeight,int colorA,int colorB);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.GalleryBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.GalleryBar"); }
		static ::hx::ObjectPtr< GalleryBar_obj > __new( ::Dynamic x, ::Dynamic y,Float barWidth,Float barHeight,int colorA,int colorB);
		static ::hx::ObjectPtr< GalleryBar_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic x, ::Dynamic y,Float barWidth,Float barHeight,int colorA,int colorB);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GalleryBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GalleryBar",81,14,5d,44); }

		Float barWidth;
		Float barHeight;
		int colorA;
		int colorB;
		Float percent;
		void draw();

};

} // end namespace states

#endif /* INCLUDED_states_GalleryBar */ 
