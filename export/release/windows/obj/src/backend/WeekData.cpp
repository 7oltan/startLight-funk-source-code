#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_WeekData
#include <backend/WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_40e6927fd11a022a_31_new,"backend.WeekData","new",0xa892a4ea,"backend.WeekData.new","backend/WeekData.hx",31,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_54_createWeekFile,"backend.WeekData","createWeekFile",0x59a0a762,"backend.WeekData.createWeekFile","backend/WeekData.hx",54,0x34ba5365)
static const ::String _hx_array_data_7c17a7f8_2[] = {
	HX_("dad",47,36,4c,00),HX_("bf",c4,55,00,00),HX_("gf",1f,5a,00,00),
};
static const int _hx_array_data_7c17a7f8_3[] = {
	(int)146,(int)113,(int)253,
};
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_95_reloadWeekFiles,"backend.WeekData","reloadWeekFiles",0x1ad1eed4,"backend.WeekData.reloadWeekFiles","backend/WeekData.hx",95,0x34ba5365)
static const ::String _hx_array_data_7c17a7f8_15[] = {
	HX_("mods/",9e,2f,58,0c),HX_("assets/",4c,2a,dc,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_162_addWeek,"backend.WeekData","addWeek",0x92b7843f,"backend.WeekData.addWeek","backend/WeekData.hx",162,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_183_getWeekFile,"backend.WeekData","getWeekFile",0x083495d0,"backend.WeekData.getWeekFile","backend/WeekData.hx",183,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_205_getWeekFileName,"backend.WeekData","getWeekFileName",0xddd45c3b,"backend.WeekData.getWeekFileName","backend/WeekData.hx",205,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_209_getCurrentWeek,"backend.WeekData","getCurrentWeek",0xeba04f8d,"backend.WeekData.getCurrentWeek","backend/WeekData.hx",209,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_230_setDirectoryFromWeek,"backend.WeekData","setDirectoryFromWeek",0x52a1f03f,"backend.WeekData.setDirectoryFromWeek","backend/WeekData.hx",230,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_32_boot,"backend.WeekData","boot",0xcfd6a868,"backend.WeekData.boot","backend/WeekData.hx",32,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_33_boot,"backend.WeekData","boot",0xcfd6a868,"backend.WeekData.boot","backend/WeekData.hx",33,0x34ba5365)
namespace backend{

void WeekData_obj::__construct( ::Dynamic weekFile,::String fileName){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_31_new)
HXLINE(  34)		this->folder = HX_("",00,00,00,00);
HXLINE(  76)		this->songs = ( (::cpp::VirtualArray)(weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) );
HXLINE(  77)		this->weekCharacters = ( (::Array< ::String >)(weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  78)		this->weekBackground = ( (::String)(weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE(  79)		this->weekBefore = ( (::String)(weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) );
HXLINE(  80)		this->storyName = ( (::String)(weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) );
HXLINE(  81)		this->weekName = ( (::String)(weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) );
HXLINE(  82)		this->freeplayColor = ( (::Array< int >)(weekFile->__Field(HX_("freeplayColor",a3,0c,53,32),::hx::paccDynamic)) );
HXLINE(  83)		this->startUnlocked = ( (bool)(weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) );
HXLINE(  84)		this->hiddenUntilUnlocked = ( (bool)(weekFile->__Field(HX_("hiddenUntilUnlocked",17,ed,31,dc),::hx::paccDynamic)) );
HXLINE(  85)		this->hideStoryMode = ( (bool)(weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) );
HXLINE(  86)		this->hideFreeplay = ( (bool)(weekFile->__Field(HX_("hideFreeplay",82,13,8c,e3),::hx::paccDynamic)) );
HXLINE(  87)		this->difficulties = ( (::String)(weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) );
HXLINE(  88)		bool _hx_tmp;
HXDLIN(  88)		if (::hx::IsNull( weekFile->__Field(HX_("galamix",ed,31,78,f3),::hx::paccDynamic) )) {
HXLINE(  88)			_hx_tmp = false;
            		}
            		else {
HXLINE(  88)			_hx_tmp = ( (bool)(weekFile->__Field(HX_("galamix",ed,31,78,f3),::hx::paccDynamic)) );
            		}
HXDLIN(  88)		this->galamix = _hx_tmp;
HXLINE(  89)		::String _hx_tmp1;
HXDLIN(  89)		if (::hx::IsNull( weekFile->__Field(HX_("weekCharacter",15,bd,85,77),::hx::paccDynamic) )) {
HXLINE(  89)			_hx_tmp1 = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  89)			_hx_tmp1 = ( (::String)(weekFile->__Field(HX_("weekCharacter",15,bd,85,77),::hx::paccDynamic)) );
            		}
HXDLIN(  89)		this->weekCharacter = _hx_tmp1;
HXLINE(  91)		this->fileName = fileName;
            	}

Dynamic WeekData_obj::__CreateEmpty() { return new WeekData_obj; }

void *WeekData_obj::_hx_vtable = 0;

Dynamic WeekData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeekData_obj > _hx_result = new WeekData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WeekData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60db6d72;
}

 ::haxe::ds::StringMap WeekData_obj::weeksLoaded;

::Array< ::String > WeekData_obj::weeksList;

 ::Dynamic WeekData_obj::createWeekFile(){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_54_createWeekFile)
HXLINE(  55)		 ::Dynamic weekFile =  ::Dynamic(::hx::Anon_obj::Create(14)
            			->setFixed(0,HX_("songs",fe,36,c7,80),::cpp::VirtualArray_obj::__new(3)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Bopeebo",90,29,16,da))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Fresh",4e,f6,b3,99))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Dad Battle",31,46,15,16))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253))))
            			->setFixed(1,HX_("hiddenUntilUnlocked",17,ed,31,dc),false)
            			->setFixed(2,HX_("hideFreeplay",82,13,8c,e3),false)
            			->setFixed(3,HX_("weekBackground",02,f1,ce,ed),HX_("stage",be,6a,0b,84))
            			->setFixed(4,HX_("galamix",ed,31,78,f3),false)
            			->setFixed(5,HX_("difficulties",59,c7,5e,02),HX_("",00,00,00,00))
            			->setFixed(6,HX_("weekCharacters",be,b5,7f,1d),::Array_obj< ::String >::fromData( _hx_array_data_7c17a7f8_2,3))
            			->setFixed(7,HX_("storyName",e0,50,20,29),HX_("Your New Week",e1,5b,59,b7))
            			->setFixed(8,HX_("weekName",5f,08,2f,30),HX_("Custom Week",c3,aa,e2,8c))
            			->setFixed(9,HX_("freeplayColor",a3,0c,53,32),::Array_obj< int >::fromData( _hx_array_data_7c17a7f8_3,3))
            			->setFixed(10,HX_("hideStoryMode",d6,b4,4e,4c),false)
            			->setFixed(11,HX_("weekBefore",93,97,02,5d),HX_("tutorial",9e,8f,b5,82))
            			->setFixed(12,HX_("startUnlocked",a5,96,c9,60),true)
            			->setFixed(13,HX_("weekCharacter",15,bd,85,77),HX_("",00,00,00,00)));
HXLINE(  71)		return weekFile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,createWeekFile,return )

void WeekData_obj::reloadWeekFiles( ::Dynamic __o_isStoryMode){
            		 ::Dynamic isStoryMode = __o_isStoryMode;
            		if (::hx::IsNull(__o_isStoryMode)) isStoryMode = false;
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_95_reloadWeekFiles)
HXLINE(  96)		::backend::WeekData_obj::weeksList = ::Array_obj< ::String >::__new(0);
HXLINE(  97)		::backend::WeekData_obj::weeksLoaded->clear();
HXLINE(  99)		::Array< ::String > directories = ::Array_obj< ::String >::fromData( _hx_array_data_7c17a7f8_15,2);
HXLINE( 100)		int originalLength = directories->length;
HXLINE( 102)		{
HXLINE( 102)			int _g = 0;
HXDLIN( 102)			if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE( 102)				::backend::Mods_obj::updateModList();
            			}
HXDLIN( 102)			::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN( 102)			::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN( 102)			::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN( 102)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 102)				int _g = 0;
HXDLIN( 102)				::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN( 102)				::String daList = null();
HXDLIN( 102)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)				path = formatted->__get((formatted->length - 1));
HXLINE( 102)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXLINE( 102)				::Array< ::String > _g1;
HXDLIN( 102)				if (::hx::IsNotNull( daList )) {
HXLINE( 102)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 102)					{
HXLINE( 102)						int _g = 0;
HXDLIN( 102)						int _g2 = daList1->length;
HXDLIN( 102)						while((_g < _g2)){
HXLINE( 102)							_g = (_g + 1);
HXDLIN( 102)							int i = (_g - 1);
HXDLIN( 102)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN( 102)					_g1 = daList1;
            				}
            				else {
HXLINE( 102)					_g1 = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN( 102)				while((_g < _g1->length)){
HXLINE( 102)					::String mod = _g1->__get(_g);
HXDLIN( 102)					_g = (_g + 1);
HXDLIN( 102)					if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE( 102)						continue;
            					}
HXDLIN( 102)					::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN( 102)					list_all->push(dat->__get(0));
HXDLIN( 102)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE( 102)						list_enabled->push(dat->__get(0));
            					}
            					else {
HXLINE( 102)						list_disabled->push(dat->__get(0));
            					}
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 172)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 102)					::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN( 102)			::Array< ::String > _g1 = list_enabled;
HXDLIN( 102)			while((_g < _g1->length)){
HXLINE( 102)				::String mod = _g1->__get(_g);
HXDLIN( 102)				_g = (_g + 1);
HXLINE( 103)				::String key = (mod + HX_("/",2f,00,00,00));
HXDLIN( 103)				if (::hx::IsNull( key )) {
HXLINE( 103)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 103)				directories->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
            		}
HXLINE( 109)		::String file = HX_("weeks/weekList.txt",c4,73,97,b1);
HXDLIN( 109)		if (::hx::IsNull( file )) {
HXLINE( 109)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 109)		::String path = (HX_("assets/",4c,2a,dc,36) + file);
HXDLIN( 109)		::String daList = null();
HXDLIN( 109)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)		path = formatted->__get((formatted->length - 1));
HXLINE( 109)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 109)		::Array< ::String > sexList;
HXDLIN( 109)		if (::hx::IsNotNull( daList )) {
HXLINE( 109)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 109)			{
HXLINE( 109)				int _g = 0;
HXDLIN( 109)				int _g1 = daList1->length;
HXDLIN( 109)				while((_g < _g1)){
HXLINE( 109)					_g = (_g + 1);
HXDLIN( 109)					int i = (_g - 1);
HXDLIN( 109)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN( 109)			sexList = daList1;
            		}
            		else {
HXLINE( 109)			sexList = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 110)		{
HXLINE( 110)			int _g2 = 0;
HXDLIN( 110)			int _g3 = sexList->length;
HXDLIN( 110)			while((_g2 < _g3)){
HXLINE( 110)				_g2 = (_g2 + 1);
HXDLIN( 110)				int i = (_g2 - 1);
HXLINE( 111)				{
HXLINE( 111)					int _g = 0;
HXDLIN( 111)					int _g1 = directories->length;
HXDLIN( 111)					while((_g < _g1)){
HXLINE( 111)						_g = (_g + 1);
HXDLIN( 111)						int j = (_g - 1);
HXLINE( 112)						::String fileToCheck = (((directories->__get(j) + HX_("weeks/",50,a9,04,ff)) + sexList->__get(i)) + HX_(".json",56,f1,d6,c2));
HXLINE( 113)						if (!(::backend::WeekData_obj::weeksLoaded->exists(sexList->__get(i)))) {
HXLINE( 114)							 ::Dynamic week = ::backend::WeekData_obj::getWeekFile(fileToCheck);
HXLINE( 115)							if (::hx::IsNotNull( week )) {
HXLINE( 116)								 ::backend::WeekData weekFile =  ::backend::WeekData_obj::__alloc( HX_CTX ,week,sexList->__get(i));
HXLINE( 119)								if ((j >= originalLength)) {
HXLINE( 120)									weekFile->folder = directories->__get(j).substring(HX_("mods/",9e,2f,58,0c).length,(directories->__get(j).length - 1));
            								}
HXLINE( 124)								bool _hx_tmp;
HXDLIN( 124)								if (::hx::IsNotNull( weekFile )) {
HXLINE( 124)									bool _hx_tmp1;
HXDLIN( 124)									if (::hx::IsNotNull( isStoryMode )) {
HXLINE( 124)										if (( (bool)(isStoryMode) )) {
HXLINE( 124)											_hx_tmp1 = !(weekFile->hideStoryMode);
            										}
            										else {
HXLINE( 124)											_hx_tmp1 = false;
            										}
            									}
            									else {
HXLINE( 124)										_hx_tmp1 = true;
            									}
HXDLIN( 124)									if (!(_hx_tmp1)) {
HXLINE( 124)										if (!(( (bool)(isStoryMode) ))) {
HXLINE( 124)											_hx_tmp = !(weekFile->hideFreeplay);
            										}
            										else {
HXLINE( 124)											_hx_tmp = false;
            										}
            									}
            									else {
HXLINE( 124)										_hx_tmp = true;
            									}
            								}
            								else {
HXLINE( 124)									_hx_tmp = false;
            								}
HXDLIN( 124)								if (_hx_tmp) {
HXLINE( 125)									::backend::WeekData_obj::weeksLoaded->set(sexList->__get(i),weekFile);
HXLINE( 126)									::backend::WeekData_obj::weeksList->push(sexList->__get(i));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 134)		{
HXLINE( 134)			int _g4 = 0;
HXDLIN( 134)			int _g5 = directories->length;
HXDLIN( 134)			while((_g4 < _g5)){
HXLINE( 134)				_g4 = (_g4 + 1);
HXDLIN( 134)				int i = (_g4 - 1);
HXLINE( 135)				::String directory = (directories->__get(i) + HX_("weeks/",50,a9,04,ff));
HXLINE( 136)				if (::sys::FileSystem_obj::exists(directory)) {
HXLINE( 137)					::String path = (directory + HX_("weekList.txt",74,12,92,5d));
HXDLIN( 137)					::String daList = null();
HXDLIN( 137)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)					path = formatted->__get((formatted->length - 1));
HXLINE( 137)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXLINE( 137)					::Array< ::String > listOfWeeks;
HXDLIN( 137)					if (::hx::IsNotNull( daList )) {
HXLINE( 137)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 137)						{
HXLINE( 137)							int _g = 0;
HXDLIN( 137)							int _g1 = daList1->length;
HXDLIN( 137)							while((_g < _g1)){
HXLINE( 137)								_g = (_g + 1);
HXDLIN( 137)								int i = (_g - 1);
HXDLIN( 137)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN( 137)						listOfWeeks = daList1;
            					}
            					else {
HXLINE( 137)						listOfWeeks = ::Array_obj< ::String >::__new(0);
            					}
HXLINE( 138)					{
HXLINE( 138)						int _g = 0;
HXDLIN( 138)						while((_g < listOfWeeks->length)){
HXLINE( 138)							::String daWeek = listOfWeeks->__get(_g);
HXDLIN( 138)							_g = (_g + 1);
HXLINE( 140)							::String path = ((directory + daWeek) + HX_(".json",56,f1,d6,c2));
HXLINE( 141)							if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 143)								::backend::WeekData_obj::addWeek(daWeek,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
HXLINE( 147)					{
HXLINE( 147)						int _g1 = 0;
HXDLIN( 147)						::Array< ::String > _g2 = ::sys::FileSystem_obj::readDirectory(directory);
HXDLIN( 147)						while((_g1 < _g2->length)){
HXLINE( 147)							::String file = _g2->__get(_g1);
HXDLIN( 147)							_g1 = (_g1 + 1);
HXLINE( 149)							::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,directory)->init(1,file));
HXLINE( 150)							bool _hx_tmp;
HXDLIN( 150)							if (!(::sys::FileSystem_obj::isDirectory(path))) {
HXLINE( 150)								_hx_tmp = ::StringTools_obj::endsWith(file,HX_(".json",56,f1,d6,c2));
            							}
            							else {
HXLINE( 150)								_hx_tmp = false;
            							}
HXDLIN( 150)							if (_hx_tmp) {
HXLINE( 152)								::String _hx_tmp = file.substr(0,(file.length - 5));
HXDLIN( 152)								::backend::WeekData_obj::addWeek(_hx_tmp,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,reloadWeekFiles,(void))

void WeekData_obj::addWeek(::String weekToCheck,::String path,::String directory,int i,int originalLength){
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_162_addWeek)
HXDLIN( 162)		if (!(::backend::WeekData_obj::weeksLoaded->exists(weekToCheck))) {
HXLINE( 164)			 ::Dynamic week = ::backend::WeekData_obj::getWeekFile(path);
HXLINE( 165)			if (::hx::IsNotNull( week )) {
HXLINE( 167)				 ::backend::WeekData weekFile =  ::backend::WeekData_obj::__alloc( HX_CTX ,week,weekToCheck);
HXLINE( 168)				if ((i >= originalLength)) {
HXLINE( 171)					weekFile->folder = directory.substring(HX_("mods/",9e,2f,58,0c).length,(directory.length - 1));
            				}
HXLINE( 174)				bool _hx_tmp;
HXDLIN( 174)				bool _hx_tmp1;
HXDLIN( 174)				if (::states::PlayState_obj::isStoryMode) {
HXLINE( 174)					_hx_tmp1 = !(weekFile->hideStoryMode);
            				}
            				else {
HXLINE( 174)					_hx_tmp1 = false;
            				}
HXDLIN( 174)				if (!(_hx_tmp1)) {
HXLINE( 174)					if (!(::states::PlayState_obj::isStoryMode)) {
HXLINE( 174)						_hx_tmp = !(weekFile->hideFreeplay);
            					}
            					else {
HXLINE( 174)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 174)					_hx_tmp = true;
            				}
HXDLIN( 174)				if (_hx_tmp) {
HXLINE( 176)					::backend::WeekData_obj::weeksLoaded->set(weekToCheck,weekFile);
HXLINE( 177)					::backend::WeekData_obj::weeksList->push(weekToCheck);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(WeekData_obj,addWeek,(void))

 ::Dynamic WeekData_obj::getWeekFile(::String path){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_183_getWeekFile)
HXLINE( 184)		::String rawJson = null();
HXLINE( 186)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 187)			rawJson = ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 195)		bool _hx_tmp;
HXDLIN( 195)		if (::hx::IsNotNull( rawJson )) {
HXLINE( 195)			_hx_tmp = (rawJson.length > 0);
            		}
            		else {
HXLINE( 195)			_hx_tmp = false;
            		}
HXDLIN( 195)		if (_hx_tmp) {
HXLINE( 196)			return ::tjson::TJSON_obj::parse(rawJson,null(),null());
            		}
HXLINE( 198)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,getWeekFile,return )

::String WeekData_obj::getWeekFileName(){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_205_getWeekFileName)
HXDLIN( 205)		return ::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getWeekFileName,return )

 ::backend::WeekData WeekData_obj::getCurrentWeek(){
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_209_getCurrentWeek)
HXLINE( 210)		int weekInt = ::states::PlayState_obj::storyWeek;
HXLINE( 211)		if ((::states::PlayState_obj::storyWeek < ::backend::WeekData_obj::weeksList->length)) {
HXLINE( 212)			::haxe::Log_obj::trace(::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek),::hx::SourceInfo(HX_("source/backend/WeekData.hx",f1,ec,fe,25),212,HX_("backend.WeekData",f8,a7,17,7c),HX_("getCurrentWeek",d7,8b,25,0f)));
HXLINE( 213)			return ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek))) );
            		}
            		else {
HXLINE( 215)			 ::backend::WeekData fakeWeek = null();
HXLINE( 216)			::backend::WeekData_obj::reloadWeekFiles(null());
HXLINE( 218)			if ((::states::PlayState_obj::storyWeek < ::backend::WeekData_obj::weeksList->length)) {
HXLINE( 219)				::haxe::Log_obj::trace(HX_("second time's the charm",ed,ca,e2,df),::hx::SourceInfo(HX_("source/backend/WeekData.hx",f1,ec,fe,25),219,HX_("backend.WeekData",f8,a7,17,7c),HX_("getCurrentWeek",d7,8b,25,0f)));
HXLINE( 220)				return ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek))) );
            			}
            			else {
HXLINE( 223)				::haxe::Log_obj::trace(HX_("bruh here's some fake stuff ig",50,a0,ac,e4),::hx::SourceInfo(HX_("source/backend/WeekData.hx",f1,ec,fe,25),223,HX_("backend.WeekData",f8,a7,17,7c),HX_("getCurrentWeek",d7,8b,25,0f)));
HXLINE( 224)				fakeWeek =  ::backend::WeekData_obj::__alloc( HX_CTX ,::backend::WeekData_obj::createWeekFile(),HX_("fakeWeek",29,36,32,b5));
            			}
HXLINE( 226)			if (::hx::IsNotNull( fakeWeek )) {
HXLINE( 226)				return fakeWeek;
            			}
            			else {
HXLINE( 226)				return ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek))) );
            			}
            		}
HXLINE( 211)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getCurrentWeek,return )

void WeekData_obj::setDirectoryFromWeek( ::backend::WeekData data){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_230_setDirectoryFromWeek)
HXLINE( 231)		::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 232)		bool _hx_tmp;
HXDLIN( 232)		bool _hx_tmp1;
HXDLIN( 232)		if (::hx::IsNotNull( data )) {
HXLINE( 232)			_hx_tmp1 = ::hx::IsNotNull( data->folder );
            		}
            		else {
HXLINE( 232)			_hx_tmp1 = false;
            		}
HXDLIN( 232)		if (_hx_tmp1) {
HXLINE( 232)			_hx_tmp = (data->folder.length > 0);
            		}
            		else {
HXLINE( 232)			_hx_tmp = false;
            		}
HXDLIN( 232)		if (_hx_tmp) {
HXLINE( 233)			::backend::Mods_obj::currentModDirectory = data->folder;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,setDirectoryFromWeek,(void))


WeekData_obj::WeekData_obj()
{
}

void WeekData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeekData);
	HX_MARK_MEMBER_NAME(folder,"folder");
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_MARK_MEMBER_NAME(weekBackground,"weekBackground");
	HX_MARK_MEMBER_NAME(weekBefore,"weekBefore");
	HX_MARK_MEMBER_NAME(storyName,"storyName");
	HX_MARK_MEMBER_NAME(weekName,"weekName");
	HX_MARK_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_MARK_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_MARK_MEMBER_NAME(hiddenUntilUnlocked,"hiddenUntilUnlocked");
	HX_MARK_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_MARK_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_MARK_MEMBER_NAME(difficulties,"difficulties");
	HX_MARK_MEMBER_NAME(galamix,"galamix");
	HX_MARK_MEMBER_NAME(weekCharacter,"weekCharacter");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_END_CLASS();
}

void WeekData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(folder,"folder");
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_VISIT_MEMBER_NAME(weekBackground,"weekBackground");
	HX_VISIT_MEMBER_NAME(weekBefore,"weekBefore");
	HX_VISIT_MEMBER_NAME(storyName,"storyName");
	HX_VISIT_MEMBER_NAME(weekName,"weekName");
	HX_VISIT_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_VISIT_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_VISIT_MEMBER_NAME(hiddenUntilUnlocked,"hiddenUntilUnlocked");
	HX_VISIT_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_VISIT_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_VISIT_MEMBER_NAME(difficulties,"difficulties");
	HX_VISIT_MEMBER_NAME(galamix,"galamix");
	HX_VISIT_MEMBER_NAME(weekCharacter,"weekCharacter");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
}

::hx::Val WeekData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return ::hx::Val( folder ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"galamix") ) { return ::hx::Val( galamix ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { return ::hx::Val( weekName ); }
		if (HX_FIELD_EQ(inName,"fileName") ) { return ::hx::Val( fileName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { return ::hx::Val( storyName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { return ::hx::Val( weekBefore ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { return ::hx::Val( hideFreeplay ); }
		if (HX_FIELD_EQ(inName,"difficulties") ) { return ::hx::Val( difficulties ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { return ::hx::Val( freeplayColor ); }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { return ::hx::Val( startUnlocked ); }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { return ::hx::Val( hideStoryMode ); }
		if (HX_FIELD_EQ(inName,"weekCharacter") ) { return ::hx::Val( weekCharacter ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { return ::hx::Val( weekCharacters ); }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { return ::hx::Val( weekBackground ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlocked") ) { return ::hx::Val( hiddenUntilUnlocked ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WeekData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addWeek") ) { outValue = addWeek_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { outValue = ( weeksList ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { outValue = ( weeksLoaded ); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFile") ) { outValue = getWeekFile_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createWeekFile") ) { outValue = createWeekFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCurrentWeek") ) { outValue = getCurrentWeek_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"reloadWeekFiles") ) { outValue = reloadWeekFiles_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFileName") ) { outValue = getWeekFileName_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setDirectoryFromWeek") ) { outValue = setDirectoryFromWeek_dyn(); return true; }
	}
	return false;
}

::hx::Val WeekData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { folder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"galamix") ) { galamix=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { weekName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { storyName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { weekBefore=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { hideFreeplay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { freeplayColor=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { startUnlocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { hideStoryMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekCharacter") ) { weekCharacter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { weekCharacters=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { weekBackground=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlocked") ) { hiddenUntilUnlocked=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeekData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { weeksList=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { weeksLoaded=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void WeekData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("folder",ae,76,90,f9));
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("weekCharacters",be,b5,7f,1d));
	outFields->push(HX_("weekBackground",02,f1,ce,ed));
	outFields->push(HX_("weekBefore",93,97,02,5d));
	outFields->push(HX_("storyName",e0,50,20,29));
	outFields->push(HX_("weekName",5f,08,2f,30));
	outFields->push(HX_("freeplayColor",a3,0c,53,32));
	outFields->push(HX_("startUnlocked",a5,96,c9,60));
	outFields->push(HX_("hiddenUntilUnlocked",17,ed,31,dc));
	outFields->push(HX_("hideStoryMode",d6,b4,4e,4c));
	outFields->push(HX_("hideFreeplay",82,13,8c,e3));
	outFields->push(HX_("difficulties",59,c7,5e,02));
	outFields->push(HX_("galamix",ed,31,78,f3));
	outFields->push(HX_("weekCharacter",15,bd,85,77));
	outFields->push(HX_("fileName",e7,5a,43,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WeekData_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(WeekData_obj,folder),HX_("folder",ae,76,90,f9)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(WeekData_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(WeekData_obj,weekCharacters),HX_("weekCharacters",be,b5,7f,1d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBackground),HX_("weekBackground",02,f1,ce,ed)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBefore),HX_("weekBefore",93,97,02,5d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,storyName),HX_("storyName",e0,50,20,29)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekName),HX_("weekName",5f,08,2f,30)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(WeekData_obj,freeplayColor),HX_("freeplayColor",a3,0c,53,32)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,startUnlocked),HX_("startUnlocked",a5,96,c9,60)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hiddenUntilUnlocked),HX_("hiddenUntilUnlocked",17,ed,31,dc)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideStoryMode),HX_("hideStoryMode",d6,b4,4e,4c)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideFreeplay),HX_("hideFreeplay",82,13,8c,e3)},
	{::hx::fsString,(int)offsetof(WeekData_obj,difficulties),HX_("difficulties",59,c7,5e,02)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,galamix),HX_("galamix",ed,31,78,f3)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekCharacter),HX_("weekCharacter",15,bd,85,77)},
	{::hx::fsString,(int)offsetof(WeekData_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WeekData_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &WeekData_obj::weeksLoaded,HX_("weeksLoaded",64,5b,41,21)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &WeekData_obj::weeksList,HX_("weeksList",fd,49,e7,38)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WeekData_obj_sMemberFields[] = {
	HX_("folder",ae,76,90,f9),
	HX_("songs",fe,36,c7,80),
	HX_("weekCharacters",be,b5,7f,1d),
	HX_("weekBackground",02,f1,ce,ed),
	HX_("weekBefore",93,97,02,5d),
	HX_("storyName",e0,50,20,29),
	HX_("weekName",5f,08,2f,30),
	HX_("freeplayColor",a3,0c,53,32),
	HX_("startUnlocked",a5,96,c9,60),
	HX_("hiddenUntilUnlocked",17,ed,31,dc),
	HX_("hideStoryMode",d6,b4,4e,4c),
	HX_("hideFreeplay",82,13,8c,e3),
	HX_("difficulties",59,c7,5e,02),
	HX_("galamix",ed,31,78,f3),
	HX_("weekCharacter",15,bd,85,77),
	HX_("fileName",e7,5a,43,62),
	::String(null()) };

static void WeekData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WeekData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#endif

::hx::Class WeekData_obj::__mClass;

static ::String WeekData_obj_sStaticFields[] = {
	HX_("weeksLoaded",64,5b,41,21),
	HX_("weeksList",fd,49,e7,38),
	HX_("createWeekFile",ac,e3,25,7d),
	HX_("reloadWeekFiles",4a,73,e1,0b),
	HX_("addWeek",b5,a2,32,8b),
	HX_("getWeekFile",46,27,df,50),
	HX_("getWeekFileName",b1,e0,e3,ce),
	HX_("getCurrentWeek",d7,8b,25,0f),
	HX_("setDirectoryFromWeek",09,80,f0,74),
	::String(null())
};

void WeekData_obj::__register()
{
	WeekData_obj _hx_dummy;
	WeekData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.WeekData",f8,a7,17,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeekData_obj::__GetStatic;
	__mClass->mSetStaticField = &WeekData_obj::__SetStatic;
	__mClass->mMarkFunc = WeekData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WeekData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WeekData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WeekData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WeekData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeekData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeekData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WeekData_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_32_boot)
HXDLIN(  32)		weeksLoaded =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_33_boot)
HXDLIN(  33)		weeksList = ::Array_obj< ::String >::__new(0);
            	}
}

} // end namespace backend
