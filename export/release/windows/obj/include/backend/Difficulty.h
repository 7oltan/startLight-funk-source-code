#ifndef INCLUDED_backend_Difficulty
#define INCLUDED_backend_Difficulty

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,Difficulty)
HX_DECLARE_CLASS1(backend,WeekData)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES Difficulty_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Difficulty_obj OBJ_;
		Difficulty_obj();

	public:
		enum { _hx_ClassId = 0x42e0846f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.Difficulty")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.Difficulty"); }

		inline static ::hx::ObjectPtr< Difficulty_obj > __new() {
			::hx::ObjectPtr< Difficulty_obj > __this = new Difficulty_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Difficulty_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Difficulty_obj *__this = (Difficulty_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Difficulty_obj), false, "backend.Difficulty"));
			*(void **)__this = Difficulty_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Difficulty_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Difficulty",5b,52,3f,3e); }

		static void __boot();
		static ::Array< ::String > defaultList;
		static ::Array< ::String > list;
		static ::String defaultDifficulty;
		static ::String getFilePath( ::Dynamic num);
		static ::Dynamic getFilePath_dyn();

		static void loadFromWeek( ::backend::WeekData week);
		static ::Dynamic loadFromWeek_dyn();

		static void resetList();
		static ::Dynamic resetList_dyn();

		static void copyFrom(::Array< ::String > diffs);
		static ::Dynamic copyFrom_dyn();

		static ::String getString( ::Dynamic num);
		static ::Dynamic getString_dyn();

		static ::String getDefault();
		static ::Dynamic getDefault_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_Difficulty */ 