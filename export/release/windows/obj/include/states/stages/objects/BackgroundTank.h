#ifndef INCLUDED_states_stages_objects_BackgroundTank
#define INCLUDED_states_stages_objects_BackgroundTank

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
HX_DECLARE_CLASS3(states,stages,objects,BackgroundTank)

namespace states{
namespace stages{
namespace objects{


class HXCPP_CLASS_ATTRIBUTES BackgroundTank_obj : public  ::objects::BGSprite_obj
{
	public:
		typedef  ::objects::BGSprite_obj super;
		typedef BackgroundTank_obj OBJ_;
		BackgroundTank_obj();

	public:
		enum { _hx_ClassId = 0x54cf8071 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.objects.BackgroundTank")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.objects.BackgroundTank"); }
		static ::hx::ObjectPtr< BackgroundTank_obj > __new();
		static ::hx::ObjectPtr< BackgroundTank_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BackgroundTank_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BackgroundTank",18,9e,66,cb); }

		Float offsetX;
		Float offsetY;
		Float tankSpeed;
		Float tankAngle;
		void update(Float elapsed);

};

} // end namespace states
} // end namespace stages
} // end namespace objects

#endif /* INCLUDED_states_stages_objects_BackgroundTank */ 