#include <hxcpp.h>

#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_states_stages_objects_MallCrowd
#include <states/stages/objects/MallCrowd.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_702dd1eb807e7762_3_new,"states.stages.objects.MallCrowd","new",0x193f8b24,"states.stages.objects.MallCrowd.new","states/stages/objects/MallCrowd.hx",3,0x5049e46d)
HX_LOCAL_STACK_FRAME(_hx_pos_702dd1eb807e7762_14_update,"states.stages.objects.MallCrowd","update",0x0637ddc5,"states.stages.objects.MallCrowd.update","states/stages/objects/MallCrowd.hx",14,0x5049e46d)
HX_LOCAL_STACK_FRAME(_hx_pos_702dd1eb807e7762_27_dance,"states.stages.objects.MallCrowd","dance",0xcbe676f7,"states.stages.objects.MallCrowd.dance","states/stages/objects/MallCrowd.hx",27,0x5049e46d)
namespace states{
namespace stages{
namespace objects{

void MallCrowd_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_sprite,::String __o_idle,::String __o_hey){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		::String sprite = __o_sprite;
            		if (::hx::IsNull(__o_sprite)) sprite = HX_("christmas/bottomBop",cb,69,c5,59);
            		::String idle = __o_idle;
            		if (::hx::IsNull(__o_idle)) idle = HX_("Bottom Level Boppers Idle",8c,ac,ee,4c);
            		::String hey = __o_hey;
            		if (::hx::IsNull(__o_hey)) hey = HX_("Bottom Level Boppers HEY",64,78,db,13);
            	HX_STACKFRAME(&_hx_pos_702dd1eb807e7762_3_new)
HXLINE(   5)		this->heyTimer = ((Float)0);
HXLINE(   8)		super::__construct(sprite,x,y,((Float)0.9),((Float)0.9),::Array_obj< ::String >::__new(1)->init(0,idle),null());
HXLINE(   9)		this->animation->addByPrefix(HX_("hey",dc,42,4f,00),hey,24,false,null(),null());
HXLINE(  10)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            	}

Dynamic MallCrowd_obj::__CreateEmpty() { return new MallCrowd_obj; }

void *MallCrowd_obj::_hx_vtable = 0;

Dynamic MallCrowd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MallCrowd_obj > _hx_result = new MallCrowd_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool MallCrowd_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x199d8d7e) {
			if (inClassId<=(int)0x1688e13c) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1688e13c;
			} else {
				return inClassId==(int)0x199d8d7e;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MallCrowd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_702dd1eb807e7762_14_update)
HXLINE(  15)		this->super::update(elapsed);
HXLINE(  17)		if ((this->heyTimer > 0)) {
HXLINE(  18)			 ::states::stages::objects::MallCrowd _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  18)			_hx_tmp->heyTimer = (_hx_tmp->heyTimer - elapsed);
HXLINE(  19)			if ((this->heyTimer <= 0)) {
HXLINE(  20)				this->dance(true);
HXLINE(  21)				this->heyTimer = ( (Float)(0) );
            			}
            		}
            	}


void MallCrowd_obj::dance( ::Dynamic __o_forceplay){
            		 ::Dynamic forceplay = __o_forceplay;
            		if (::hx::IsNull(__o_forceplay)) forceplay = false;
            	HX_STACKFRAME(&_hx_pos_702dd1eb807e7762_27_dance)
HXLINE(  28)		if ((this->heyTimer > 0)) {
HXLINE(  28)			return;
            		}
HXLINE(  29)		this->super::dance(forceplay);
            	}



::hx::ObjectPtr< MallCrowd_obj > MallCrowd_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_sprite,::String __o_idle,::String __o_hey) {
	::hx::ObjectPtr< MallCrowd_obj > __this = new MallCrowd_obj();
	__this->__construct(__o_x,__o_y,__o_sprite,__o_idle,__o_hey);
	return __this;
}

::hx::ObjectPtr< MallCrowd_obj > MallCrowd_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_sprite,::String __o_idle,::String __o_hey) {
	MallCrowd_obj *__this = (MallCrowd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MallCrowd_obj), true, "states.stages.objects.MallCrowd"));
	*(void **)__this = MallCrowd_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_sprite,__o_idle,__o_hey);
	return __this;
}

MallCrowd_obj::MallCrowd_obj()
{
}

::hx::Val MallCrowd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"heyTimer") ) { return ::hx::Val( heyTimer ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MallCrowd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"heyTimer") ) { heyTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MallCrowd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("heyTimer",49,0f,08,a9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MallCrowd_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MallCrowd_obj,heyTimer),HX_("heyTimer",49,0f,08,a9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MallCrowd_obj_sStaticStorageInfo = 0;
#endif

static ::String MallCrowd_obj_sMemberFields[] = {
	HX_("heyTimer",49,0f,08,a9),
	HX_("update",09,86,05,87),
	HX_("dance",33,83,83,d4),
	::String(null()) };

::hx::Class MallCrowd_obj::__mClass;

void MallCrowd_obj::__register()
{
	MallCrowd_obj _hx_dummy;
	MallCrowd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.objects.MallCrowd",32,69,92,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MallCrowd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MallCrowd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MallCrowd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MallCrowd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
} // end namespace objects