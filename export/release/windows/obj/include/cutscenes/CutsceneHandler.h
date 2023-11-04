#ifndef INCLUDED_cutscenes_CutsceneHandler
#define INCLUDED_cutscenes_CutsceneHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(cutscenes,CutsceneHandler)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace cutscenes{


class HXCPP_CLASS_ATTRIBUTES CutsceneHandler_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef CutsceneHandler_obj OBJ_;
		CutsceneHandler_obj();

	public:
		enum { _hx_ClassId = 0x2393a577 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cutscenes.CutsceneHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"cutscenes.CutsceneHandler"); }
		static ::hx::ObjectPtr< CutsceneHandler_obj > __new();
		static ::hx::ObjectPtr< CutsceneHandler_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CutsceneHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CutsceneHandler",40,c8,76,16); }

		::cpp::VirtualArray timedEvents;
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		 ::Dynamic finishCallback2;
		Dynamic finishCallback2_dyn() { return finishCallback2;}
		 ::Dynamic onStart;
		Dynamic onStart_dyn() { return onStart;}
		Float endTime;
		::Array< ::Dynamic> objects;
		::String music;
		Float cutsceneTime;
		bool firstFrame;
		void update(Float elapsed);

		void push( ::flixel::FlxSprite spr);
		::Dynamic push_dyn();

		void timer(Float time, ::Dynamic func);
		::Dynamic timer_dyn();

		int sortByTime(::cpp::VirtualArray Obj1,::cpp::VirtualArray Obj2);
		::Dynamic sortByTime_dyn();

};

} // end namespace cutscenes

#endif /* INCLUDED_cutscenes_CutsceneHandler */ 
