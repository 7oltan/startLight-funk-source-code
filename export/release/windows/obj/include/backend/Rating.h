#ifndef INCLUDED_backend_Rating
#define INCLUDED_backend_Rating

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,Rating)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES Rating_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Rating_obj OBJ_;
		Rating_obj();

	public:
		enum { _hx_ClassId = 0x3c104051 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.Rating")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.Rating"); }
		static ::hx::ObjectPtr< Rating_obj > __new(::String name);
		static ::hx::ObjectPtr< Rating_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Rating_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Rating",3d,a8,1e,f0); }

		static ::Array< ::Dynamic> loadDefault();
		static ::Dynamic loadDefault_dyn();

		::String name;
		::String image;
		 ::Dynamic hitWindow;
		Float ratingMod;
		int score;
		bool noteSplash;
		int hits;
};

} // end namespace backend

#endif /* INCLUDED_backend_Rating */ 
