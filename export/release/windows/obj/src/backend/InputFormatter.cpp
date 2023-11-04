#include <hxcpp.h>

#ifndef INCLUDED_backend_InputFormatter
#include <backend/InputFormatter.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_14feba4c8d15a5ff_10_getKeyName,"backend.InputFormatter","getKeyName",0xb58f90a8,"backend.InputFormatter.getKeyName","backend/InputFormatter.hx",10,0x1f323d03)
HX_LOCAL_STACK_FRAME(_hx_pos_14feba4c8d15a5ff_104_getGamepadName,"backend.InputFormatter","getGamepadName",0x176877aa,"backend.InputFormatter.getGamepadName","backend/InputFormatter.hx",104,0x1f323d03)
namespace backend{

void InputFormatter_obj::__construct() { }

Dynamic InputFormatter_obj::__CreateEmpty() { return new InputFormatter_obj; }

void *InputFormatter_obj::_hx_vtable = 0;

Dynamic InputFormatter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputFormatter_obj > _hx_result = new InputFormatter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputFormatter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a8060f0;
}

::String InputFormatter_obj::getKeyName(int key){
            	HX_STACKFRAME(&_hx_pos_14feba4c8d15a5ff_10_getKeyName)
HXDLIN(  10)		switch((int)(key)){
            			case (int)-1: {
HXLINE(  92)				return HX_("---",cd,4c,22,00);
            			}
            			break;
            			case (int)8: {
HXLINE(  12)				return HX_("BckSpc",dc,6f,32,ab);
            			}
            			break;
            			case (int)17: {
HXLINE(  14)				return HX_("Ctrl",cb,b4,a1,2c);
            			}
            			break;
            			case (int)18: {
HXLINE(  16)				return HX_("Alt",09,b1,31,00);
            			}
            			break;
            			case (int)20: {
HXLINE(  18)				return HX_("Caps",41,48,93,2c);
            			}
            			break;
            			case (int)33: {
HXLINE(  20)				return HX_("PgUp",52,84,2f,35);
            			}
            			break;
            			case (int)34: {
HXLINE(  22)				return HX_("PgDown",19,c2,19,78);
            			}
            			break;
            			case (int)48: {
HXLINE(  24)				return HX_("0",30,00,00,00);
            			}
            			break;
            			case (int)49: {
HXLINE(  26)				return HX_("1",31,00,00,00);
            			}
            			break;
            			case (int)50: {
HXLINE(  28)				return HX_("2",32,00,00,00);
            			}
            			break;
            			case (int)51: {
HXLINE(  30)				return HX_("3",33,00,00,00);
            			}
            			break;
            			case (int)52: {
HXLINE(  32)				return HX_("4",34,00,00,00);
            			}
            			break;
            			case (int)53: {
HXLINE(  34)				return HX_("5",35,00,00,00);
            			}
            			break;
            			case (int)54: {
HXLINE(  36)				return HX_("6",36,00,00,00);
            			}
            			break;
            			case (int)55: {
HXLINE(  38)				return HX_("7",37,00,00,00);
            			}
            			break;
            			case (int)56: {
HXLINE(  40)				return HX_("8",38,00,00,00);
            			}
            			break;
            			case (int)57: {
HXLINE(  42)				return HX_("9",39,00,00,00);
            			}
            			break;
            			case (int)96: {
HXLINE(  44)				return HX_("#0",ad,1e,00,00);
            			}
            			break;
            			case (int)97: {
HXLINE(  46)				return HX_("#1",ae,1e,00,00);
            			}
            			break;
            			case (int)98: {
HXLINE(  48)				return HX_("#2",af,1e,00,00);
            			}
            			break;
            			case (int)99: {
HXLINE(  50)				return HX_("#3",b0,1e,00,00);
            			}
            			break;
            			case (int)100: {
HXLINE(  52)				return HX_("#4",b1,1e,00,00);
            			}
            			break;
            			case (int)101: {
HXLINE(  54)				return HX_("#5",b2,1e,00,00);
            			}
            			break;
            			case (int)102: {
HXLINE(  56)				return HX_("#6",b3,1e,00,00);
            			}
            			break;
            			case (int)103: {
HXLINE(  58)				return HX_("#7",b4,1e,00,00);
            			}
            			break;
            			case (int)104: {
HXLINE(  60)				return HX_("#8",b5,1e,00,00);
            			}
            			break;
            			case (int)105: {
HXLINE(  62)				return HX_("#9",b6,1e,00,00);
            			}
            			break;
            			case (int)106: {
HXLINE(  64)				return HX_("#*",a7,1e,00,00);
            			}
            			break;
            			case (int)107: {
HXLINE(  66)				return HX_("#+",a8,1e,00,00);
            			}
            			break;
            			case (int)109: {
HXLINE(  68)				return HX_("#-",aa,1e,00,00);
            			}
            			break;
            			case (int)110: {
HXLINE(  70)				return HX_("#.",ab,1e,00,00);
            			}
            			break;
            			case (int)186: {
HXLINE(  72)				return HX_(";",3b,00,00,00);
            			}
            			break;
            			case (int)188: {
HXLINE(  74)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)190: {
HXLINE(  76)				return HX_(".",2e,00,00,00);
            			}
            			break;
            			case (int)192: {
HXLINE(  80)				return HX_("`",60,00,00,00);
            			}
            			break;
            			case (int)219: {
HXLINE(  82)				return HX_("[",5b,00,00,00);
            			}
            			break;
            			case (int)221: {
HXLINE(  86)				return HX_("]",5d,00,00,00);
            			}
            			break;
            			case (int)222: {
HXLINE(  88)				return HX_("'",27,00,00,00);
            			}
            			break;
            			case (int)301: {
HXLINE(  90)				return HX_("PrtScrn",7e,c1,07,95);
            			}
            			break;
            			default:{
HXLINE(  94)				::String label = ( (::String)(::haxe::IMap_obj::get(::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap,key)) );
HXLINE(  95)				if ((label.toLowerCase() == HX_("null",87,9e,0e,49))) {
HXLINE(  95)					return HX_("---",cd,4c,22,00);
            				}
HXLINE(  97)				::Array< ::String > arr = label.split(HX_("_",5f,00,00,00));
HXLINE(  98)				{
HXLINE(  98)					int _g = 0;
HXDLIN(  98)					int _g1 = arr->length;
HXDLIN(  98)					while((_g < _g1)){
HXLINE(  98)						_g = (_g + 1);
HXDLIN(  98)						int i = (_g - 1);
HXDLIN(  98)						::String text = arr->__get(i);
HXDLIN(  98)						::String _hx_tmp = text.charAt(0).toUpperCase();
HXDLIN(  98)						arr[i] = (_hx_tmp + text.substr(1,null()).toLowerCase());
            					}
            				}
HXLINE(  99)				return arr->join(HX_(" ",20,00,00,00));
            			}
            		}
HXLINE(  10)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputFormatter_obj,getKeyName,return )

::String InputFormatter_obj::getGamepadName(int key){
            	HX_STACKFRAME(&_hx_pos_14feba4c8d15a5ff_104_getGamepadName)
HXLINE( 105)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->firstActive;
HXLINE( 106)		 ::flixel::input::gamepad::FlxGamepadModel model;
HXDLIN( 106)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 106)			model = gamepad->detectedModel;
            		}
            		else {
HXLINE( 106)			model = ::flixel::input::gamepad::FlxGamepadModel_obj::UNKNOWN_dyn();
            		}
HXLINE( 108)		switch((int)(key)){
            			case (int)-1: {
HXLINE( 216)				return HX_("---",cd,4c,22,00);
            			}
            			break;
            			case (int)0: {
HXLINE( 179)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 180)						return HX_("X",58,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 181)						return HX_("A",41,00,00,00);
            					}
            					break;
            					default:{
HXLINE( 182)						return HX_("Action Down",0c,dd,83,bd);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 185)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 186)						return HX_("O",4f,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 187)						return HX_("B",42,00,00,00);
            					}
            					break;
            					default:{
HXLINE( 188)						return HX_("Action Right",f2,3b,76,21);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 191)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 192)						return HX_("[",5b,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 193)						return HX_("X",58,00,00,00);
            					}
            					break;
            					default:{
HXLINE( 194)						return HX_("Action Left",b1,ec,c5,c2);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 197)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 198)						return HX_("]",5d,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 199)						return HX_("Y",59,00,00,00);
            					}
            					break;
            					default:{
HXLINE( 200)						return HX_("Action Up",85,ec,48,b3);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 153)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 154)						return HX_("L1",65,42,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 155)						return HX_("LB",76,42,00,00);
            					}
            					break;
            					default:{
HXLINE( 156)						return HX_("L. Bumper",01,cc,3b,23);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 159)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 160)						return HX_("R1",9f,47,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 161)						return HX_("RB",b0,47,00,00);
            					}
            					break;
            					default:{
HXLINE( 162)						return HX_("R. Bumper",07,42,e4,14);
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 204)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 205)						return HX_("Share",bf,54,4a,0f);
            					}
            					break;
            					case (int)4: {
HXLINE( 206)						return HX_("Back",47,06,ea,2b);
            					}
            					break;
            					default:{
HXLINE( 207)						return HX_("Select",1c,8f,c7,9e);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 210)				if ((model->_hx_getIndex() == 2)) {
HXLINE( 211)					return HX_("Options",3e,5b,4f,ad);
            				}
            				else {
HXLINE( 212)					return HX_("Start",42,e4,38,17);
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 120)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 121)						return HX_("L3",67,42,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 122)						return HX_("LS",87,42,00,00);
            					}
            					break;
            					default:{
HXLINE( 123)						return HX_("Analog Click",58,5e,36,1a);
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 135)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 136)						return HX_("R3",a1,47,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 137)						return HX_("RS",c1,47,00,00);
            					}
            					break;
            					default:{
HXLINE( 138)						return HX_("C. Click",d3,ac,06,18);
            					}
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 147)				return HX_("D. Up",71,d5,bf,45);
            			}
            			break;
            			case (int)12: {
HXLINE( 149)				return HX_("D. Down",f8,d8,37,0a);
            			}
            			break;
            			case (int)13: {
HXLINE( 143)				return HX_("D. Left",9d,e8,79,0f);
            			}
            			break;
            			case (int)14: {
HXLINE( 145)				return HX_("D. Right",86,ae,3e,f2);
            			}
            			break;
            			case (int)15: case (int)17: {
HXLINE( 165)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 166)						return HX_("L2",66,42,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 167)						return HX_("LT",88,42,00,00);
            					}
            					break;
            					default:{
HXLINE( 168)						return HX_("L. Trigger",5a,35,fb,16);
            					}
            				}
            			}
            			break;
            			case (int)16: case (int)18: {
HXLINE( 171)				switch((int)(model->_hx_getIndex())){
            					case (int)2: {
HXLINE( 172)						return HX_("R2",a0,47,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 173)						return HX_("RT",c2,47,00,00);
            					}
            					break;
            					default:{
HXLINE( 174)						return HX_("R. Trigger",94,04,ba,98);
            					}
            				}
            			}
            			break;
            			case (int)34: {
HXLINE( 116)				return HX_("Up",7b,4a,00,00);
            			}
            			break;
            			case (int)35: {
HXLINE( 114)				return HX_("Right",bc,7b,91,7c);
            			}
            			break;
            			case (int)36: {
HXLINE( 118)				return HX_("Down",82,24,47,2d);
            			}
            			break;
            			case (int)37: {
HXLINE( 112)				return HX_("Left",27,34,89,32);
            			}
            			break;
            			case (int)38: {
HXLINE( 131)				return HX_("C. Up",f0,40,59,b2);
            			}
            			break;
            			case (int)39: {
HXLINE( 129)				return HX_("C. Right",67,3c,0c,b9);
            			}
            			break;
            			case (int)40: {
HXLINE( 133)				return HX_("C. Down",37,62,a2,e0);
            			}
            			break;
            			case (int)41: {
HXLINE( 127)				return HX_("C. Left",dc,71,e4,e5);
            			}
            			break;
            			default:{
HXLINE( 219)				::String label = ( (::String)(::haxe::IMap_obj::get(::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap,key)) );
HXLINE( 220)				if ((label.toLowerCase() == HX_("null",87,9e,0e,49))) {
HXLINE( 220)					return HX_("---",cd,4c,22,00);
            				}
HXLINE( 222)				::Array< ::String > arr = label.split(HX_("_",5f,00,00,00));
HXLINE( 223)				{
HXLINE( 223)					int _g = 0;
HXDLIN( 223)					int _g1 = arr->length;
HXDLIN( 223)					while((_g < _g1)){
HXLINE( 223)						_g = (_g + 1);
HXDLIN( 223)						int i = (_g - 1);
HXDLIN( 223)						::String text = arr->__get(i);
HXDLIN( 223)						::String _hx_tmp = text.charAt(0).toUpperCase();
HXDLIN( 223)						arr[i] = (_hx_tmp + text.substr(1,null()).toLowerCase());
            					}
            				}
HXLINE( 224)				return arr->join(HX_(" ",20,00,00,00));
            			}
            		}
HXLINE( 108)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputFormatter_obj,getGamepadName,return )


InputFormatter_obj::InputFormatter_obj()
{
}

bool InputFormatter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getKeyName") ) { outValue = getKeyName_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getGamepadName") ) { outValue = getGamepadName_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InputFormatter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *InputFormatter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class InputFormatter_obj::__mClass;

static ::String InputFormatter_obj_sStaticFields[] = {
	HX_("getKeyName",94,69,3a,f2),
	HX_("getGamepadName",96,36,f0,60),
	::String(null())
};

void InputFormatter_obj::__register()
{
	InputFormatter_obj _hx_dummy;
	InputFormatter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.InputFormatter",da,78,08,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InputFormatter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InputFormatter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InputFormatter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputFormatter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputFormatter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
