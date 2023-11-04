#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#include <flixel/addons/ui/FlxUITileTest.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ed93265c305abdf_13_new,"flixel.addons.ui.FlxUITileTest","new",0xc2e05f87,"flixel.addons.ui.FlxUITileTest.new","flixel/addons/ui/FlxUITileTest.hx",13,0xbeb161aa)
HX_LOCAL_STACK_FRAME(_hx_pos_1ed93265c305abdf_22_get_widthInTiles,"flixel.addons.ui.FlxUITileTest","get_widthInTiles",0xe8fe62fc,"flixel.addons.ui.FlxUITileTest.get_widthInTiles","flixel/addons/ui/FlxUITileTest.hx",22,0xbeb161aa)
HX_LOCAL_STACK_FRAME(_hx_pos_1ed93265c305abdf_27_get_heightInTiles,"flixel.addons.ui.FlxUITileTest","get_heightInTiles",0x7da8fef7,"flixel.addons.ui.FlxUITileTest.get_heightInTiles","flixel/addons/ui/FlxUITileTest.hx",27,0xbeb161aa)
HX_LOCAL_STACK_FRAME(_hx_pos_1ed93265c305abdf_57_makeTiles,"flixel.addons.ui.FlxUITileTest","makeTiles",0xea745b1e,"flixel.addons.ui.FlxUITileTest.makeTiles","flixel/addons/ui/FlxUITileTest.hx",57,0xbeb161aa)
HX_LOCAL_STACK_FRAME(_hx_pos_1ed93265c305abdf_90_constrain,"flixel.addons.ui.FlxUITileTest","constrain",0x5645169e,"flixel.addons.ui.FlxUITileTest.constrain","flixel/addons/ui/FlxUITileTest.hx",90,0xbeb161aa)
HX_LOCAL_STACK_FRAME(_hx_pos_1ed93265c305abdf_124_resize,"flixel.addons.ui.FlxUITileTest","resize",0x04b97d2d,"flixel.addons.ui.FlxUITileTest.resize","flixel/addons/ui/FlxUITileTest.hx",124,0xbeb161aa)
namespace flixel{
namespace addons{
namespace ui{

void FlxUITileTest_obj::__construct(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,::hx::Null< int >  __o_color1,::hx::Null< int >  __o_color2,::hx::Null< bool >  __o_FloorToEven){
            		int color1 = __o_color1.Default(8421504);
            		int color2 = __o_color2.Default(12895428);
            		bool FloorToEven = __o_FloorToEven.Default(false);
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_13_new)
HXLINE(  36)		this->baseTileSize = -1;
HXLINE(  35)		this->floorToEven = false;
HXLINE(  33)		this->_color2 = 0;
HXLINE(  32)		this->_color1 = 0;
HXLINE(  31)		this->_tilesTall = 2;
HXLINE(  30)		this->_tilesWide = 2;
HXLINE(  41)		super::__construct(X,Y,null());
HXLINE(  43)		this->tileWidth = TileWidth;
HXLINE(  44)		this->tileHeight = TileHeight;
HXLINE(  46)		this->_tilesWide = tilesWide;
HXLINE(  47)		this->_tilesTall = tilesTall;
HXLINE(  48)		this->_color1 = color1;
HXLINE(  49)		this->_color2 = color2;
HXLINE(  51)		this->floorToEven = FloorToEven;
HXLINE(  53)		this->makeTiles(this->tileWidth,this->tileHeight,this->_tilesWide,this->_tilesTall,this->_color1,this->_color2);
            	}

Dynamic FlxUITileTest_obj::__CreateEmpty() { return new FlxUITileTest_obj; }

void *FlxUITileTest_obj::_hx_vtable = 0;

Dynamic FlxUITileTest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUITileTest_obj > _hx_result = new FlxUITileTest_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool FlxUITileTest_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x1574cf3f) {
			if (inClassId<=(int)0x0dc54e00) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0dc54e00;
			} else {
				return inClassId==(int)0x1574cf3f;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUITileTest__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUITileTest_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITileTest_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUITileTest_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUITileTest__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUITileTest__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUITileTest_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITileTest_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUITileTest_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUITileTest__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITileTest_obj::resize,
};

void *FlxUITileTest_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUITileTest__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUITileTest__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUITileTest__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUITileTest__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

int FlxUITileTest_obj::get_widthInTiles(){
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_22_get_widthInTiles)
HXDLIN(  22)		return this->_tilesWide;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITileTest_obj,get_widthInTiles,return )

int FlxUITileTest_obj::get_heightInTiles(){
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_27_get_heightInTiles)
HXDLIN(  27)		return this->_tilesTall;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITileTest_obj,get_heightInTiles,return )

void FlxUITileTest_obj::makeTiles(int tileWidth,int tileHeight,int tilesWide,int tilesTall,::hx::Null< int >  __o_color1,::hx::Null< int >  __o_color2){
            		int color1 = __o_color1.Default(-8355712);
            		int color2 = __o_color2.Default(-3881788);
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_57_makeTiles)
HXLINE(  58)		 ::flixel::math::FlxBasePoint size = this->constrain(( (Float)((tileWidth * this->_tilesWide)) ),( (Float)((tileHeight * this->_tilesTall)) ));
HXLINE(  60)		tileWidth = ::Std_obj::_hx_int(size->x);
HXLINE(  61)		tileHeight = ::Std_obj::_hx_int(size->y);
HXLINE(  63)		this->makeGraphic(tilesWide,tilesTall,color1,null(),null());
HXLINE(  65)		 ::openfl::display::BitmapData canvas = this->get_pixels();
HXLINE(  67)		int j = 0;
HXLINE(  68)		{
HXLINE(  68)			int _g = 0;
HXDLIN(  68)			int _g1 = tilesWide;
HXDLIN(  68)			while((_g < _g1)){
HXLINE(  68)				_g = (_g + 1);
HXDLIN(  68)				int ix = (_g - 1);
HXLINE(  70)				{
HXLINE(  70)					int _g1 = 0;
HXDLIN(  70)					int _g2 = tilesTall;
HXDLIN(  70)					while((_g1 < _g2)){
HXLINE(  70)						_g1 = (_g1 + 1);
HXDLIN(  70)						int iy = (_g1 - 1);
HXLINE(  72)						if ((::hx::Mod(j,2) == 0)) {
HXLINE(  74)							canvas->setPixel(ix,iy,color2);
            						}
HXLINE(  76)						j = (j + 1);
            					}
            				}
HXLINE(  78)				if ((::hx::Mod(tilesWide,2) != 0)) {
HXLINE(  80)					j = (j + 1);
            				}
            			}
            		}
HXLINE(  84)		this->set_pixels(canvas);
HXLINE(  85)		{
HXLINE(  85)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  85)			this1->set_x(( (Float)(tileWidth) ));
HXDLIN(  85)			this1->set_y(( (Float)(tileHeight) ));
            		}
HXLINE(  86)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxUITileTest_obj,makeTiles,(void))

 ::flixel::math::FlxBasePoint FlxUITileTest_obj::constrain(Float w,Float h){
            	HX_GC_STACKFRAME(&_hx_pos_1ed93265c305abdf_90_constrain)
HXLINE(  91)		int tileWidth = ::Std_obj::_hx_int((w / ( (Float)(this->_tilesWide) )));
HXLINE(  92)		int tileHeight = ::Std_obj::_hx_int((h / ( (Float)(this->_tilesTall) )));
HXLINE(  94)		if ((tileWidth < tileHeight)) {
HXLINE(  96)			tileHeight = tileWidth;
            		}
            		else {
HXLINE(  98)			if ((tileHeight < tileWidth)) {
HXLINE( 100)				tileWidth = tileHeight;
            			}
            		}
HXLINE( 103)		if (this->floorToEven) {
HXLINE( 105)			if ((::hx::Mod(tileWidth,2) == 1)) {
HXLINE( 107)				tileWidth = (tileWidth - 1);
HXLINE( 108)				tileHeight = tileWidth;
            			}
            		}
HXLINE( 113)		if ((this->baseTileSize > 0)) {
HXLINE( 115)			int tileWidth1 = ::Std_obj::_hx_int((( (Float)(tileWidth) ) / ( (Float)(this->baseTileSize) )));
HXDLIN( 115)			tileWidth = (tileWidth1 * this->baseTileSize);
HXLINE( 116)			tileHeight = tileWidth;
            		}
HXLINE( 119)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,tileWidth,tileHeight);
HXDLIN( 119)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITileTest_obj,constrain,return )

void FlxUITileTest_obj::resize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_124_resize)
HXDLIN( 124)		this->makeTiles(this->tileWidth,this->tileHeight,this->_tilesWide,this->_tilesTall,this->_color1,this->_color2);
            	}



::hx::ObjectPtr< FlxUITileTest_obj > FlxUITileTest_obj::__new(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,::hx::Null< int >  __o_color1,::hx::Null< int >  __o_color2,::hx::Null< bool >  __o_FloorToEven) {
	::hx::ObjectPtr< FlxUITileTest_obj > __this = new FlxUITileTest_obj();
	__this->__construct(X,Y,TileWidth,TileHeight,tilesWide,tilesTall,__o_color1,__o_color2,__o_FloorToEven);
	return __this;
}

::hx::ObjectPtr< FlxUITileTest_obj > FlxUITileTest_obj::__alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,::hx::Null< int >  __o_color1,::hx::Null< int >  __o_color2,::hx::Null< bool >  __o_FloorToEven) {
	FlxUITileTest_obj *__this = (FlxUITileTest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUITileTest_obj), true, "flixel.addons.ui.FlxUITileTest"));
	*(void **)__this = FlxUITileTest_obj::_hx_vtable;
	__this->__construct(X,Y,TileWidth,TileHeight,tilesWide,tilesTall,__o_color1,__o_color2,__o_FloorToEven);
	return __this;
}

FlxUITileTest_obj::FlxUITileTest_obj()
{
}

::hx::Val FlxUITileTest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_color1") ) { return ::hx::Val( _color1 ); }
		if (HX_FIELD_EQ(inName,"_color2") ) { return ::hx::Val( _color2 ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return ::hx::Val( tileWidth ); }
		if (HX_FIELD_EQ(inName,"makeTiles") ) { return ::hx::Val( makeTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"constrain") ) { return ::hx::Val( constrain_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return ::hx::Val( tileHeight ); }
		if (HX_FIELD_EQ(inName,"_tilesWide") ) { return ::hx::Val( _tilesWide ); }
		if (HX_FIELD_EQ(inName,"_tilesTall") ) { return ::hx::Val( _tilesTall ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorToEven") ) { return ::hx::Val( floorToEven ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_widthInTiles() ); }
		if (HX_FIELD_EQ(inName,"baseTileSize") ) { return ::hx::Val( baseTileSize ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_heightInTiles() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_widthInTiles") ) { return ::hx::Val( get_widthInTiles_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_heightInTiles") ) { return ::hx::Val( get_heightInTiles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUITileTest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_color1") ) { _color1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color2") ) { _color2=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesWide") ) { _tilesWide=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesTall") ) { _tilesTall=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorToEven") ) { floorToEven=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"baseTileSize") ) { baseTileSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITileTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("widthInTiles",fa,b1,71,d4));
	outFields->push(HX_("heightInTiles",39,ce,1a,97));
	outFields->push(HX_("tileWidth",f8,13,be,55));
	outFields->push(HX_("tileHeight",b5,dd,e2,66));
	outFields->push(HX_("_tilesWide",f9,b3,b6,c4));
	outFields->push(HX_("_tilesTall",13,05,b5,c2));
	outFields->push(HX_("_color1",0d,d7,fd,34));
	outFields->push(HX_("_color2",0e,d7,fd,34));
	outFields->push(HX_("floorToEven",21,81,8e,ed));
	outFields->push(HX_("baseTileSize",40,64,4c,fa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUITileTest_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxUITileTest_obj,tileWidth),HX_("tileWidth",f8,13,be,55)},
	{::hx::fsInt,(int)offsetof(FlxUITileTest_obj,tileHeight),HX_("tileHeight",b5,dd,e2,66)},
	{::hx::fsInt,(int)offsetof(FlxUITileTest_obj,_tilesWide),HX_("_tilesWide",f9,b3,b6,c4)},
	{::hx::fsInt,(int)offsetof(FlxUITileTest_obj,_tilesTall),HX_("_tilesTall",13,05,b5,c2)},
	{::hx::fsInt,(int)offsetof(FlxUITileTest_obj,_color1),HX_("_color1",0d,d7,fd,34)},
	{::hx::fsInt,(int)offsetof(FlxUITileTest_obj,_color2),HX_("_color2",0e,d7,fd,34)},
	{::hx::fsBool,(int)offsetof(FlxUITileTest_obj,floorToEven),HX_("floorToEven",21,81,8e,ed)},
	{::hx::fsInt,(int)offsetof(FlxUITileTest_obj,baseTileSize),HX_("baseTileSize",40,64,4c,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUITileTest_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUITileTest_obj_sMemberFields[] = {
	HX_("tileWidth",f8,13,be,55),
	HX_("tileHeight",b5,dd,e2,66),
	HX_("get_widthInTiles",83,9e,10,d9),
	HX_("get_heightInTiles",90,d9,8a,9d),
	HX_("_tilesWide",f9,b3,b6,c4),
	HX_("_tilesTall",13,05,b5,c2),
	HX_("_color1",0d,d7,fd,34),
	HX_("_color2",0e,d7,fd,34),
	HX_("floorToEven",21,81,8e,ed),
	HX_("baseTileSize",40,64,4c,fa),
	HX_("makeTiles",b7,74,cd,e3),
	HX_("constrain",37,30,9e,4f),
	HX_("resize",f4,59,7b,08),
	::String(null()) };

::hx::Class FlxUITileTest_obj::__mClass;

void FlxUITileTest_obj::__register()
{
	FlxUITileTest_obj _hx_dummy;
	FlxUITileTest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUITileTest",15,90,32,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUITileTest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUITileTest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUITileTest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUITileTest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
