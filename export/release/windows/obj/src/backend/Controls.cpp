#include <hxcpp.h>

#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3820124eb7b340fb_8_new,"backend.Controls","new",0x7301bb22,"backend.Controls.new","backend/Controls.hx",8,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_29_get_UI_UP_P,"backend.Controls","get_UI_UP_P",0x5cbee810,"backend.Controls.get_UI_UP_P","backend/Controls.hx",29,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_30_get_UI_DOWN_P,"backend.Controls","get_UI_DOWN_P",0xd3926ed7,"backend.Controls.get_UI_DOWN_P","backend/Controls.hx",30,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_31_get_UI_LEFT_P,"backend.Controls","get_UI_LEFT_P",0x393371bc,"backend.Controls.get_UI_LEFT_P","backend/Controls.hx",31,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_32_get_UI_RIGHT_P,"backend.Controls","get_UI_RIGHT_P",0xf22e0669,"backend.Controls.get_UI_RIGHT_P","backend/Controls.hx",32,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_33_get_NOTE_UP_P,"backend.Controls","get_NOTE_UP_P",0x382eddf2,"backend.Controls.get_NOTE_UP_P","backend/Controls.hx",33,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_34_get_NOTE_DOWN_P,"backend.Controls","get_NOTE_DOWN_P",0x63552139,"backend.Controls.get_NOTE_DOWN_P","backend/Controls.hx",34,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_35_get_NOTE_LEFT_P,"backend.Controls","get_NOTE_LEFT_P",0xc8f6241e,"backend.Controls.get_NOTE_LEFT_P","backend/Controls.hx",35,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_36_get_NOTE_RIGHT_P,"backend.Controls","get_NOTE_RIGHT_P",0x2cc769c7,"backend.Controls.get_NOTE_RIGHT_P","backend/Controls.hx",36,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_47_get_UI_UP,"backend.Controls","get_UI_UP",0xb97f073f,"backend.Controls.get_UI_UP","backend/Controls.hx",47,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_48_get_UI_DOWN,"backend.Controls","get_UI_DOWN",0x51817e46,"backend.Controls.get_UI_DOWN","backend/Controls.hx",48,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_49_get_UI_LEFT,"backend.Controls","get_UI_LEFT",0x56c38deb,"backend.Controls.get_UI_LEFT","backend/Controls.hx",49,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_50_get_UI_RIGHT,"backend.Controls","get_UI_RIGHT",0x0b65ad58,"backend.Controls.get_UI_RIGHT","backend/Controls.hx",50,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_51_get_NOTE_UP,"backend.Controls","get_NOTE_UP",0x3fdc60a1,"backend.Controls.get_NOTE_UP","backend/Controls.hx",51,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_52_get_NOTE_DOWN,"backend.Controls","get_NOTE_DOWN",0x2cf17428,"backend.Controls.get_NOTE_DOWN","backend/Controls.hx",52,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_53_get_NOTE_LEFT,"backend.Controls","get_NOTE_LEFT",0x323383cd,"backend.Controls.get_NOTE_LEFT","backend/Controls.hx",53,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_54_get_NOTE_RIGHT,"backend.Controls","get_NOTE_RIGHT",0x31ecdd36,"backend.Controls.get_NOTE_RIGHT","backend/Controls.hx",54,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_65_get_UI_UP_R,"backend.Controls","get_UI_UP_R",0x5cbee812,"backend.Controls.get_UI_UP_R","backend/Controls.hx",65,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_66_get_UI_DOWN_R,"backend.Controls","get_UI_DOWN_R",0xd3926ed9,"backend.Controls.get_UI_DOWN_R","backend/Controls.hx",66,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_67_get_UI_LEFT_R,"backend.Controls","get_UI_LEFT_R",0x393371be,"backend.Controls.get_UI_LEFT_R","backend/Controls.hx",67,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_68_get_UI_RIGHT_R,"backend.Controls","get_UI_RIGHT_R",0xf22e066b,"backend.Controls.get_UI_RIGHT_R","backend/Controls.hx",68,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_69_get_NOTE_UP_R,"backend.Controls","get_NOTE_UP_R",0x382eddf4,"backend.Controls.get_NOTE_UP_R","backend/Controls.hx",69,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_70_get_NOTE_DOWN_R,"backend.Controls","get_NOTE_DOWN_R",0x6355213b,"backend.Controls.get_NOTE_DOWN_R","backend/Controls.hx",70,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_71_get_NOTE_LEFT_R,"backend.Controls","get_NOTE_LEFT_R",0xc8f62420,"backend.Controls.get_NOTE_LEFT_R","backend/Controls.hx",71,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_72_get_NOTE_RIGHT_R,"backend.Controls","get_NOTE_RIGHT_R",0x2cc769c9,"backend.Controls.get_NOTE_RIGHT_R","backend/Controls.hx",72,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_80_get_ACCEPT,"backend.Controls","get_ACCEPT",0x0f8e804f,"backend.Controls.get_ACCEPT","backend/Controls.hx",80,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_81_get_BACK,"backend.Controls","get_BACK",0x796a33ae,"backend.Controls.get_BACK","backend/Controls.hx",81,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_82_get_PAUSE,"backend.Controls","get_PAUSE",0xd32cd36f,"backend.Controls.get_PAUSE","backend/Controls.hx",82,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_83_get_RESET,"backend.Controls","get_RESET",0xfc9d4648,"backend.Controls.get_RESET","backend/Controls.hx",83,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_89_justPressed,"backend.Controls","justPressed",0xdf408a98,"backend.Controls.justPressed","backend/Controls.hx",89,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_97_pressed,"backend.Controls","pressed",0x7e8e4664,"backend.Controls.pressed","backend/Controls.hx",97,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_105_justReleased,"backend.Controls","justReleased",0x800ec807,"backend.Controls.justReleased","backend/Controls.hx",105,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_114__myGamepadJustPressed,"backend.Controls","_myGamepadJustPressed",0x43435262,"backend.Controls._myGamepadJustPressed","backend/Controls.hx",114,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_129__myGamepadPressed,"backend.Controls","_myGamepadPressed",0x504ae12e,"backend.Controls._myGamepadPressed","backend/Controls.hx",129,0x9610ec2d)
HX_LOCAL_STACK_FRAME(_hx_pos_3820124eb7b340fb_144__myGamepadJustReleased,"backend.Controls","_myGamepadJustReleased",0x9e7ad0fd,"backend.Controls._myGamepadJustReleased","backend/Controls.hx",144,0x9610ec2d)
namespace backend{

void Controls_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_8_new)
HXLINE( 112)		this->controllerMode = false;
HXLINE( 163)		this->keyboardBinds = ::backend::ClientPrefs_obj::keyBinds;
HXLINE( 164)		this->gamepadBinds = ::backend::ClientPrefs_obj::gamepadBinds;
            	}

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f0507aa;
}

bool Controls_obj::get_UI_UP_P(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_29_get_UI_UP_P)
HXDLIN(  29)		return this->justPressed(HX_("ui_up",a6,c2,91,a3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP_P,return )

bool Controls_obj::get_UI_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_30_get_UI_DOWN_P)
HXDLIN(  30)		return this->justPressed(HX_("ui_down",6d,3d,47,f2));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN_P,return )

bool Controls_obj::get_UI_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_31_get_UI_LEFT_P)
HXDLIN(  31)		return this->justPressed(HX_("ui_left",12,4d,89,f7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT_P,return )

bool Controls_obj::get_UI_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_32_get_UI_RIGHT_P)
HXDLIN(  32)		return this->justPressed(HX_("ui_right",71,30,a7,17));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT_P,return )

bool Controls_obj::get_NOTE_UP_P(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_33_get_NOTE_UP_P)
HXDLIN(  33)		return this->justPressed(HX_("note_up",c8,67,5c,4d));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP_P,return )

bool Controls_obj::get_NOTE_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_34_get_NOTE_DOWN_P)
HXDLIN(  34)		return this->justPressed(HX_("note_down",0f,ef,de,9f));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN_P,return )

bool Controls_obj::get_NOTE_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_35_get_NOTE_LEFT_P)
HXDLIN(  35)		return this->justPressed(HX_("note_left",b4,fe,20,a5));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT_P,return )

bool Controls_obj::get_NOTE_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_36_get_NOTE_RIGHT_P)
HXDLIN(  36)		return this->justPressed(HX_("note_right",8f,ec,ca,4e));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT_P,return )

bool Controls_obj::get_UI_UP(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_47_get_UI_UP)
HXDLIN(  47)		return this->pressed(HX_("ui_up",a6,c2,91,a3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP,return )

bool Controls_obj::get_UI_DOWN(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_48_get_UI_DOWN)
HXDLIN(  48)		return this->pressed(HX_("ui_down",6d,3d,47,f2));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN,return )

bool Controls_obj::get_UI_LEFT(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_49_get_UI_LEFT)
HXDLIN(  49)		return this->pressed(HX_("ui_left",12,4d,89,f7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT,return )

bool Controls_obj::get_UI_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_50_get_UI_RIGHT)
HXDLIN(  50)		return this->pressed(HX_("ui_right",71,30,a7,17));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT,return )

bool Controls_obj::get_NOTE_UP(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_51_get_NOTE_UP)
HXDLIN(  51)		return this->pressed(HX_("note_up",c8,67,5c,4d));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP,return )

bool Controls_obj::get_NOTE_DOWN(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_52_get_NOTE_DOWN)
HXDLIN(  52)		return this->pressed(HX_("note_down",0f,ef,de,9f));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN,return )

bool Controls_obj::get_NOTE_LEFT(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_53_get_NOTE_LEFT)
HXDLIN(  53)		return this->pressed(HX_("note_left",b4,fe,20,a5));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT,return )

bool Controls_obj::get_NOTE_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_54_get_NOTE_RIGHT)
HXDLIN(  54)		return this->pressed(HX_("note_right",8f,ec,ca,4e));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT,return )

bool Controls_obj::get_UI_UP_R(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_65_get_UI_UP_R)
HXDLIN(  65)		return this->justReleased(HX_("ui_up",a6,c2,91,a3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP_R,return )

bool Controls_obj::get_UI_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_66_get_UI_DOWN_R)
HXDLIN(  66)		return this->justReleased(HX_("ui_down",6d,3d,47,f2));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN_R,return )

bool Controls_obj::get_UI_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_67_get_UI_LEFT_R)
HXDLIN(  67)		return this->justReleased(HX_("ui_left",12,4d,89,f7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT_R,return )

bool Controls_obj::get_UI_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_68_get_UI_RIGHT_R)
HXDLIN(  68)		return this->justReleased(HX_("ui_right",71,30,a7,17));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT_R,return )

bool Controls_obj::get_NOTE_UP_R(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_69_get_NOTE_UP_R)
HXDLIN(  69)		return this->justReleased(HX_("note_up",c8,67,5c,4d));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP_R,return )

bool Controls_obj::get_NOTE_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_70_get_NOTE_DOWN_R)
HXDLIN(  70)		return this->justReleased(HX_("note_down",0f,ef,de,9f));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN_R,return )

bool Controls_obj::get_NOTE_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_71_get_NOTE_LEFT_R)
HXDLIN(  71)		return this->justReleased(HX_("note_left",b4,fe,20,a5));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT_R,return )

bool Controls_obj::get_NOTE_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_72_get_NOTE_RIGHT_R)
HXDLIN(  72)		return this->justReleased(HX_("note_right",8f,ec,ca,4e));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT_R,return )

bool Controls_obj::get_ACCEPT(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_80_get_ACCEPT)
HXDLIN(  80)		return this->justPressed(HX_("accept",08,93,06,0b));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_ACCEPT,return )

bool Controls_obj::get_BACK(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_81_get_BACK)
HXDLIN(  81)		return this->justPressed(HX_("back",27,da,10,41));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_BACK,return )

bool Controls_obj::get_PAUSE(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_82_get_PAUSE)
HXDLIN(  82)		return this->justPressed(HX_("pause",f6,d6,57,bd));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_PAUSE,return )

bool Controls_obj::get_RESET(){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_83_get_RESET)
HXDLIN(  83)		return this->justPressed(HX_("reset",cf,49,c8,e6));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RESET,return )

bool Controls_obj::justPressed(::String key){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_89_justPressed)
HXLINE(  90)		 ::flixel::input::keyboard::FlxKeyboard _this = ::flixel::FlxG_obj::keys;
HXDLIN(  90)		bool result = (_this->checkKeyArrayState(( (::cpp::VirtualArray)(this->keyboardBinds->get(key)) ),2) == true);
HXLINE(  91)		if (result) {
HXLINE(  91)			this->controllerMode = false;
            		}
HXLINE(  93)		if (!(result)) {
HXLINE(  93)			return (this->_myGamepadJustPressed(( (::Array< int >)(this->gamepadBinds->get(key)) )) == true);
            		}
            		else {
HXLINE(  93)			return true;
            		}
HXDLIN(  93)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,justPressed,return )

bool Controls_obj::pressed(::String key){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_97_pressed)
HXLINE(  98)		 ::flixel::input::keyboard::FlxKeyboard _this = ::flixel::FlxG_obj::keys;
HXDLIN(  98)		bool result = (_this->checkKeyArrayState(( (::cpp::VirtualArray)(this->keyboardBinds->get(key)) ),1) == true);
HXLINE(  99)		if (result) {
HXLINE(  99)			this->controllerMode = false;
            		}
HXLINE( 101)		if (!(result)) {
HXLINE( 101)			return (this->_myGamepadPressed(( (::Array< int >)(this->gamepadBinds->get(key)) )) == true);
            		}
            		else {
HXLINE( 101)			return true;
            		}
HXDLIN( 101)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,pressed,return )

bool Controls_obj::justReleased(::String key){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_105_justReleased)
HXLINE( 106)		 ::flixel::input::keyboard::FlxKeyboard _this = ::flixel::FlxG_obj::keys;
HXDLIN( 106)		bool result = (_this->checkKeyArrayState(( (::cpp::VirtualArray)(this->keyboardBinds->get(key)) ),-1) == true);
HXLINE( 107)		if (result) {
HXLINE( 107)			this->controllerMode = false;
            		}
HXLINE( 109)		if (!(result)) {
HXLINE( 109)			return (this->_myGamepadJustReleased(( (::Array< int >)(this->gamepadBinds->get(key)) )) == true);
            		}
            		else {
HXLINE( 109)			return true;
            		}
HXDLIN( 109)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,justReleased,return )

bool Controls_obj::_myGamepadJustPressed(::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_114__myGamepadJustPressed)
HXLINE( 115)		if (::hx::IsNotNull( keys )) {
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			while((_g < keys->length)){
HXLINE( 117)				int key = keys->__get(_g);
HXDLIN( 117)				_g = (_g + 1);
HXLINE( 119)				if ((::flixel::FlxG_obj::gamepads->anyHasState(key,2) == true)) {
HXLINE( 121)					this->controllerMode = true;
HXLINE( 122)					return true;
            				}
            			}
            		}
HXLINE( 126)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,_myGamepadJustPressed,return )

bool Controls_obj::_myGamepadPressed(::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_129__myGamepadPressed)
HXLINE( 130)		if (::hx::IsNotNull( keys )) {
HXLINE( 132)			int _g = 0;
HXDLIN( 132)			while((_g < keys->length)){
HXLINE( 132)				int key = keys->__get(_g);
HXDLIN( 132)				_g = (_g + 1);
HXLINE( 134)				if ((::flixel::FlxG_obj::gamepads->anyHasState(key,1) == true)) {
HXLINE( 136)					this->controllerMode = true;
HXLINE( 137)					return true;
            				}
            			}
            		}
HXLINE( 141)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,_myGamepadPressed,return )

bool Controls_obj::_myGamepadJustReleased(::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_3820124eb7b340fb_144__myGamepadJustReleased)
HXLINE( 145)		if (::hx::IsNotNull( keys )) {
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			while((_g < keys->length)){
HXLINE( 147)				int key = keys->__get(_g);
HXDLIN( 147)				_g = (_g + 1);
HXLINE( 149)				if ((::flixel::FlxG_obj::gamepads->anyHasState(key,-1) == true)) {
HXLINE( 151)					this->controllerMode = true;
HXLINE( 152)					return true;
            				}
            			}
            		}
HXLINE( 156)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,_myGamepadJustReleased,return )

 ::backend::Controls Controls_obj::instance;


::hx::ObjectPtr< Controls_obj > Controls_obj::__new() {
	::hx::ObjectPtr< Controls_obj > __this = new Controls_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Controls_obj > Controls_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Controls_obj *__this = (Controls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Controls_obj), true, "backend.Controls"));
	*(void **)__this = Controls_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Controls_obj::Controls_obj()
{
}

void Controls_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controls);
	HX_MARK_MEMBER_NAME(keyboardBinds,"keyboardBinds");
	HX_MARK_MEMBER_NAME(gamepadBinds,"gamepadBinds");
	HX_MARK_MEMBER_NAME(controllerMode,"controllerMode");
	HX_MARK_END_CLASS();
}

void Controls_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyboardBinds,"keyboardBinds");
	HX_VISIT_MEMBER_NAME(gamepadBinds,"gamepadBinds");
	HX_VISIT_MEMBER_NAME(controllerMode,"controllerMode");
}

::hx::Val Controls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACK() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"UI_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP() ); }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAUSE() ); }
		if (HX_FIELD_EQ(inName,"RESET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RESET() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ACCEPT() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UI_UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP_P() ); }
		if (HX_FIELD_EQ(inName,"UI_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN() ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP() ); }
		if (HX_FIELD_EQ(inName,"UI_UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP_R() ); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return ::hx::Val( pressed_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"UI_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return ::hx::Val( get_BACK_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"UI_DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT() ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP") ) { return ::hx::Val( get_UI_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"UI_DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP_R() ); }
		if (HX_FIELD_EQ(inName,"get_PAUSE") ) { return ::hx::Val( get_PAUSE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RESET") ) { return ::hx::Val( get_RESET_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"UI_RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"UI_RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT_R() ); }
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return ::hx::Val( get_ACCEPT_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NOTE_DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP_P") ) { return ::hx::Val( get_UI_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_DOWN") ) { return ::hx::Val( get_UI_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT") ) { return ::hx::Val( get_UI_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP") ) { return ::hx::Val( get_NOTE_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP_R") ) { return ::hx::Val( get_UI_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return ::hx::Val( justPressed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT") ) { return ::hx::Val( get_UI_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT_R() ); }
		if (HX_FIELD_EQ(inName,"gamepadBinds") ) { return ::hx::Val( gamepadBinds ); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return ::hx::Val( justReleased_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_UI_DOWN_P") ) { return ::hx::Val( get_UI_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT_P") ) { return ::hx::Val( get_UI_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP_P") ) { return ::hx::Val( get_NOTE_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN") ) { return ::hx::Val( get_NOTE_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT") ) { return ::hx::Val( get_NOTE_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_DOWN_R") ) { return ::hx::Val( get_UI_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT_R") ) { return ::hx::Val( get_UI_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP_R") ) { return ::hx::Val( get_NOTE_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"keyboardBinds") ) { return ::hx::Val( keyboardBinds ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT_P") ) { return ::hx::Val( get_UI_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT") ) { return ::hx::Val( get_NOTE_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT_R") ) { return ::hx::Val( get_UI_RIGHT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"controllerMode") ) { return ::hx::Val( controllerMode ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN_P") ) { return ::hx::Val( get_NOTE_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT_P") ) { return ::hx::Val( get_NOTE_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN_R") ) { return ::hx::Val( get_NOTE_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT_R") ) { return ::hx::Val( get_NOTE_LEFT_R_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT_P") ) { return ::hx::Val( get_NOTE_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT_R") ) { return ::hx::Val( get_NOTE_RIGHT_R_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_myGamepadPressed") ) { return ::hx::Val( _myGamepadPressed_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_myGamepadJustPressed") ) { return ::hx::Val( _myGamepadJustPressed_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_myGamepadJustReleased") ) { return ::hx::Val( _myGamepadJustReleased_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

::hx::Val Controls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"gamepadBinds") ) { gamepadBinds=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"keyboardBinds") ) { keyboardBinds=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"controllerMode") ) { controllerMode=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Controls_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::backend::Controls >(); return true; }
	}
	return false;
}

void Controls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("UI_UP_P",37,0b,2b,ea));
	outFields->push(HX_("UI_DOWN_P",be,e9,aa,ae));
	outFields->push(HX_("UI_LEFT_P",a3,ec,4b,14));
	outFields->push(HX_("UI_RIGHT_P",a2,15,81,cc));
	outFields->push(HX_("NOTE_UP_P",d9,58,47,13));
	outFields->push(HX_("NOTE_DOWN_P",e0,63,af,91));
	outFields->push(HX_("NOTE_LEFT_P",c5,66,50,f7));
	outFields->push(HX_("NOTE_RIGHT_P",40,79,67,8d));
	outFields->push(HX_("UI_UP",a6,42,98,21));
	outFields->push(HX_("UI_DOWN",6d,a1,ed,de));
	outFields->push(HX_("UI_LEFT",12,b1,2f,e4));
	outFields->push(HX_("UI_RIGHT",51,4c,98,3c));
	outFields->push(HX_("NOTE_UP",c8,83,48,cd));
	outFields->push(HX_("NOTE_DOWN",0f,ef,09,08));
	outFields->push(HX_("NOTE_LEFT",b4,fe,4b,0d));
	outFields->push(HX_("NOTE_RIGHT",6f,ec,3f,0c));
	outFields->push(HX_("UI_UP_R",39,0b,2b,ea));
	outFields->push(HX_("UI_DOWN_R",c0,e9,aa,ae));
	outFields->push(HX_("UI_LEFT_R",a5,ec,4b,14));
	outFields->push(HX_("UI_RIGHT_R",a4,15,81,cc));
	outFields->push(HX_("NOTE_UP_R",db,58,47,13));
	outFields->push(HX_("NOTE_DOWN_R",e2,63,af,91));
	outFields->push(HX_("NOTE_LEFT_R",c7,66,50,f7));
	outFields->push(HX_("NOTE_RIGHT_R",42,79,67,8d));
	outFields->push(HX_("ACCEPT",08,3f,89,bd));
	outFields->push(HX_("BACK",27,a2,d1,2b));
	outFields->push(HX_("PAUSE",d6,0e,46,3b));
	outFields->push(HX_("RESET",af,81,b6,64));
	outFields->push(HX_("keyboardBinds",ef,85,d3,86));
	outFields->push(HX_("gamepadBinds",b5,b7,d0,6a));
	outFields->push(HX_("controllerMode",1f,16,a7,29));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Controls_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Controls_obj,keyboardBinds),HX_("keyboardBinds",ef,85,d3,86)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Controls_obj,gamepadBinds),HX_("gamepadBinds",b5,b7,d0,6a)},
	{::hx::fsBool,(int)offsetof(Controls_obj,controllerMode),HX_("controllerMode",1f,16,a7,29)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Controls_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::backend::Controls */ ,(void *) &Controls_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Controls_obj_sMemberFields[] = {
	HX_("get_UI_UP_P",4e,6b,25,70),
	HX_("get_UI_DOWN_P",95,bd,0e,70),
	HX_("get_UI_LEFT_P",7a,c0,af,d5),
	HX_("get_UI_RIGHT_P",eb,9d,76,42),
	HX_("get_NOTE_UP_P",b0,2c,ab,d4),
	HX_("get_NOTE_DOWN_P",77,1b,91,52),
	HX_("get_NOTE_LEFT_P",5c,1e,32,b8),
	HX_("get_NOTE_RIGHT_P",c9,65,06,92),
	HX_("get_UI_UP",fd,9e,41,65),
	HX_("get_UI_DOWN",84,01,e8,64),
	HX_("get_UI_LEFT",29,11,2a,6a),
	HX_("get_UI_RIGHT",5a,00,b2,f1),
	HX_("get_NOTE_UP",df,e3,42,53),
	HX_("get_NOTE_DOWN",e6,c2,6d,c9),
	HX_("get_NOTE_LEFT",8b,d2,af,ce),
	HX_("get_NOTE_RIGHT",b8,74,35,82),
	HX_("get_UI_UP_R",50,6b,25,70),
	HX_("get_UI_DOWN_R",97,bd,0e,70),
	HX_("get_UI_LEFT_R",7c,c0,af,d5),
	HX_("get_UI_RIGHT_R",ed,9d,76,42),
	HX_("get_NOTE_UP_R",b2,2c,ab,d4),
	HX_("get_NOTE_DOWN_R",79,1b,91,52),
	HX_("get_NOTE_LEFT_R",5e,1e,32,b8),
	HX_("get_NOTE_RIGHT_R",cb,65,06,92),
	HX_("get_ACCEPT",d1,ae,10,ae),
	HX_("get_BACK",b0,5d,8c,ab),
	HX_("get_PAUSE",2d,6b,ef,7e),
	HX_("get_RESET",06,de,5f,a8),
	HX_("keyboardBinds",ef,85,d3,86),
	HX_("gamepadBinds",b5,b7,d0,6a),
	HX_("justPressed",d6,0d,a7,f2),
	HX_("pressed",a2,d2,e6,39),
	HX_("justReleased",09,1b,5b,66),
	HX_("controllerMode",1f,16,a7,29),
	HX_("_myGamepadJustPressed",20,8f,e9,d8),
	HX_("_myGamepadPressed",ec,66,28,82),
	HX_("_myGamepadJustReleased",7f,ba,49,fa),
	::String(null()) };

static void Controls_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controls_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Controls_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controls_obj::instance,"instance");
};

#endif

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Controls",30,42,41,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &Controls_obj::__SetStatic;
	__mClass->mMarkFunc = Controls_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Controls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Controls_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
