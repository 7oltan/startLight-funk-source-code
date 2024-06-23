#ifndef INCLUDED_states_MainMenuState
#define INCLUDED_states_MainMenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,MainMenuState)
HX_DECLARE_CLASS1(states,MenuItem)

namespace states{


class HXCPP_CLASS_ATTRIBUTES MainMenuState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef MainMenuState_obj OBJ_;
		MainMenuState_obj();

	public:
		enum { _hx_ClassId = 0x2b1dec0f };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.MainMenuState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.MainMenuState"); }
		static ::hx::ObjectPtr< MainMenuState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< MainMenuState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MainMenuState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MainMenuState",59,88,5e,20); }

		static void __boot();
		static ::String psychEngineVersion;
		 ::flixel::FlxSprite swmg;
		 ::flixel::FlxSprite hand;
		::Array< ::Dynamic> items;
		 ::flixel::group::FlxTypedGroup itemGroup;
		int curSelected;
		 ::flixel::FlxObject camFollow;
		bool selected;
		bool oldMouse;
		::Array< ::Dynamic> lockArray;
		 ::flixel::text::FlxText lockText;
		bool finishedMainWeek;
		void create();

		bool alrSideWays;
		 ::flixel::tweens::FlxTween handTween;
		void doHandTween(bool sideWays);
		::Dynamic doHandTween_dyn();

		 ::states::MenuItem addItem(::String name,Float x,Float y,::Array< int > offsetSelected, ::flixel::FlxState state, ::Dynamic isMouse,::String lockText);
		::Dynamic addItem_dyn();

		bool customOverlaps( ::flixel::FlxObject object,bool isOptions);
		::Dynamic customOverlaps_dyn();

		void update(Float elapsed);

		void startSwitchin( ::flixel::FlxState id);
		::Dynamic startSwitchin_dyn();

		void onlySwitchState( ::flixel::FlxState id);
		::Dynamic onlySwitchState_dyn();

		void changeSelection(int amount);
		::Dynamic changeSelection_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_MainMenuState */ 
