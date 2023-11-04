#ifndef INCLUDED_sys_Http
#define INCLUDED_sys_Http

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,http,HttpBase)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesOutput)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS1(sys,Http)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace sys{


class HXCPP_CLASS_ATTRIBUTES Http_obj : public  ::haxe::http::HttpBase_obj
{
	public:
		typedef  ::haxe::http::HttpBase_obj super;
		typedef Http_obj OBJ_;
		Http_obj();

	public:
		enum { _hx_ClassId = 0x02924475 };

		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.Http")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.Http"); }
		static ::hx::ObjectPtr< Http_obj > __new(::String url);
		static ::hx::ObjectPtr< Http_obj > __alloc(::hx::Ctx *_hx_ctx,::String url);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Http_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Http",a8,c7,ef,2f); }

		static void __boot();
		static  ::Dynamic PROXY;
		static ::String requestUrl(::String url);
		static ::Dynamic requestUrl_dyn();

		bool noShutdown;
		Float cnxTimeout;
		 ::haxe::ds::StringMap responseHeaders;
		 ::Dynamic chunk_size;
		 ::haxe::io::Bytes chunk_buf;
		 ::Dynamic file;
		void request( ::Dynamic post);
		::Dynamic request_dyn();

		void customRequest(bool post, ::haxe::io::Output api, ::sys::net::Socket sock,::String method);
		::Dynamic customRequest_dyn();

		void writeBody( ::haxe::io::BytesOutput body, ::haxe::io::Input fileInput,int fileSize,::String boundary, ::sys::net::Socket sock);
		::Dynamic writeBody_dyn();

		void readHttpResponse( ::haxe::io::Output api, ::sys::net::Socket sock);
		::Dynamic readHttpResponse_dyn();

		bool readChunk( ::EReg chunk_re, ::haxe::io::Output api, ::haxe::io::Bytes buf,int len);
		::Dynamic readChunk_dyn();

};

} // end namespace sys

#endif /* INCLUDED_sys_Http */ 
