#ifndef INCLUDED_haxe_exceptions_PosException
#define INCLUDED_haxe_exceptions_PosException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(haxe,exceptions,PosException)

namespace haxe{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES PosException_obj : public  ::haxe::Exception_obj
{
	public:
		typedef  ::haxe::Exception_obj super;
		typedef PosException_obj OBJ_;
		PosException_obj();

	public:
		enum { _hx_ClassId = 0x65f7252d };

		void __construct(::String message, ::haxe::Exception previous, ::Dynamic pos);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.exceptions.PosException")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.exceptions.PosException"); }
		static ::hx::ObjectPtr< PosException_obj > __new(::String message, ::haxe::Exception previous, ::Dynamic pos);
		static ::hx::ObjectPtr< PosException_obj > __alloc(::hx::Ctx *_hx_ctx,::String message, ::haxe::Exception previous, ::Dynamic pos);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PosException_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PosException",3b,8c,23,b9); }

		 ::Dynamic posInfos;
		virtual ::String toString();

};

} // end namespace haxe
} // end namespace exceptions

#endif /* INCLUDED_haxe_exceptions_PosException */ 