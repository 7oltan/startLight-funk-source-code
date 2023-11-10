#ifndef INCLUDED_states_CreditsState
#define INCLUDED_states_CreditsState

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
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Alphabet)
HX_DECLARE_CLASS1(states,CreditsState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES CreditsState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef CreditsState_obj OBJ_;
		CreditsState_obj();

	public:
		enum { _hx_ClassId = 0x0d505f5d };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.CreditsState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.CreditsState"); }
		static ::hx::ObjectPtr< CreditsState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< CreditsState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CreditsState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CreditsState",b7,c5,81,3b); }

		int curSelected;
		 ::flixel::group::FlxTypedGroup grpOptions;
		::Array< ::Dynamic> iconArray;
		::Array< ::Dynamic> creditsStuff;
		 ::flixel::text::FlxText descText;
		Float offsetThing;
		int widthOFnames;
		 ::objects::Alphabet roleText;
		 ::flixel::FlxSprite dog;
		bool oldMouse;
		void create();

		bool quitting;
		Float holdTime;
		void update(Float elapsed);

		 ::flixel::tweens::FlxTween moveTween;
		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void pushModCreditsToList(::String folder);
		::Dynamic pushModCreditsToList_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_CreditsState */ 
