#ifndef INCLUDED_substates_PauseSubState
#define INCLUDED_substates_PauseSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Alphabet)
HX_DECLARE_CLASS1(substates,PauseSubState)

namespace substates{


class HXCPP_CLASS_ATTRIBUTES PauseSubState_obj : public  ::backend::MusicBeatSubstate_obj
{
	public:
		typedef  ::backend::MusicBeatSubstate_obj super;
		typedef PauseSubState_obj OBJ_;
		PauseSubState_obj();

	public:
		enum { _hx_ClassId = 0x4a50e4e5 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="substates.PauseSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"substates.PauseSubState"); }
		static ::hx::ObjectPtr< PauseSubState_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< PauseSubState_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PauseSubState_obj();

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
		::String __ToString() const { return HX_("PauseSubState",67,95,e5,08); }

		static void __boot();
		static ::String songName;
		static void restartSong(::hx::Null< bool >  noTrans);
		static ::Dynamic restartSong_dyn();

		 ::flixel::group::FlxTypedGroup grpMenuShit;
		::Array< ::String > menuItems;
		::Array< ::String > menuItemsOG;
		::Array< ::String > difficultyChoices;
		int curSelected;
		 ::flixel::sound::FlxSound pauseMusic;
		 ::flixel::text::FlxText practiceText;
		 ::flixel::text::FlxText skipTimeText;
		 ::objects::Alphabet skipTimeTracker;
		Float curTime;
		 ::flixel::FlxSprite missingTextBG;
		 ::flixel::text::FlxText missingText;
		Float holdTime;
		Float cantUnpause;
		void update(Float elapsed);

		void deleteSkipTimeText();
		::Dynamic deleteSkipTimeText_dyn();

		void destroy();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void regenMenu();
		::Dynamic regenMenu_dyn();

		void updateSkipTextStuff();
		::Dynamic updateSkipTextStuff_dyn();

		void updateSkipTimeText();
		::Dynamic updateSkipTimeText_dyn();

};

} // end namespace substates

#endif /* INCLUDED_substates_PauseSubState */ 
