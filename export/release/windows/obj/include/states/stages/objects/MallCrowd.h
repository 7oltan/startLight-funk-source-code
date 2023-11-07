#ifndef INCLUDED_states_stages_objects_MallCrowd
#define INCLUDED_states_stages_objects_MallCrowd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS3(states,stages,objects,MallCrowd)

namespace states{
namespace stages{
namespace objects{


class HXCPP_CLASS_ATTRIBUTES MallCrowd_obj : public  ::objects::BGSprite_obj
{
	public:
		typedef  ::objects::BGSprite_obj super;
		typedef MallCrowd_obj OBJ_;
		MallCrowd_obj();

	public:
		enum { _hx_ClassId = 0x1688e13c };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_sprite,::String __o_idle,::String __o_hey);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.objects.MallCrowd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.objects.MallCrowd"); }
		static ::hx::ObjectPtr< MallCrowd_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_sprite,::String __o_idle,::String __o_hey);
		static ::hx::ObjectPtr< MallCrowd_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_sprite,::String __o_idle,::String __o_hey);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MallCrowd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MallCrowd",59,b7,da,b7); }

		Float heyTimer;
		void update(Float elapsed);

		void dance( ::Dynamic forceplay);

};

} // end namespace states
} // end namespace stages
} // end namespace objects

#endif /* INCLUDED_states_stages_objects_MallCrowd */ 