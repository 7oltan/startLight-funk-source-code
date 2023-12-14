#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_states_MenuItem
#include <states/MenuItem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d92b57c60b6c7b0e_318_new,"states.MenuItem","new",0x4f500310,"states.MenuItem.new","states/MainMenuState.hx",318,0x1c04e2b2)
static const int _hx_array_data_a2b57b1e_1[] = {
	(int)0,(int)0,
};
namespace states{

void MenuItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d92b57c60b6c7b0e_318_new)
HXDLIN( 318)		this->offsetSelected = ::Array_obj< int >::fromData( _hx_array_data_a2b57b1e_1,2);
            	}

Dynamic MenuItem_obj::__CreateEmpty() { return new MenuItem_obj; }

void *MenuItem_obj::_hx_vtable = 0;

Dynamic MenuItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItem_obj > _hx_result = new MenuItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MenuItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7987e67c;
}


::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new() {
	::hx::ObjectPtr< MenuItem_obj > __this = new MenuItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MenuItem_obj *__this = (MenuItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItem_obj), true, "states.MenuItem"));
	*(void **)__this = MenuItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MenuItem_obj::MenuItem_obj()
{
}

void MenuItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuItem);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(isMouse,"isMouse");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(isLocked,"isLocked");
	HX_MARK_MEMBER_NAME(lockText,"lockText");
	HX_MARK_MEMBER_NAME(offsetSelected,"offsetSelected");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_END_CLASS();
}

void MenuItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(isMouse,"isMouse");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(isLocked,"isLocked");
	HX_VISIT_MEMBER_NAME(lockText,"lockText");
	HX_VISIT_MEMBER_NAME(offsetSelected,"offsetSelected");
	HX_VISIT_MEMBER_NAME(state,"state");
}

::hx::Val MenuItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isMouse") ) { return ::hx::Val( isMouse ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isLocked") ) { return ::hx::Val( isLocked ); }
		if (HX_FIELD_EQ(inName,"lockText") ) { return ::hx::Val( lockText ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"offsetSelected") ) { return ::hx::Val( offsetSelected ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isMouse") ) { isMouse=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isLocked") ) { isLocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lockText") ) { lockText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"offsetSelected") ) { offsetSelected=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("isMouse",db,b9,ea,a8));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("isLocked",94,a0,30,b2));
	outFields->push(HX_("lockText",38,66,1e,92));
	outFields->push(HX_("offsetSelected",0e,c9,ec,47));
	outFields->push(HX_("state",11,76,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuItem_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MenuItem_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsBool,(int)offsetof(MenuItem_obj,isMouse),HX_("isMouse",db,b9,ea,a8)},
	{::hx::fsFloat,(int)offsetof(MenuItem_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(MenuItem_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsBool,(int)offsetof(MenuItem_obj,isLocked),HX_("isLocked",94,a0,30,b2)},
	{::hx::fsString,(int)offsetof(MenuItem_obj,lockText),HX_("lockText",38,66,1e,92)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(MenuItem_obj,offsetSelected),HX_("offsetSelected",0e,c9,ec,47)},
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(MenuItem_obj,state),HX_("state",11,76,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItem_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("isMouse",db,b9,ea,a8),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("isLocked",94,a0,30,b2),
	HX_("lockText",38,66,1e,92),
	HX_("offsetSelected",0e,c9,ec,47),
	HX_("state",11,76,0b,84),
	::String(null()) };

::hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	MenuItem_obj _hx_dummy;
	MenuItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.MenuItem",1e,7b,b5,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
