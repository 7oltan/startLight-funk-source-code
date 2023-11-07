#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ff18a02f3055fb45_10_new,"flixel.system.frontEnds.InputFrontEnd","new",0x5285aa54,"flixel.system.frontEnds.InputFrontEnd.new","flixel/system/frontEnds/InputFrontEnd.hx",10,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_31_add_flixel_input_gamepad_FlxGamepadManager,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_gamepad_FlxGamepadManager",0x189964b2,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_gamepad_FlxGamepadManager","flixel/system/frontEnds/InputFrontEnd.hx",31,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_31_add_flixel_input_touch_FlxTouchManager,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_touch_FlxTouchManager",0x760d6272,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_touch_FlxTouchManager","flixel/system/frontEnds/InputFrontEnd.hx",31,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_76_replace_flixel_input_mouse_FlxMouse,"flixel.system.frontEnds.InputFrontEnd","replace_flixel_input_mouse_FlxMouse",0x59a38f0e,"flixel.system.frontEnds.InputFrontEnd.replace_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",76,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_31_add_flixel_input_mouse_FlxMouse,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_mouse_FlxMouse",0xe1e4487b,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",31,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_31_add_flixel_input_keyboard_FlxKeyboard,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_keyboard_FlxKeyboard",0xa934da2f,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_keyboard_FlxKeyboard","flixel/system/frontEnds/InputFrontEnd.hx",31,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_99_reset,"flixel.system.frontEnds.InputFrontEnd","reset",0x8c9b88c3,"flixel.system.frontEnds.InputFrontEnd.reset","flixel/system/frontEnds/InputFrontEnd.hx",99,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_111_update,"flixel.system.frontEnds.InputFrontEnd","update",0xfa095c95,"flixel.system.frontEnds.InputFrontEnd.update","flixel/system/frontEnds/InputFrontEnd.hx",111,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_120_onFocus,"flixel.system.frontEnds.InputFrontEnd","onFocus",0xcb1ee22d,"flixel.system.frontEnds.InputFrontEnd.onFocus","flixel/system/frontEnds/InputFrontEnd.hx",120,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_129_onFocusLost,"flixel.system.frontEnds.InputFrontEnd","onFocusLost",0x5cd0d2b1,"flixel.system.frontEnds.InputFrontEnd.onFocusLost","flixel/system/frontEnds/InputFrontEnd.hx",129,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_139_onStateSwitch,"flixel.system.frontEnds.InputFrontEnd","onStateSwitch",0x594606fa,"flixel.system.frontEnds.InputFrontEnd.onStateSwitch","flixel/system/frontEnds/InputFrontEnd.hx",139,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_147_destroy,"flixel.system.frontEnds.InputFrontEnd","destroy",0x54de10ee,"flixel.system.frontEnds.InputFrontEnd.destroy","flixel/system/frontEnds/InputFrontEnd.hx",147,0x759f67bd)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void InputFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_10_new)
HXLINE(  21)		this->resetOnStateSwitch = true;
HXLINE(  15)		this->list = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic InputFrontEnd_obj::__CreateEmpty() { return new InputFrontEnd_obj; }

void *InputFrontEnd_obj::_hx_vtable = 0;

Dynamic InputFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputFrontEnd_obj > _hx_result = new InputFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c30b64a;
}

 ::flixel::input::gamepad::FlxGamepadManager InputFrontEnd_obj::add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_31_add_flixel_input_gamepad_FlxGamepadManager)
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  33)			while((_g < _g1->length)){
HXLINE(  33)				::Dynamic input = _g1->__get(_g);
HXDLIN(  33)				_g = (_g + 1);
HXLINE(  35)				bool Simple = true;
HXDLIN(  35)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  35)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  37)					return Input;
            				}
            			}
            		}
HXLINE(  41)		this->list->push(Input);
HXLINE(  42)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_gamepad_FlxGamepadManager,return )

 ::flixel::input::touch::FlxTouchManager InputFrontEnd_obj::add_flixel_input_touch_FlxTouchManager( ::flixel::input::touch::FlxTouchManager Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_31_add_flixel_input_touch_FlxTouchManager)
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  33)			while((_g < _g1->length)){
HXLINE(  33)				::Dynamic input = _g1->__get(_g);
HXDLIN(  33)				_g = (_g + 1);
HXLINE(  35)				bool Simple = true;
HXDLIN(  35)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  35)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  37)					return Input;
            				}
            			}
            		}
HXLINE(  41)		this->list->push(Input);
HXLINE(  42)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_touch_FlxTouchManager,return )

 ::flixel::input::mouse::FlxMouse InputFrontEnd_obj::replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old, ::flixel::input::mouse::FlxMouse New){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_76_replace_flixel_input_mouse_FlxMouse)
HXLINE(  77)		int i = 0;
HXLINE(  78)		bool success = false;
HXLINE(  79)		{
HXLINE(  79)			int _g = 0;
HXDLIN(  79)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  79)			while((_g < _g1->length)){
HXLINE(  79)				::Dynamic input = _g1->__get(_g);
HXDLIN(  79)				_g = (_g + 1);
HXLINE(  81)				if (::hx::IsInstanceEq( input,Old )) {
HXLINE(  83)					this->list[i] = New;
HXLINE(  84)					success = true;
HXLINE(  85)					goto _hx_goto_5;
            				}
HXLINE(  87)				i = (i + 1);
            			}
            			_hx_goto_5:;
            		}
HXLINE(  90)		if (success) {
HXLINE(  92)			return New;
            		}
HXLINE(  94)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(InputFrontEnd_obj,replace_flixel_input_mouse_FlxMouse,return )

 ::flixel::input::mouse::FlxMouse InputFrontEnd_obj::add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_31_add_flixel_input_mouse_FlxMouse)
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  33)			while((_g < _g1->length)){
HXLINE(  33)				::Dynamic input = _g1->__get(_g);
HXDLIN(  33)				_g = (_g + 1);
HXLINE(  35)				bool Simple = true;
HXDLIN(  35)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  35)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  37)					return Input;
            				}
            			}
            		}
HXLINE(  41)		this->list->push(Input);
HXLINE(  42)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_mouse_FlxMouse,return )

 ::flixel::input::keyboard::FlxKeyboard InputFrontEnd_obj::add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_31_add_flixel_input_keyboard_FlxKeyboard)
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  33)			while((_g < _g1->length)){
HXLINE(  33)				::Dynamic input = _g1->__get(_g);
HXDLIN(  33)				_g = (_g + 1);
HXLINE(  35)				bool Simple = true;
HXDLIN(  35)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  35)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  37)					return Input;
            				}
            			}
            		}
HXLINE(  41)		this->list->push(Input);
HXLINE(  42)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_keyboard_FlxKeyboard,return )

void InputFrontEnd_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_99_reset)
HXDLIN(  99)		int _g = 0;
HXDLIN(  99)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  99)		while((_g < _g1->length)){
HXDLIN(  99)			::Dynamic input = _g1->__get(_g);
HXDLIN(  99)			_g = (_g + 1);
HXLINE( 101)			::flixel::input::IFlxInputManager_obj::reset(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,reset,(void))

void InputFrontEnd_obj::update(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_111_update)
HXDLIN( 111)		int _g = 0;
HXDLIN( 111)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 111)		while((_g < _g1->length)){
HXDLIN( 111)			::Dynamic input = _g1->__get(_g);
HXDLIN( 111)			_g = (_g + 1);
HXLINE( 113)			::flixel::input::IFlxInputManager_obj::update(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,update,(void))

void InputFrontEnd_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_120_onFocus)
HXDLIN( 120)		int _g = 0;
HXDLIN( 120)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 120)		while((_g < _g1->length)){
HXDLIN( 120)			::Dynamic input = _g1->__get(_g);
HXDLIN( 120)			_g = (_g + 1);
HXLINE( 122)			::flixel::input::IFlxInputManager_obj::onFocus(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocus,(void))

void InputFrontEnd_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_129_onFocusLost)
HXDLIN( 129)		int _g = 0;
HXDLIN( 129)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 129)		while((_g < _g1->length)){
HXDLIN( 129)			::Dynamic input = _g1->__get(_g);
HXDLIN( 129)			_g = (_g + 1);
HXLINE( 131)			::flixel::input::IFlxInputManager_obj::onFocusLost(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocusLost,(void))

void InputFrontEnd_obj::onStateSwitch(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_139_onStateSwitch)
HXDLIN( 139)		if (this->resetOnStateSwitch) {
HXLINE( 141)			this->reset();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onStateSwitch,(void))

void InputFrontEnd_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_147_destroy)
HXDLIN( 147)		int _g = 0;
HXDLIN( 147)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 147)		while((_g < _g1->length)){
HXDLIN( 147)			::Dynamic input = _g1->__get(_g);
HXDLIN( 147)			_g = (_g + 1);
HXLINE( 149)			input = ::flixel::util::FlxDestroyUtil_obj::destroy(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,destroy,(void))


::hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__new() {
	::hx::ObjectPtr< InputFrontEnd_obj > __this = new InputFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InputFrontEnd_obj *__this = (InputFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InputFrontEnd_obj), true, "flixel.system.frontEnds.InputFrontEnd"));
	*(void **)__this = InputFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InputFrontEnd_obj::InputFrontEnd_obj()
{
}

void InputFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
	HX_MARK_END_CLASS();
}

void InputFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
}

::hx::Val InputFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return ::hx::Val( onStateSwitch_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { return ::hx::Val( resetOnStateSwitch ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_input_mouse_FlxMouse") ) { return ::hx::Val( add_flixel_input_mouse_FlxMouse_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"replace_flixel_input_mouse_FlxMouse") ) { return ::hx::Val( replace_flixel_input_mouse_FlxMouse_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_input_keyboard_FlxKeyboard") ) { return ::hx::Val( add_flixel_input_keyboard_FlxKeyboard_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"add_flixel_input_touch_FlxTouchManager") ) { return ::hx::Val( add_flixel_input_touch_FlxTouchManager_dyn() ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"add_flixel_input_gamepad_FlxGamepadManager") ) { return ::hx::Val( add_flixel_input_gamepad_FlxGamepadManager_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InputFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { resetOnStateSwitch=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("resetOnStateSwitch",b7,84,01,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InputFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(InputFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsBool,(int)offsetof(InputFrontEnd_obj,resetOnStateSwitch),HX_("resetOnStateSwitch",b7,84,01,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InputFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String InputFrontEnd_obj_sMemberFields[] = {
	HX_("add_flixel_input_gamepad_FlxGamepadManager",26,a8,4b,80),
	HX_("add_flixel_input_touch_FlxTouchManager",e6,db,13,1c),
	HX_("replace_flixel_input_mouse_FlxMouse",1a,65,d5,e3),
	HX_("add_flixel_input_mouse_FlxMouse",87,28,57,a0),
	HX_("add_flixel_input_keyboard_FlxKeyboard",3b,4b,11,84),
	HX_("list",5e,1c,b3,47),
	HX_("resetOnStateSwitch",b7,84,01,3e),
	HX_("reset",cf,49,c8,e6),
	HX_("update",09,86,05,87),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onStateSwitch",06,b4,ec,a2),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class InputFrontEnd_obj::__mClass;

void InputFrontEnd_obj::__register()
{
	InputFrontEnd_obj _hx_dummy;
	InputFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.InputFrontEnd",62,30,2d,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InputFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InputFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds