#ifndef INCLUDED_backend_WeekData
#define INCLUDED_backend_WeekData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_40e6927fd11a022a_31_new)
HX_DECLARE_CLASS1(backend,WeekData)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES WeekData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WeekData_obj OBJ_;
		WeekData_obj();

	public:
		enum { _hx_ClassId = 0x60db6d72 };

		void __construct( ::Dynamic weekFile,::String fileName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.WeekData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.WeekData"); }

		inline static ::hx::ObjectPtr< WeekData_obj > __new( ::Dynamic weekFile,::String fileName) {
			::hx::ObjectPtr< WeekData_obj > __this = new WeekData_obj();
			__this->__construct(weekFile,fileName);
			return __this;
		}

		inline static ::hx::ObjectPtr< WeekData_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic weekFile,::String fileName) {
			WeekData_obj *__this = (WeekData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WeekData_obj), true, "backend.WeekData"));
			*(void **)__this = WeekData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_31_new)
HXLINE(  34)		( ( ::backend::WeekData)(__this) )->folder = HX_("",00,00,00,00);
HXLINE(  76)		( ( ::backend::WeekData)(__this) )->songs = ( (::cpp::VirtualArray)(weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) );
HXLINE(  77)		( ( ::backend::WeekData)(__this) )->weekCharacters = ( (::Array< ::String >)(weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  78)		( ( ::backend::WeekData)(__this) )->weekBackground = ( (::String)(weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE(  79)		( ( ::backend::WeekData)(__this) )->weekBefore = ( (::String)(weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) );
HXLINE(  80)		( ( ::backend::WeekData)(__this) )->storyName = ( (::String)(weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) );
HXLINE(  81)		( ( ::backend::WeekData)(__this) )->weekName = ( (::String)(weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) );
HXLINE(  82)		( ( ::backend::WeekData)(__this) )->freeplayColor = ( (::Array< int >)(weekFile->__Field(HX_("freeplayColor",a3,0c,53,32),::hx::paccDynamic)) );
HXLINE(  83)		( ( ::backend::WeekData)(__this) )->startUnlocked = ( (bool)(weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) );
HXLINE(  84)		( ( ::backend::WeekData)(__this) )->hiddenUntilUnlocked = ( (bool)(weekFile->__Field(HX_("hiddenUntilUnlocked",17,ed,31,dc),::hx::paccDynamic)) );
HXLINE(  85)		( ( ::backend::WeekData)(__this) )->hideStoryMode = ( (bool)(weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) );
HXLINE(  86)		( ( ::backend::WeekData)(__this) )->hideFreeplay = ( (bool)(weekFile->__Field(HX_("hideFreeplay",82,13,8c,e3),::hx::paccDynamic)) );
HXLINE(  87)		( ( ::backend::WeekData)(__this) )->difficulties = ( (::String)(weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) );
HXLINE(  88)		bool _hx_tmp;
HXDLIN(  88)		if (::hx::IsNull( weekFile->__Field(HX_("galamix",ed,31,78,f3),::hx::paccDynamic) )) {
HXLINE(  88)			_hx_tmp = false;
            		}
            		else {
HXLINE(  88)			_hx_tmp = ( (bool)(weekFile->__Field(HX_("galamix",ed,31,78,f3),::hx::paccDynamic)) );
            		}
HXDLIN(  88)		( ( ::backend::WeekData)(__this) )->galamix = _hx_tmp;
HXLINE(  89)		::String _hx_tmp1;
HXDLIN(  89)		if (::hx::IsNull( weekFile->__Field(HX_("weekCharacter",15,bd,85,77),::hx::paccDynamic) )) {
HXLINE(  89)			_hx_tmp1 = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  89)			_hx_tmp1 = ( (::String)(weekFile->__Field(HX_("weekCharacter",15,bd,85,77),::hx::paccDynamic)) );
            		}
HXDLIN(  89)		( ( ::backend::WeekData)(__this) )->weekCharacter = _hx_tmp1;
HXLINE(  91)		( ( ::backend::WeekData)(__this) )->fileName = fileName;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WeekData_obj();

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
		::String __ToString() const { return HX_("WeekData",5e,a8,44,03); }

		static void __boot();
		static  ::haxe::ds::StringMap weeksLoaded;
		static ::Array< ::String > weeksList;
		static  ::Dynamic createWeekFile();
		static ::Dynamic createWeekFile_dyn();

		static void reloadWeekFiles( ::Dynamic isStoryMode);
		static ::Dynamic reloadWeekFiles_dyn();

		static void addWeek(::String weekToCheck,::String path,::String directory,int i,int originalLength);
		static ::Dynamic addWeek_dyn();

		static  ::Dynamic getWeekFile(::String path);
		static ::Dynamic getWeekFile_dyn();

		static ::String getWeekFileName();
		static ::Dynamic getWeekFileName_dyn();

		static  ::backend::WeekData getCurrentWeek();
		static ::Dynamic getCurrentWeek_dyn();

		static void setDirectoryFromWeek( ::backend::WeekData data);
		static ::Dynamic setDirectoryFromWeek_dyn();

		::String folder;
		::cpp::VirtualArray songs;
		::Array< ::String > weekCharacters;
		::String weekBackground;
		::String weekBefore;
		::String storyName;
		::String weekName;
		::Array< int > freeplayColor;
		bool startUnlocked;
		bool hiddenUntilUnlocked;
		bool hideStoryMode;
		bool hideFreeplay;
		::String difficulties;
		bool galamix;
		::String weekCharacter;
		::String fileName;
};

} // end namespace backend

#endif /* INCLUDED_backend_WeekData */ 
