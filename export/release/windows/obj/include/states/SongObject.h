#ifndef INCLUDED_states_SongObject
#define INCLUDED_states_SongObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(states,SongObject)

namespace states{


class HXCPP_CLASS_ATTRIBUTES SongObject_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef SongObject_obj OBJ_;
		SongObject_obj();

	public:
		enum { _hx_ClassId = 0x5d61f71e };

		void __construct(int targetY,::String songName,::String icon);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.SongObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.SongObject"); }
		static ::hx::ObjectPtr< SongObject_obj > __new(int targetY,::String songName,::String icon);
		static ::hx::ObjectPtr< SongObject_obj > __alloc(::hx::Ctx *_hx_ctx,int targetY,::String songName,::String icon);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SongObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SongObject",94,28,75,67); }

		int targetY;
		 ::flixel::math::FlxBasePoint distancePerItem;
		 ::flixel::math::FlxBasePoint startPosition;
		void update(Float elapsed);

};

} // end namespace states

#endif /* INCLUDED_states_SongObject */ 
