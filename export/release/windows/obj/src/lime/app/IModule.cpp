#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif

namespace lime{
namespace app{


static ::String IModule_obj_sMemberFields[] = {
	HX_("__registerLimeModule",04,fd,1b,af),
	HX_("__unregisterLimeModule",9d,f5,2e,8f),
	::String(null()) };

::hx::Class IModule_obj::__mClass;

void IModule_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.app.IModule",2f,a2,39,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IModule_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xf464d6e9 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
