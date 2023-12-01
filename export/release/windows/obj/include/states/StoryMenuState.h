#ifndef INCLUDED_states_StoryMenuState
#define INCLUDED_states_StoryMenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(backend,WeekData)
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
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(states,StoryMenuState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES StoryMenuState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef StoryMenuState_obj OBJ_;
		StoryMenuState_obj();

	public:
		enum { _hx_ClassId = 0x18456883 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.StoryMenuState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.StoryMenuState"); }
		static ::hx::ObjectPtr< StoryMenuState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< StoryMenuState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StoryMenuState_obj();

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
		::String __ToString() const { return HX_("StoryMenuState",5d,99,60,42); }

		static void __boot();
		static  ::haxe::ds::StringMap weekCompleted;
		static ::String lastDifficultyName;
		static int curWeek;
		 ::flixel::text::FlxText scoreText;
		int curDifficulty;
		 ::flixel::text::FlxText txtWeekTitle;
		 ::flixel::text::FlxText txtTracklist;
		 ::flixel::group::FlxTypedGroup grpWeekText;
		 ::flixel::group::FlxTypedGroup grpLocks;
		 ::flixel::group::FlxTypedGroup difficultySelectors;
		 ::flixel::FlxSprite sprDifficulty;
		 ::flixel::FlxSprite leftArrow;
		 ::flixel::FlxSprite rightArrow;
		::Array< ::Dynamic> loadedWeeks;
		 ::flixel::FlxSprite win;
		::Array< int > phillyLightsColors;
		int curLight;
		 ::flixel::FlxSprite clouds1;
		 ::flixel::FlxSprite clouds2;
		::Array< Float > difficultyXY;
		void create();

		void closeSubState();

		void update(Float elapsed);

		void beatHit();

		bool movedBack;
		bool selectedWeek;
		bool stopspamming;
		void selectWeek();
		::Dynamic selectWeek_dyn();

		 ::flixel::tweens::FlxTween tweenDifficulty;
		void changeDifficulty(::hx::Null< int >  change);
		::Dynamic changeDifficulty_dyn();

		int lerpScore;
		int intendedScore;
		void changeWeek(::hx::Null< int >  change);
		::Dynamic changeWeek_dyn();

		bool weekIsLocked(::String name);
		::Dynamic weekIsLocked_dyn();

		void updateText();
		::Dynamic updateText_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_StoryMenuState */ 
