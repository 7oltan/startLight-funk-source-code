#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#define INCLUDED_flixel_addons_display_FlxBackdrop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxBackdrop_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxBackdrop_obj OBJ_;
		FlxBackdrop_obj();

	public:
		enum { _hx_ClassId = 0x5ae97639 };

		void __construct( ::Dynamic Graphic,::hx::Null< Float >  __o_ScrollX,::hx::Null< Float >  __o_ScrollY,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY,::hx::Null< int >  __o_SpaceX,::hx::Null< int >  __o_SpaceY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxBackdrop")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.FlxBackdrop"); }
		static ::hx::ObjectPtr< FlxBackdrop_obj > __new( ::Dynamic Graphic,::hx::Null< Float >  __o_ScrollX,::hx::Null< Float >  __o_ScrollY,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY,::hx::Null< int >  __o_SpaceX,::hx::Null< int >  __o_SpaceY);
		static ::hx::ObjectPtr< FlxBackdrop_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Graphic,::hx::Null< Float >  __o_ScrollX,::hx::Null< Float >  __o_ScrollY,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY,::hx::Null< int >  __o_SpaceX,::hx::Null< int >  __o_SpaceY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBackdrop_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBackdrop",48,8c,ad,31); }

		 ::openfl::geom::Point _ppoint;
		int _scrollW;
		int _scrollH;
		bool _repeatX;
		bool _repeatY;
		int _spaceX;
		int _spaceY;
		 ::flixel::graphics::frames::FlxFrame _tileFrame;
		::Array< Float > _tileInfo;
		int _numTiles;
		bool useScaleHack;
		void destroy();

		 ::flixel::FlxSprite loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  Animated,::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< bool >  Unique,::String Key);

		 ::flixel::addons::display::FlxBackdrop loadFrame( ::flixel::graphics::frames::FlxFrame Frame);
		::Dynamic loadFrame_dyn();

		void draw();

		void regenGraphic();
		::Dynamic regenGraphic_dyn();

		void onGameResize(int _,int _1);
		::Dynamic onGameResize_dyn();

		void scaleCallback( ::flixel::math::FlxBasePoint Scale);
		::Dynamic scaleCallback_dyn();

		 ::flixel::graphics::frames::FlxFrame setTileFrame( ::flixel::graphics::frames::FlxFrame Frame);
		::Dynamic setTileFrame_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxBackdrop */ 
