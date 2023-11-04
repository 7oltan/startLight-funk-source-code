#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_system_JNI
#include <lime/system/JNI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif
#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_51_callMember,"lime.system.JNI","callMember",0x6d0f06e7,"lime.system.JNI.callMember","lime/system/JNI.hx",51,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_76_callStatic,"lime.system.JNI","callStatic",0x6e55013b,"lime.system.JNI.callStatic","lime/system/JNI.hx",76,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_100_createMemberField,"lime.system.JNI","createMemberField",0xd212c0f5,"lime.system.JNI.createMemberField","lime/system/JNI.hx",100,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_111_createMemberMethod,"lime.system.JNI","createMemberMethod",0x87227e46,"lime.system.JNI.createMemberMethod","lime/system/JNI.hx",111,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_136_createStaticField,"lime.system.JNI","createStaticField",0xe4dcd621,"lime.system.JNI.createStaticField","lime/system/JNI.hx",136,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_147_createStaticMethod,"lime.system.JNI","createStaticMethod",0xe52aef9a,"lime.system.JNI.createStaticMethod","lime/system/JNI.hx",147,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_172_getEnv,"lime.system.JNI","getEnv",0x2402f6c6,"lime.system.JNI.getEnv","lime/system/JNI.hx",172,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_184_init,"lime.system.JNI","init",0x6490931f,"lime.system.JNI.init","lime/system/JNI.hx",184,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_196_onCallback,"lime.system.JNI","onCallback",0x99e6bb53,"lime.system.JNI.onCallback","lime/system/JNI.hx",196,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_217_postUICallback,"lime.system.JNI","postUICallback",0x8d567168,"lime.system.JNI.postUICallback","lime/system/JNI.hx",217,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_46_boot,"lime.system.JNI","boot",0x5ff0dc41,"lime.system.JNI.boot","lime/system/JNI.hx",46,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_47_boot,"lime.system.JNI","boot",0x5ff0dc41,"lime.system.JNI.boot","lime/system/JNI.hx",47,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNI_obj::__construct() { }

Dynamic JNI_obj::__CreateEmpty() { return new JNI_obj; }

void *JNI_obj::_hx_vtable = 0;

Dynamic JNI_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JNI_obj > _hx_result = new JNI_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JNI_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ecdb141;
}

 ::haxe::ds::StringMap JNI_obj::alreadyCreated;

bool JNI_obj::initialized;

 ::Dynamic JNI_obj::callMember( ::Dynamic method, ::Dynamic jobject,::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_51_callMember)
HXDLIN(  51)		switch((int)(a->get_length())){
            			case (int)0: {
HXLINE(  54)				return method(jobject);
            			}
            			break;
            			case (int)1: {
HXLINE(  56)				return method(jobject,a->__get(0));
            			}
            			break;
            			case (int)2: {
HXLINE(  58)				return method(jobject,a->__get(0),a->__get(1));
            			}
            			break;
            			case (int)3: {
HXLINE(  60)				return method(jobject,a->__get(0),a->__get(1),a->__get(2));
            			}
            			break;
            			case (int)4: {
HXLINE(  62)				return method(jobject,a->__get(0),a->__get(1),a->__get(2),a->__get(3));
            			}
            			break;
            			case (int)5: {
HXLINE(  64)				return method(jobject,a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4));
            			}
            			break;
            			case (int)6: {
HXLINE(  66)				return method(jobject,a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4),a->__get(5));
            			}
            			break;
            			case (int)7: {
HXLINE(  68)				return method(jobject,a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4),a->__get(5),a->__get(6));
            			}
            			break;
            			default:{
HXLINE(  70)				return null();
            			}
            		}
HXLINE(  51)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,callMember,return )

 ::Dynamic JNI_obj::callStatic( ::Dynamic method,::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_76_callStatic)
HXDLIN(  76)		switch((int)(a->get_length())){
            			case (int)0: {
HXLINE(  79)				return method();
            			}
            			break;
            			case (int)1: {
HXLINE(  81)				return method(a->__get(0));
            			}
            			break;
            			case (int)2: {
HXLINE(  83)				return method(a->__get(0),a->__get(1));
            			}
            			break;
            			case (int)3: {
HXLINE(  85)				return method(a->__get(0),a->__get(1),a->__get(2));
            			}
            			break;
            			case (int)4: {
HXLINE(  87)				return method(a->__get(0),a->__get(1),a->__get(2),a->__get(3));
            			}
            			break;
            			case (int)5: {
HXLINE(  89)				return method(a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4));
            			}
            			break;
            			case (int)6: {
HXLINE(  91)				return method(a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4),a->__get(5));
            			}
            			break;
            			case (int)7: {
HXLINE(  93)				return method(a->__get(0),a->__get(1),a->__get(2),a->__get(3),a->__get(4),a->__get(5),a->__get(6));
            			}
            			break;
            			default:{
HXLINE(  95)				return null();
            			}
            		}
HXLINE(  76)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,callStatic,return )

 ::lime::_hx_system::JNIMemberField JNI_obj::createMemberField(::String className,::String memberName,::String signature){
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_100_createMemberField)
HXLINE( 101)		::lime::_hx_system::JNI_obj::init();
HXLINE( 106)		return  ::lime::_hx_system::JNIMemberField_obj::__alloc( HX_CTX ,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createMemberField,return )

 ::Dynamic JNI_obj::createMemberMethod(::String className,::String memberName,::String signature,::hx::Null< bool >  __o_useArray,::hx::Null< bool >  __o_quietFail){
            		bool useArray = __o_useArray.Default(false);
            		bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_111_createMemberMethod)
HXLINE( 112)		::lime::_hx_system::JNI_obj::init();
HXLINE( 131)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createMemberMethod,return )

 ::lime::_hx_system::JNIStaticField JNI_obj::createStaticField(::String className,::String memberName,::String signature){
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_136_createStaticField)
HXLINE( 137)		::lime::_hx_system::JNI_obj::init();
HXLINE( 142)		return  ::lime::_hx_system::JNIStaticField_obj::__alloc( HX_CTX ,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createStaticField,return )

 ::Dynamic JNI_obj::createStaticMethod(::String className,::String memberName,::String signature,::hx::Null< bool >  __o_useArray,::hx::Null< bool >  __o_quietFail){
            		bool useArray = __o_useArray.Default(false);
            		bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_147_createStaticMethod)
HXLINE( 148)		::lime::_hx_system::JNI_obj::init();
HXLINE( 167)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createStaticMethod,return )

 ::Dynamic JNI_obj::getEnv(){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_172_getEnv)
HXLINE( 173)		::lime::_hx_system::JNI_obj::init();
HXLINE( 178)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,getEnv,return )

void JNI_obj::init(){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_184_init)
HXDLIN( 184)		if (!(::lime::_hx_system::JNI_obj::initialized)) {
HXLINE( 186)			::lime::_hx_system::JNI_obj::initialized = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

 ::Dynamic JNI_obj::onCallback( ::Dynamic object,::String method,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_196_onCallback)
HXLINE( 197)		 ::Dynamic field = ::Reflect_obj::field(object,method);
HXLINE( 199)		if (::hx::IsNotNull( field )) {
HXLINE( 201)			if (::hx::IsNull( args )) {
HXLINE( 201)				args = ::cpp::VirtualArray_obj::__new(0);
            			}
HXLINE( 203)			return ::Reflect_obj::callMethod(object,field,args);
            		}
HXLINE( 206)		::haxe::Log_obj::trace((HX_("onCallback - unknown field ",2b,28,2a,3c) + method),::hx::SourceInfo(HX_("lime/system/JNI.hx",7f,0b,97,21),206,HX_("lime.system.JNI",bf,02,fc,60),HX_("onCallback",04,6e,bd,5c)));
HXLINE( 207)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

void JNI_obj::postUICallback( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_217_postUICallback)
HXDLIN( 217)		callback();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNI_obj,postUICallback,(void))


JNI_obj::JNI_obj()
{
}

bool JNI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { outValue = callMember_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callStatic") ) { outValue = callStatic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onCallback") ) { outValue = onCallback_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { outValue = ( alreadyCreated ); return true; }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createMemberField") ) { outValue = createMemberField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createStaticField") ) { outValue = createStaticField_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { outValue = createMemberMethod_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { outValue = createStaticMethod_dyn(); return true; }
	}
	return false;
}

bool JNI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { alreadyCreated=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JNI_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo JNI_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &JNI_obj::alreadyCreated,HX_("alreadyCreated",30,e9,f8,79)},
	{::hx::fsBool,(void *) &JNI_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void JNI_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_MARK_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JNI_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_VISIT_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#endif

::hx::Class JNI_obj::__mClass;

static ::String JNI_obj_sStaticFields[] = {
	HX_("alreadyCreated",30,e9,f8,79),
	HX_("initialized",14,f5,0f,37),
	HX_("callMember",98,b9,e5,2f),
	HX_("callStatic",ec,b3,2b,31),
	HX_("createMemberField",64,36,37,55),
	HX_("createMemberMethod",f7,c9,e4,c3),
	HX_("createStaticField",90,4b,01,68),
	HX_("createStaticMethod",4b,3b,ed,21),
	HX_("getEnv",f7,3c,1c,a3),
	HX_("init",10,3b,bb,45),
	HX_("onCallback",04,6e,bd,5c),
	HX_("postUICallback",99,d0,5a,b0),
	::String(null())
};

void JNI_obj::__register()
{
	JNI_obj _hx_dummy;
	JNI_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JNI",bf,02,fc,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNI_obj::__GetStatic;
	__mClass->mSetStaticField = &JNI_obj::__SetStatic;
	__mClass->mMarkFunc = JNI_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(JNI_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JNI_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JNI_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNI_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JNI_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_46_boot)
HXDLIN(  46)		alreadyCreated =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_47_boot)
HXDLIN(  47)		initialized = false;
            	}
}

} // end namespace lime
} // end namespace system
