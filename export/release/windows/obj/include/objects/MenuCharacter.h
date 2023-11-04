#ifndef INCLUDED_objects_MenuCharacter
#define INCLUDED_objects_MenuCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,MenuCharacter)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES MenuCharacter_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef MenuCharacter_obj OBJ_;
		MenuCharacter_obj();

	public:
		enum { _hx_ClassId = 0x7839a3fa };

		void __construct(Float x,::String __o_character);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.MenuCharacter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.MenuCharacter"); }
		static ::hx::ObjectPtr< MenuCharacter_obj > __new(Float x,::String __o_character);
		static ::hx::ObjectPtr< MenuCharacter_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,::String __o_character);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuCharacter_obj();

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
		::String __ToString() const { return HX_("MenuCharacter",ea,99,ab,10); }

		static void __boot();
		static ::String DEFAULT_CHARACTER;
		::String character;
		bool hasConfirmAnimation;
		void changeCharacter(::String character);
		::Dynamic changeCharacter_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_MenuCharacter */ 
