#include <hxcpp.h>

#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_psychlua_DebugLuaText
#include <psychlua/DebugLuaText.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_79f3aef22ea5a94d_3_new,"psychlua.DebugLuaText","new",0x310afeb5,"psychlua.DebugLuaText.new","psychlua/DebugLuaText.hx",3,0x5376377a)
HX_LOCAL_STACK_FRAME(_hx_pos_79f3aef22ea5a94d_14_update,"psychlua.DebugLuaText","update",0x02ae3ad4,"psychlua.DebugLuaText.update","psychlua/DebugLuaText.hx",14,0x5376377a)
namespace psychlua{

void DebugLuaText_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_79f3aef22ea5a94d_3_new)
HXLINE(   5)		this->disableTime = ((Float)6);
HXLINE(   7)		super::__construct(10,10,(::flixel::FlxG_obj::width - 20),HX_("",00,00,00,00),16,null());
HXLINE(   9)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(   9)		::String _hx_tmp;
HXDLIN(   9)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(   9)			_hx_tmp = file;
            		}
            		else {
HXLINE(   9)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(   9)		this->setFormat(_hx_tmp,16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  10)		{
HXLINE(  10)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  10)			this1->set_x(( (Float)(0) ));
HXDLIN(  10)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  11)		this->set_borderSize(( (Float)(1) ));
            	}

Dynamic DebugLuaText_obj::__CreateEmpty() { return new DebugLuaText_obj; }

void *DebugLuaText_obj::_hx_vtable = 0;

Dynamic DebugLuaText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DebugLuaText_obj > _hx_result = new DebugLuaText_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DebugLuaText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x426bb62f) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x426bb62f;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DebugLuaText_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_79f3aef22ea5a94d_14_update)
HXLINE(  15)		this->super::update(elapsed);
HXLINE(  16)		 ::psychlua::DebugLuaText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  16)		_hx_tmp->disableTime = (_hx_tmp->disableTime - elapsed);
HXLINE(  17)		if ((this->disableTime < 0)) {
HXLINE(  17)			this->disableTime = ( (Float)(0) );
            		}
HXLINE(  18)		if ((this->disableTime < 1)) {
HXLINE(  18)			this->set_alpha(this->disableTime);
            		}
HXLINE(  20)		bool _hx_tmp1;
HXDLIN(  20)		if ((this->alpha != 0)) {
HXLINE(  20)			_hx_tmp1 = (this->y >= ::flixel::FlxG_obj::height);
            		}
            		else {
HXLINE(  20)			_hx_tmp1 = true;
            		}
HXDLIN(  20)		if (_hx_tmp1) {
HXLINE(  20)			this->kill();
            		}
            	}



::hx::ObjectPtr< DebugLuaText_obj > DebugLuaText_obj::__new() {
	::hx::ObjectPtr< DebugLuaText_obj > __this = new DebugLuaText_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DebugLuaText_obj > DebugLuaText_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DebugLuaText_obj *__this = (DebugLuaText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DebugLuaText_obj), true, "psychlua.DebugLuaText"));
	*(void **)__this = DebugLuaText_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DebugLuaText_obj::DebugLuaText_obj()
{
}

::hx::Val DebugLuaText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableTime") ) { return ::hx::Val( disableTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DebugLuaText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"disableTime") ) { disableTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebugLuaText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("disableTime",15,76,0d,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DebugLuaText_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(DebugLuaText_obj,disableTime),HX_("disableTime",15,76,0d,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DebugLuaText_obj_sStaticStorageInfo = 0;
#endif

static ::String DebugLuaText_obj_sMemberFields[] = {
	HX_("disableTime",15,76,0d,1d),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class DebugLuaText_obj::__mClass;

void DebugLuaText_obj::__register()
{
	DebugLuaText_obj _hx_dummy;
	DebugLuaText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.DebugLuaText",43,80,36,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DebugLuaText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DebugLuaText_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DebugLuaText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DebugLuaText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
