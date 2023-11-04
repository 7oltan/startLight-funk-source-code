#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_text_Font
#include <lime/net/_HTTPRequest_lime_text_Font.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad7cb8eb53cde893_134_new,"lime.net._HTTPRequest_lime_text_Font","new",0x8449f616,"lime.net._HTTPRequest_lime_text_Font.new","lime/_internal/macros/HTTPRequestMacro.hx",134,0xf82711de)
HX_LOCAL_STACK_FRAME(_hx_pos_44cee9f3d02dfeb3_155_fromBytes,"lime.net._HTTPRequest_lime_text_Font","fromBytes",0x7d0344d7,"lime.net._HTTPRequest_lime_text_Font.fromBytes","lime/text/Font.hx",155,0x3be57807)
namespace lime{
namespace net{

void _HTTPRequest_lime_text_Font_obj::__construct(::String uri){
            	HX_STACKFRAME(&_hx_pos_ad7cb8eb53cde893_134_new)
HXDLIN( 134)		super::__construct(uri);
            	}

Dynamic _HTTPRequest_lime_text_Font_obj::__CreateEmpty() { return new _HTTPRequest_lime_text_Font_obj; }

void *_HTTPRequest_lime_text_Font_obj::_hx_vtable = 0;

Dynamic _HTTPRequest_lime_text_Font_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< _HTTPRequest_lime_text_Font_obj > _hx_result = new _HTTPRequest_lime_text_Font_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _HTTPRequest_lime_text_Font_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6a00fca6) {
		if (inClassId<=(int)0x09b24b15) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x09b24b15;
		} else {
			return inClassId==(int)0x6a00fca6;
		}
	} else {
		return inClassId==(int)0x7f4deb50;
	}
}

 ::Dynamic _HTTPRequest_lime_text_Font_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_44cee9f3d02dfeb3_155_fromBytes)
HXDLIN( 155)		return ::lime::text::Font_obj::fromBytes(bytes);
            	}



::hx::ObjectPtr< _HTTPRequest_lime_text_Font_obj > _HTTPRequest_lime_text_Font_obj::__new(::String uri) {
	::hx::ObjectPtr< _HTTPRequest_lime_text_Font_obj > __this = new _HTTPRequest_lime_text_Font_obj();
	__this->__construct(uri);
	return __this;
}

::hx::ObjectPtr< _HTTPRequest_lime_text_Font_obj > _HTTPRequest_lime_text_Font_obj::__alloc(::hx::Ctx *_hx_ctx,::String uri) {
	_HTTPRequest_lime_text_Font_obj *__this = (_HTTPRequest_lime_text_Font_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(_HTTPRequest_lime_text_Font_obj), true, "lime.net._HTTPRequest_lime_text_Font"));
	*(void **)__this = _HTTPRequest_lime_text_Font_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

_HTTPRequest_lime_text_Font_obj::_HTTPRequest_lime_text_Font_obj()
{
}

::hx::Val _HTTPRequest_lime_text_Font_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return ::hx::Val( fromBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *_HTTPRequest_lime_text_Font_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *_HTTPRequest_lime_text_Font_obj_sStaticStorageInfo = 0;
#endif

static ::String _HTTPRequest_lime_text_Font_obj_sMemberFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	::String(null()) };

::hx::Class _HTTPRequest_lime_text_Font_obj::__mClass;

void _HTTPRequest_lime_text_Font_obj::__register()
{
	_HTTPRequest_lime_text_Font_obj _hx_dummy;
	_HTTPRequest_lime_text_Font_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net._HTTPRequest_lime_text_Font",24,f3,ab,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(_HTTPRequest_lime_text_Font_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< _HTTPRequest_lime_text_Font_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _HTTPRequest_lime_text_Font_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _HTTPRequest_lime_text_Font_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
