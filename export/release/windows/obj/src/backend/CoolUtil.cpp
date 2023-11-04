#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_CoolUtil
#include <backend/CoolUtil.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_15_quantize,"backend.CoolUtil","quantize",0x96fb8b1a,"backend.CoolUtil.quantize","backend/CoolUtil.hx",15,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_23_capitalize,"backend.CoolUtil","capitalize",0xdbf07455,"backend.CoolUtil.capitalize","backend/CoolUtil.hx",23,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_26_coolTextFile,"backend.CoolUtil","coolTextFile",0x5446309b,"backend.CoolUtil.coolTextFile","backend/CoolUtil.hx",26,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_39_colorFromString,"backend.CoolUtil","colorFromString",0x1f97add5,"backend.CoolUtil.colorFromString","backend/CoolUtil.hx",39,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_50_listFromString,"backend.CoolUtil","listFromString",0x72882302,"backend.CoolUtil.listFromString","backend/CoolUtil.hx",50,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_61_floorDecimal,"backend.CoolUtil","floorDecimal",0x1bf0430e,"backend.CoolUtil.floorDecimal","backend/CoolUtil.hx",61,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_74_dominantColor,"backend.CoolUtil","dominantColor",0x9df067da,"backend.CoolUtil.dominantColor","backend/CoolUtil.hx",74,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_102_numberArray,"backend.CoolUtil","numberArray",0xbca10747,"backend.CoolUtil.numberArray","backend/CoolUtil.hx",102,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_113_browserLoad,"backend.CoolUtil","browserLoad",0xf9659f25,"backend.CoolUtil.browserLoad","backend/CoolUtil.hx",113,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_124_getSavePath,"backend.CoolUtil","getSavePath",0x33882b6f,"backend.CoolUtil.getSavePath","backend/CoolUtil.hx",124,0x2a74e258)
namespace backend{

void CoolUtil_obj::__construct() { }

Dynamic CoolUtil_obj::__CreateEmpty() { return new CoolUtil_obj; }

void *CoolUtil_obj::_hx_vtable = 0;

Dynamic CoolUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtil_obj > _hx_result = new CoolUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2704589f;
}

Float CoolUtil_obj::quantize(Float f,Float snap){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_15_quantize)
HXLINE(  17)		Float m = ::Math_obj::fround((f * snap));
HXLINE(  18)		::haxe::Log_obj::trace(snap,::hx::SourceInfo(HX_("source/backend/CoolUtil.hx",e4,7b,b9,1b),18,HX_("backend.CoolUtil",25,93,40,42),HX_("quantize",b1,4c,42,ac)));
HXLINE(  19)		return (m / snap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,quantize,return )

::String CoolUtil_obj::capitalize(::String text){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_23_capitalize)
HXDLIN(  23)		::String _hx_tmp = text.charAt(0).toUpperCase();
HXDLIN(  23)		return (_hx_tmp + text.substr(1,null()).toLowerCase());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,capitalize,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_26_coolTextFile)
HXLINE(  27)		::String daList = null();
HXLINE(  29)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)		path = formatted->__get((formatted->length - 1));
HXLINE(  31)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXLINE(  35)		if (::hx::IsNotNull( daList )) {
HXLINE(  35)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  35)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN(  35)			{
HXLINE(  35)				int _g = 0;
HXDLIN(  35)				int _g1 = daList1->length;
HXDLIN(  35)				while((_g < _g1)){
HXLINE(  35)					_g = (_g + 1);
HXDLIN(  35)					int i = (_g - 1);
HXDLIN(  35)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN(  35)			return daList1;
            		}
            		else {
HXLINE(  35)			return ::Array_obj< ::String >::__new(0);
            		}
HXDLIN(  35)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

int CoolUtil_obj::colorFromString(::String color){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_39_colorFromString)
HXLINE(  40)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXLINE(  41)		::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXLINE(  42)		if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE(  42)			color1 = color1.substring((color1.length - 6),null());
            		}
HXLINE(  44)		 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXLINE(  45)		if (::hx::IsNull( colorNum )) {
HXLINE(  45)			colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            		}
HXLINE(  46)		if (::hx::IsNotNull( colorNum )) {
HXLINE(  46)			return ( (int)(colorNum) );
            		}
            		else {
HXLINE(  46)			return -1;
            		}
HXDLIN(  46)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,colorFromString,return )

::Array< ::String > CoolUtil_obj::listFromString(::String string){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_50_listFromString)
HXLINE(  51)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE(  52)		daList = ::StringTools_obj::trim(string).split(HX_("\n",0a,00,00,00));
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			int _g1 = daList->length;
HXDLIN(  54)			while((_g < _g1)){
HXLINE(  54)				_g = (_g + 1);
HXDLIN(  54)				int i = (_g - 1);
HXLINE(  55)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  57)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,listFromString,return )

Float CoolUtil_obj::floorDecimal(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_61_floorDecimal)
HXLINE(  62)		if ((decimals < 1)) {
HXLINE(  63)			return ( (Float)(::Math_obj::floor(value)) );
            		}
HXLINE(  65)		Float tempMult = ( (Float)(1) );
HXLINE(  66)		{
HXLINE(  66)			int _g = 0;
HXDLIN(  66)			int _g1 = decimals;
HXDLIN(  66)			while((_g < _g1)){
HXLINE(  66)				_g = (_g + 1);
HXDLIN(  66)				int i = (_g - 1);
HXLINE(  67)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE(  69)		Float newValue = ( (Float)(::Math_obj::floor((value * tempMult))) );
HXLINE(  70)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,floorDecimal,return )

int CoolUtil_obj::dominantColor( ::flixel::FlxSprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_74_dominantColor)
HXLINE(  75)		 ::haxe::ds::IntMap countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			int _g1 = sprite->frameWidth;
HXDLIN(  76)			while((_g < _g1)){
HXLINE(  76)				_g = (_g + 1);
HXDLIN(  76)				int col = (_g - 1);
HXLINE(  77)				{
HXLINE(  77)					int _g1 = 0;
HXDLIN(  77)					int _g2 = sprite->frameHeight;
HXDLIN(  77)					while((_g1 < _g2)){
HXLINE(  77)						_g1 = (_g1 + 1);
HXDLIN(  77)						int row = (_g1 - 1);
HXLINE(  78)						int colorOfThisPixel = sprite->get_pixels()->getPixel32(col,row);
HXLINE(  79)						if ((colorOfThisPixel != 0)) {
HXLINE(  80)							if (countByColor->exists(colorOfThisPixel)) {
HXLINE(  81)								int v = (countByColor->get(colorOfThisPixel) + 1);
HXDLIN(  81)								countByColor->set(colorOfThisPixel,v);
            							}
            							else {
HXLINE(  82)								if (::hx::IsNotEq( countByColor->get(colorOfThisPixel),-13520687 )) {
HXLINE(  83)									countByColor->set(colorOfThisPixel,1);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  88)		int maxCount = 0;
HXLINE(  89)		int maxKey = 0;
HXLINE(  90)		countByColor->set(-16777216,0);
HXLINE(  91)		{
HXLINE(  91)			 ::Dynamic key = countByColor->keys();
HXDLIN(  91)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  91)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  92)				if (::hx::IsGreaterEq( countByColor->get(key1),maxCount )) {
HXLINE(  93)					maxCount = ( (int)(countByColor->get(key1)) );
HXLINE(  94)					maxKey = key1;
            				}
            			}
            		}
HXLINE(  97)		countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  98)		return maxKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,dominantColor,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_102_numberArray)
HXLINE( 103)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE( 104)		{
HXLINE( 104)			int _g = ( (int)(min) );
HXDLIN( 104)			int _g1 = max;
HXDLIN( 104)			while((_g < _g1)){
HXLINE( 104)				_g = (_g + 1);
HXDLIN( 104)				int i = (_g - 1);
HXDLIN( 104)				dumbArray->push(i);
            			}
            		}
HXLINE( 106)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )

void CoolUtil_obj::browserLoad(::String site){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_113_browserLoad)
HXDLIN( 113)		::String prefix = HX_("",00,00,00,00);
HXDLIN( 113)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXDLIN( 113)			prefix = HX_("http://",52,75,cd,5a);
            		}
HXDLIN( 113)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,browserLoad,(void))

::String CoolUtil_obj::getSavePath(::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("ShadowMario",e4,7d,20,5e);
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_124_getSavePath)
HXDLIN( 124)		::String _hx_tmp = (::openfl::Lib_obj::get_current()->stage->application->meta->get(HX_("company",3d,15,69,83)) + HX_("/",2f,00,00,00));
HXDLIN( 124)		return (_hx_tmp + ::flixel::util::FlxSave_obj::validate(::openfl::Lib_obj::get_current()->stage->application->meta->get_string(HX_("file",7c,ce,bb,43))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getSavePath,return )


CoolUtil_obj::CoolUtil_obj()
{
}

bool CoolUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"quantize") ) { outValue = quantize_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"capitalize") ) { outValue = capitalize_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numberArray") ) { outValue = numberArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"browserLoad") ) { outValue = browserLoad_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSavePath") ) { outValue = getSavePath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coolTextFile") ) { outValue = coolTextFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"floorDecimal") ) { outValue = floorDecimal_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dominantColor") ) { outValue = dominantColor_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"listFromString") ) { outValue = listFromString_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorFromString") ) { outValue = colorFromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CoolUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
	HX_("quantize",b1,4c,42,ac),
	HX_("capitalize",ac,09,9c,e1),
	HX_("coolTextFile",b2,09,03,cc),
	HX_("colorFromString",1e,5d,dc,a3),
	HX_("listFromString",d9,af,fe,f5),
	HX_("floorDecimal",25,1c,ad,93),
	HX_("dominantColor",e3,82,71,eb),
	HX_("numberArray",10,1e,18,ad),
	HX_("browserLoad",ee,b5,dc,e9),
	HX_("getSavePath",38,42,ff,23),
	::String(null())
};

void CoolUtil_obj::__register()
{
	CoolUtil_obj _hx_dummy;
	CoolUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.CoolUtil",25,93,40,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
