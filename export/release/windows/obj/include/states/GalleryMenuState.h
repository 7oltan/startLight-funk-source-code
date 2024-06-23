#ifndef INCLUDED_states_GalleryMenuState
#define INCLUDED_states_GalleryMenuState

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
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(psychlua,HScript)
HX_DECLARE_CLASS1(states,GalleryBar)
HX_DECLARE_CLASS1(states,GalleryMenuState)
HX_DECLARE_CLASS1(tea,SScript)

namespace states{


class HXCPP_CLASS_ATTRIBUTES GalleryMenuState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef GalleryMenuState_obj OBJ_;
		GalleryMenuState_obj();

	public:
		enum { _hx_ClassId = 0x168fcb2a };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.GalleryMenuState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.GalleryMenuState"); }
		static ::hx::ObjectPtr< GalleryMenuState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< GalleryMenuState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GalleryMenuState_obj();

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
		::String __ToString() const { return HX_("GalleryMenuState",20,79,82,37); }

		static void __boot();
		static bool thisStateIsDestroyed;
		static  ::states::GalleryMenuState instance;
		bool oldMouse;
		 ::flixel::group::FlxTypedGroup itemGroup;
		 ::flixel::group::FlxTypedGroup nastyaGroup;
		 ::flixel::group::FlxTypedGroup otherGroup;
		 ::flixel::group::FlxTypedGroup conceptGroup;
		::Array< ::String > items;
		::Array< ::Dynamic> itemOffsets;
		::String URL;
		int curSelectedButton;
		int curSelected;
		bool ready;
		 ::haxe::ds::IntMap nameMap;
		 ::flixel::FlxSprite arrowUP;
		 ::flixel::FlxSprite arrowDOWN;
		 ::flixel::text::FlxText imagesText;
		 ::flixel::FlxSprite nastya;
		 ::states::GalleryBar loadingBar;
		 ::states::GalleryBar progressBar;
		 ::flixel::text::FlxText progressText;
		 ::flixel::text::FlxText GYAT;
		Float lurpLoadingBar;
		::Array< ::String > imageList;
		int imageListLength;
		 ::psychlua::HScript script;
		void create();

		void addGroupImages(::String groupName, ::flixel::group::FlxTypedGroup group, ::Dynamic callBack);
		::Dynamic addGroupImages_dyn();

		 ::flixel::text::FlxText errorText;
		void call(::String url, ::Dynamic callBack, ::Dynamic dataFormat);
		::Dynamic call_dyn();

		void callHScript(::String name,::cpp::VirtualArray args);
		::Dynamic callHScript_dyn();

		void changeSelection(int num);
		::Dynamic changeSelection_dyn();

		void update(Float elapsed);

		void destroy();

};

} // end namespace states

#endif /* INCLUDED_states_GalleryMenuState */ 
