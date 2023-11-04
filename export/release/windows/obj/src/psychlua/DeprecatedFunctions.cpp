#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_psychlua_DeprecatedFunctions
#include <psychlua/DeprecatedFunctions.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_psychlua_ModchartSprite
#include <psychlua/ModchartSprite.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_11_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",11,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_14_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",14,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_19_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",19,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_33_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",33,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_47_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",47,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_52_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",52,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_62_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",62,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_77_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",77,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_83_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",83,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_92_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",92,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_100_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",100,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_110_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",110,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_125_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",125,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_143_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",143,0xdabc0328)
HX_LOCAL_STACK_FRAME(_hx_pos_0c94275d643f1e89_148_implement,"psychlua.DeprecatedFunctions","implement",0x97453b2c,"psychlua.DeprecatedFunctions.implement","psychlua/DeprecatedFunctions.hx",148,0xdabc0328)
namespace psychlua{

void DeprecatedFunctions_obj::__construct() { }

Dynamic DeprecatedFunctions_obj::__CreateEmpty() { return new DeprecatedFunctions_obj; }

void *DeprecatedFunctions_obj::_hx_vtable = 0;

Dynamic DeprecatedFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DeprecatedFunctions_obj > _hx_result = new DeprecatedFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DeprecatedFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7eb20e23;
}

void DeprecatedFunctions_obj::implement( ::psychlua::FunkinLua funk){
            	HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_11_implement)
HXLINE(  12)		 cpp::Reference<lua_State> lua = funk->lua;
HXLINE(  14)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(5)
            			bool _hx_run(::String obj,::String name,::String prefix,::String indices, ::Dynamic __o_framerate){
            		int framerate = __o_framerate.Default(24);
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_14_implement)
HXLINE(  15)				::psychlua::FunkinLua_obj::luaTrace(HX_("addAnimationByIndicesLoop is deprecated! Use addAnimationByIndices instead",9d,7f,f8,e8),false,true,null());
HXLINE(  16)				return ::psychlua::LuaUtils_obj::addAnimByIndices(obj,name,prefix,indices,framerate,true);
            			}
            			HX_END_LOCAL_FUNC5(return)

HXLINE(  14)			::llua::Lua_helper_obj::callbacks->set(HX_("addAnimationByIndicesLoop",f1,01,6c,08), ::Dynamic(new _hx_Closure_0()));
HXDLIN(  14)			linc::callbacks::add_callback_function(lua,HX_("addAnimationByIndicesLoop",f1,01,6c,08));
            		}
HXLINE(  19)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(4)
            			bool _hx_run(::String obj,::String name, ::Dynamic __o_forced, ::Dynamic __o_startFrame){
            		bool forced = __o_forced.Default(false);
            		 ::Dynamic startFrame = __o_startFrame;
            		if (::hx::IsNull(__o_startFrame)) startFrame = 0;
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_19_implement)
HXLINE(  20)				::psychlua::FunkinLua_obj::luaTrace(HX_("objectPlayAnimation is deprecated! Use playAnim instead",39,99,1a,ad),false,true,null());
HXLINE(  21)				if (::hx::IsNotNull( ::states::PlayState_obj::instance->getLuaObject(obj,false) )) {
HXLINE(  22)					::states::PlayState_obj::instance->getLuaObject(obj,false)->animation->play(name,forced,false,startFrame);
HXLINE(  23)					return true;
            				}
HXLINE(  26)				 ::flixel::FlxState spr;
HXDLIN(  26)				if (::states::PlayState_obj::instance->isDead) {
HXLINE(  26)					spr = ::substates::GameOverSubstate_obj::instance;
            				}
            				else {
HXLINE(  26)					spr = ::states::PlayState_obj::instance;
            				}
HXDLIN(  26)				 ::flixel::FlxSprite spr1 = ( ( ::flixel::FlxSprite)(::Reflect_obj::getProperty(spr,obj)) );
HXLINE(  27)				if (::hx::IsNotNull( spr1 )) {
HXLINE(  28)					spr1->animation->play(name,forced,false,startFrame);
HXLINE(  29)					return true;
            				}
HXLINE(  31)				return false;
            			}
            			HX_END_LOCAL_FUNC4(return)

HXLINE(  19)			::llua::Lua_helper_obj::callbacks->set(HX_("objectPlayAnimation",31,88,25,0b), ::Dynamic(new _hx_Closure_1()));
HXDLIN(  19)			linc::callbacks::add_callback_function(lua,HX_("objectPlayAnimation",31,88,25,0b));
            		}
HXLINE(  33)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(3)
            			void _hx_run(::String character,::String anim, ::Dynamic __o_forced){
            		 ::Dynamic forced = __o_forced;
            		if (::hx::IsNull(__o_forced)) forced = false;
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_33_implement)
HXLINE(  34)				::psychlua::FunkinLua_obj::luaTrace(HX_("characterPlayAnim is deprecated! Use playAnim instead",76,9a,11,c8),false,true,null());
HXLINE(  35)				::String _hx_switch_0 = character.toLowerCase();
            				if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE(  37)					if (::states::PlayState_obj::instance->dad->animOffsets->exists(anim)) {
HXLINE(  38)						::states::PlayState_obj::instance->dad->playAnim(anim,forced,null(),null());
            					}
HXLINE(  37)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ||  (_hx_switch_0==HX_("girlfriend",ba,91,48,98)) ){
HXLINE(  40)					bool _hx_tmp;
HXDLIN(  40)					if (::hx::IsNotNull( ::states::PlayState_obj::instance->gf )) {
HXLINE(  40)						_hx_tmp = ::states::PlayState_obj::instance->gf->animOffsets->exists(anim);
            					}
            					else {
HXLINE(  40)						_hx_tmp = false;
            					}
HXDLIN(  40)					if (_hx_tmp) {
HXLINE(  41)						::states::PlayState_obj::instance->gf->playAnim(anim,forced,null(),null());
            					}
HXLINE(  40)					goto _hx_goto_0;
            				}
            				/* default */{
HXLINE(  43)					if (::states::PlayState_obj::instance->boyfriend->animOffsets->exists(anim)) {
HXLINE(  44)						::states::PlayState_obj::instance->boyfriend->playAnim(anim,forced,null(),null());
            					}
            				}
            				_hx_goto_0:;
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE(  33)			::llua::Lua_helper_obj::callbacks->set(HX_("characterPlayAnim",ee,d2,39,cb), ::Dynamic(new _hx_Closure_2()));
HXDLIN(  33)			linc::callbacks::add_callback_function(lua,HX_("characterPlayAnim",ee,d2,39,cb));
            		}
HXLINE(  47)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(4)
            			void _hx_run(::String tag,int width,int height,::String color){
            				HX_GC_STACKFRAME(&_hx_pos_0c94275d643f1e89_47_implement)
HXLINE(  48)				::psychlua::FunkinLua_obj::luaTrace(HX_("luaSpriteMakeGraphic is deprecated! Use makeGraphic instead",7e,b6,57,cc),false,true,null());
HXLINE(  49)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE(  50)					 ::psychlua::ModchartSprite _hx_tmp = ( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) );
HXDLIN(  50)					 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXDLIN(  50)					::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXDLIN(  50)					if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE(  50)						color1 = color1.substring((color1.length - 6),null());
            					}
HXDLIN(  50)					 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXDLIN(  50)					if (::hx::IsNull( colorNum )) {
HXLINE(  50)						colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            					}
HXDLIN(  50)					int _hx_tmp1;
HXDLIN(  50)					if (::hx::IsNotNull( colorNum )) {
HXLINE(  50)						_hx_tmp1 = ( (int)(colorNum) );
            					}
            					else {
HXLINE(  50)						_hx_tmp1 = -1;
            					}
HXDLIN(  50)					_hx_tmp->makeGraphic(width,height,_hx_tmp1,null(),null());
            				}
            			}
            			HX_END_LOCAL_FUNC4((void))

HXLINE(  47)			::llua::Lua_helper_obj::callbacks->set(HX_("luaSpriteMakeGraphic",7d,d9,93,6c), ::Dynamic(new _hx_Closure_3()));
HXDLIN(  47)			linc::callbacks::add_callback_function(lua,HX_("luaSpriteMakeGraphic",7d,d9,93,6c));
            		}
HXLINE(  52)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(5)
            			void _hx_run(::String tag,::String name,::String prefix, ::Dynamic __o_framerate, ::Dynamic __o_loop){
            		int framerate = __o_framerate.Default(24);
            		bool loop = __o_loop.Default(true);
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_52_implement)
HXLINE(  53)				::psychlua::FunkinLua_obj::luaTrace(HX_("luaSpriteAddAnimationByPrefix is deprecated! Use addAnimationByPrefix instead",78,72,70,61),false,true,null());
HXLINE(  54)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE(  55)					 ::psychlua::ModchartSprite cock = ( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) );
HXLINE(  56)					cock->animation->addByPrefix(name,prefix,framerate,loop,null(),null());
HXLINE(  57)					if (::hx::IsNull( cock->animation->_curAnim )) {
HXLINE(  58)						cock->animation->play(name,true,null(),null());
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC5((void))

HXLINE(  52)			::llua::Lua_helper_obj::callbacks->set(HX_("luaSpriteAddAnimationByPrefix",09,f3,e9,6f), ::Dynamic(new _hx_Closure_4()));
HXDLIN(  52)			linc::callbacks::add_callback_function(lua,HX_("luaSpriteAddAnimationByPrefix",09,f3,e9,6f));
            		}
HXLINE(  62)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(5)
            			void _hx_run(::String tag,::String name,::String prefix,::String indices, ::Dynamic __o_framerate){
            		int framerate = __o_framerate.Default(24);
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_62_implement)
HXLINE(  63)				::psychlua::FunkinLua_obj::luaTrace(HX_("luaSpriteAddAnimationByIndices is deprecated! Use addAnimationByIndices instead",de,64,41,01),false,true,null());
HXLINE(  64)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE(  65)					::Array< ::String > strIndices = ::StringTools_obj::trim(indices).split(HX_(",",2c,00,00,00));
HXLINE(  66)					::Array< int > die = ::Array_obj< int >::__new(0);
HXLINE(  67)					{
HXLINE(  67)						int _g = 0;
HXDLIN(  67)						int _g1 = strIndices->length;
HXDLIN(  67)						while((_g < _g1)){
HXLINE(  67)							_g = (_g + 1);
HXDLIN(  67)							int i = (_g - 1);
HXLINE(  68)							die->push(::Std_obj::parseInt(strIndices->__get(i)));
            						}
            					}
HXLINE(  70)					 ::psychlua::ModchartSprite pussy = ( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) );
HXLINE(  71)					pussy->animation->addByIndices(name,prefix,die,HX_("",00,00,00,00),framerate,false,null(),null());
HXLINE(  72)					if (::hx::IsNull( pussy->animation->_curAnim )) {
HXLINE(  73)						pussy->animation->play(name,true,null(),null());
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC5((void))

HXLINE(  62)			::llua::Lua_helper_obj::callbacks->set(HX_("luaSpriteAddAnimationByIndices",d0,75,d7,2e), ::Dynamic(new _hx_Closure_5()));
HXDLIN(  62)			linc::callbacks::add_callback_function(lua,HX_("luaSpriteAddAnimationByIndices",d0,75,d7,2e));
            		}
HXLINE(  77)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(3)
            			void _hx_run(::String tag,::String name, ::Dynamic __o_forced){
            		bool forced = __o_forced.Default(false);
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_77_implement)
HXLINE(  78)				::psychlua::FunkinLua_obj::luaTrace(HX_("luaSpritePlayAnimation is deprecated! Use playAnim instead",5b,7a,2f,85),false,true,null());
HXLINE(  79)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE(  80)					( ( ::flixel::FlxSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) )->animation->play(name,forced,null(),null());
            				}
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE(  77)			::llua::Lua_helper_obj::callbacks->set(HX_("luaSpritePlayAnimation",53,e8,9a,80), ::Dynamic(new _hx_Closure_6()));
HXDLIN(  77)			linc::callbacks::add_callback_function(lua,HX_("luaSpritePlayAnimation",53,e8,9a,80));
            		}
HXLINE(  83)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(2)
            			bool _hx_run(::String tag,::String __o_camera){
            		::String camera = __o_camera;
            		if (::hx::IsNull(__o_camera)) camera = HX_("",00,00,00,00);
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_83_implement)
HXLINE(  84)				::psychlua::FunkinLua_obj::luaTrace(HX_("setLuaSpriteCamera is deprecated! Use setObjectCamera instead",27,8c,42,42),false,true,null());
HXLINE(  85)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE(  86)					 ::psychlua::ModchartSprite _hx_tmp = ( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) );
HXDLIN(  86)					_hx_tmp->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::psychlua::LuaUtils_obj::cameraFromString(camera)));
HXLINE(  87)					return true;
            				}
HXLINE(  89)				::psychlua::FunkinLua_obj::luaTrace(((HX_("Lua sprite with tag: ",99,05,27,20) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),null(),null(),null());
HXLINE(  90)				return false;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  83)			::llua::Lua_helper_obj::callbacks->set(HX_("setLuaSpriteCamera",e0,14,44,e8), ::Dynamic(new _hx_Closure_7()));
HXDLIN(  83)			linc::callbacks::add_callback_function(lua,HX_("setLuaSpriteCamera",e0,14,44,e8));
            		}
HXLINE(  92)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(3)
            			bool _hx_run(::String tag,Float scrollX,Float scrollY){
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_92_implement)
HXLINE(  93)				::psychlua::FunkinLua_obj::luaTrace(HX_("setLuaSpriteScrollFactor is deprecated! Use setScrollFactor instead",28,df,47,75),false,true,null());
HXLINE(  94)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE(  95)					{
HXLINE(  95)						 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::FlxObject)(::states::PlayState_obj::instance->modchartSprites->get(tag)) )->scrollFactor;
HXDLIN(  95)						this1->set_x(scrollX);
HXDLIN(  95)						this1->set_y(scrollY);
            					}
HXLINE(  96)					return true;
            				}
HXLINE(  98)				return false;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE(  92)			::llua::Lua_helper_obj::callbacks->set(HX_("setLuaSpriteScrollFactor",37,99,c8,2a), ::Dynamic(new _hx_Closure_8()));
HXDLIN(  92)			linc::callbacks::add_callback_function(lua,HX_("setLuaSpriteScrollFactor",37,99,c8,2a));
            		}
HXLINE( 100)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_9) HXARGC(3)
            			bool _hx_run(::String tag,Float x,Float y){
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_100_implement)
HXLINE( 101)				::psychlua::FunkinLua_obj::luaTrace(HX_("scaleLuaSprite is deprecated! Use scaleObject instead",57,88,a4,6e),false,true,null());
HXLINE( 102)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE( 103)					 ::psychlua::ModchartSprite shit = ( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) );
HXLINE( 104)					{
HXLINE( 104)						 ::flixel::math::FlxBasePoint this1 = shit->scale;
HXDLIN( 104)						this1->set_x(x);
HXDLIN( 104)						this1->set_y(y);
            					}
HXLINE( 105)					shit->updateHitbox();
HXLINE( 106)					return true;
            				}
HXLINE( 108)				return false;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 100)			::llua::Lua_helper_obj::callbacks->set(HX_("scaleLuaSprite",f3,b3,91,0f), ::Dynamic(new _hx_Closure_9()));
HXDLIN( 100)			linc::callbacks::add_callback_function(lua,HX_("scaleLuaSprite",f3,b3,91,0f));
            		}
HXLINE( 110)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_10) HXARGC(2)
            			 ::Dynamic _hx_run(::String tag,::String variable){
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_110_implement)
HXLINE( 111)				::psychlua::FunkinLua_obj::luaTrace(HX_("getPropertyLuaSprite is deprecated! Use getProperty instead",fa,f2,3a,c7),false,true,null());
HXLINE( 112)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE( 113)					::Array< ::String > killMe = variable.split(HX_(".",2e,00,00,00));
HXLINE( 114)					if ((killMe->length > 1)) {
HXLINE( 115)						 ::psychlua::ModchartSprite coverMeInPiss = ( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) );
HXDLIN( 115)						 ::Dynamic coverMeInPiss1 = ::Reflect_obj::getProperty(coverMeInPiss,killMe->__get(0));
HXLINE( 116)						{
HXLINE( 116)							int _g = 1;
HXDLIN( 116)							int _g1 = (killMe->length - 1);
HXDLIN( 116)							while((_g < _g1)){
HXLINE( 116)								_g = (_g + 1);
HXDLIN( 116)								int i = (_g - 1);
HXLINE( 117)								coverMeInPiss1 = ::Reflect_obj::getProperty(coverMeInPiss1,killMe->__get(i));
            							}
            						}
HXLINE( 119)						return ::Reflect_obj::getProperty(coverMeInPiss1,killMe->__get((killMe->length - 1)));
            					}
HXLINE( 121)					return ::Reflect_obj::getProperty(::states::PlayState_obj::instance->modchartSprites->get(tag),variable);
            				}
HXLINE( 123)				return null();
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 110)			::llua::Lua_helper_obj::callbacks->set(HX_("getPropertyLuaSprite",52,5f,33,7c), ::Dynamic(new _hx_Closure_10()));
HXDLIN( 110)			linc::callbacks::add_callback_function(lua,HX_("getPropertyLuaSprite",52,5f,33,7c));
            		}
HXLINE( 125)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_11) HXARGC(3)
            			bool _hx_run(::String tag,::String variable, ::Dynamic value){
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_125_implement)
HXLINE( 126)				::psychlua::FunkinLua_obj::luaTrace(HX_("setPropertyLuaSprite is deprecated! Use setProperty instead",12,75,58,14),false,true,null());
HXLINE( 127)				if (::states::PlayState_obj::instance->modchartSprites->exists(tag)) {
HXLINE( 128)					::Array< ::String > killMe = variable.split(HX_(".",2e,00,00,00));
HXLINE( 129)					if ((killMe->length > 1)) {
HXLINE( 130)						 ::psychlua::ModchartSprite coverMeInPiss = ( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) );
HXDLIN( 130)						 ::Dynamic coverMeInPiss1 = ::Reflect_obj::getProperty(coverMeInPiss,killMe->__get(0));
HXLINE( 131)						{
HXLINE( 131)							int _g = 1;
HXDLIN( 131)							int _g1 = (killMe->length - 1);
HXDLIN( 131)							while((_g < _g1)){
HXLINE( 131)								_g = (_g + 1);
HXDLIN( 131)								int i = (_g - 1);
HXLINE( 132)								coverMeInPiss1 = ::Reflect_obj::getProperty(coverMeInPiss1,killMe->__get(i));
            							}
            						}
HXLINE( 134)						::Reflect_obj::setProperty(coverMeInPiss1,killMe->__get((killMe->length - 1)),value);
HXLINE( 135)						return true;
            					}
HXLINE( 137)					::Reflect_obj::setProperty(::states::PlayState_obj::instance->modchartSprites->get(tag),variable,value);
HXLINE( 138)					return true;
            				}
HXLINE( 140)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setPropertyLuaSprite: Lua sprite with tag: ",2d,cf,3e,9c) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),null(),null(),null());
HXLINE( 141)				return false;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 125)			::llua::Lua_helper_obj::callbacks->set(HX_("setPropertyLuaSprite",c6,16,eb,48), ::Dynamic(new _hx_Closure_11()));
HXDLIN( 125)			linc::callbacks::add_callback_function(lua,HX_("setPropertyLuaSprite",c6,16,eb,48));
            		}
HXLINE( 143)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_12) HXARGC(3)
            			void _hx_run(Float duration, ::Dynamic __o_fromValue, ::Dynamic __o_toValue){
            		Float fromValue = __o_fromValue.Default(0);
            		Float toValue = __o_toValue.Default(1);
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_143_implement)
HXLINE( 144)				{
HXLINE( 144)					 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 144)					 ::Dynamic onComplete = null();
HXDLIN( 144)					if (::hx::IsNull( _this->_channel )) {
HXLINE( 144)						_this->play(null(),null(),null());
            					}
HXDLIN( 144)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 144)						_this->fadeTween->cancel();
            					}
HXDLIN( 144)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(fromValue,toValue,duration, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
HXLINE( 145)				::psychlua::FunkinLua_obj::luaTrace(HX_("musicFadeIn is deprecated! Use soundFadeIn instead.",63,a3,e0,ef),false,true,null());
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE( 143)			::llua::Lua_helper_obj::callbacks->set(HX_("musicFadeIn",06,1b,ec,26), ::Dynamic(new _hx_Closure_12()));
HXDLIN( 143)			linc::callbacks::add_callback_function(lua,HX_("musicFadeIn",06,1b,ec,26));
            		}
HXLINE( 148)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_13) HXARGC(2)
            			void _hx_run(Float duration, ::Dynamic __o_toValue){
            		Float toValue = __o_toValue.Default(0);
            				HX_STACKFRAME(&_hx_pos_0c94275d643f1e89_148_implement)
HXLINE( 149)				{
HXLINE( 149)					 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 149)					 ::Dynamic To = toValue;
HXDLIN( 149)					 ::Dynamic onComplete = null();
HXDLIN( 149)					if (::hx::IsNull( To )) {
HXLINE( 149)						To = 0;
            					}
HXDLIN( 149)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 149)						_this->fadeTween->cancel();
            					}
HXDLIN( 149)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),duration, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
HXLINE( 150)				::psychlua::FunkinLua_obj::luaTrace(HX_("musicFadeOut is deprecated! Use soundFadeOut instead.",3b,a5,4f,13),false,true,null());
            			}
            			HX_END_LOCAL_FUNC2((void))

HXLINE( 148)			::llua::Lua_helper_obj::callbacks->set(HX_("musicFadeOut",4d,1e,b0,e7), ::Dynamic(new _hx_Closure_13()));
HXDLIN( 148)			linc::callbacks::add_callback_function(lua,HX_("musicFadeOut",4d,1e,b0,e7));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DeprecatedFunctions_obj,implement,(void))


DeprecatedFunctions_obj::DeprecatedFunctions_obj()
{
}

bool DeprecatedFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DeprecatedFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DeprecatedFunctions_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DeprecatedFunctions_obj::__mClass;

static ::String DeprecatedFunctions_obj_sStaticFields[] = {
	HX_("implement",a3,71,3f,af),
	::String(null())
};

void DeprecatedFunctions_obj::__register()
{
	DeprecatedFunctions_obj _hx_dummy;
	DeprecatedFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.DeprecatedFunctions",b7,94,a4,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DeprecatedFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DeprecatedFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DeprecatedFunctions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DeprecatedFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DeprecatedFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
