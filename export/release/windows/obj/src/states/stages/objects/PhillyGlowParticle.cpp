#include <hxcpp.h>

#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_states_stages_objects_PhillyGlowParticle
#include <states/stages/objects/PhillyGlowParticle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_00a72d50ba795a76_3_new,"states.stages.objects.PhillyGlowParticle","new",0x12cc6654,"states.stages.objects.PhillyGlowParticle.new","states/stages/objects/PhillyGlowParticle.hx",3,0x7dc083db)
HX_LOCAL_STACK_FRAME(_hx_pos_00a72d50ba795a76_32_update,"states.stages.objects.PhillyGlowParticle","update",0x6da02095,"states.stages.objects.PhillyGlowParticle.update","states/stages/objects/PhillyGlowParticle.hx",32,0x7dc083db)
namespace states{
namespace stages{
namespace objects{

void PhillyGlowParticle_obj::__construct(Float x,Float y,int color){
            	HX_STACKFRAME(&_hx_pos_00a72d50ba795a76_3_new)
HXLINE(   7)		this->originalScale = ((Float)1);
HXLINE(   6)		this->decay = ((Float)0);
HXLINE(   5)		this->lifeTime = ((Float)0);
HXLINE(  10)		super::__construct(x,y,null());
HXLINE(  11)		this->set_color(color);
HXLINE(  13)		this->loadGraphic(::backend::Paths_obj::image(HX_("philly/particle",4d,e9,20,05),null(),null()),null(),null(),null(),null(),null());
HXLINE(  14)		this->lifeTime = ::flixel::FlxG_obj::random->_hx_float(((Float)0.6),((Float)0.9),null());
HXLINE(  15)		this->decay = ::flixel::FlxG_obj::random->_hx_float(((Float)0.8),1,null());
HXLINE(  16)		if (!(::backend::ClientPrefs_obj::data->flashing)) {
HXLINE(  18)			 ::states::stages::objects::PhillyGlowParticle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  18)			_hx_tmp->decay = (_hx_tmp->decay * ((Float)0.5));
HXLINE(  19)			this->set_alpha(((Float)0.5));
            		}
HXLINE(  22)		this->originalScale = ::flixel::FlxG_obj::random->_hx_float(((Float)0.75),1,null());
HXLINE(  23)		{
HXLINE(  23)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  23)			Float y1 = this->originalScale;
HXDLIN(  23)			this1->set_x(this->originalScale);
HXDLIN(  23)			this1->set_y(y1);
            		}
HXLINE(  25)		{
HXLINE(  25)			 ::flixel::math::FlxBasePoint this2 = this->scrollFactor;
HXDLIN(  25)			Float x1 = ::flixel::FlxG_obj::random->_hx_float(((Float)0.3),((Float)0.75),null());
HXDLIN(  25)			Float y2 = ::flixel::FlxG_obj::random->_hx_float(((Float)0.65),((Float)0.75),null());
HXDLIN(  25)			this2->set_x(x1);
HXDLIN(  25)			this2->set_y(y2);
            		}
HXLINE(  26)		{
HXLINE(  26)			 ::flixel::math::FlxBasePoint this3 = this->velocity;
HXDLIN(  26)			Float x2 = ::flixel::FlxG_obj::random->_hx_float(-40,40,null());
HXDLIN(  26)			Float y3 = ::flixel::FlxG_obj::random->_hx_float(-175,-250,null());
HXDLIN(  26)			this3->set_x(x2);
HXDLIN(  26)			this3->set_y(y3);
            		}
HXLINE(  27)		{
HXLINE(  27)			 ::flixel::math::FlxBasePoint this4 = this->acceleration;
HXDLIN(  27)			this4->set_x(::flixel::FlxG_obj::random->_hx_float(-10,10,null()));
HXDLIN(  27)			this4->set_y(( (Float)(25) ));
            		}
HXLINE(  28)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            	}

Dynamic PhillyGlowParticle_obj::__CreateEmpty() { return new PhillyGlowParticle_obj; }

void *PhillyGlowParticle_obj::_hx_vtable = 0;

Dynamic PhillyGlowParticle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PhillyGlowParticle_obj > _hx_result = new PhillyGlowParticle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool PhillyGlowParticle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x1227a434) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1227a434;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void PhillyGlowParticle_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_00a72d50ba795a76_32_update)
HXLINE(  33)		 ::states::stages::objects::PhillyGlowParticle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  33)		_hx_tmp->lifeTime = (_hx_tmp->lifeTime - elapsed);
HXLINE(  34)		if ((this->lifeTime < 0)) {
HXLINE(  36)			this->lifeTime = ( (Float)(0) );
HXLINE(  37)			this->set_alpha((this->alpha - (this->decay * elapsed)));
HXLINE(  38)			if ((this->alpha > 0)) {
HXLINE(  40)				 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  40)				Float y = (this->originalScale * this->alpha);
HXDLIN(  40)				this1->set_x((this->originalScale * this->alpha));
HXDLIN(  40)				this1->set_y(y);
            			}
            		}
HXLINE(  43)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< PhillyGlowParticle_obj > PhillyGlowParticle_obj::__new(Float x,Float y,int color) {
	::hx::ObjectPtr< PhillyGlowParticle_obj > __this = new PhillyGlowParticle_obj();
	__this->__construct(x,y,color);
	return __this;
}

::hx::ObjectPtr< PhillyGlowParticle_obj > PhillyGlowParticle_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int color) {
	PhillyGlowParticle_obj *__this = (PhillyGlowParticle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PhillyGlowParticle_obj), true, "states.stages.objects.PhillyGlowParticle"));
	*(void **)__this = PhillyGlowParticle_obj::_hx_vtable;
	__this->__construct(x,y,color);
	return __this;
}

PhillyGlowParticle_obj::PhillyGlowParticle_obj()
{
}

::hx::Val PhillyGlowParticle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"decay") ) { return ::hx::Val( decay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifeTime") ) { return ::hx::Val( lifeTime ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalScale") ) { return ::hx::Val( originalScale ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PhillyGlowParticle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"decay") ) { decay=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifeTime") ) { lifeTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalScale") ) { originalScale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhillyGlowParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lifeTime",29,37,4b,57));
	outFields->push(HX_("decay",3a,03,20,d7));
	outFields->push(HX_("originalScale",79,c4,bf,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PhillyGlowParticle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PhillyGlowParticle_obj,lifeTime),HX_("lifeTime",29,37,4b,57)},
	{::hx::fsFloat,(int)offsetof(PhillyGlowParticle_obj,decay),HX_("decay",3a,03,20,d7)},
	{::hx::fsFloat,(int)offsetof(PhillyGlowParticle_obj,originalScale),HX_("originalScale",79,c4,bf,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PhillyGlowParticle_obj_sStaticStorageInfo = 0;
#endif

static ::String PhillyGlowParticle_obj_sMemberFields[] = {
	HX_("lifeTime",29,37,4b,57),
	HX_("decay",3a,03,20,d7),
	HX_("originalScale",79,c4,bf,d3),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PhillyGlowParticle_obj::__mClass;

void PhillyGlowParticle_obj::__register()
{
	PhillyGlowParticle_obj _hx_dummy;
	PhillyGlowParticle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.objects.PhillyGlowParticle",62,ec,65,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PhillyGlowParticle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PhillyGlowParticle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PhillyGlowParticle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PhillyGlowParticle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
} // end namespace objects