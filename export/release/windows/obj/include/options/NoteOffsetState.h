#ifndef INCLUDED_options_NoteOffsetState
#define INCLUDED_options_NoteOffsetState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(objects,Alphabet)
HX_DECLARE_CLASS1(objects,Character)
HX_DECLARE_CLASS1(objects,HealthBar)
HX_DECLARE_CLASS1(options,NoteOffsetState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES NoteOffsetState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef NoteOffsetState_obj OBJ_;
		NoteOffsetState_obj();

	public:
		enum { _hx_ClassId = 0x40f2fd6e };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.NoteOffsetState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.NoteOffsetState"); }
		static ::hx::ObjectPtr< NoteOffsetState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< NoteOffsetState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteOffsetState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteOffsetState",8c,82,4f,5a); }

		 ::objects::Character boyfriend;
		 ::objects::Character gf;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		 ::flixel::FlxCamera camOther;
		 ::flixel::text::FlxText coolText;
		 ::flixel::FlxSprite rating;
		 ::flixel::group::FlxTypedSpriteGroup comboNums;
		 ::flixel::group::FlxTypedGroup dumbTexts;
		Float barPercent;
		int delayMin;
		int delayMax;
		 ::objects::HealthBar timeBar;
		 ::flixel::text::FlxText timeTxt;
		 ::objects::Alphabet beatText;
		 ::flixel::tweens::FlxTween beatTween;
		 ::flixel::text::FlxText changeModeText;
		 ::flixel::FlxSprite controllerPointer;
		bool _lastControllerMode;
		void create();

		Float holdTime;
		bool onComboMenu;
		 ::Dynamic holdingObjectType;
		 ::flixel::math::FlxBasePoint startMousePos;
		 ::flixel::math::FlxBasePoint startComboOffset;
		void update(Float elapsed);

		 ::flixel::tweens::FlxTween zoomTween;
		int lastBeatHit;
		void beatHit();

		void repositionCombo();
		::Dynamic repositionCombo_dyn();

		void createTexts();
		::Dynamic createTexts_dyn();

		void reloadTexts();
		::Dynamic reloadTexts_dyn();

		void updateNoteDelay();
		::Dynamic updateNoteDelay_dyn();

		void updateMode();
		::Dynamic updateMode_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_NoteOffsetState */ 