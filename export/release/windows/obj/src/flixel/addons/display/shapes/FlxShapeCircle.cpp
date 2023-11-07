#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#include <flixel/addons/display/shapes/FlxShape.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeCircle
#include <flixel/addons/display/shapes/FlxShapeCircle.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeType
#include <flixel/addons/display/shapes/FlxShapeType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0e7eeb971ef35cc6_16_new,"flixel.addons.display.shapes.FlxShapeCircle","new",0x82ee2af8,"flixel.addons.display.shapes.FlxShapeCircle.new","flixel/addons/display/shapes/FlxShapeCircle.hx",16,0xdfc07778)
HX_LOCAL_STACK_FRAME(_hx_pos_0e7eeb971ef35cc6_26_drawSpecificShape,"flixel.addons.display.shapes.FlxShapeCircle","drawSpecificShape",0x6c03f303,"flixel.addons.display.shapes.FlxShapeCircle.drawSpecificShape","flixel/addons/display/shapes/FlxShapeCircle.hx",26,0xdfc07778)
HX_LOCAL_STACK_FRAME(_hx_pos_0e7eeb971ef35cc6_30_set_radius,"flixel.addons.display.shapes.FlxShapeCircle","set_radius",0xbbb486f7,"flixel.addons.display.shapes.FlxShapeCircle.set_radius","flixel/addons/display/shapes/FlxShapeCircle.hx",30,0xdfc07778)
HX_LOCAL_STACK_FRAME(_hx_pos_0e7eeb971ef35cc6_40_getStrokeOffsetX,"flixel.addons.display.shapes.FlxShapeCircle","getStrokeOffsetX",0x998f747f,"flixel.addons.display.shapes.FlxShapeCircle.getStrokeOffsetX","flixel/addons/display/shapes/FlxShapeCircle.hx",40,0xdfc07778)
HX_LOCAL_STACK_FRAME(_hx_pos_0e7eeb971ef35cc6_45_getStrokeOffsetY,"flixel.addons.display.shapes.FlxShapeCircle","getStrokeOffsetY",0x998f7480,"flixel.addons.display.shapes.FlxShapeCircle.getStrokeOffsetY","flixel/addons/display/shapes/FlxShapeCircle.hx",45,0xdfc07778)
HX_LOCAL_STACK_FRAME(_hx_pos_0e7eeb971ef35cc6_50_get_strokeBuffer,"flixel.addons.display.shapes.FlxShapeCircle","get_strokeBuffer",0x4ad151c9,"flixel.addons.display.shapes.FlxShapeCircle.get_strokeBuffer","flixel/addons/display/shapes/FlxShapeCircle.hx",50,0xdfc07778)
namespace flixel{
namespace addons{
namespace display{
namespace shapes{

void FlxShapeCircle_obj::__construct(Float X,Float Y,Float Radius, ::Dynamic LineStyle_,int FillColor){
            	HX_STACKFRAME(&_hx_pos_0e7eeb971ef35cc6_16_new)
HXLINE(  17)		super::__construct(X,Y,0,0,LineStyle_,FillColor,(Radius * ( (Float)(2) )),(Radius * ( (Float)(2) )));
HXLINE(  19)		{
HXLINE(  19)			this->radius = Radius;
HXDLIN(  19)			{
HXLINE(  19)				this->shapeWidth = (Radius * ( (Float)(2) ));
HXDLIN(  19)				this->shapeDirty = true;
            			}
HXDLIN(  19)			{
HXLINE(  19)				this->shapeHeight = (Radius * ( (Float)(2) ));
HXDLIN(  19)				this->shapeDirty = true;
            			}
HXDLIN(  19)			this->shapeDirty = true;
            		}
HXLINE(  21)		this->shape_id = ::flixel::addons::display::shapes::FlxShapeType_obj::CIRCLE_dyn();
            	}

Dynamic FlxShapeCircle_obj::__CreateEmpty() { return new FlxShapeCircle_obj; }

void *FlxShapeCircle_obj::_hx_vtable = 0;

Dynamic FlxShapeCircle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxShapeCircle_obj > _hx_result = new FlxShapeCircle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxShapeCircle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f951c64) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x159bd734) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x159bd734;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x3f951c64;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxShapeCircle_obj::drawSpecificShape( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_0e7eeb971ef35cc6_26_drawSpecificShape)
HXDLIN(  26)		::flixel::util::FlxSpriteUtil_obj::drawCircle(::hx::ObjectPtr<OBJ_>(this),this->radius,this->radius,this->radius,this->fillColor,this->lineStyle, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("matrix",41,36,c8,bb),matrix)));
            	}


Float FlxShapeCircle_obj::set_radius(Float r){
            	HX_STACKFRAME(&_hx_pos_0e7eeb971ef35cc6_30_set_radius)
HXLINE(  31)		this->radius = r;
HXLINE(  32)		{
HXLINE(  32)			this->shapeWidth = (r * ( (Float)(2) ));
HXDLIN(  32)			this->shapeDirty = true;
            		}
HXLINE(  33)		{
HXLINE(  33)			this->shapeHeight = (r * ( (Float)(2) ));
HXDLIN(  33)			this->shapeDirty = true;
            		}
HXLINE(  34)		this->shapeDirty = true;
HXLINE(  35)		return this->radius;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShapeCircle_obj,set_radius,return )

Float FlxShapeCircle_obj::getStrokeOffsetX(){
            	HX_STACKFRAME(&_hx_pos_0e7eeb971ef35cc6_40_getStrokeOffsetX)
HXDLIN(  40)		return (this->get_strokeBuffer() / ( (Float)(2) ));
            	}


Float FlxShapeCircle_obj::getStrokeOffsetY(){
            	HX_STACKFRAME(&_hx_pos_0e7eeb971ef35cc6_45_getStrokeOffsetY)
HXDLIN(  45)		return (this->get_strokeBuffer() / ( (Float)(2) ));
            	}


Float FlxShapeCircle_obj::get_strokeBuffer(){
            	HX_STACKFRAME(&_hx_pos_0e7eeb971ef35cc6_50_get_strokeBuffer)
HXDLIN(  50)		return ( (Float)(this->lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic)) );
            	}



::hx::ObjectPtr< FlxShapeCircle_obj > FlxShapeCircle_obj::__new(Float X,Float Y,Float Radius, ::Dynamic LineStyle_,int FillColor) {
	::hx::ObjectPtr< FlxShapeCircle_obj > __this = new FlxShapeCircle_obj();
	__this->__construct(X,Y,Radius,LineStyle_,FillColor);
	return __this;
}

::hx::ObjectPtr< FlxShapeCircle_obj > FlxShapeCircle_obj::__alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,Float Radius, ::Dynamic LineStyle_,int FillColor) {
	FlxShapeCircle_obj *__this = (FlxShapeCircle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxShapeCircle_obj), true, "flixel.addons.display.shapes.FlxShapeCircle"));
	*(void **)__this = FlxShapeCircle_obj::_hx_vtable;
	__this->__construct(X,Y,Radius,LineStyle_,FillColor);
	return __this;
}

FlxShapeCircle_obj::FlxShapeCircle_obj()
{
}

::hx::Val FlxShapeCircle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return ::hx::Val( radius ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_radius") ) { return ::hx::Val( set_radius_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getStrokeOffsetX") ) { return ::hx::Val( getStrokeOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStrokeOffsetY") ) { return ::hx::Val( getStrokeOffsetY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_strokeBuffer") ) { return ::hx::Val( get_strokeBuffer_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawSpecificShape") ) { return ::hx::Val( drawSpecificShape_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxShapeCircle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_radius(inValue.Cast< Float >()) );radius=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxShapeCircle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("radius",52,d0,f6,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxShapeCircle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxShapeCircle_obj,radius),HX_("radius",52,d0,f6,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxShapeCircle_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxShapeCircle_obj_sMemberFields[] = {
	HX_("radius",52,d0,f6,b0),
	HX_("drawSpecificShape",6b,3e,59,64),
	HX_("set_radius",8f,de,fb,a4),
	HX_("getStrokeOffsetX",17,8e,30,ae),
	HX_("getStrokeOffsetY",18,8e,30,ae),
	HX_("get_strokeBuffer",61,6b,72,5f),
	::String(null()) };

::hx::Class FlxShapeCircle_obj::__mClass;

void FlxShapeCircle_obj::__register()
{
	FlxShapeCircle_obj _hx_dummy;
	FlxShapeCircle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.shapes.FlxShapeCircle",06,8f,57,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxShapeCircle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxShapeCircle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxShapeCircle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxShapeCircle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes