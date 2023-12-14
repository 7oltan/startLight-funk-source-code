#include <hxcpp.h>

#ifndef INCLUDED_backend_InternetConnection
#include <backend/InternetConnection.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92031411de46ed38_9_new,"backend.InternetConnection","new",0x9cd0a3eb,"backend.InternetConnection.new","backend/InternetConnection.hx",9,0xac53cc44)
HX_LOCAL_STACK_FRAME(_hx_pos_92031411de46ed38_26_isAvailable,"backend.InternetConnection","isAvailable",0x511fe70a,"backend.InternetConnection.isAvailable","backend/InternetConnection.hx",26,0xac53cc44)
static const bool _hx_array_data_fd47d279_2[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_92031411de46ed38_34_isAvailable,"backend.InternetConnection","isAvailable",0x511fe70a,"backend.InternetConnection.isAvailable","backend/InternetConnection.hx",34,0xac53cc44)
HX_LOCAL_STACK_FRAME(_hx_pos_92031411de46ed38_42_isAvailable,"backend.InternetConnection","isAvailable",0x511fe70a,"backend.InternetConnection.isAvailable","backend/InternetConnection.hx",42,0xac53cc44)
HX_LOCAL_STACK_FRAME(_hx_pos_92031411de46ed38_5_boot,"backend.InternetConnection","boot",0x91d7ca47,"backend.InternetConnection.boot","backend/InternetConnection.hx",5,0xac53cc44)
namespace backend{

void InternetConnection_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_92031411de46ed38_9_new)
HXDLIN(   9)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Should not be instantiated",9d,cd,4a,94)));
            	}

Dynamic InternetConnection_obj::__CreateEmpty() { return new InternetConnection_obj; }

void *InternetConnection_obj::_hx_vtable = 0;

Dynamic InternetConnection_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InternetConnection_obj > _hx_result = new InternetConnection_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InternetConnection_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2652f473;
}

::String InternetConnection_obj::ENDPOINT;

bool InternetConnection_obj::isAvailable( ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_92031411de46ed38_26_isAvailable)
HXLINE(  27)		::Array< bool > isAvailable = ::Array_obj< bool >::fromData( _hx_array_data_fd47d279_2,1);
HXLINE(  29)		try {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,isAvailable, ::Dynamic,callback) HXARGC(1)
            			void _hx_run(::String status){
            				HX_GC_STACKFRAME(&_hx_pos_92031411de46ed38_34_isAvailable)
HXLINE(  35)				if (::hx::IsNotNull( callback )) {
HXLINE(  36)					callback(false);
            				}
HXLINE(  38)				isAvailable[0] = false;
HXLINE(  39)				::haxe::Log_obj::trace(status,::hx::SourceInfo(HX_("source/backend/InternetConnection.hx",d0,4c,54,c2),39,HX_("backend.InternetConnection",79,d2,47,fd),HX_("isAvailable",7f,10,04,56)));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Array< bool >,isAvailable, ::Dynamic,callback) HXARGC(1)
            			void _hx_run(int status){
            				HX_GC_STACKFRAME(&_hx_pos_92031411de46ed38_42_isAvailable)
HXLINE(  43)				if (::hx::IsNotNull( callback )) {
HXLINE(  44)					callback(true);
            				}
HXLINE(  46)				isAvailable[0] = true;
HXLINE(  47)				::haxe::Log_obj::trace(status,::hx::SourceInfo(HX_("source/backend/InternetConnection.hx",d0,4c,54,c2),47,HX_("backend.InternetConnection",79,d2,47,fd),HX_("isAvailable",7f,10,04,56)));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  30)			 ::sys::Http http =  ::sys::Http_obj::__alloc( HX_CTX ,HX_("http://www.google.com",95,98,84,f4));
HXLINE(  32)			::haxe::Log_obj::trace((HX_("making request to ",ff,6f,26,82) + HX_("http://www.google.com",95,98,84,f4)),::hx::SourceInfo(HX_("source/backend/InternetConnection.hx",d0,4c,54,c2),32,HX_("backend.InternetConnection",79,d2,47,fd),HX_("isAvailable",7f,10,04,56)));
HXLINE(  34)			http->onError =  ::Dynamic(new _hx_Closure_0(isAvailable,callback));
HXLINE(  42)			http->onStatus =  ::Dynamic(new _hx_Closure_1(isAvailable,callback));
HXLINE(  50)			http->request(false);
HXLINE(  53)			return isAvailable->__get(0);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  57)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  29)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternetConnection_obj,isAvailable,return )


::hx::ObjectPtr< InternetConnection_obj > InternetConnection_obj::__new() {
	::hx::ObjectPtr< InternetConnection_obj > __this = new InternetConnection_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InternetConnection_obj > InternetConnection_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InternetConnection_obj *__this = (InternetConnection_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InternetConnection_obj), false, "backend.InternetConnection"));
	*(void **)__this = InternetConnection_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InternetConnection_obj::InternetConnection_obj()
{
}

bool InternetConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isAvailable") ) { outValue = isAvailable_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InternetConnection_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo InternetConnection_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &InternetConnection_obj::ENDPOINT,HX_("ENDPOINT",95,66,e5,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void InternetConnection_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InternetConnection_obj::ENDPOINT,"ENDPOINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InternetConnection_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InternetConnection_obj::ENDPOINT,"ENDPOINT");
};

#endif

::hx::Class InternetConnection_obj::__mClass;

static ::String InternetConnection_obj_sStaticFields[] = {
	HX_("ENDPOINT",95,66,e5,8a),
	HX_("isAvailable",7f,10,04,56),
	::String(null())
};

void InternetConnection_obj::__register()
{
	InternetConnection_obj _hx_dummy;
	InternetConnection_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.InternetConnection",79,d2,47,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InternetConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InternetConnection_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InternetConnection_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InternetConnection_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InternetConnection_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InternetConnection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InternetConnection_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InternetConnection_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_92031411de46ed38_5_boot)
HXDLIN(   5)		ENDPOINT = HX_("http://www.google.com",95,98,84,f4);
            	}
}

} // end namespace backend
