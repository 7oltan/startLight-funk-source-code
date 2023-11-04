#ifndef INCLUDED_sys_thread_NoEventLoopException
#define INCLUDED_sys_thread_NoEventLoopException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(sys,thread,NoEventLoopException)

namespace sys{
namespace thread{


class HXCPP_CLASS_ATTRIBUTES NoEventLoopException_obj : public  ::haxe::Exception_obj
{
	public:
		typedef  ::haxe::Exception_obj super;
		typedef NoEventLoopException_obj OBJ_;
		NoEventLoopException_obj();

	public:
		enum { _hx_ClassId = 0x00a9e885 };

		void __construct(::String __o_msg, ::haxe::Exception previous);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.thread.NoEventLoopException")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.thread.NoEventLoopException"); }
		static ::hx::ObjectPtr< NoEventLoopException_obj > __new(::String __o_msg, ::haxe::Exception previous);
		static ::hx::ObjectPtr< NoEventLoopException_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_msg, ::haxe::Exception previous);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoEventLoopException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoEventLoopException",92,71,e8,a8); }

};

} // end namespace sys
} // end namespace thread

#endif /* INCLUDED_sys_thread_NoEventLoopException */ 
