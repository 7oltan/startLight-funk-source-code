#ifndef INCLUDED_states_stages_objects_PhillyTrain
#define INCLUDED_states_stages_objects_PhillyTrain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS3(states,stages,objects,PhillyTrain)

namespace states{
namespace stages{
namespace objects{


class HXCPP_CLASS_ATTRIBUTES PhillyTrain_obj : public  ::objects::BGSprite_obj
{
	public:
		typedef  ::objects::BGSprite_obj super;
		typedef PhillyTrain_obj OBJ_;
		PhillyTrain_obj();

	public:
		enum { _hx_ClassId = 0x55694f67 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_image,::String __o_sound);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.objects.PhillyTrain")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.objects.PhillyTrain"); }
		static ::hx::ObjectPtr< PhillyTrain_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_image,::String __o_sound);
		static ::hx::ObjectPtr< PhillyTrain_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_image,::String __o_sound);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PhillyTrain_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PhillyTrain",60,33,98,9f); }

		 ::flixel::sound::FlxSound sound;
		bool moving;
		bool finishing;
		bool startedMoving;
		Float frameTiming;
		int cars;
		int cooldown;
		void update(Float elapsed);

		void beatHit(int curBeat);
		::Dynamic beatHit_dyn();

		void start();
		::Dynamic start_dyn();

		void restart();
		::Dynamic restart_dyn();

};

} // end namespace states
} // end namespace stages
} // end namespace objects

#endif /* INCLUDED_states_stages_objects_PhillyTrain */ 