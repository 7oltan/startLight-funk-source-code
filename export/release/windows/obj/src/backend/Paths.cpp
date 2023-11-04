#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_38_excludeAsset,"backend.Paths","excludeAsset",0xd9600a30,"backend.Paths.excludeAsset","backend/Paths.hx",38,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_49_clearUnusedMemory,"backend.Paths","clearUnusedMemory",0xd6c80a2a,"backend.Paths.clearUnusedMemory","backend/Paths.hx",49,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_76_clearStoredMemory,"backend.Paths","clearStoredMemory",0x03cf7a37,"backend.Paths.clearStoredMemory","backend/Paths.hx",76,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_106_setCurrentLevel,"backend.Paths","setCurrentLevel",0x38c9f013,"backend.Paths.setCurrentLevel","backend/Paths.hx",106,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_110_getPath,"backend.Paths","getPath",0x40f68221,"backend.Paths.getPath","backend/Paths.hx",110,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_141_getLibraryPath,"backend.Paths","getLibraryPath",0x040ffd44,"backend.Paths.getLibraryPath","backend/Paths.hx",141,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_145_getLibraryPathForce,"backend.Paths","getLibraryPathForce",0xf7e18e07,"backend.Paths.getLibraryPathForce","backend/Paths.hx",145,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_153_getPreloadPath,"backend.Paths","getPreloadPath",0x4e7e9d12,"backend.Paths.getPreloadPath","backend/Paths.hx",153,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_158_txt,"backend.Paths","txt",0x9a070036,"backend.Paths.txt","backend/Paths.hx",158,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_163_xml,"backend.Paths","xml",0x9a09ff9d,"backend.Paths.xml","backend/Paths.hx",163,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_168_json,"backend.Paths","json",0x25793da2,"backend.Paths.json","backend/Paths.hx",168,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_173_shaderFragment,"backend.Paths","shaderFragment",0x2f2ae00f,"backend.Paths.shaderFragment","backend/Paths.hx",173,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_177_shaderVertex,"backend.Paths","shaderVertex",0xb9407de3,"backend.Paths.shaderVertex","backend/Paths.hx",177,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_181_lua,"backend.Paths","lua",0x9a00eb7e,"backend.Paths.lua","backend/Paths.hx",181,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_185_video,"backend.Paths","video",0x86c723c1,"backend.Paths.video","backend/Paths.hx",185,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_196_sound,"backend.Paths","sound",0xd0979c15,"backend.Paths.sound","backend/Paths.hx",196,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_203_soundRandom,"backend.Paths","soundRandom",0x459aeff8,"backend.Paths.soundRandom","backend/Paths.hx",203,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_207_music,"backend.Paths","music",0x6025dfeb,"backend.Paths.music","backend/Paths.hx",207,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_213_voices,"backend.Paths","voices",0xdf2c247b,"backend.Paths.voices","backend/Paths.hx",213,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_224_inst,"backend.Paths","inst",0x24cc3f40,"backend.Paths.inst","backend/Paths.hx",224,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_236_image,"backend.Paths","image",0x0d342ea1,"backend.Paths.image","backend/Paths.hx",236,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_286_getTextFromFile,"backend.Paths","getTextFromFile",0x5992934f,"backend.Paths.getTextFromFile","backend/Paths.hx",286,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_316_font,"backend.Paths","font",0x22d15949,"backend.Paths.font","backend/Paths.hx",316,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_327_fileExists,"backend.Paths","fileExists",0x881e3872,"backend.Paths.fileExists","backend/Paths.hx",327,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_348_getAtlas,"backend.Paths","getAtlas",0x00419d4f,"backend.Paths.getAtlas","backend/Paths.hx",348,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_361_getSparrowAtlas,"backend.Paths","getSparrowAtlas",0x085cce1b,"backend.Paths.getSparrowAtlas","backend/Paths.hx",361,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_378_getPackerAtlas,"backend.Paths","getPackerAtlas",0xc77f8ae9,"backend.Paths.getPackerAtlas","backend/Paths.hx",378,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_394_formatToSongPath,"backend.Paths","formatToSongPath",0x79918146,"backend.Paths.formatToSongPath","backend/Paths.hx",394,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_403_returnSound,"backend.Paths","returnSound",0x688821c5,"backend.Paths.returnSound","backend/Paths.hx",403,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_435_mods,"backend.Paths","mods",0x2771ceeb,"backend.Paths.mods","backend/Paths.hx",435,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_439_modsFont,"backend.Paths","modsFont",0x3d34aa5a,"backend.Paths.modsFont","backend/Paths.hx",439,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_443_modsJson,"backend.Paths","modsJson",0x3fdc8eb3,"backend.Paths.modsJson","backend/Paths.hx",443,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_447_modsVideo,"backend.Paths","modsVideo",0x834ac190,"backend.Paths.modsVideo","backend/Paths.hx",447,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_451_modsSounds,"backend.Paths","modsSounds",0xaab76e0f,"backend.Paths.modsSounds","backend/Paths.hx",451,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_455_modsImages,"backend.Paths","modsImages",0x771b1603,"backend.Paths.modsImages","backend/Paths.hx",455,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_459_modsXml,"backend.Paths","modsXml",0x1abb3bac,"backend.Paths.modsXml","backend/Paths.hx",459,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_463_modsTxt,"backend.Paths","modsTxt",0x1ab83c45,"backend.Paths.modsTxt","backend/Paths.hx",463,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_480_modFolders,"backend.Paths","modFolders",0xc7f8825d,"backend.Paths.modFolders","backend/Paths.hx",480,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_34_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",34,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_35_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",35,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_43_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",43,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_75_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",75,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_234_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",234,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_402_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",402,0x7c630d0b)
namespace backend{

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d5689de;
}

::String Paths_obj::SOUND_EXT;

::String Paths_obj::VIDEO_EXT;

void Paths_obj::excludeAsset(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_38_excludeAsset)
HXDLIN(  38)		if (!(::backend::Paths_obj::dumpExclusions->contains(key))) {
HXLINE(  39)			::backend::Paths_obj::dumpExclusions->push(key);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,excludeAsset,(void))

::Array< ::String > Paths_obj::dumpExclusions;

void Paths_obj::clearUnusedMemory(){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_49_clearUnusedMemory)
HXLINE(  51)		{
HXLINE(  51)			 ::Dynamic key = ::backend::Paths_obj::currentTrackedAssets->keys();
HXDLIN(  51)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  51)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  53)				bool _hx_tmp;
HXDLIN(  53)				if (!(::backend::Paths_obj::localTrackedAssets->contains(key1))) {
HXLINE(  53)					_hx_tmp = !(::backend::Paths_obj::dumpExclusions->contains(key1));
            				}
            				else {
HXLINE(  53)					_hx_tmp = false;
            				}
HXDLIN(  53)				if (_hx_tmp) {
HXLINE(  54)					 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::backend::Paths_obj::currentTrackedAssets->get(key1)) );
HXLINE(  56)					if (::hx::IsNotNull( obj )) {
HXLINE(  58)						::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  59)						::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  60)						::backend::Paths_obj::currentTrackedAssets->remove(key1);
HXLINE(  63)						obj->persist = false;
HXLINE(  64)						obj->set_destroyOnNoUse(true);
HXLINE(  65)						obj->destroy();
            					}
            				}
            			}
            		}
HXLINE(  71)		::openfl::_hx_system::System_obj::gc();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,clearUnusedMemory,(void))

::Array< ::String > Paths_obj::localTrackedAssets;

void Paths_obj::clearStoredMemory( ::Dynamic __o_cleanUnused){
            		 ::Dynamic cleanUnused = __o_cleanUnused;
            		if (::hx::IsNull(__o_cleanUnused)) cleanUnused = false;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_76_clearStoredMemory)
HXLINE(  79)		{
HXLINE(  79)			 ::Dynamic key = ::flixel::FlxG_obj::bitmap->_cache->keys();
HXDLIN(  79)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  79)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  81)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key1)) );
HXLINE(  82)				bool _hx_tmp;
HXDLIN(  82)				if (::hx::IsNotNull( obj )) {
HXLINE(  82)					_hx_tmp = !(::backend::Paths_obj::currentTrackedAssets->exists(key1));
            				}
            				else {
HXLINE(  82)					_hx_tmp = false;
            				}
HXDLIN(  82)				if (_hx_tmp) {
HXLINE(  83)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  84)					::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  85)					obj->destroy();
            				}
            			}
            		}
HXLINE(  90)		{
HXLINE(  90)			 ::Dynamic key1 = ::backend::Paths_obj::currentTrackedSounds->keys();
HXDLIN(  90)			while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  90)				::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  91)				bool _hx_tmp;
HXDLIN(  91)				bool _hx_tmp1;
HXDLIN(  91)				if (!(::backend::Paths_obj::localTrackedAssets->contains(key))) {
HXLINE(  91)					_hx_tmp1 = !(::backend::Paths_obj::dumpExclusions->contains(key));
            				}
            				else {
HXLINE(  91)					_hx_tmp1 = false;
            				}
HXDLIN(  91)				if (_hx_tmp1) {
HXLINE(  91)					_hx_tmp = ::hx::IsNotNull( key );
            				}
            				else {
HXLINE(  91)					_hx_tmp = false;
            				}
HXDLIN(  91)				if (_hx_tmp) {
HXLINE(  94)					::lime::utils::Assets_obj::cache->clear(key);
HXLINE(  95)					::backend::Paths_obj::currentTrackedSounds->remove(key);
            				}
            			}
            		}
HXLINE(  99)		::backend::Paths_obj::localTrackedAssets = ::Array_obj< ::String >::__new(0);
HXLINE( 100)		::openfl::utils::IAssetCache_obj::clear(::openfl::utils::Assets_obj::cache,HX_("songs",fe,36,c7,80));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,clearStoredMemory,(void))

::String Paths_obj::currentLevel;

void Paths_obj::setCurrentLevel(::String name){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_106_setCurrentLevel)
HXDLIN( 106)		::backend::Paths_obj::currentLevel = name.toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,setCurrentLevel,(void))

::String Paths_obj::getPath(::String file,::String __o_type,::String library, ::Dynamic __o_modsAllowed){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("TEXT",ad,94,ba,37);
            		 ::Dynamic modsAllowed = __o_modsAllowed;
            		if (::hx::IsNull(__o_modsAllowed)) modsAllowed = false;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_110_getPath)
HXLINE( 112)		if (( (bool)(modsAllowed) )) {
HXLINE( 114)			::String modded = ::backend::Paths_obj::modFolders(file);
HXLINE( 115)			if (::sys::FileSystem_obj::exists(modded)) {
HXLINE( 115)				return modded;
            			}
            		}
HXLINE( 119)		if (::hx::IsNotNull( library )) {
HXLINE( 120)			return ::backend::Paths_obj::getLibraryPath(file,library);
            		}
HXLINE( 122)		if (::hx::IsNotNull( ::backend::Paths_obj::currentLevel )) {
HXLINE( 124)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 125)			if ((::backend::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 126)				::String level = ::backend::Paths_obj::currentLevel;
HXDLIN( 126)				if (::hx::IsNull( level )) {
HXLINE( 126)					level = HX_("week_assets",ae,a0,93,a0);
            				}
HXDLIN( 126)				::String returnPath = ((((HX_("week_assets",ae,a0,93,a0) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 126)				levelPath = returnPath;
HXLINE( 127)				if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE( 128)					return levelPath;
            				}
            			}
HXLINE( 131)			::String level = null();
HXDLIN( 131)			if (::hx::IsNull( level )) {
HXLINE( 131)				level = HX_("shared",a5,5e,2b,1d);
            			}
HXDLIN( 131)			::String returnPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 131)			levelPath = returnPath;
HXLINE( 132)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE( 133)				return levelPath;
            			}
            		}
HXLINE( 136)		::String file1 = file;
HXDLIN( 136)		if (::hx::IsNull( file1 )) {
HXLINE( 136)			file1 = HX_("",00,00,00,00);
            		}
HXDLIN( 136)		return (HX_("assets/",4c,2a,dc,36) + file1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,getPath,return )

::String Paths_obj::getLibraryPath(::String file,::String __o_library){
            		::String library = __o_library;
            		if (::hx::IsNull(__o_library)) library = HX_("preload",c9,47,43,35);
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_141_getLibraryPath)
HXDLIN( 141)		bool _hx_tmp;
HXDLIN( 141)		if ((library != HX_("preload",c9,47,43,35))) {
HXDLIN( 141)			_hx_tmp = (library == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXDLIN( 141)			_hx_tmp = true;
            		}
HXDLIN( 141)		if (_hx_tmp) {
HXDLIN( 141)			::String file1 = file;
HXDLIN( 141)			if (::hx::IsNull( file1 )) {
HXDLIN( 141)				file1 = HX_("",00,00,00,00);
            			}
HXDLIN( 141)			return (HX_("assets/",4c,2a,dc,36) + file1);
            		}
            		else {
HXDLIN( 141)			::String level = null();
HXDLIN( 141)			if (::hx::IsNull( level )) {
HXDLIN( 141)				level = library;
            			}
HXDLIN( 141)			::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 141)			return returnPath;
            		}
HXDLIN( 141)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPath,return )

::String Paths_obj::getLibraryPathForce(::String file,::String library,::String level){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_145_getLibraryPathForce)
HXLINE( 146)		if (::hx::IsNull( level )) {
HXLINE( 146)			level = library;
            		}
HXLINE( 147)		::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + file);
HXLINE( 148)		return returnPath;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getLibraryPathForce,return )

::String Paths_obj::getPreloadPath(::String __o_file){
            		::String file = __o_file;
            		if (::hx::IsNull(__o_file)) file = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_153_getPreloadPath)
HXDLIN( 153)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getPreloadPath,return )

::String Paths_obj::txt(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_158_txt)
HXDLIN( 158)		return ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,txt,return )

::String Paths_obj::xml(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_163_xml)
HXDLIN( 163)		return ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,xml,return )

::String Paths_obj::json(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_168_json)
HXDLIN( 168)		return ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,json,return )

::String Paths_obj::shaderFragment(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_173_shaderFragment)
HXDLIN( 173)		return ::backend::Paths_obj::getPath(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".frag",60,48,31,c0)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,shaderFragment,return )

::String Paths_obj::shaderVertex(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_177_shaderVertex)
HXDLIN( 177)		return ::backend::Paths_obj::getPath(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".vert",df,e3,ba,ca)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,shaderVertex,return )

::String Paths_obj::lua(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_181_lua)
HXDLIN( 181)		return ::backend::Paths_obj::getPath(((HX_("",00,00,00,00) + key) + HX_(".lua",4a,2a,ba,1e)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,lua,return )

::String Paths_obj::video(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_185_video)
HXLINE( 187)		::String file = ::backend::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
HXLINE( 188)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 189)			return file;
            		}
HXLINE( 192)		return (((HX_("assets/videos/",cb,c4,dd,db) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,video,return )

 ::openfl::media::Sound Paths_obj::sound(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_196_sound)
HXLINE( 197)		 ::openfl::media::Sound sound = ::backend::Paths_obj::returnSound(HX_("sounds",c4,a8,2e,32),key,library);
HXLINE( 198)		return sound;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,sound,return )

 ::openfl::media::Sound Paths_obj::soundRandom(::String key,int min,int max,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_203_soundRandom)
HXDLIN( 203)		return ::backend::Paths_obj::sound((key + ::flixel::FlxG_obj::random->_hx_int(min,max,null())),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,soundRandom,return )

 ::openfl::media::Sound Paths_obj::music(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_207_music)
HXLINE( 208)		 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),key,library);
HXLINE( 209)		return file;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,music,return )

 ::Dynamic Paths_obj::voices(::String song){
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_213_voices)
HXLINE( 217)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 217)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 217)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 217)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Voices",10,18,4f,34));
HXLINE( 218)		 ::openfl::media::Sound voices = ::backend::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXLINE( 219)		return voices;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,voices,return )

 ::Dynamic Paths_obj::inst(::String song){
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_224_inst)
HXLINE( 228)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 228)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 228)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 228)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Inst",95,b3,69,40));
HXLINE( 229)		 ::openfl::media::Sound inst = ::backend::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXLINE( 230)		return inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,inst,return )

 ::haxe::ds::StringMap Paths_obj::currentTrackedAssets;

 ::flixel::graphics::FlxGraphic Paths_obj::image(::String key,::String library, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_236_image)
HXLINE( 237)		 ::openfl::display::BitmapData bitmap = null();
HXLINE( 238)		::String file = null();
HXLINE( 241)		file = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
HXLINE( 242)		if (::backend::Paths_obj::currentTrackedAssets->exists(file)) {
HXLINE( 244)			::backend::Paths_obj::localTrackedAssets->push(file);
HXLINE( 245)			return ( ( ::flixel::graphics::FlxGraphic)(::backend::Paths_obj::currentTrackedAssets->get(file)) );
            		}
            		else {
HXLINE( 247)			if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 248)				bitmap = ::openfl::display::BitmapData_obj::fromFile(file);
            			}
            			else {
HXLINE( 252)				file = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library,null());
HXLINE( 253)				if (::backend::Paths_obj::currentTrackedAssets->exists(file)) {
HXLINE( 255)					::backend::Paths_obj::localTrackedAssets->push(file);
HXLINE( 256)					return ( ( ::flixel::graphics::FlxGraphic)(::backend::Paths_obj::currentTrackedAssets->get(file)) );
            				}
            				else {
HXLINE( 258)					if (::openfl::utils::Assets_obj::exists(file,HX_("IMAGE",3b,57,57,3b))) {
HXLINE( 259)						bitmap = ::openfl::utils::Assets_obj::getBitmapData(file,null());
            					}
            				}
            			}
            		}
HXLINE( 262)		if (::hx::IsNotNull( bitmap )) {
HXLINE( 264)			::backend::Paths_obj::localTrackedAssets->push(file);
HXLINE( 265)			bool _hx_tmp;
HXDLIN( 265)			if (( (bool)(allowGPU) )) {
HXLINE( 265)				_hx_tmp = ::backend::ClientPrefs_obj::data->cacheOnGPU;
            			}
            			else {
HXLINE( 265)				_hx_tmp = false;
            			}
HXDLIN( 265)			if (_hx_tmp) {
HXLINE( 267)				 ::openfl::display3D::textures::RectangleTexture texture = ::openfl::Lib_obj::get_current()->stage->context3D->createRectangleTexture(bitmap->width,bitmap->height,1,true);
HXLINE( 268)				texture->uploadFromBitmapData(bitmap);
HXLINE( 269)				bitmap->image->set_data(null());
HXLINE( 270)				bitmap->dispose();
HXLINE( 271)				bitmap->disposeImage();
HXLINE( 272)				bitmap = ::openfl::display::BitmapData_obj::fromTexture(texture);
            			}
HXLINE( 274)			 ::flixel::graphics::FlxGraphic newGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,false,file,null());
HXLINE( 275)			newGraphic->persist = true;
HXLINE( 276)			newGraphic->set_destroyOnNoUse(false);
HXLINE( 277)			::backend::Paths_obj::currentTrackedAssets->set(file,newGraphic);
HXLINE( 278)			return newGraphic;
            		}
HXLINE( 281)		::haxe::Log_obj::trace(((HX_("oh no its returning null NOOOO (",5b,b0,87,b4) + file) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("source/backend/Paths.hx",ff,43,8c,3d),281,HX_("backend.Paths",34,17,99,92),HX_("image",5b,1f,69,bd)));
HXLINE( 282)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,image,return )

::String Paths_obj::getTextFromFile(::String key, ::Dynamic __o_ignoreMods){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_286_getTextFromFile)
HXLINE( 289)		bool _hx_tmp;
HXDLIN( 289)		if (!(( (bool)(ignoreMods) ))) {
HXLINE( 289)			_hx_tmp = ::sys::FileSystem_obj::exists(::backend::Paths_obj::modFolders(key));
            		}
            		else {
HXLINE( 289)			_hx_tmp = false;
            		}
HXDLIN( 289)		if (_hx_tmp) {
HXLINE( 290)			return ::sys::io::File_obj::getContent(::backend::Paths_obj::modFolders(key));
            		}
HXLINE( 293)		::String file = key;
HXDLIN( 293)		if (::hx::IsNull( file )) {
HXLINE( 293)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 293)		if (::sys::FileSystem_obj::exists((HX_("assets/",4c,2a,dc,36) + file))) {
HXLINE( 294)			::String file = key;
HXDLIN( 294)			if (::hx::IsNull( file )) {
HXLINE( 294)				file = HX_("",00,00,00,00);
            			}
HXDLIN( 294)			return ::sys::io::File_obj::getContent((HX_("assets/",4c,2a,dc,36) + file));
            		}
HXLINE( 296)		if (::hx::IsNotNull( ::backend::Paths_obj::currentLevel )) {
HXLINE( 298)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 299)			if ((::backend::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 300)				::String level = ::backend::Paths_obj::currentLevel;
HXDLIN( 300)				if (::hx::IsNull( level )) {
HXLINE( 300)					level = HX_("week_assets",ae,a0,93,a0);
            				}
HXDLIN( 300)				::String returnPath = ((((HX_("week_assets",ae,a0,93,a0) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 300)				levelPath = returnPath;
HXLINE( 301)				if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 302)					return ::sys::io::File_obj::getContent(levelPath);
            				}
            			}
HXLINE( 305)			::String level = null();
HXDLIN( 305)			if (::hx::IsNull( level )) {
HXLINE( 305)				level = HX_("shared",a5,5e,2b,1d);
            			}
HXDLIN( 305)			::String returnPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 305)			levelPath = returnPath;
HXLINE( 306)			if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 307)				return ::sys::io::File_obj::getContent(levelPath);
            			}
            		}
HXLINE( 310)		::String path = ::backend::Paths_obj::getPath(key,HX_("TEXT",ad,94,ba,37),null(),null());
HXLINE( 311)		if (::openfl::utils::Assets_obj::exists(path,HX_("TEXT",ad,94,ba,37))) {
HXLINE( 311)			return ::lime::utils::Assets_obj::getText(path);
            		}
HXLINE( 312)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getTextFromFile,return )

::String Paths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_316_font)
HXLINE( 318)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
HXLINE( 319)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 320)			return file;
            		}
HXLINE( 323)		return (HX_("assets/fonts/",37,ff,a5,9c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,font,return )

bool Paths_obj::fileExists(::String key,::String type, ::Dynamic __o_ignoreMods,::String library){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_327_fileExists)
HXLINE( 329)		if (!(( (bool)(ignoreMods) ))) {
HXLINE( 331)			{
HXLINE( 331)				int _g = 0;
HXDLIN( 331)				::Array< ::String > _g1 = ::backend::Mods_obj::globalMods;
HXDLIN( 331)				while((_g < _g1->length)){
HXLINE( 331)					::String mod = _g1->__get(_g);
HXDLIN( 331)					_g = (_g + 1);
HXLINE( 332)					::String key1 = (((HX_("",00,00,00,00) + mod) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 332)					if (::hx::IsNull( key1 )) {
HXLINE( 332)						key1 = HX_("",00,00,00,00);
            					}
HXDLIN( 332)					if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1))) {
HXLINE( 333)						return true;
            					}
            				}
            			}
HXLINE( 335)			bool _hx_tmp;
HXDLIN( 335)			::String key1 = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 335)			if (::hx::IsNull( key1 )) {
HXLINE( 335)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 335)			if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1)))) {
HXLINE( 335)				::String key1 = key;
HXDLIN( 335)				if (::hx::IsNull( key1 )) {
HXLINE( 335)					key1 = HX_("",00,00,00,00);
            				}
HXDLIN( 335)				_hx_tmp = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1));
            			}
            			else {
HXLINE( 335)				_hx_tmp = true;
            			}
HXDLIN( 335)			if (_hx_tmp) {
HXLINE( 336)				return true;
            			}
            		}
HXLINE( 340)		if (::openfl::utils::Assets_obj::exists(::backend::Paths_obj::getPath(key,type,library,false),null())) {
HXLINE( 341)			return true;
            		}
HXLINE( 343)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,fileExists,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_348_getAtlas)
HXLINE( 350)		bool _hx_tmp;
HXDLIN( 350)		if (!(::sys::FileSystem_obj::exists(::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)))))) {
HXLINE( 350)			_hx_tmp = ::openfl::utils::Assets_obj::exists(::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null()),HX_("TEXT",ad,94,ba,37));
            		}
            		else {
HXLINE( 350)			_hx_tmp = true;
            		}
HXDLIN( 350)		if (_hx_tmp) {
HXLINE( 355)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN( 355)			bool xmlExists = false;
HXDLIN( 355)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 355)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 355)				xmlExists = true;
            			}
HXDLIN( 355)			 ::Dynamic _hx_tmp;
HXDLIN( 355)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 355)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 355)				_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            			}
HXDLIN( 355)			::String _hx_tmp1;
HXDLIN( 355)			if (xmlExists) {
HXLINE( 355)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 355)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 355)			return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1);
            		}
HXLINE( 357)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN( 357)		bool txtExists = false;
HXDLIN( 357)		::String txt = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
HXDLIN( 357)		if (::sys::FileSystem_obj::exists(txt)) {
HXLINE( 357)			txtExists = true;
            		}
HXDLIN( 357)		 ::Dynamic _hx_tmp1;
HXDLIN( 357)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 357)			_hx_tmp1 = imageLoaded;
            		}
            		else {
HXLINE( 357)			_hx_tmp1 = ::backend::Paths_obj::image(key,library,true);
            		}
HXDLIN( 357)		::String _hx_tmp2;
HXDLIN( 357)		if (txtExists) {
HXLINE( 357)			_hx_tmp2 = ::sys::io::File_obj::getContent(txt);
            		}
            		else {
HXLINE( 357)			_hx_tmp2 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),null(),library,null());
            		}
HXDLIN( 357)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp1,_hx_tmp2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String key,::String library, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_361_getSparrowAtlas)
HXLINE( 363)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),allowGPU);
HXLINE( 364)		bool xmlExists = false;
HXLINE( 366)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXLINE( 367)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 368)			xmlExists = true;
            		}
HXLINE( 371)		 ::Dynamic _hx_tmp;
HXDLIN( 371)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 371)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 371)			_hx_tmp = ::backend::Paths_obj::image(key,library,allowGPU);
            		}
HXDLIN( 371)		::String _hx_tmp1;
HXDLIN( 371)		if (xmlExists) {
HXLINE( 371)			_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 371)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 371)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getSparrowAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getPackerAtlas(::String key,::String library, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_378_getPackerAtlas)
HXLINE( 380)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),allowGPU);
HXLINE( 381)		bool txtExists = false;
HXLINE( 383)		::String txt = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
HXLINE( 384)		if (::sys::FileSystem_obj::exists(txt)) {
HXLINE( 385)			txtExists = true;
            		}
HXLINE( 388)		 ::Dynamic _hx_tmp;
HXDLIN( 388)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 388)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 388)			_hx_tmp = ::backend::Paths_obj::image(key,library,allowGPU);
            		}
HXDLIN( 388)		::String _hx_tmp1;
HXDLIN( 388)		if (txtExists) {
HXLINE( 388)			_hx_tmp1 = ::sys::io::File_obj::getContent(txt);
            		}
            		else {
HXLINE( 388)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),null(),library,null());
            		}
HXDLIN( 388)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getPackerAtlas,return )

::String Paths_obj::formatToSongPath(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_394_formatToSongPath)
HXLINE( 395)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXLINE( 396)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXLINE( 398)		::String path1 = invalidChars->split(::StringTools_obj::replace(path,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXLINE( 399)		return hideChars->split(path1)->join(HX_("",00,00,00,00)).toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,formatToSongPath,return )

 ::haxe::ds::StringMap Paths_obj::currentTrackedSounds;

 ::openfl::media::Sound Paths_obj::returnSound(::String path,::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_403_returnSound)
HXLINE( 405)		::String file = ::backend::Paths_obj::modFolders(((((path + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXLINE( 406)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 407)			if (!(::backend::Paths_obj::currentTrackedSounds->exists(file))) {
HXLINE( 408)				::Dynamic this1 = ::backend::Paths_obj::currentTrackedSounds;
HXDLIN( 408)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXLINE( 410)			::backend::Paths_obj::localTrackedAssets->push(key);
HXLINE( 411)			return ( ( ::openfl::media::Sound)(::backend::Paths_obj::currentTrackedSounds->get(file)) );
            		}
HXLINE( 415)		::String gottenPath = ::backend::Paths_obj::getPath((((((HX_("",00,00,00,00) + path) + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("SOUND",af,c4,ba,fe),library,null());
HXLINE( 416)		int gottenPath1 = (gottenPath.indexOf(HX_(":",3a,00,00,00),null()) + 1);
HXDLIN( 416)		gottenPath = gottenPath.substring(gottenPath1,gottenPath.length);
HXLINE( 418)		if (!(::backend::Paths_obj::currentTrackedSounds->exists(gottenPath))) {
HXLINE( 420)			::Dynamic this1 = ::backend::Paths_obj::currentTrackedSounds;
HXDLIN( 420)			( ( ::haxe::ds::StringMap)(this1) )->set(gottenPath,::openfl::media::Sound_obj::fromFile((HX_("./",41,28,00,00) + gottenPath)));
            		}
HXLINE( 429)		::backend::Paths_obj::localTrackedAssets->push(gottenPath);
HXLINE( 430)		return ( ( ::openfl::media::Sound)(::backend::Paths_obj::currentTrackedSounds->get(gottenPath)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,returnSound,return )

::String Paths_obj::mods(::String __o_key){
            		::String key = __o_key;
            		if (::hx::IsNull(__o_key)) key = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_435_mods)
HXDLIN( 435)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,mods,return )

::String Paths_obj::modsFont(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_439_modsFont)
HXDLIN( 439)		return ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsFont,return )

::String Paths_obj::modsJson(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_443_modsJson)
HXDLIN( 443)		return ::backend::Paths_obj::modFolders(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsJson,return )

::String Paths_obj::modsVideo(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_447_modsVideo)
HXDLIN( 447)		return ::backend::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsVideo,return )

::String Paths_obj::modsSounds(::String path,::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_451_modsSounds)
HXDLIN( 451)		return ::backend::Paths_obj::modFolders(((((path + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,modsSounds,return )

::String Paths_obj::modsImages(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_455_modsImages)
HXDLIN( 455)		return ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsImages,return )

::String Paths_obj::modsXml(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_459_modsXml)
HXDLIN( 459)		return ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsXml,return )

::String Paths_obj::modsTxt(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_463_modsTxt)
HXDLIN( 463)		return ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsTxt,return )

::String Paths_obj::modFolders(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_480_modFolders)
HXLINE( 481)		bool _hx_tmp;
HXDLIN( 481)		if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE( 481)			_hx_tmp = (::backend::Mods_obj::currentModDirectory.length > 0);
            		}
            		else {
HXLINE( 481)			_hx_tmp = false;
            		}
HXDLIN( 481)		if (_hx_tmp) {
HXLINE( 482)			::String key1 = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 482)			if (::hx::IsNull( key1 )) {
HXLINE( 482)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 482)			::String fileToCheck = (HX_("mods/",9e,2f,58,0c) + key1);
HXLINE( 483)			if (::sys::FileSystem_obj::exists(fileToCheck)) {
HXLINE( 484)				return fileToCheck;
            			}
            		}
HXLINE( 488)		{
HXLINE( 488)			int _g = 0;
HXDLIN( 488)			::Array< ::String > _g1 = ::backend::Mods_obj::globalMods;
HXDLIN( 488)			while((_g < _g1->length)){
HXLINE( 488)				::String mod = _g1->__get(_g);
HXDLIN( 488)				_g = (_g + 1);
HXLINE( 489)				::String key1 = ((mod + HX_("/",2f,00,00,00)) + key);
HXDLIN( 489)				if (::hx::IsNull( key1 )) {
HXLINE( 489)					key1 = HX_("",00,00,00,00);
            				}
HXDLIN( 489)				::String fileToCheck = (HX_("mods/",9e,2f,58,0c) + key1);
HXLINE( 490)				if (::sys::FileSystem_obj::exists(fileToCheck)) {
HXLINE( 491)					return fileToCheck;
            				}
            			}
            		}
HXLINE( 493)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modFolders,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lua") ) { outValue = lua_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = inst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mods") ) { outValue = mods_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { outValue = video_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"voices") ) { outValue = voices_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsXml") ) { outValue = modsXml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsTxt") ) { outValue = modsTxt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAtlas") ) { outValue = getAtlas_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsFont") ) { outValue = modsFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsJson") ) { outValue = modsJson_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"modsVideo") ) { outValue = modsVideo_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fileExists") ) { outValue = fileExists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsSounds") ) { outValue = modsSounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsImages") ) { outValue = modsImages_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modFolders") ) { outValue = modFolders_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundRandom") ) { outValue = soundRandom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"returnSound") ) { outValue = returnSound_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"excludeAsset") ) { outValue = excludeAsset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"currentLevel") ) { outValue = ( currentLevel ); return true; }
		if (HX_FIELD_EQ(inName,"shaderVertex") ) { outValue = shaderVertex_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dumpExclusions") ) { outValue = ( dumpExclusions ); return true; }
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPreloadPath") ) { outValue = getPreloadPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"shaderFragment") ) { outValue = shaderFragment_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentLevel") ) { outValue = setCurrentLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTextFromFile") ) { outValue = getTextFromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"formatToSongPath") ) { outValue = formatToSongPath_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"clearUnusedMemory") ) { outValue = clearUnusedMemory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clearStoredMemory") ) { outValue = clearStoredMemory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localTrackedAssets") ) { outValue = ( localTrackedAssets ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLibraryPathForce") ) { outValue = getLibraryPathForce_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentTrackedAssets") ) { outValue = ( currentTrackedAssets ); return true; }
		if (HX_FIELD_EQ(inName,"currentTrackedSounds") ) { outValue = ( currentTrackedSounds ); return true; }
	}
	return false;
}

bool Paths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dumpExclusions") ) { dumpExclusions=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localTrackedAssets") ) { localTrackedAssets=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentTrackedAssets") ) { currentTrackedAssets=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"currentTrackedSounds") ) { currentTrackedSounds=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Paths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Paths_obj::SOUND_EXT,HX_("SOUND_EXT",b1,35,8c,6f)},
	{::hx::fsString,(void *) &Paths_obj::VIDEO_EXT,HX_("VIDEO_EXT",5d,03,77,8a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::dumpExclusions,HX_("dumpExclusions",39,38,dc,ef)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::localTrackedAssets,HX_("localTrackedAssets",62,77,3a,fc)},
	{::hx::fsString,(void *) &Paths_obj::currentLevel,HX_("currentLevel",8b,fa,6e,b9)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::currentTrackedAssets,HX_("currentTrackedAssets",d4,7b,e5,0f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::currentTrackedSounds,HX_("currentTrackedSounds",15,dc,10,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Paths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::dumpExclusions,"dumpExclusions");
	HX_MARK_MEMBER_NAME(Paths_obj::localTrackedAssets,"localTrackedAssets");
	HX_MARK_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
	HX_MARK_MEMBER_NAME(Paths_obj::currentTrackedAssets,"currentTrackedAssets");
	HX_MARK_MEMBER_NAME(Paths_obj::currentTrackedSounds,"currentTrackedSounds");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::dumpExclusions,"dumpExclusions");
	HX_VISIT_MEMBER_NAME(Paths_obj::localTrackedAssets,"localTrackedAssets");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentTrackedAssets,"currentTrackedAssets");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentTrackedSounds,"currentTrackedSounds");
};

#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("SOUND_EXT",b1,35,8c,6f),
	HX_("VIDEO_EXT",5d,03,77,8a),
	HX_("excludeAsset",b6,04,50,31),
	HX_("dumpExclusions",39,38,dc,ef),
	HX_("clearUnusedMemory",e4,29,80,28),
	HX_("localTrackedAssets",62,77,3a,fc),
	HX_("clearStoredMemory",f1,99,87,55),
	HX_("currentLevel",8b,fa,6e,b9),
	HX_("setCurrentLevel",4d,cd,24,d8),
	HX_("getPath",5b,95,d4,1c),
	HX_("getLibraryPath",4a,25,d8,33),
	HX_("getLibraryPathForce",41,90,ac,3f),
	HX_("getPreloadPath",18,c5,46,7e),
	HX_("txt",70,6e,58,00),
	HX_("xml",d7,6d,5b,00),
	HX_("json",28,42,68,46),
	HX_("shaderFragment",15,08,f3,5e),
	HX_("shaderVertex",69,78,30,11),
	HX_("lua",b8,59,52,00),
	HX_("video",7b,14,fc,36),
	HX_("sound",cf,8c,cc,80),
	HX_("soundRandom",32,28,bc,6a),
	HX_("music",a5,d0,5a,10),
	HX_("voices",81,d6,49,5d),
	HX_("inst",c6,43,bb,45),
	HX_("currentTrackedAssets",d4,7b,e5,0f),
	HX_("image",5b,1f,69,bd),
	HX_("getTextFromFile",89,70,ed,f8),
	HX_("font",cf,5d,c0,43),
	HX_("fileExists",78,65,64,a0),
	HX_("getAtlas",d5,5c,b4,86),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("getPackerAtlas",ef,b2,47,f7),
	HX_("formatToSongPath",cc,36,b8,49),
	HX_("currentTrackedSounds",15,dc,10,f6),
	HX_("returnSound",ff,59,a9,8d),
	HX_("mods",71,d3,60,48),
	HX_("modsFont",e0,69,a7,c3),
	HX_("modsJson",39,4e,4f,c6),
	HX_("modsVideo",4a,97,3f,a1),
	HX_("modsSounds",15,9b,fd,c2),
	HX_("modsImages",09,43,61,8f),
	HX_("modsXml",e6,4e,99,f6),
	HX_("modsTxt",7f,4f,96,f6),
	HX_("modFolders",63,af,3e,e0),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Paths",34,17,99,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &Paths_obj::__SetStatic;
	__mClass->mMarkFunc = Paths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Paths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_34_boot)
HXDLIN(  34)		SOUND_EXT = HX_("ogg",4f,94,54,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_35_boot)
HXDLIN(  35)		VIDEO_EXT = HX_("mp4",71,17,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_43_boot)
HXDLIN(  43)		dumpExclusions = ::Array_obj< ::String >::__new(3)->init(0,(HX_("assets/music/freakyMenu.",03,7e,c4,03) + HX_("ogg",4f,94,54,00)))->init(1,(HX_("assets/shared/music/breakfast.",7b,5a,11,eb) + HX_("ogg",4f,94,54,00)))->init(2,(HX_("assets/shared/music/tea-time.",7c,11,5c,52) + HX_("ogg",4f,94,54,00)));
            	}
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_75_boot)
HXDLIN(  75)		localTrackedAssets = ::Array_obj< ::String >::__new(0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_234_boot)
HXDLIN( 234)		currentTrackedAssets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_402_boot)
HXDLIN( 402)		currentTrackedSounds =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace backend
