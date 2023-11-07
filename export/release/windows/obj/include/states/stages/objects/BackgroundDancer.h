#ifndef INCLUDED_states_stages_objects_BackgroundDancer
#define INCLUDED_states_stages_objects_BackgroundDancer

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
HX_DECLARE_CLASS3(states,stages,objects,BackgroundDancer)

namespace states{
namespace stages{
namespace objects{


class HXCPP_CLASS_ATTRIBUTES BackgroundDancer_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef BackgroundDancer_obj OBJ_;
		BackgroundDancer_obj();

	public:
		enum { _hx_ClassId = 0x6249bf26 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.objects.BackgroundDancer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.objects.BackgroundDancer"); }
		static ::hx::ObjectPtr< BackgroundDancer_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< BackgroundDancer_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BackgroundDancer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BackgroundDancer",8d,d4,20,03); }

		bool danceDir;
		void dance();
		::Dynamic dance_dyn();

};

} // end namespace states
} // end namespace stages
} // end namespace objects

#endif /* INCLUDED_states_stages_objects_BackgroundDancer */ 