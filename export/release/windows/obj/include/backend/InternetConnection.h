#ifndef INCLUDED_backend_InternetConnection
#define INCLUDED_backend_InternetConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,InternetConnection)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES InternetConnection_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InternetConnection_obj OBJ_;
		InternetConnection_obj();

	public:
		enum { _hx_ClassId = 0x2652f473 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.InternetConnection")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.InternetConnection"); }
		static ::hx::ObjectPtr< InternetConnection_obj > __new();
		static ::hx::ObjectPtr< InternetConnection_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InternetConnection_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InternetConnection",5f,8e,53,77); }

		static void __boot();
		static ::String ENDPOINT;
		static bool isAvailable( ::Dynamic callback);
		static ::Dynamic isAvailable_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_InternetConnection */ 
