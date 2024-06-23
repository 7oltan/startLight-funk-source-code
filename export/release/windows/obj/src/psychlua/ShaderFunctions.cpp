#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#include <flixel/addons/display/FlxRuntimeShader.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_psychlua_ShaderFunctions
#include <psychlua/ShaderFunctions.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_14_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",14,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_25_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",25,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_51_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",51,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_73_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",73,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_11_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",11,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_89_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",89,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_104_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",104,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_118_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",118,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_132_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",132,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_146_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",146,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_160_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",160,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_174_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",174,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_190_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",190,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_205_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",205,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_220_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",220,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_235_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",235,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_250_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",250,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_265_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",265,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_282_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",282,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_309_getShader,"psychlua.ShaderFunctions","getShader",0x9d51b5f2,"psychlua.ShaderFunctions.getShader","psychlua/ShaderFunctions.hx",309,0xccd4b4da)
namespace psychlua{

void ShaderFunctions_obj::__construct() { }

Dynamic ShaderFunctions_obj::__CreateEmpty() { return new ShaderFunctions_obj; }

void *ShaderFunctions_obj::_hx_vtable = 0;

Dynamic ShaderFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderFunctions_obj > _hx_result = new ShaderFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c3c4af5;
}

void ShaderFunctions_obj::implement( ::psychlua::FunkinLua funk){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::psychlua::FunkinLua,funk) HXARGC(2)
            		bool _hx_run(::String name, ::Dynamic __o_glslVersion){
            		 ::Dynamic glslVersion = __o_glslVersion;
            		if (::hx::IsNull(__o_glslVersion)) glslVersion = 120;
            			HX_STACKFRAME(&_hx_pos_929905dd20ad7486_14_implement)
HXLINE(  15)			if (!(::backend::ClientPrefs_obj::data->shaders)) {
HXLINE(  15)				return false;
            			}
HXLINE(  18)			return funk->initLuaShader(name,glslVersion);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::psychlua::FunkinLua,funk) HXARGC(2)
            		bool _hx_run(::String obj,::String shader){
            			HX_GC_STACKFRAME(&_hx_pos_929905dd20ad7486_25_implement)
HXLINE(  26)			if (!(::backend::ClientPrefs_obj::data->shaders)) {
HXLINE(  26)				return false;
            			}
HXLINE(  29)			bool _hx_tmp;
HXDLIN(  29)			if (!(funk->runtimeShaders->exists(shader))) {
HXLINE(  29)				_hx_tmp = !(funk->initLuaShader(shader,null()));
            			}
            			else {
HXLINE(  29)				_hx_tmp = false;
            			}
HXDLIN(  29)			if (_hx_tmp) {
HXLINE(  31)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setSpriteShader: Shader ",09,aa,37,9c) + shader) + HX_(" is missing!",d1,64,6b,b3)),false,false,-65536);
HXLINE(  32)				return false;
            			}
HXLINE(  35)			::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE(  36)			 ::flixel::FlxSprite leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
HXLINE(  37)			if ((split->length > 1)) {
HXLINE(  38)				 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN(  38)				leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            			}
HXLINE(  41)			if (::hx::IsNotNull( leObj )) {
HXLINE(  42)				::Array< ::String > arr = ( (::Array< ::String >)(funk->runtimeShaders->get(shader)) );
HXLINE(  43)				leObj->shader =  ::flixel::addons::display::FlxRuntimeShader_obj::__alloc( HX_CTX ,arr->__get(0),arr->__get(1),null());
HXLINE(  44)				return true;
            			}
HXLINE(  49)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::psychlua::FunkinLua,funk) HXARGC(2)
            		bool _hx_run(::String camera,::String shader){
            			HX_GC_STACKFRAME(&_hx_pos_929905dd20ad7486_51_implement)
HXLINE(  52)			if (!(::backend::ClientPrefs_obj::data->shaders)) {
HXLINE(  52)				return false;
            			}
HXLINE(  55)			bool _hx_tmp;
HXDLIN(  55)			if (!(funk->runtimeShaders->exists(shader))) {
HXLINE(  55)				_hx_tmp = !(funk->initLuaShader(shader,null()));
            			}
            			else {
HXLINE(  55)				_hx_tmp = false;
            			}
HXDLIN(  55)			if (_hx_tmp) {
HXLINE(  57)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setSpriteShader: Shader ",09,aa,37,9c) + shader) + HX_(" is missing!",d1,64,6b,b3)),false,false,-65536);
HXLINE(  58)				return false;
            			}
HXLINE(  61)			 ::flixel::FlxCamera leObj = ::psychlua::LuaUtils_obj::cameraFromString(camera);
HXLINE(  63)			if (::hx::IsNotNull( leObj )) {
HXLINE(  64)				::Array< ::String > arr = ( (::Array< ::String >)(funk->runtimeShaders->get(shader)) );
HXLINE(  65)				leObj->setFilters(::Array_obj< ::Dynamic>::__new(1)->init(0, ::openfl::filters::ShaderFilter_obj::__alloc( HX_CTX ,( ( ::openfl::display::Shader)( ::flixel::addons::display::FlxRuntimeShader_obj::__alloc( HX_CTX ,arr->__get(0),arr->__get(1),null())) ))));
HXLINE(  66)				return true;
            			}
HXLINE(  71)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            		bool _hx_run(::String camera){
            			HX_STACKFRAME(&_hx_pos_929905dd20ad7486_73_implement)
HXLINE(  74)			if (!(::backend::ClientPrefs_obj::data->shaders)) {
HXLINE(  74)				return false;
            			}
HXLINE(  78)			 ::flixel::FlxCamera leObj = ::psychlua::LuaUtils_obj::cameraFromString(camera);
HXLINE(  80)			if (::hx::IsNotNull( leObj )) {
HXLINE(  81)				leObj->setFilters(::Array_obj< ::Dynamic>::__new(0));
HXLINE(  82)				return true;
            			}
HXLINE(  87)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_929905dd20ad7486_11_implement)
HXLINE(  12)		 cpp::Reference<lua_State> lua = funk->lua;
HXLINE(  14)		funk->addLocalCallback(HX_("initLuaShader",cd,69,3d,b0), ::Dynamic(new _hx_Closure_0(funk)));
HXLINE(  25)		funk->addLocalCallback(HX_("setSpriteShader",cc,33,b9,d3), ::Dynamic(new _hx_Closure_1(funk)));
HXLINE(  51)		funk->addLocalCallback(HX_("setCameraShader",6c,56,c5,04), ::Dynamic(new _hx_Closure_2(funk)));
HXLINE(  73)		funk->addLocalCallback(HX_("removeCameraShader",0e,c2,45,32), ::Dynamic(new _hx_Closure_3()));
HXLINE(  89)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            			bool _hx_run(::String obj){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_89_implement)
HXLINE(  90)				::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE(  91)				 ::flixel::FlxSprite leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
HXLINE(  92)				if ((split->length > 1)) {
HXLINE(  93)					 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN(  93)					leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            				}
HXLINE(  96)				if (::hx::IsNotNull( leObj )) {
HXLINE(  97)					leObj->shader = null();
HXLINE(  98)					return true;
            				}
HXLINE( 100)				return false;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  89)			::llua::Lua_helper_obj::callbacks->set(HX_("removeSpriteShader",6e,9f,39,01), ::Dynamic(new _hx_Closure_4()));
HXDLIN(  89)			linc::callbacks::add_callback_function(lua,HX_("removeSpriteShader",6e,9f,39,01));
            		}
HXLINE( 104)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_104_implement)
HXLINE( 106)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 107)				if (::hx::IsNull( shader )) {
HXLINE( 109)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderBool: Shader is not FlxRuntimeShader!",e3,10,46,bd),false,false,-65536);
HXLINE( 110)					return null();
            				}
HXLINE( 112)				return shader->getBool(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 104)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderBool",25,c2,26,8c), ::Dynamic(new _hx_Closure_5()));
HXDLIN( 104)			linc::callbacks::add_callback_function(lua,HX_("getShaderBool",25,c2,26,8c));
            		}
HXLINE( 118)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(2)
            			::Array< bool > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_118_implement)
HXLINE( 120)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 121)				if (::hx::IsNull( shader )) {
HXLINE( 123)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderBoolArray: Shader is not FlxRuntimeShader!",f4,2e,54,2b),false,false,-65536);
HXLINE( 124)					return null();
            				}
HXLINE( 126)				return shader->getBoolArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 118)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderBoolArray",34,35,0b,6a), ::Dynamic(new _hx_Closure_6()));
HXDLIN( 118)			linc::callbacks::add_callback_function(lua,HX_("getShaderBoolArray",34,35,0b,6a));
            		}
HXLINE( 132)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_132_implement)
HXLINE( 134)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 135)				if (::hx::IsNull( shader )) {
HXLINE( 137)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderInt: Shader is not FlxRuntimeShader!",d4,d8,ca,ab),false,false,-65536);
HXLINE( 138)					return null();
            				}
HXLINE( 140)				return shader->getInt(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 132)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderInt",54,e7,a3,3e), ::Dynamic(new _hx_Closure_7()));
HXDLIN( 132)			linc::callbacks::add_callback_function(lua,HX_("getShaderInt",54,e7,a3,3e));
            		}
HXLINE( 146)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(2)
            			::Array< int > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_146_implement)
HXLINE( 148)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 149)				if (::hx::IsNull( shader )) {
HXLINE( 151)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderIntArray: Shader is not FlxRuntimeShader!",63,fd,1f,7f),false,false,-65536);
HXLINE( 152)					return null();
            				}
HXLINE( 154)				return shader->getIntArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 146)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderIntArray",a5,e5,8d,91), ::Dynamic(new _hx_Closure_8()));
HXDLIN( 146)			linc::callbacks::add_callback_function(lua,HX_("getShaderIntArray",a5,e5,8d,91));
            		}
HXLINE( 160)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_9) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_160_implement)
HXLINE( 162)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 163)				if (::hx::IsNull( shader )) {
HXLINE( 165)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderFloat: Shader is not FlxRuntimeShader!",47,18,f4,13),false,false,-65536);
HXLINE( 166)					return null();
            				}
HXLINE( 168)				return shader->getFloat(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 160)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderFloat",41,c3,61,61), ::Dynamic(new _hx_Closure_9()));
HXDLIN( 160)			linc::callbacks::add_callback_function(lua,HX_("getShaderFloat",41,c3,61,61));
            		}
HXLINE( 174)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_10) HXARGC(2)
            			::Array< Float > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_174_implement)
HXLINE( 176)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 177)				if (::hx::IsNull( shader )) {
HXLINE( 179)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderFloatArray: Shader is not FlxRuntimeShader!",10,dd,1c,59),false,false,-65536);
HXLINE( 180)					return null();
            				}
HXLINE( 182)				return shader->getFloatArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 174)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderFloatArray",98,ae,4a,4c), ::Dynamic(new _hx_Closure_10()));
HXDLIN( 174)			linc::callbacks::add_callback_function(lua,HX_("getShaderFloatArray",98,ae,4a,4c));
            		}
HXLINE( 190)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_11) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,bool value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_190_implement)
HXLINE( 192)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 193)				if (::hx::IsNull( shader )) {
HXLINE( 195)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderBool: Shader is not FlxRuntimeShader!",57,49,cc,f1),false,false,-65536);
HXLINE( 196)					return false;
            				}
HXLINE( 198)				shader->setBool(prop,value);
HXLINE( 199)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 190)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderBool",31,a4,2c,d1), ::Dynamic(new _hx_Closure_11()));
HXDLIN( 190)			linc::callbacks::add_callback_function(lua,HX_("setShaderBool",31,a4,2c,d1));
            		}
HXLINE( 205)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_12) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_205_implement)
HXLINE( 207)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 208)				if (::hx::IsNull( shader )) {
HXLINE( 210)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderBoolArray: Shader is not FlxRuntimeShader!",00,d2,a8,2e),false,false,-65536);
HXLINE( 211)					return false;
            				}
HXLINE( 213)				shader->setBoolArray(prop,( (::Array< bool >)(values) ));
HXLINE( 214)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 205)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderBoolArray",a8,67,ba,46), ::Dynamic(new _hx_Closure_12()));
HXDLIN( 205)			linc::callbacks::add_callback_function(lua,HX_("setShaderBoolArray",a8,67,ba,46));
            		}
HXLINE( 220)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_13) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,int value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_220_implement)
HXLINE( 222)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 223)				if (::hx::IsNull( shader )) {
HXLINE( 225)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderInt: Shader is not FlxRuntimeShader!",e0,6a,a4,15),false,false,-65536);
HXLINE( 226)					return false;
            				}
HXLINE( 228)				shader->setInt(prop,value);
HXLINE( 229)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 220)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderInt",c8,0a,9d,53), ::Dynamic(new _hx_Closure_13()));
HXDLIN( 220)			linc::callbacks::add_callback_function(lua,HX_("setShaderInt",c8,0a,9d,53));
            		}
HXLINE( 235)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_14) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_235_implement)
HXLINE( 237)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 238)				if (::hx::IsNull( shader )) {
HXLINE( 240)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderIntArray: Shader is not FlxRuntimeShader!",d7,7f,9d,a9),false,false,-65536);
HXLINE( 241)					return false;
            				}
HXLINE( 243)				shader->setIntArray(prop,( (::Array< int >)(values) ));
HXLINE( 244)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 235)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderIntArray",b1,bd,fb,b4), ::Dynamic(new _hx_Closure_14()));
HXDLIN( 235)			linc::callbacks::add_callback_function(lua,HX_("setShaderIntArray",b1,bd,fb,b4));
            		}
HXLINE( 250)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_15) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,Float value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_250_implement)
HXLINE( 252)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 253)				if (::hx::IsNull( shader )) {
HXLINE( 255)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderFloat: Shader is not FlxRuntimeShader!",53,45,df,d4),false,false,-65536);
HXLINE( 256)					return false;
            				}
HXLINE( 258)				shader->setFloat(prop,value);
HXLINE( 259)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 250)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderFloat",b5,ab,81,81), ::Dynamic(new _hx_Closure_15()));
HXDLIN( 250)			linc::callbacks::add_callback_function(lua,HX_("setShaderFloat",b5,ab,81,81));
            		}
HXLINE( 265)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_16) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_265_implement)
HXLINE( 267)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 268)				if (::hx::IsNull( shader )) {
HXLINE( 270)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderFloatArray: Shader is not FlxRuntimeShader!",84,e4,d6,3f),false,false,-65536);
HXLINE( 271)					return false;
            				}
HXLINE( 274)				shader->setFloatArray(prop,( (::Array< Float >)(values) ));
HXLINE( 275)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 265)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderFloatArray",a4,a1,e7,88), ::Dynamic(new _hx_Closure_16()));
HXDLIN( 265)			linc::callbacks::add_callback_function(lua,HX_("setShaderFloatArray",a4,a1,e7,88));
            		}
HXLINE( 282)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_17) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,::String bitmapdataPath){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_282_implement)
HXLINE( 284)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 285)				if (::hx::IsNull( shader )) {
HXLINE( 287)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderSampler2D: Shader is not FlxRuntimeShader!",d5,95,42,9d),false,false,-65536);
HXLINE( 288)					return false;
            				}
HXLINE( 292)				 ::flixel::graphics::FlxGraphic value = ::backend::Paths_obj::image(bitmapdataPath,null(),null());
HXLINE( 293)				bool _hx_tmp;
HXDLIN( 293)				if (::hx::IsNotNull( value )) {
HXLINE( 293)					_hx_tmp = ::hx::IsNotNull( value->bitmap );
            				}
            				else {
HXLINE( 293)					_hx_tmp = false;
            				}
HXDLIN( 293)				if (_hx_tmp) {
HXLINE( 296)					shader->setSampler2D(prop,value->bitmap);
HXLINE( 297)					return true;
            				}
HXLINE( 299)				return false;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 282)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderSampler2D",73,a9,e5,27), ::Dynamic(new _hx_Closure_17()));
HXDLIN( 282)			linc::callbacks::add_callback_function(lua,HX_("setShaderSampler2D",73,a9,e5,27));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderFunctions_obj,implement,(void))

 ::flixel::addons::display::FlxRuntimeShader ShaderFunctions_obj::getShader(::String obj){
            	HX_STACKFRAME(&_hx_pos_929905dd20ad7486_309_getShader)
HXLINE( 310)		::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE( 311)		 ::flixel::FlxSprite target = null();
HXLINE( 312)		if ((split->length > 1)) {
HXLINE( 312)			 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN( 312)			target = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            		}
            		else {
HXLINE( 313)			target = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
            		}
HXLINE( 315)		if (::hx::IsNull( target )) {
HXLINE( 317)			::psychlua::FunkinLua_obj::luaTrace(((HX_("Error on getting shader: Object ",91,06,1d,aa) + obj) + HX_(" not found",55,f3,a5,21)),false,false,-65536);
HXLINE( 318)			return null();
            		}
HXLINE( 320)		return ::hx::TCast<  ::flixel::addons::display::FlxRuntimeShader >::cast(target->shader);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderFunctions_obj,getShader,return )


ShaderFunctions_obj::ShaderFunctions_obj()
{
}

bool ShaderFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getShader") ) { outValue = getShader_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShaderFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShaderFunctions_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ShaderFunctions_obj::__mClass;

static ::String ShaderFunctions_obj_sStaticFields[] = {
	HX_("implement",a3,71,3f,af),
	HX_("getShader",5b,48,77,99),
	::String(null())
};

void ShaderFunctions_obj::__register()
{
	ShaderFunctions_obj _hx_dummy;
	ShaderFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.ShaderFunctions",45,3b,4e,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ShaderFunctions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
