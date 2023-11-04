#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_deb3b4f6b40390b4_6_new,"flixel.system.FlxSoundGroup","new",0x8754fbe7,"flixel.system.FlxSoundGroup.new","flixel/system/FlxSoundGroup.hx",6,0x4475ef89)
HX_LOCAL_STACK_FRAME(_hx_pos_deb3b4f6b40390b4_33_add,"flixel.system.FlxSoundGroup","add",0x874b1da8,"flixel.system.FlxSoundGroup.add","flixel/system/FlxSoundGroup.hx",33,0x4475ef89)
HX_LOCAL_STACK_FRAME(_hx_pos_deb3b4f6b40390b4_49_remove,"flixel.system.FlxSoundGroup","remove",0xd9901f1d,"flixel.system.FlxSoundGroup.remove","flixel/system/FlxSoundGroup.hx",49,0x4475ef89)
HX_LOCAL_STACK_FRAME(_hx_pos_deb3b4f6b40390b4_64_pause,"flixel.system.FlxSoundGroup","pause",0xe7a0323d,"flixel.system.FlxSoundGroup.pause","flixel/system/FlxSoundGroup.hx",64,0x4475ef89)
HX_LOCAL_STACK_FRAME(_hx_pos_deb3b4f6b40390b4_74_resume,"flixel.system.FlxSoundGroup","resume",0xdd8bec86,"flixel.system.FlxSoundGroup.resume","flixel/system/FlxSoundGroup.hx",74,0x4475ef89)
HX_LOCAL_STACK_FRAME(_hx_pos_deb3b4f6b40390b4_79_set_volume,"flixel.system.FlxSoundGroup","set_volume",0xc13c9b70,"flixel.system.FlxSoundGroup.set_volume","flixel/system/FlxSoundGroup.hx",79,0x4475ef89)
namespace flixel{
namespace _hx_system{

void FlxSoundGroup_obj::__construct(::hx::Null< Float >  __o_volume){
            		Float volume = __o_volume.Default(1);
            	HX_STACKFRAME(&_hx_pos_deb3b4f6b40390b4_6_new)
HXLINE(  11)		this->sounds = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  24)		this->set_volume(volume);
            	}

Dynamic FlxSoundGroup_obj::__CreateEmpty() { return new FlxSoundGroup_obj; }

void *FlxSoundGroup_obj::_hx_vtable = 0;

Dynamic FlxSoundGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSoundGroup_obj > _hx_result = new FlxSoundGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxSoundGroup_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c31b9b7;
}

bool FlxSoundGroup_obj::add( ::flixel::sound::FlxSound sound){
            	HX_STACKFRAME(&_hx_pos_deb3b4f6b40390b4_33_add)
HXLINE(  34)		if ((this->sounds->indexOf(sound,null()) < 0)) {
HXLINE(  36)			this->sounds->push(sound);
HXLINE(  37)			sound->set_group(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  38)			return true;
            		}
HXLINE(  40)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundGroup_obj,add,return )

bool FlxSoundGroup_obj::remove( ::flixel::sound::FlxSound sound){
            	HX_STACKFRAME(&_hx_pos_deb3b4f6b40390b4_49_remove)
HXLINE(  50)		if ((this->sounds->indexOf(sound,null()) >= 0)) {
HXLINE(  52)			sound->set_group(null());
HXLINE(  53)			return this->sounds->remove(sound);
            		}
HXLINE(  55)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundGroup_obj,remove,return )

void FlxSoundGroup_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_deb3b4f6b40390b4_64_pause)
HXDLIN(  64)		int _g = 0;
HXDLIN(  64)		::Array< ::Dynamic> _g1 = this->sounds;
HXDLIN(  64)		while((_g < _g1->length)){
HXDLIN(  64)			 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN(  64)			_g = (_g + 1);
HXLINE(  65)			sound->pause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSoundGroup_obj,pause,(void))

void FlxSoundGroup_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_deb3b4f6b40390b4_74_resume)
HXDLIN(  74)		int _g = 0;
HXDLIN(  74)		::Array< ::Dynamic> _g1 = this->sounds;
HXDLIN(  74)		while((_g < _g1->length)){
HXDLIN(  74)			 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN(  74)			_g = (_g + 1);
HXLINE(  75)			sound->resume();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSoundGroup_obj,resume,(void))

Float FlxSoundGroup_obj::set_volume(Float volume){
            	HX_STACKFRAME(&_hx_pos_deb3b4f6b40390b4_79_set_volume)
HXLINE(  80)		this->volume = volume;
HXLINE(  81)		{
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			::Array< ::Dynamic> _g1 = this->sounds;
HXDLIN(  81)			while((_g < _g1->length)){
HXLINE(  81)				 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN(  81)				_g = (_g + 1);
HXLINE(  83)				sound->updateTransform();
            			}
            		}
HXLINE(  85)		return volume;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundGroup_obj,set_volume,return )


::hx::ObjectPtr< FlxSoundGroup_obj > FlxSoundGroup_obj::__new(::hx::Null< Float >  __o_volume) {
	::hx::ObjectPtr< FlxSoundGroup_obj > __this = new FlxSoundGroup_obj();
	__this->__construct(__o_volume);
	return __this;
}

::hx::ObjectPtr< FlxSoundGroup_obj > FlxSoundGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_volume) {
	FlxSoundGroup_obj *__this = (FlxSoundGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSoundGroup_obj), true, "flixel.system.FlxSoundGroup"));
	*(void **)__this = FlxSoundGroup_obj::_hx_vtable;
	__this->__construct(__o_volume);
	return __this;
}

FlxSoundGroup_obj::FlxSoundGroup_obj()
{
}

void FlxSoundGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSoundGroup);
	HX_MARK_MEMBER_NAME(sounds,"sounds");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void FlxSoundGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sounds,"sounds");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

::hx::Val FlxSoundGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sounds") ) { return ::hx::Val( sounds ); }
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSoundGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) );volume=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSoundGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sounds",c4,a8,2e,32));
	outFields->push(HX_("volume",da,29,53,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSoundGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxSoundGroup_obj,sounds),HX_("sounds",c4,a8,2e,32)},
	{::hx::fsFloat,(int)offsetof(FlxSoundGroup_obj,volume),HX_("volume",da,29,53,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSoundGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSoundGroup_obj_sMemberFields[] = {
	HX_("sounds",c4,a8,2e,32),
	HX_("volume",da,29,53,5f),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("set_volume",17,38,58,53),
	::String(null()) };

::hx::Class FlxSoundGroup_obj::__mClass;

void FlxSoundGroup_obj::__register()
{
	FlxSoundGroup_obj _hx_dummy;
	FlxSoundGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxSoundGroup",75,7c,49,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSoundGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSoundGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSoundGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSoundGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
