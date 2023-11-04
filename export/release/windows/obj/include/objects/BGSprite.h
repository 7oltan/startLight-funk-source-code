#ifndef INCLUDED_objects_BGSprite
#define INCLUDED_objects_BGSprite

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
HX_DECLARE_CLASS1(objects,BGSprite)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES BGSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef BGSprite_obj OBJ_;
		BGSprite_obj();

	public:
		enum { _hx_ClassId = 0x199d8d7e };

		void __construct(::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.BGSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.BGSprite"); }
		static ::hx::ObjectPtr< BGSprite_obj > __new(::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop);
		static ::hx::ObjectPtr< BGSprite_obj > __alloc(::hx::Ctx *_hx_ctx,::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BGSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BGSprite",aa,ab,9f,3f); }

		::String idleAnim;
		void dance( ::Dynamic forceplay);
		::Dynamic dance_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_BGSprite */ 
