#ifndef INCLUDED_backend_MusicBeatSubstate
#define INCLUDED_backend_MusicBeatSubstate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS1(backend,Controls)
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES MusicBeatSubstate_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef MusicBeatSubstate_obj OBJ_;
		MusicBeatSubstate_obj();

	public:
		enum { _hx_ClassId = 0x3c0818b8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.MusicBeatSubstate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.MusicBeatSubstate"); }
		static ::hx::ObjectPtr< MusicBeatSubstate_obj > __new();
		static ::hx::ObjectPtr< MusicBeatSubstate_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MusicBeatSubstate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MusicBeatSubstate",4c,20,4e,a8); }

		int curSection;
		int stepsToDo;
		Float lastBeat;
		Float lastStep;
		int curStep;
		int curBeat;
		Float curDecStep;
		Float curDecBeat;
		 ::backend::Controls get_controls();
		::Dynamic get_controls_dyn();

		virtual void update(Float elapsed);

		void updateSection();
		::Dynamic updateSection_dyn();

		void rollbackSection();
		::Dynamic rollbackSection_dyn();

		void updateBeat();
		::Dynamic updateBeat_dyn();

		void updateCurStep();
		::Dynamic updateCurStep_dyn();

		virtual void stepHit();
		::Dynamic stepHit_dyn();

		virtual void beatHit();
		::Dynamic beatHit_dyn();

		virtual void sectionHit();
		::Dynamic sectionHit_dyn();

		 ::Dynamic getBeatsOnSection();
		::Dynamic getBeatsOnSection_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_MusicBeatSubstate */ 
