#ifndef INCLUDED_states_stages_StageWeek1
#define INCLUDED_states_stages_StageWeek1

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
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS2(states,stages,StageWeek1)
HX_DECLARE_CLASS3(states,stages,objects,DadBattleFog)

namespace states{
namespace stages{


class HXCPP_CLASS_ATTRIBUTES StageWeek1_obj : public  ::backend::BaseStage_obj
{
	public:
		typedef  ::backend::BaseStage_obj super;
		typedef StageWeek1_obj OBJ_;
		StageWeek1_obj();

	public:
		enum { _hx_ClassId = 0x6d10f436 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.StageWeek1")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.StageWeek1"); }
		static ::hx::ObjectPtr< StageWeek1_obj > __new();
		static ::hx::ObjectPtr< StageWeek1_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StageWeek1_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StageWeek1",3f,ee,bf,11); }

		 ::objects::BGSprite dadbattleBlack;
		 ::objects::BGSprite dadbattleLight;
		 ::states::stages::objects::DadBattleFog dadbattleFog;
		void create();

		void eventPushed( ::Dynamic event);

		void eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime);

};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_StageWeek1 */ 