#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_HealthIcon
#include <objects/HealthIcon.h>
#endif
#ifndef INCLUDED_states_SongObject
#include <states/SongObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_31c7b0a4620b79b3_569_new,"states.SongObject","new",0x02143932,"states.SongObject.new","states/FreeplayState.hx",569,0x1b2e20da)
HX_LOCAL_STACK_FRAME(_hx_pos_31c7b0a4620b79b3_614_update,"states.SongObject","update",0x6644ec77,"states.SongObject.update","states/FreeplayState.hx",614,0x1b2e20da)
namespace states{

void SongObject_obj::__construct(int targetY,::String songName,::String icon){
            	HX_GC_STACKFRAME(&_hx_pos_31c7b0a4620b79b3_569_new)
HXLINE( 572)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,90,320);
HXDLIN( 572)		this->startPosition = this1;
HXLINE( 571)		 ::flixel::math::FlxBasePoint this11 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,20,120);
HXDLIN( 571)		this->distancePerItem = this11;
HXLINE( 570)		this->targetY = 0;
HXLINE( 574)		super::__construct(null(),null(),null());
HXLINE( 575)		this->targetY = targetY;
HXLINE( 577)		 ::flixel::FlxSprite barLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,-25,null());
HXDLIN( 577)		 ::flixel::FlxSprite barLeft1 = barLeft->loadGraphic(::backend::Paths_obj::image(HX_("freeplay/bar-left",90,96,5d,95),null(),null()),null(),null(),null(),null(),null());
HXLINE( 578)		this->add(barLeft1);
HXLINE( 580)		 ::flixel::FlxSprite barMiddle =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,-25,null());
HXDLIN( 580)		 ::flixel::FlxSprite barMiddle1 = barMiddle->loadGraphic(::backend::Paths_obj::image(HX_("freeplay/bar-middle",1e,d6,73,8b),null(),null()),null(),null(),null(),null(),null());
HXLINE( 581)		this->add(barMiddle1);
HXLINE( 583)		 ::flixel::FlxSprite barRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,-25,null());
HXDLIN( 583)		 ::flixel::FlxSprite barRight1 = barRight->loadGraphic(::backend::Paths_obj::image(HX_("freeplay/bar-right",33,35,93,93),null(),null()),null(),null(),null(),null(),null());
HXLINE( 584)		this->add(barRight1);
HXLINE( 586)		 ::objects::Alphabet songText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),songName,true);
HXLINE( 587)		songText->set_scaleX(::Math_obj::min(((Float)0.8),(( (Float)(980) ) / songText->get_width())));
HXLINE( 588)		this->add(songText);
HXLINE( 590)		barMiddle1->setGraphicSize(0,::Std_obj::_hx_int((songText->get_height() * ((Float)1.5714285714285714))));
HXLINE( 591)		barMiddle1->updateHitbox();
HXLINE( 592)		barLeft1->setGraphicSize(0,::Std_obj::_hx_int((songText->get_height() * ((Float)1.5714285714285714))));
HXLINE( 593)		barLeft1->updateHitbox();
HXLINE( 594)		barRight1->setGraphicSize(0,::Std_obj::_hx_int((songText->get_height() * ((Float)1.5714285714285714))));
HXLINE( 595)		barRight1->updateHitbox();
HXLINE( 597)		int _hx_tmp = ::Std_obj::_hx_int((songText->get_width() - ( (Float)(210) )));
HXDLIN( 597)		barMiddle1->setGraphicSize(_hx_tmp,::Std_obj::_hx_int(barMiddle1->get_height()));
HXLINE( 598)		barMiddle1->updateHitbox();
HXLINE( 599)		Float barLeft2 = barLeft1->x;
HXDLIN( 599)		barMiddle1->set_x((barLeft2 + barLeft1->get_width()));
HXLINE( 601)		Float barMiddle2 = barMiddle1->x;
HXDLIN( 601)		barRight1->set_x((barMiddle2 + barMiddle1->get_width()));
HXLINE( 603)		songText->set_scaleY(((Float)0.8));
HXLINE( 605)		 ::objects::HealthIcon icon1 =  ::objects::HealthIcon_obj::__alloc( HX_CTX ,icon,null(),null());
HXLINE( 606)		icon1->setGraphicSize(::Std_obj::_hx_int((icon1->get_width() * ((Float)0.6))),null());
HXLINE( 607)		icon1->updateHitbox();
HXLINE( 608)		Float barRight2 = barRight1->x;
HXDLIN( 608)		Float _hx_tmp1 = (barRight2 + (barRight1->get_width() / ( (Float)(2) )));
HXDLIN( 608)		icon1->setPosition(((_hx_tmp1 - (icon1->get_width() / ( (Float)(2) ))) - ( (Float)(15) )),-40);
HXLINE( 609)		this->add(icon1);
            	}

Dynamic SongObject_obj::__CreateEmpty() { return new SongObject_obj; }

void *SongObject_obj::_hx_vtable = 0;

Dynamic SongObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SongObject_obj > _hx_result = new SongObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SongObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5d61f71e) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x5d61f71e;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void SongObject_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_31c7b0a4620b79b3_614_update)
HXDLIN( 614)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< SongObject_obj > SongObject_obj::__new(int targetY,::String songName,::String icon) {
	::hx::ObjectPtr< SongObject_obj > __this = new SongObject_obj();
	__this->__construct(targetY,songName,icon);
	return __this;
}

::hx::ObjectPtr< SongObject_obj > SongObject_obj::__alloc(::hx::Ctx *_hx_ctx,int targetY,::String songName,::String icon) {
	SongObject_obj *__this = (SongObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SongObject_obj), true, "states.SongObject"));
	*(void **)__this = SongObject_obj::_hx_vtable;
	__this->__construct(targetY,songName,icon);
	return __this;
}

SongObject_obj::SongObject_obj()
{
}

void SongObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SongObject);
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(distancePerItem,"distancePerItem");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SongObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(distancePerItem,"distancePerItem");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SongObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return ::hx::Val( startPosition ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distancePerItem") ) { return ::hx::Val( distancePerItem ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SongObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distancePerItem") ) { distancePerItem=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SongObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("distancePerItem",db,0d,28,f9));
	outFields->push(HX_("startPosition",2b,03,b6,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SongObject_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SongObject_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(SongObject_obj,distancePerItem),HX_("distancePerItem",db,0d,28,f9)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(SongObject_obj,startPosition),HX_("startPosition",2b,03,b6,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SongObject_obj_sStaticStorageInfo = 0;
#endif

static ::String SongObject_obj_sMemberFields[] = {
	HX_("targetY",e8,f3,67,88),
	HX_("distancePerItem",db,0d,28,f9),
	HX_("startPosition",2b,03,b6,cf),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class SongObject_obj::__mClass;

void SongObject_obj::__register()
{
	SongObject_obj _hx_dummy;
	SongObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.SongObject",40,78,97,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SongObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SongObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SongObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SongObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
