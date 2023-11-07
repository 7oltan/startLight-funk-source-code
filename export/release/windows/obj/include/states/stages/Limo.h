#ifndef INCLUDED_states_stages_Limo
#define INCLUDED_states_stages_Limo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
HX_DECLARE_CLASS1(backend,BaseStage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS2(states,stages,HenchmenKillState)
HX_DECLARE_CLASS2(states,stages,Limo)

namespace states{
namespace stages{


class HXCPP_CLASS_ATTRIBUTES Limo_obj : public  ::backend::BaseStage_obj
{
	public:
		typedef  ::backend::BaseStage_obj super;
		typedef Limo_obj OBJ_;
		Limo_obj();

	public:
		enum { _hx_ClassId = 0x6e9fe5f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.Limo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.Limo"); }
		static ::hx::ObjectPtr< Limo_obj > __new();
		static ::hx::ObjectPtr< Limo_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Limo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Limo",3f,43,8c,32); }

		 ::flixel::group::FlxTypedGroup grpLimoDancers;
		 ::objects::BGSprite fastCar;
		bool fastCarCanDrive;
		 ::states::stages::HenchmenKillState limoKillingState;
		 ::objects::BGSprite limoMetalPole;
		 ::objects::BGSprite limoLight;
		 ::objects::BGSprite limoCorpse;
		 ::objects::BGSprite limoCorpseTwo;
		 ::objects::BGSprite bgLimo;
		 ::flixel::group::FlxTypedGroup grpLimoParticles;
		Float dancersDiff;
		void create();

		void createPost();

		Float limoSpeed;
		void update(Float elapsed);

		void beatHit();

		void closeSubState();

		void openSubState( ::flixel::FlxSubState SubState);

		void eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime);

		void dancersParenting();
		::Dynamic dancersParenting_dyn();

		void resetLimoKill();
		::Dynamic resetLimoKill_dyn();

		void resetFastCar();
		::Dynamic resetFastCar_dyn();

		 ::flixel::util::FlxTimer carTimer;
		void fastCarDrive();
		::Dynamic fastCarDrive_dyn();

		void killHenchmen();
		::Dynamic killHenchmen_dyn();

};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_Limo */ 