#ifndef INCLUDED_substates_Prompt
#define INCLUDED_substates_Prompt

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
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIPopup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISubState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(substates,Prompt)

namespace substates{


class HXCPP_CLASS_ATTRIBUTES Prompt_obj : public  ::backend::MusicBeatSubstate_obj
{
	public:
		typedef  ::backend::MusicBeatSubstate_obj super;
		typedef Prompt_obj OBJ_;
		Prompt_obj();

	public:
		enum { _hx_ClassId = 0x7ce97286 };

		void __construct(::String __o_promptText,::hx::Null< int >  __o_defaultSelected, ::Dynamic okCallback, ::Dynamic cancelCallback,::hx::Null< bool >  __o_acceptOnDefault,::String option1,::String option2);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="substates.Prompt")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"substates.Prompt"); }
		static ::hx::ObjectPtr< Prompt_obj > __new(::String __o_promptText,::hx::Null< int >  __o_defaultSelected, ::Dynamic okCallback, ::Dynamic cancelCallback,::hx::Null< bool >  __o_acceptOnDefault,::String option1,::String option2);
		static ::hx::ObjectPtr< Prompt_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_promptText,::hx::Null< int >  __o_defaultSelected, ::Dynamic okCallback, ::Dynamic cancelCallback,::hx::Null< bool >  __o_acceptOnDefault,::String option1,::String option2);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Prompt_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Prompt",c4,c5,ec,e9); }

		int selected;
		 ::Dynamic okc;
		Dynamic okc_dyn() { return okc;}
		 ::Dynamic cancelc;
		Dynamic cancelc_dyn() { return cancelc;}
		 ::flixel::FlxSprite buttons;
		::String theText;
		bool goAnyway;
		 ::flixel::addons::ui::FlxUIPopup UI_box;
		 ::flixel::FlxSprite panel;
		 ::flixel::FlxSprite panelbg;
		 ::flixel::ui::FlxButton buttonAccept;
		 ::flixel::ui::FlxButton buttonNo;
		int cornerSize;
		void create();

		void makeSelectorGraphic( ::flixel::FlxSprite panel,int w,int h,int color);
		::Dynamic makeSelectorGraphic_dyn();

		void drawCircleCornerOnSelector( ::flixel::FlxSprite panel,bool flipX,bool flipY,int color);
		::Dynamic drawCircleCornerOnSelector_dyn();

};

} // end namespace substates

#endif /* INCLUDED_substates_Prompt */ 
