#ifndef INCLUDED_states_stages_Spooky
#define INCLUDED_states_stages_Spooky

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
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS2(states,stages,Spooky)

namespace states{
namespace stages{


class HXCPP_CLASS_ATTRIBUTES Spooky_obj : public  ::backend::BaseStage_obj
{
	public:
		typedef  ::backend::BaseStage_obj super;
		typedef Spooky_obj OBJ_;
		Spooky_obj();

	public:
		enum { _hx_ClassId = 0x187e3082 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.Spooky")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.Spooky"); }
		static ::hx::ObjectPtr< Spooky_obj > __new();
		static ::hx::ObjectPtr< Spooky_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Spooky_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Spooky",0b,32,33,f6); }

		 ::objects::BGSprite halloweenBG;
		 ::objects::BGSprite halloweenWhite;
		void create();

		void createPost();

		int lightningStrikeBeat;
		int lightningOffset;
		void beatHit();

		void lightningStrikeShit();
		::Dynamic lightningStrikeShit_dyn();

		void monsterCutscene();
		::Dynamic monsterCutscene_dyn();

};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_Spooky */ 