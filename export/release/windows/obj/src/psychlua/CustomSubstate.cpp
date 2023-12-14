#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_psychlua_CustomSubstate
#include <psychlua/CustomSubstate.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_ModchartSprite
#include <psychlua/ModchartSprite.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_969328a31f5dabcc_76_new,"psychlua.CustomSubstate","new",0xb07241e5,"psychlua.CustomSubstate.new","psychlua/CustomSubstate.hx",76,0x1fcf300a)
HX_LOCAL_STACK_FRAME(_hx_pos_969328a31f5dabcc_67_create,"psychlua.CustomSubstate","create",0x3bb6f697,"psychlua.CustomSubstate.create","psychlua/CustomSubstate.hx",67,0x1fcf300a)
HX_LOCAL_STACK_FRAME(_hx_pos_969328a31f5dabcc_83_update,"psychlua.CustomSubstate","update",0x46ad15a4,"psychlua.CustomSubstate.update","psychlua/CustomSubstate.hx",83,0x1fcf300a)
HX_LOCAL_STACK_FRAME(_hx_pos_969328a31f5dabcc_90_destroy,"psychlua.CustomSubstate","destroy",0x177c44ff,"psychlua.CustomSubstate.destroy","psychlua/CustomSubstate.hx",90,0x1fcf300a)
HX_LOCAL_STACK_FRAME(_hx_pos_969328a31f5dabcc_11_implement,"psychlua.CustomSubstate","implement",0xddef54e8,"psychlua.CustomSubstate.implement","psychlua/CustomSubstate.hx",11,0x1fcf300a)
HX_LOCAL_STACK_FRAME(_hx_pos_969328a31f5dabcc_21_openCustomSubstate,"psychlua.CustomSubstate","openCustomSubstate",0xf0cd2ae7,"psychlua.CustomSubstate.openCustomSubstate","psychlua/CustomSubstate.hx",21,0x1fcf300a)
HX_LOCAL_STACK_FRAME(_hx_pos_969328a31f5dabcc_39_closeCustomSubstate,"psychlua.CustomSubstate","closeCustomSubstate",0xe73482bf,"psychlua.CustomSubstate.closeCustomSubstate","psychlua/CustomSubstate.hx",39,0x1fcf300a)
HX_LOCAL_STACK_FRAME(_hx_pos_969328a31f5dabcc_50_insertToCustomSubstate,"psychlua.CustomSubstate","insertToCustomSubstate",0x417a4b31,"psychlua.CustomSubstate.insertToCustomSubstate","psychlua/CustomSubstate.hx",50,0x1fcf300a)
HX_LOCAL_STACK_FRAME(_hx_pos_969328a31f5dabcc_7_boot,"psychlua.CustomSubstate","boot",0xaba0670d,"psychlua.CustomSubstate.boot","psychlua/CustomSubstate.hx",7,0x1fcf300a)
namespace psychlua{

void CustomSubstate_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_969328a31f5dabcc_76_new)
HXLINE(  77)		::psychlua::CustomSubstate_obj::name = name;
HXLINE(  78)		super::__construct();
HXLINE(  79)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic CustomSubstate_obj::__CreateEmpty() { return new CustomSubstate_obj; }

void *CustomSubstate_obj::_hx_vtable = 0;

Dynamic CustomSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomSubstate_obj > _hx_result = new CustomSubstate_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CustomSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x3c0818b8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x3c0818b8;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x73eff45f || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CustomSubstate_obj::create(){
            	HX_STACKFRAME(&_hx_pos_969328a31f5dabcc_67_create)
HXLINE(  68)		::psychlua::CustomSubstate_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  70)		::states::PlayState_obj::instance->callOnScripts(HX_("onCustomSubstateCreate",bd,00,5a,98),::cpp::VirtualArray_obj::__new(1)->init(0,::psychlua::CustomSubstate_obj::name),null(),null(),null());
HXLINE(  71)		this->super::create();
HXLINE(  72)		::states::PlayState_obj::instance->callOnScripts(HX_("onCustomSubstateCreatePost",bd,53,4b,d5),::cpp::VirtualArray_obj::__new(1)->init(0,::psychlua::CustomSubstate_obj::name),null(),null(),null());
            	}


void CustomSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_969328a31f5dabcc_83_update)
HXLINE(  84)		::states::PlayState_obj::instance->callOnScripts(HX_("onCustomSubstateUpdate",ca,1f,50,a3),::cpp::VirtualArray_obj::__new(2)->init(0,::psychlua::CustomSubstate_obj::name)->init(1,elapsed),null(),null(),null());
HXLINE(  85)		this->super::update(elapsed);
HXLINE(  86)		::states::PlayState_obj::instance->callOnScripts(HX_("onCustomSubstateUpdatePost",4a,7d,72,7b),::cpp::VirtualArray_obj::__new(2)->init(0,::psychlua::CustomSubstate_obj::name)->init(1,elapsed),null(),null(),null());
            	}


void CustomSubstate_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_969328a31f5dabcc_90_destroy)
HXLINE(  91)		::states::PlayState_obj::instance->callOnScripts(HX_("onCustomSubstateDestroy",19,1c,82,c9),::cpp::VirtualArray_obj::__new(1)->init(0,::psychlua::CustomSubstate_obj::name),null(),null(),null());
HXLINE(  92)		::psychlua::CustomSubstate_obj::name = HX_("unnamed",c0,86,15,93);
HXLINE(  94)		::states::PlayState_obj::instance->setOnHScript(HX_("customSubstate",62,39,8a,88),null(),null());
HXLINE(  95)		::states::PlayState_obj::instance->setOnHScript(HX_("customSubstateName",cd,30,b8,0d),::psychlua::CustomSubstate_obj::name,null());
HXLINE(  96)		this->super::destroy();
            	}


::String CustomSubstate_obj::name;

 ::psychlua::CustomSubstate CustomSubstate_obj::instance;

void CustomSubstate_obj::implement( ::psychlua::FunkinLua funk){
            	HX_STACKFRAME(&_hx_pos_969328a31f5dabcc_11_implement)
HXLINE(  13)		 cpp::Reference<lua_State> lua = funk->lua;
HXLINE(  14)		{
HXLINE(  14)			::llua::Lua_helper_obj::callbacks->set(HX_("openCustomSubstate",cc,1e,ff,10),::psychlua::CustomSubstate_obj::openCustomSubstate_dyn());
HXDLIN(  14)			linc::callbacks::add_callback_function(lua,HX_("openCustomSubstate",cc,1e,ff,10));
            		}
HXLINE(  15)		{
HXLINE(  15)			::llua::Lua_helper_obj::callbacks->set(HX_("closeCustomSubstate",3a,f7,b7,f2),::psychlua::CustomSubstate_obj::closeCustomSubstate_dyn());
HXDLIN(  15)			linc::callbacks::add_callback_function(lua,HX_("closeCustomSubstate",3a,f7,b7,f2));
            		}
HXLINE(  16)		{
HXLINE(  16)			::llua::Lua_helper_obj::callbacks->set(HX_("insertToCustomSubstate",96,95,e4,07),::psychlua::CustomSubstate_obj::insertToCustomSubstate_dyn());
HXDLIN(  16)			linc::callbacks::add_callback_function(lua,HX_("insertToCustomSubstate",96,95,e4,07));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CustomSubstate_obj,implement,(void))

void CustomSubstate_obj::openCustomSubstate(::String name, ::Dynamic __o_pauseGame){
            		 ::Dynamic pauseGame = __o_pauseGame;
            		if (::hx::IsNull(__o_pauseGame)) pauseGame = false;
            	HX_GC_STACKFRAME(&_hx_pos_969328a31f5dabcc_21_openCustomSubstate)
HXLINE(  22)		if (( (bool)(pauseGame) )) {
HXLINE(  24)			::flixel::FlxG_obj::camera->set_followLerp(( (Float)(0) ));
HXLINE(  25)			::states::PlayState_obj::instance->persistentUpdate = false;
HXLINE(  26)			::states::PlayState_obj::instance->persistentDraw = true;
HXLINE(  27)			::states::PlayState_obj::instance->paused = true;
HXLINE(  28)			if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  29)				::flixel::FlxG_obj::sound->music->pause();
HXLINE(  30)				::states::PlayState_obj::instance->vocals->pause();
            			}
            		}
HXLINE(  33)		 ::states::PlayState _hx_tmp = ::states::PlayState_obj::instance;
HXDLIN(  33)		_hx_tmp->openSubState( ::psychlua::CustomSubstate_obj::__alloc( HX_CTX ,name));
HXLINE(  34)		::states::PlayState_obj::instance->setOnHScript(HX_("customSubstate",62,39,8a,88),::psychlua::CustomSubstate_obj::instance,null());
HXLINE(  35)		::states::PlayState_obj::instance->setOnHScript(HX_("customSubstateName",cd,30,b8,0d),name,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CustomSubstate_obj,openCustomSubstate,(void))

bool CustomSubstate_obj::closeCustomSubstate(){
            	HX_STACKFRAME(&_hx_pos_969328a31f5dabcc_39_closeCustomSubstate)
HXLINE(  40)		if (::hx::IsNotNull( ::psychlua::CustomSubstate_obj::instance )) {
HXLINE(  42)			::states::PlayState_obj::instance->closeSubState();
HXLINE(  43)			::psychlua::CustomSubstate_obj::instance = null();
HXLINE(  44)			return true;
            		}
HXLINE(  46)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CustomSubstate_obj,closeCustomSubstate,return )

bool CustomSubstate_obj::insertToCustomSubstate(::String tag, ::Dynamic __o_pos){
            		 ::Dynamic pos = __o_pos;
            		if (::hx::IsNull(__o_pos)) pos = -1;
            	HX_STACKFRAME(&_hx_pos_969328a31f5dabcc_50_insertToCustomSubstate)
HXLINE(  51)		if (::hx::IsNotNull( ::psychlua::CustomSubstate_obj::instance )) {
HXLINE(  53)			 ::flixel::FlxObject tagObject = ::hx::TCast<  ::flixel::FlxObject >::cast(::states::PlayState_obj::instance->variables->get(tag));
HXLINE(  54)			if (::hx::IsNull( tagObject )) {
HXLINE(  54)				tagObject = ::hx::TCast<  ::flixel::FlxObject >::cast(( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) ));
            			}
HXLINE(  56)			if (::hx::IsNotNull( tagObject )) {
HXLINE(  58)				if (::hx::IsLess( pos,0 )) {
HXLINE(  58)					::psychlua::CustomSubstate_obj::instance->add(tagObject).StaticCast<  ::flixel::FlxBasic >();
            				}
            				else {
HXLINE(  59)					::psychlua::CustomSubstate_obj::instance->insert(pos,tagObject).StaticCast<  ::flixel::FlxBasic >();
            				}
HXLINE(  60)				return true;
            			}
            		}
HXLINE(  63)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CustomSubstate_obj,insertToCustomSubstate,return )


::hx::ObjectPtr< CustomSubstate_obj > CustomSubstate_obj::__new(::String name) {
	::hx::ObjectPtr< CustomSubstate_obj > __this = new CustomSubstate_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< CustomSubstate_obj > CustomSubstate_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	CustomSubstate_obj *__this = (CustomSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomSubstate_obj), true, "psychlua.CustomSubstate"));
	*(void **)__this = CustomSubstate_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

CustomSubstate_obj::CustomSubstate_obj()
{
}

::hx::Val CustomSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CustomSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { outValue = ( name ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"openCustomSubstate") ) { outValue = openCustomSubstate_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"closeCustomSubstate") ) { outValue = closeCustomSubstate_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"insertToCustomSubstate") ) { outValue = insertToCustomSubstate_dyn(); return true; }
	}
	return false;
}

bool CustomSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::psychlua::CustomSubstate >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CustomSubstate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CustomSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CustomSubstate_obj::name,HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::psychlua::CustomSubstate */ ,(void *) &CustomSubstate_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CustomSubstate_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void CustomSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomSubstate_obj::name,"name");
	HX_MARK_MEMBER_NAME(CustomSubstate_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CustomSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomSubstate_obj::name,"name");
	HX_VISIT_MEMBER_NAME(CustomSubstate_obj::instance,"instance");
};

#endif

::hx::Class CustomSubstate_obj::__mClass;

static ::String CustomSubstate_obj_sStaticFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("instance",95,1f,e1,59),
	HX_("implement",a3,71,3f,af),
	HX_("openCustomSubstate",cc,1e,ff,10),
	HX_("closeCustomSubstate",3a,f7,b7,f2),
	HX_("insertToCustomSubstate",96,95,e4,07),
	::String(null())
};

void CustomSubstate_obj::__register()
{
	CustomSubstate_obj _hx_dummy;
	CustomSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.CustomSubstate",73,6b,90,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CustomSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &CustomSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = CustomSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CustomSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CustomSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CustomSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_969328a31f5dabcc_7_boot)
HXDLIN(   7)		name = HX_("unnamed",c0,86,15,93);
            	}
}

} // end namespace psychlua