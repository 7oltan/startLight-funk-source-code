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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_psychlua_ModchartSprite
#include <psychlua/ModchartSprite.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8cf6b1663b899581_3_new,"psychlua.ModchartSprite","new",0xc0bce804,"psychlua.ModchartSprite.new","psychlua/ModchartSprite.hx",3,0x9f4ef2cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf6b1663b899581_13_playAnim,"psychlua.ModchartSprite","playAnim",0x1b4fa001,"psychlua.ModchartSprite.playAnim","psychlua/ModchartSprite.hx",13,0x9f4ef2cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf6b1663b899581_22_addOffset,"psychlua.ModchartSprite","addOffset",0x9ef83738,"psychlua.ModchartSprite.addOffset","psychlua/ModchartSprite.hx",22,0x9f4ef2cb)
namespace psychlua{

void ModchartSprite_obj::__construct( ::Dynamic __o_x, ::Dynamic __o_y){
            		 ::Dynamic x = __o_x;
            		if (::hx::IsNull(__o_x)) x = 0;
            		 ::Dynamic y = __o_y;
            		if (::hx::IsNull(__o_y)) y = 0;
            	HX_GC_STACKFRAME(&_hx_pos_8cf6b1663b899581_3_new)
HXLINE(   5)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(   8)		super::__construct(x,y,null());
HXLINE(   9)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            	}

Dynamic ModchartSprite_obj::__CreateEmpty() { return new ModchartSprite_obj; }

void *ModchartSprite_obj::_hx_vtable = 0;

Dynamic ModchartSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModchartSprite_obj > _hx_result = new ModchartSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ModchartSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x11814c62) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x11814c62;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void ModchartSprite_obj::playAnim(::String name,::hx::Null< bool >  __o_forced, ::Dynamic __o_reverse, ::Dynamic __o_startFrame){
            		bool forced = __o_forced.Default(false);
            		 ::Dynamic reverse = __o_reverse;
            		if (::hx::IsNull(__o_reverse)) reverse = false;
            		 ::Dynamic startFrame = __o_startFrame;
            		if (::hx::IsNull(__o_startFrame)) startFrame = 0;
            	HX_STACKFRAME(&_hx_pos_8cf6b1663b899581_13_playAnim)
HXLINE(  14)		this->animation->play(name,forced,reverse,startFrame);
HXLINE(  16)		::Array< Float > daOffset = ( (::Array< Float >)(this->animOffsets->get(name)) );
HXLINE(  17)		if (this->animOffsets->exists(name)) {
HXLINE(  17)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  17)			this1->set_x(daOffset->__get(0));
HXDLIN(  17)			this1->set_y(daOffset->__get(1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(ModchartSprite_obj,playAnim,(void))

void ModchartSprite_obj::addOffset(::String name,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_8cf6b1663b899581_22_addOffset)
HXDLIN(  22)		this->animOffsets->set(name,::Array_obj< Float >::__new(2)->init(0,x)->init(1,y));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ModchartSprite_obj,addOffset,(void))


::hx::ObjectPtr< ModchartSprite_obj > ModchartSprite_obj::__new( ::Dynamic __o_x, ::Dynamic __o_y) {
	::hx::ObjectPtr< ModchartSprite_obj > __this = new ModchartSprite_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< ModchartSprite_obj > ModchartSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_x, ::Dynamic __o_y) {
	ModchartSprite_obj *__this = (ModchartSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModchartSprite_obj), true, "psychlua.ModchartSprite"));
	*(void **)__this = ModchartSprite_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

ModchartSprite_obj::ModchartSprite_obj()
{
}

void ModchartSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModchartSprite);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ModchartSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ModchartSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ModchartSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModchartSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ModchartSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ModchartSprite_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ModchartSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String ModchartSprite_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("playAnim",25,ea,84,30),
	HX_("addOffset",94,cc,63,18),
	::String(null()) };

::hx::Class ModchartSprite_obj::__mClass;

void ModchartSprite_obj::__register()
{
	ModchartSprite_obj _hx_dummy;
	ModchartSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.ModchartSprite",12,d6,27,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ModchartSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ModchartSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModchartSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModchartSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua