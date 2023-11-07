#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_Anchor
#include <flixel/addons/ui/Anchor.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISubState
#include <flixel/addons/ui/FlxUISubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITooltip
#include <flixel/addons/ui/FlxUITooltip.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITooltipManager
#include <flixel/addons/ui/FlxUITooltipManager.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui__FlxUITooltipManager_FlxUITooltipEntry
#include <flixel/addons/ui/_FlxUITooltipManager/FlxUITooltipEntry.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_900bbcecd25701b4_19_new,"flixel.addons.ui.FlxUITooltipManager","new",0x04a1a751,"flixel.addons.ui.FlxUITooltipManager.new","flixel/addons/ui/FlxUITooltipManager.hx",19,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_72_init,"flixel.addons.ui.FlxUITooltipManager","init",0x058976ff,"flixel.addons.ui.FlxUITooltipManager.init","flixel/addons/ui/FlxUITooltipManager.hx",72,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_90_destroy,"flixel.addons.ui.FlxUITooltipManager","destroy",0x5708d06b,"flixel.addons.ui.FlxUITooltipManager.destroy","flixel/addons/ui/FlxUITooltipManager.hx",90,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_106_clear,"flixel.addons.ui.FlxUITooltipManager","clear",0x5d01a6be,"flixel.addons.ui.FlxUITooltipManager.clear","flixel/addons/ui/FlxUITooltipManager.hx",106,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_121_hideCurrent,"flixel.addons.ui.FlxUITooltipManager","hideCurrent",0xc5a73b88,"flixel.addons.ui.FlxUITooltipManager.hideCurrent","flixel/addons/ui/FlxUITooltipManager.hx",121,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_130_isVisible,"flixel.addons.ui.FlxUITooltipManager","isVisible",0x7a2a1759,"flixel.addons.ui.FlxUITooltipManager.isVisible","flixel/addons/ui/FlxUITooltipManager.hx",130,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_140_doesCurrentTooltipBelongTo,"flixel.addons.ui.FlxUITooltipManager","doesCurrentTooltipBelongTo",0x652b1ecc,"flixel.addons.ui.FlxUITooltipManager.doesCurrentTooltipBelongTo","flixel/addons/ui/FlxUITooltipManager.hx",140,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_183_stickyTooltipFor,"flixel.addons.ui.FlxUITooltipManager","stickyTooltipFor",0xf3819abe,"flixel.addons.ui.FlxUITooltipManager.stickyTooltipFor","flixel/addons/ui/FlxUITooltipManager.hx",183,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_198_showTooltipFor,"flixel.addons.ui.FlxUITooltipManager","showTooltipFor",0x9adf89d2,"flixel.addons.ui.FlxUITooltipManager.showTooltipFor","flixel/addons/ui/FlxUITooltipManager.hx",198,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_223_enableTooltipFor,"flixel.addons.ui.FlxUITooltipManager","enableTooltipFor",0x662d9098,"flixel.addons.ui.FlxUITooltipManager.enableTooltipFor","flixel/addons/ui/FlxUITooltipManager.hx",223,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_243_add,"flixel.addons.ui.FlxUITooltipManager","add",0x0497c912,"flixel.addons.ui.FlxUITooltipManager.add","flixel/addons/ui/FlxUITooltipManager.hx",243,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_325_remove,"flixel.addons.ui.FlxUITooltipManager","remove",0x0150f1f3,"flixel.addons.ui.FlxUITooltipManager.remove","flixel/addons/ui/FlxUITooltipManager.hx",325,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_352_update,"flixel.addons.ui.FlxUITooltipManager","update",0x83cddbb8,"flixel.addons.ui.FlxUITooltipManager.update","flixel/addons/ui/FlxUITooltipManager.hx",352,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_422_hide,"flixel.addons.ui.FlxUITooltipManager","hide",0x04dc70b1,"flixel.addons.ui.FlxUITooltipManager.hide","flixel/addons/ui/FlxUITooltipManager.hx",422,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_438_findThing,"flixel.addons.ui.FlxUITooltipManager","findThing",0xd187daa6,"flixel.addons.ui.FlxUITooltipManager.findThing","flixel/addons/ui/FlxUITooltipManager.hx",438,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_453_findBtn,"flixel.addons.ui.FlxUITooltipManager","findBtn",0x57e87714,"flixel.addons.ui.FlxUITooltipManager.findBtn","flixel/addons/ui/FlxUITooltipManager.hx",453,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_467_findObj,"flixel.addons.ui.FlxUITooltipManager","findObj",0x57f244af,"flixel.addons.ui.FlxUITooltipManager.findObj","flixel/addons/ui/FlxUITooltipManager.hx",467,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_481_set_fixedPosition,"flixel.addons.ui.FlxUITooltipManager","set_fixedPosition",0xe62a8851,"flixel.addons.ui.FlxUITooltipManager.set_fixedPosition","flixel/addons/ui/FlxUITooltipManager.hx",481,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_492_set_showTooltipArrow,"flixel.addons.ui.FlxUITooltipManager","set_showTooltipArrow",0x3bb5c0cf,"flixel.addons.ui.FlxUITooltipManager.set_showTooltipArrow","flixel/addons/ui/FlxUITooltipManager.hx",492,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_502_show,"flixel.addons.ui.FlxUITooltipManager","show",0x0c2110ec,"flixel.addons.ui.FlxUITooltipManager.show","flixel/addons/ui/FlxUITooltipManager.hx",502,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_597_checkAutoFlip,"flixel.addons.ui.FlxUITooltipManager","checkAutoFlip",0x94d6acd5,"flixel.addons.ui.FlxUITooltipManager.checkAutoFlip","flixel/addons/ui/FlxUITooltipManager.hx",597,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_900bbcecd25701b4_615_set_cameras,"flixel.addons.ui.FlxUITooltipManager","set_cameras",0x6ff0a142,"flixel.addons.ui.FlxUITooltipManager.set_cameras","flixel/addons/ui/FlxUITooltipManager.hx",615,0x892d3fe0)
namespace flixel{
namespace addons{
namespace ui{

void FlxUITooltipManager_obj::__construct( ::flixel::addons::ui::FlxUIState State, ::flixel::addons::ui::FlxUISubState SubState){
            	HX_GC_STACKFRAME(&_hx_pos_900bbcecd25701b4_19_new)
HXLINE( 413)		this->current = -1;
HXLINE( 404)		this->_init = false;
HXLINE(  43)		this->delay = ((Float)0.1);
HXLINE(  42)		this->showOnClick = false;
HXLINE(  40)		this->defaultStyle = null();
HXLINE(  35)		this->fixedPosition = null();
HXLINE(  29)		this->defaultAnchor = null();
HXLINE(  24)		this->autoFlipAnchor = true;
HXLINE(  53)		if (::hx::IsNotNull( State )) {
HXLINE(  55)			this->state = State;
            		}
            		else {
HXLINE(  57)			if (::hx::IsNotNull( SubState )) {
HXLINE(  59)				this->subState = SubState;
            			}
            		}
HXLINE(  61)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  62)		this->tooltip =  ::flixel::addons::ui::FlxUITooltip_obj::__alloc( HX_CTX ,100,50,null(),null());
HXLINE(  63)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,0,0);
HXDLIN(  63)		this->lastPosition = this1;
HXLINE(  64)		this->defaultAnchor = this->tooltip->anchor->clone();
HXLINE(  65)		this->defaultStyle = ::flixel::addons::ui::FlxUITooltip_obj::cloneStyle(this->tooltip->style);
            	}

Dynamic FlxUITooltipManager_obj::__CreateEmpty() { return new FlxUITooltipManager_obj; }

void *FlxUITooltipManager_obj::_hx_vtable = 0;

Dynamic FlxUITooltipManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUITooltipManager_obj > _hx_result = new FlxUITooltipManager_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxUITooltipManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5beea589;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_ui_FlxUITooltipManager__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITooltipManager_obj::destroy,
};

void *FlxUITooltipManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_ui_FlxUITooltipManager__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxUITooltipManager_obj::init(){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_72_init)
HXLINE(  73)		 ::flixel::addons::ui::FlxUI ui;
HXDLIN(  73)		if (::hx::IsNotNull( this->state )) {
HXLINE(  73)			ui = this->state->_ui;
            		}
            		else {
HXLINE(  73)			if (::hx::IsNotNull( this->subState )) {
HXLINE(  73)				ui = this->subState->_ui;
            			}
            			else {
HXLINE(  73)				ui = null();
            			}
            		}
HXLINE(  74)		if (::hx::IsNull( ui )) {
HXLINE(  76)			return;
            		}
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (::hx::IsNotNull( ui )) {
HXLINE(  81)			_hx_tmp = ::hx::IsNotNull( ui->getDefinition(HX_("default:tooltip",ca,89,56,af),null()) );
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  83)			 ::Dynamic tt = ui->_loadTooltipData(null());
HXLINE(  84)			this->defaultStyle = ::flixel::addons::ui::FlxUITooltip_obj::cloneStyle(tt->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic));
HXLINE(  85)			this->tooltip->set_style(this->defaultStyle);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITooltipManager_obj,init,(void))

void FlxUITooltipManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_90_destroy)
HXLINE(  91)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->list);
HXLINE(  92)		this->list = null();
HXLINE(  93)		this->tooltip = null();
HXLINE(  94)		this->lastPosition = null();
HXLINE(  95)		this->state = null();
HXLINE(  96)		this->subState = null();
HXLINE(  97)		this->defaultAnchor = null();
HXLINE(  98)		this->defaultStyle = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITooltipManager_obj,destroy,(void))

void FlxUITooltipManager_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_106_clear)
HXDLIN( 106)		while((this->list->length > 0)){
HXLINE( 108)			 ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry entry = this->list->pop().StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >();
HXLINE( 109)			if (::hx::IsNotNull( entry )) {
HXLINE( 111)				entry->destroy();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITooltipManager_obj,clear,(void))

void FlxUITooltipManager_obj::hideCurrent(){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_121_hideCurrent)
HXDLIN( 121)		if ((this->current > 0)) {
HXLINE( 123)			this->hide(this->current);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITooltipManager_obj,hideCurrent,(void))

bool FlxUITooltipManager_obj::isVisible(){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_130_isVisible)
HXDLIN( 130)		return (this->current > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITooltipManager_obj,isVisible,return )

bool FlxUITooltipManager_obj::doesCurrentTooltipBelongTo( ::flixel::FlxSprite thing,::hx::Null< bool >  __o_checkChildren){
            		bool checkChildren = __o_checkChildren.Default(true);
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_140_doesCurrentTooltipBelongTo)
HXLINE( 141)		if (::Std_obj::isOfType(thing,::hx::ClassOf< ::flixel::addons::ui::FlxUIGroup >())) {
HXLINE( 143)			int i = this->findObj(( ( ::flixel::FlxObject)(thing) ));
HXLINE( 144)			if ((i != -1)) {
HXLINE( 145)				return (i == this->current);
            			}
HXLINE( 147)			if (checkChildren) {
HXLINE( 149)				 ::flixel::addons::ui::FlxUIGroup fuig = ( ( ::flixel::addons::ui::FlxUIGroup)(thing) );
HXLINE( 150)				{
HXLINE( 150)					int _g = 0;
HXDLIN( 150)					::Array< ::Dynamic> _g1 = fuig->group->members;
HXDLIN( 150)					while((_g < _g1->length)){
HXLINE( 150)						 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 150)						_g = (_g + 1);
HXLINE( 152)						if (this->doesCurrentTooltipBelongTo(member,null())) {
HXLINE( 154)							return true;
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 159)			if (::Std_obj::isOfType(thing,::hx::ClassOf< ::flixel::addons::ui::FlxUIButton >())) {
HXLINE( 161)				int i = this->findBtn(thing);
HXLINE( 162)				if ((i == -1)) {
HXLINE( 163)					return false;
            				}
HXLINE( 164)				return (i == this->current);
            			}
            			else {
HXLINE( 166)				if (::Std_obj::isOfType(thing,::hx::ClassOf< ::flixel::FlxObject >())) {
HXLINE( 168)					int i = this->findObj(( ( ::flixel::FlxObject)(thing) ));
HXLINE( 169)					if ((i == -1)) {
HXLINE( 170)						return false;
            					}
HXLINE( 171)					return (i == this->current);
            				}
            			}
            		}
HXLINE( 173)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITooltipManager_obj,doesCurrentTooltipBelongTo,return )

void FlxUITooltipManager_obj::stickyTooltipFor( ::flixel::FlxObject thing,::hx::Null< bool >  __o_sticky){
            		bool sticky = __o_sticky.Default(true);
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_183_stickyTooltipFor)
HXLINE( 184)		int i = this->findThing(thing);
HXLINE( 185)		if ((i != -1)) {
HXLINE( 187)			this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->sticky = sticky;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITooltipManager_obj,stickyTooltipFor,(void))

void FlxUITooltipManager_obj::showTooltipFor( ::flixel::FlxObject thing,::hx::Null< bool >  __o_value){
            		bool value = __o_value.Default(true);
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_198_showTooltipFor)
HXLINE( 199)		int i = this->findThing(thing);
HXLINE( 200)		if ((i != -1)) {
HXLINE( 202)			this->current = -1;
HXLINE( 204)			if (value) {
HXLINE( 206)				this->show(i);
            			}
            			else {
HXLINE( 210)				this->hide(i);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITooltipManager_obj,showTooltipFor,(void))

bool FlxUITooltipManager_obj::enableTooltipFor( ::flixel::FlxObject thing,bool enabled){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_223_enableTooltipFor)
HXLINE( 224)		int i = this->findThing(thing);
HXLINE( 225)		bool _hx_tmp;
HXDLIN( 225)		if ((i >= 0)) {
HXLINE( 225)			_hx_tmp = (i < this->list->length);
            		}
            		else {
HXLINE( 225)			_hx_tmp = false;
            		}
HXDLIN( 225)		if (_hx_tmp) {
HXLINE( 227)			 ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry entry = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >();
HXLINE( 228)			entry->enabled = enabled;
HXLINE( 229)			return true;
            		}
HXLINE( 231)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITooltipManager_obj,enableTooltipFor,return )

void FlxUITooltipManager_obj::add( ::flixel::FlxObject thing, ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_900bbcecd25701b4_243_add)
HXLINE( 244)		if (this->_init) {
HXLINE( 246)			data->__SetField(HX_("style",31,a5,1d,84),::flixel::addons::ui::FlxUITooltip_obj::styleFix(data->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic),this->defaultStyle),::hx::paccDynamic);
            		}
HXLINE( 249)		::Dynamic btn = null();
HXLINE( 250)		int i = -1;
HXLINE( 251)		if (::Std_obj::isOfType(thing,::hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIButton >())) {
HXLINE( 253)			btn = thing;
HXLINE( 255)			i = this->findBtn(btn);
HXLINE( 257)			if ((i == -1)) {
HXLINE( 260)				::Array< ::Dynamic> _hx_tmp = this->list;
HXDLIN( 260)				_hx_tmp->push( ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry_obj::__alloc( HX_CTX ,btn,data,null()));
            			}
            			else {
HXLINE( 265)				this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->data = data;
HXLINE( 266)				this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->count = ( (Float)(0) );
            			}
            		}
            		else {
HXLINE( 271)			i = this->findObj(thing);
HXLINE( 273)			if ((i == -1)) {
HXLINE( 278)				 ::flixel::addons::ui::FlxUIButton b =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,HX_("",00,00,00,00),null(),false,true,null());
HXLINE( 279)				Float _hx_tmp = thing->get_width();
HXDLIN( 279)				b->resize(_hx_tmp,thing->get_height());
HXLINE( 281)				btn = b;
HXLINE( 285)				::flixel::IFlxSprite_obj::set_x(btn,thing->x);
HXLINE( 286)				::flixel::IFlxSprite_obj::set_y(btn,thing->y);
HXLINE( 287)				::flixel::addons::ui::interfaces::IFlxUIWidget_obj::set_width(btn,thing->get_width());
HXLINE( 288)				::flixel::addons::ui::interfaces::IFlxUIWidget_obj::set_height(btn,thing->get_height());
HXLINE( 289)				{
HXLINE( 289)					 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::math::FlxBasePoint)(btn->__Field(HX_("scrollFactor",bc,ec,cf,3b),::hx::paccDynamic)) );
HXDLIN( 289)					Float y = thing->scrollFactor->y;
HXDLIN( 289)					this1->set_x(thing->scrollFactor->x);
HXDLIN( 289)					this1->set_y(y);
            				}
HXLINE( 292)				if (::hx::IsNotNull( this->state )) {
HXLINE( 294)					this->state->add(( ( ::flixel::FlxBasic)(btn) )).StaticCast<  ::flixel::FlxBasic >();
            				}
            				else {
HXLINE( 296)					if (::hx::IsNotNull( this->subState )) {
HXLINE( 298)						this->subState->add(( ( ::flixel::FlxBasic)(btn) )).StaticCast<  ::flixel::FlxBasic >();
            					}
            				}
HXLINE( 302)				::Array< ::Dynamic> _hx_tmp1 = this->list;
HXDLIN( 302)				_hx_tmp1->push( ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry_obj::__alloc( HX_CTX ,btn,data,thing));
            			}
            			else {
HXLINE( 308)				this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->data = data;
HXLINE( 309)				this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->count = ( (Float)(0) );
HXLINE( 311)				::flixel::IFlxSprite_obj::set_x(this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->btn,thing->x);
HXLINE( 312)				::flixel::IFlxSprite_obj::set_y(this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->btn,thing->y);
HXLINE( 313)				::Dynamic _hx_tmp = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->btn;
HXDLIN( 313)				::flixel::addons::ui::interfaces::IFlxUIWidget_obj::set_width(_hx_tmp,thing->get_width());
HXLINE( 314)				::Dynamic _hx_tmp1 = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->btn;
HXDLIN( 314)				::flixel::addons::ui::interfaces::IFlxUIWidget_obj::set_height(_hx_tmp1,thing->get_height());
HXLINE( 315)				{
HXLINE( 315)					 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::math::FlxBasePoint)(this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->btn->__Field(HX_("scrollFactor",bc,ec,cf,3b),::hx::paccDynamic)) );
HXDLIN( 315)					Float y = thing->scrollFactor->y;
HXDLIN( 315)					this1->set_x(thing->scrollFactor->x);
HXDLIN( 315)					this1->set_y(y);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITooltipManager_obj,add,(void))

void FlxUITooltipManager_obj::remove( ::flixel::FlxObject thing){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_325_remove)
HXLINE( 326)		::Dynamic btn = null();
HXLINE( 327)		int i = -1;
HXLINE( 328)		if (::Std_obj::isOfType(thing,::hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIButton >())) {
HXLINE( 330)			btn = thing;
HXLINE( 331)			i = this->findBtn(btn);
            		}
            		else {
HXLINE( 335)			i = this->findObj(thing);
            		}
HXLINE( 337)		if ((i != -1)) {
HXLINE( 339)			if ((this->current == i)) {
HXLINE( 341)				this->hide(this->current);
            			}
HXLINE( 343)			 ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry entry = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >();
HXLINE( 344)			this->list->removeRange(i,1);
HXLINE( 345)			entry->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,remove,(void))

void FlxUITooltipManager_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_352_update)
HXDLIN( 352)		int _g = 0;
HXDLIN( 352)		int _g1 = this->list->length;
HXDLIN( 352)		while((_g < _g1)){
HXDLIN( 352)			_g = (_g + 1);
HXDLIN( 352)			int i = (_g - 1);
HXLINE( 354)			::Dynamic btn = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->btn;
HXLINE( 355)			 ::flixel::FlxObject obj = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->obj;
HXLINE( 357)			if ((this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->enabled == false)) {
HXLINE( 359)				if ((this->current == i)) {
HXLINE( 361)					this->hide(i);
            				}
HXLINE( 363)				this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->count = ( (Float)(0) );
HXLINE( 364)				continue;
            			}
HXLINE( 367)			if (::hx::IsNotNull( obj )) {
HXLINE( 369)				::flixel::IFlxSprite_obj::set_x(btn,obj->x);
HXLINE( 370)				::flixel::IFlxSprite_obj::set_y(btn,obj->y);
HXLINE( 371)				::flixel::addons::ui::interfaces::IFlxUIWidget_obj::set_width(btn,obj->get_width());
HXLINE( 372)				::flixel::addons::ui::interfaces::IFlxUIWidget_obj::set_height(btn,obj->get_height());
HXLINE( 373)				::flixel::IFlxBasic_obj::set_visible(btn,obj->visible);
            			}
HXLINE( 376)			bool _hx_tmp;
HXDLIN( 376)			if ((this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->sticky == false)) {
HXLINE( 376)				bool _hx_tmp1;
HXDLIN( 376)				if (::hx::IsNotEq( false,btn->__Field(HX_("visible",72,78,24,a3),::hx::paccDynamic) )) {
HXLINE( 376)					_hx_tmp1 = ::flixel::addons::ui::interfaces::IFlxUIButton_obj::get_justMousedOut(btn);
            				}
            				else {
HXLINE( 376)					_hx_tmp1 = true;
            				}
HXDLIN( 376)				if (!(_hx_tmp1)) {
HXLINE( 376)					_hx_tmp = ::flixel::addons::ui::interfaces::IFlxUIButton_obj::get_mouseIsOut(btn);
            				}
            				else {
HXLINE( 376)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 376)				_hx_tmp = false;
            			}
HXDLIN( 376)			if (_hx_tmp) {
HXLINE( 378)				this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->count = ( (Float)(0) );
HXLINE( 379)				this->hide(i);
            			}
            			else {
HXLINE( 381)				bool _hx_tmp;
HXDLIN( 381)				if (!(::flixel::addons::ui::interfaces::IFlxUIButton_obj::get_justMousedOver(btn))) {
HXLINE( 381)					_hx_tmp = ::flixel::addons::ui::interfaces::IFlxUIButton_obj::get_mouseIsOver(btn);
            				}
            				else {
HXLINE( 381)					_hx_tmp = true;
            				}
HXDLIN( 381)				if (_hx_tmp) {
HXLINE( 383)					if (::flixel::addons::ui::interfaces::IFlxUIButton_obj::get_mouseIsOver(btn)) {
HXLINE( 385)						 ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry fh = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >();
HXDLIN( 385)						fh->count = (fh->count + elapsed);
            					}
            				}
            			}
HXLINE( 389)			bool _hx_tmp1;
HXDLIN( 389)			if (!((this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->count > this->delay))) {
HXLINE( 389)				if (::hx::IsGreaterEq( this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->data->__Field(HX_("delay",83,d7,26,d7),::hx::paccDynamic),0 )) {
HXLINE( 389)					_hx_tmp1 = ::hx::IsGreater( this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->count,this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->data->__Field(HX_("delay",83,d7,26,d7),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 389)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXLINE( 389)				_hx_tmp1 = true;
            			}
HXDLIN( 389)			if (_hx_tmp1) {
HXLINE( 391)				if ((this->current != i)) {
HXLINE( 393)					this->show(i);
            				}
            				else {
HXLINE( 395)					if (( (bool)(this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->data->__Field(HX_("moving",8e,f2,af,cc),::hx::paccDynamic)) )) {
HXLINE( 397)						this->show(i);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,update,(void))

void FlxUITooltipManager_obj::hide(int i){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_422_hide)
HXDLIN( 422)		if ((this->current == i)) {
HXLINE( 424)			this->tooltip->hide();
HXLINE( 425)			if (::hx::IsNotNull( this->state )) {
HXLINE( 427)				this->state->remove(this->tooltip,true).StaticCast<  ::flixel::FlxBasic >();
            			}
HXLINE( 429)			if (::hx::IsNotNull( this->subState )) {
HXLINE( 431)				this->subState->remove(this->tooltip,true).StaticCast<  ::flixel::FlxBasic >();
            			}
HXLINE( 433)			this->current = -1;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,hide,(void))

int FlxUITooltipManager_obj::findThing( ::flixel::FlxObject thing){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_438_findThing)
HXLINE( 439)		if (::hx::IsNull( thing )) {
HXLINE( 440)			return -1;
            		}
HXLINE( 441)		{
HXLINE( 441)			int _g = 0;
HXDLIN( 441)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 441)			while((_g < _g1->length)){
HXLINE( 441)				 ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry entry = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >();
HXDLIN( 441)				_g = (_g + 1);
HXLINE( 443)				bool _hx_tmp;
HXDLIN( 443)				if (::hx::IsInstanceNotEq( entry->obj,thing )) {
HXLINE( 443)					if (::Std_obj::isOfType(thing,::hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIButton >())) {
HXLINE( 443)						_hx_tmp = ::hx::IsInstanceEq(  ::hx::interface_check(thing,0x2772d80c),entry->btn );
            					}
            					else {
HXLINE( 443)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 443)					_hx_tmp = true;
            				}
HXDLIN( 443)				if (_hx_tmp) {
HXLINE( 445)					return this->list->indexOf(entry,null());
            				}
            			}
            		}
HXLINE( 449)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,findThing,return )

int FlxUITooltipManager_obj::findBtn(::Dynamic btn){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_453_findBtn)
HXLINE( 454)		if (::hx::IsNull( btn )) {
HXLINE( 455)			return -1;
            		}
HXLINE( 456)		{
HXLINE( 456)			int _g = 0;
HXDLIN( 456)			int _g1 = this->list->length;
HXDLIN( 456)			while((_g < _g1)){
HXLINE( 456)				_g = (_g + 1);
HXDLIN( 456)				int i = (_g - 1);
HXLINE( 458)				bool _hx_tmp;
HXDLIN( 458)				if (::hx::IsNotNull( this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >() )) {
HXLINE( 458)					_hx_tmp = ::hx::IsInstanceEq( this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->btn,btn );
            				}
            				else {
HXLINE( 458)					_hx_tmp = false;
            				}
HXDLIN( 458)				if (_hx_tmp) {
HXLINE( 460)					return i;
            				}
            			}
            		}
HXLINE( 463)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,findBtn,return )

int FlxUITooltipManager_obj::findObj( ::flixel::FlxObject obj){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_467_findObj)
HXLINE( 468)		if (::hx::IsNull( obj )) {
HXLINE( 469)			return -1;
            		}
HXLINE( 470)		{
HXLINE( 470)			int _g = 0;
HXDLIN( 470)			int _g1 = this->list->length;
HXDLIN( 470)			while((_g < _g1)){
HXLINE( 470)				_g = (_g + 1);
HXDLIN( 470)				int i = (_g - 1);
HXLINE( 472)				bool _hx_tmp;
HXDLIN( 472)				if (::hx::IsNotNull( this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >() )) {
HXLINE( 472)					_hx_tmp = ::hx::IsInstanceEq( this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->obj,obj );
            				}
            				else {
HXLINE( 472)					_hx_tmp = false;
            				}
HXDLIN( 472)				if (_hx_tmp) {
HXLINE( 474)					return i;
            				}
            			}
            		}
HXLINE( 477)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,findObj,return )

 ::Dynamic FlxUITooltipManager_obj::set_fixedPosition( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_481_set_fixedPosition)
HXLINE( 482)		this->fixedPosition = value;
HXLINE( 483)		bool _hx_tmp;
HXDLIN( 483)		if (::hx::IsNotNull( this->tooltip )) {
HXLINE( 483)			_hx_tmp = this->tooltip->visible;
            		}
            		else {
HXLINE( 483)			_hx_tmp = false;
            		}
HXDLIN( 483)		if (_hx_tmp) {
HXLINE( 485)			this->show(this->current);
            		}
HXLINE( 487)		return this->fixedPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,set_fixedPosition,return )

bool FlxUITooltipManager_obj::set_showTooltipArrow(bool b){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_492_set_showTooltipArrow)
HXLINE( 493)		this->showTooltipArrow = b;
HXLINE( 494)		bool _hx_tmp;
HXDLIN( 494)		if (::hx::IsNotNull( this->tooltip )) {
HXLINE( 494)			_hx_tmp = this->tooltip->visible;
            		}
            		else {
HXLINE( 494)			_hx_tmp = false;
            		}
HXDLIN( 494)		if (_hx_tmp) {
HXLINE( 496)			 ::flixel::FlxSprite _hx_tmp = this->tooltip->_arrow;
HXDLIN( 496)			_hx_tmp->set_visible(this->tooltip->_arrowBkg->set_visible(b));
            		}
HXLINE( 498)		return this->showTooltipArrow;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,set_showTooltipArrow,return )

void FlxUITooltipManager_obj::show(int i){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_502_show)
HXLINE( 503)		bool _hx_tmp;
HXDLIN( 503)		if ((i >= 0)) {
HXLINE( 503)			_hx_tmp = (i >= this->list->length);
            		}
            		else {
HXLINE( 503)			_hx_tmp = true;
            		}
HXDLIN( 503)		if (_hx_tmp) {
HXLINE( 504)			return;
            		}
HXLINE( 505)		::Dynamic btn = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->btn;
HXLINE( 507)		bool _hx_tmp1;
HXDLIN( 507)		if (::hx::IsNotEq( btn->__Field(HX_("visible",72,78,24,a3),::hx::paccDynamic),false )) {
HXLINE( 507)			if (::hx::IsNotNull( this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->obj )) {
HXLINE( 507)				_hx_tmp1 = (this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->obj->visible == false);
            			}
            			else {
HXLINE( 507)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 507)			_hx_tmp1 = true;
            		}
HXDLIN( 507)		if (_hx_tmp1) {
HXLINE( 509)			return;
            		}
HXLINE( 512)		if ((this->current == i)) {
HXLINE( 514)			Float deltaX = (( (Float)(btn->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ) - this->lastPosition->x);
HXLINE( 515)			Float deltaY = (( (Float)(btn->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ) - this->lastPosition->y);
HXLINE( 517)			this->lastPosition->set_x(( (Float)(btn->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE( 518)			this->lastPosition->set_y(( (Float)(btn->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
HXLINE( 520)			 ::flixel::addons::ui::FlxUITooltip fh = this->tooltip;
HXDLIN( 520)			fh->set_x((fh->x + deltaX));
HXLINE( 521)			 ::flixel::addons::ui::FlxUITooltip fh1 = this->tooltip;
HXDLIN( 521)			fh1->set_y((fh1->y + deltaY));
HXLINE( 522)			return;
            		}
HXLINE( 525)		this->current = i;
HXLINE( 527)		 ::Dynamic data = this->list->__get(i).StaticCast<  ::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry >()->data;
HXLINE( 529)		if (::hx::IsNotEq( data->__Field(HX_("init",10,3b,bb,45),::hx::paccDynamic),true )) {
HXLINE( 531)			data->__SetField(HX_("style",31,a5,1d,84),::flixel::addons::ui::FlxUITooltip_obj::styleFix(data->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic),this->defaultStyle),::hx::paccDynamic);
HXLINE( 532)			data->__SetField(HX_("init",10,3b,bb,45),true,::hx::paccDynamic);
            		}
HXLINE( 535)		bool autoSizeVertical = true;
HXLINE( 536)		bool autoSizeHorizontal = true;
HXLINE( 537)		if (::hx::IsNotNull( data->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic) )) {
HXLINE( 539)			this->tooltip->set_style(data->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic));
HXLINE( 540)			autoSizeVertical = ( (bool)( ::Dynamic(data->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic))->__Field(HX_("autoSizeVertical",66,58,0d,52),::hx::paccDynamic)) );
HXLINE( 541)			autoSizeHorizontal = ( (bool)( ::Dynamic(data->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic))->__Field(HX_("autoSizeHorizontal",d4,74,ce,9f),::hx::paccDynamic)) );
            		}
HXLINE( 544)		if (::hx::IsNotNull( data->__Field(HX_("anchor",75,3a,71,60),::hx::paccDynamic) )) {
HXLINE( 546)			this->tooltip->set_anchor(( ( ::flixel::addons::ui::Anchor)(data->__Field(HX_("anchor",75,3a,71,60),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 548)			if (::hx::IsNotNull( this->defaultAnchor )) {
HXLINE( 550)				this->tooltip->set_anchor(this->defaultAnchor);
            			}
            		}
HXLINE( 553)		if (::hx::IsNotNull( this->state )) {
HXLINE( 555)			this->state->add(this->tooltip).StaticCast<  ::flixel::FlxBasic >();
            		}
HXLINE( 557)		if (::hx::IsNotNull( this->subState )) {
HXLINE( 559)			this->subState->add(this->tooltip).StaticCast<  ::flixel::FlxBasic >();
            		}
HXLINE( 562)		this->tooltip->show(( ( ::flixel::FlxObject)(btn) ),( (::String)(data->__Field(HX_("title",98,15,3b,10),::hx::paccDynamic)) ),( (::String)(data->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic)) ),autoSizeVertical,autoSizeHorizontal,null());
HXLINE( 564)		if (::hx::IsNotNull( this->fixedPosition )) {
HXLINE( 566)			( ( ::flixel::addons::ui::Anchor)(this->fixedPosition->__Field(HX_("anchor",75,3a,71,60),::hx::paccDynamic)) )->anchorThing(this->tooltip,( ( ::flixel::FlxObject)(this->fixedPosition->__Field(HX_("object",bf,7e,3f,15),::hx::paccDynamic)) ));
            		}
HXLINE( 569)		if (this->autoFlipAnchor) {
HXLINE( 571)			 ::flixel::addons::ui::Anchor _hx_tmp;
HXDLIN( 571)			if (::hx::IsNotNull( this->fixedPosition )) {
HXLINE( 571)				_hx_tmp = ( ( ::flixel::addons::ui::Anchor)(this->fixedPosition->__Field(HX_("anchor",75,3a,71,60),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 571)				_hx_tmp = null();
            			}
HXDLIN( 571)			if (this->checkAutoFlip(this->tooltip,_hx_tmp)) {
HXLINE( 573)				if (::hx::IsNotNull( this->fixedPosition )) {
HXLINE( 575)					( ( ::flixel::addons::ui::Anchor)(this->fixedPosition->__Field(HX_("anchor",75,3a,71,60),::hx::paccDynamic)) )->anchorThing(this->tooltip,( ( ::flixel::FlxObject)(this->fixedPosition->__Field(HX_("object",bf,7e,3f,15),::hx::paccDynamic)) ));
            				}
            				else {
HXLINE( 579)					this->tooltip->show(( ( ::flixel::FlxObject)(btn) ),( (::String)(data->__Field(HX_("title",98,15,3b,10),::hx::paccDynamic)) ),( (::String)(data->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic)) ),autoSizeVertical,autoSizeHorizontal,this->showTooltipArrow);
            				}
            			}
            		}
HXLINE( 584)		{
HXLINE( 584)			 ::flixel::math::FlxBasePoint this1 = this->lastPosition;
HXDLIN( 584)			Float y = ( (Float)(btn->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 584)			this1->set_x(( (Float)(btn->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXDLIN( 584)			this1->set_y(y);
            		}
HXLINE( 586)		if (::hx::IsNotNull( this->state )) {
HXLINE( 588)			this->state->onShowTooltip(this->tooltip);
            		}
            		else {
HXLINE( 590)			if (::hx::IsNotNull( this->subState )) {
HXLINE( 592)				this->subState->onShowTooltip(this->tooltip);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,show,(void))

bool FlxUITooltipManager_obj::checkAutoFlip( ::flixel::addons::ui::FlxUITooltip tooltip, ::flixel::addons::ui::Anchor anchor){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_597_checkAutoFlip)
HXLINE( 598)		bool flipX;
HXDLIN( 598)		if (!((tooltip->x < 0))) {
HXLINE( 598)			Float tooltip1 = tooltip->x;
HXDLIN( 598)			Float flipX1 = (tooltip1 + tooltip->get_width());
HXDLIN( 598)			flipX = (flipX1 > ::flixel::FlxG_obj::width);
            		}
            		else {
HXLINE( 598)			flipX = true;
            		}
HXLINE( 599)		bool flipY;
HXDLIN( 599)		if (!((tooltip->y < 0))) {
HXLINE( 599)			Float tooltip1 = tooltip->y;
HXDLIN( 599)			Float flipY1 = (tooltip1 + tooltip->get_height());
HXDLIN( 599)			flipY = (flipY1 > ::flixel::FlxG_obj::height);
            		}
            		else {
HXLINE( 599)			flipY = true;
            		}
HXLINE( 601)		bool _hx_tmp;
HXDLIN( 601)		if (!(flipX)) {
HXLINE( 601)			_hx_tmp = flipY;
            		}
            		else {
HXLINE( 601)			_hx_tmp = true;
            		}
HXDLIN( 601)		if (_hx_tmp) {
HXLINE( 603)			if (::hx::IsNull( anchor )) {
HXLINE( 605)				anchor = tooltip->anchor;
            			}
HXLINE( 607)			anchor->getFlipped(flipX,flipY,anchor);
HXLINE( 608)			return true;
            		}
HXLINE( 611)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITooltipManager_obj,checkAutoFlip,return )

::Array< ::Dynamic> FlxUITooltipManager_obj::set_cameras(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_900bbcecd25701b4_615_set_cameras)
HXLINE( 616)		this->tooltip->set_cameras(value);
HXLINE( 617)		return (this->cameras = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITooltipManager_obj,set_cameras,return )


::hx::ObjectPtr< FlxUITooltipManager_obj > FlxUITooltipManager_obj::__new( ::flixel::addons::ui::FlxUIState State, ::flixel::addons::ui::FlxUISubState SubState) {
	::hx::ObjectPtr< FlxUITooltipManager_obj > __this = new FlxUITooltipManager_obj();
	__this->__construct(State,SubState);
	return __this;
}

::hx::ObjectPtr< FlxUITooltipManager_obj > FlxUITooltipManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::ui::FlxUIState State, ::flixel::addons::ui::FlxUISubState SubState) {
	FlxUITooltipManager_obj *__this = (FlxUITooltipManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUITooltipManager_obj), true, "flixel.addons.ui.FlxUITooltipManager"));
	*(void **)__this = FlxUITooltipManager_obj::_hx_vtable;
	__this->__construct(State,SubState);
	return __this;
}

FlxUITooltipManager_obj::FlxUITooltipManager_obj()
{
}

void FlxUITooltipManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITooltipManager);
	HX_MARK_MEMBER_NAME(autoFlipAnchor,"autoFlipAnchor");
	HX_MARK_MEMBER_NAME(defaultAnchor,"defaultAnchor");
	HX_MARK_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_MARK_MEMBER_NAME(defaultStyle,"defaultStyle");
	HX_MARK_MEMBER_NAME(showOnClick,"showOnClick");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(showTooltipArrow,"showTooltipArrow");
	HX_MARK_MEMBER_NAME(cameras,"cameras");
	HX_MARK_MEMBER_NAME(_init,"_init");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(tooltip,"tooltip");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(lastPosition,"lastPosition");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_END_CLASS();
}

void FlxUITooltipManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoFlipAnchor,"autoFlipAnchor");
	HX_VISIT_MEMBER_NAME(defaultAnchor,"defaultAnchor");
	HX_VISIT_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_VISIT_MEMBER_NAME(defaultStyle,"defaultStyle");
	HX_VISIT_MEMBER_NAME(showOnClick,"showOnClick");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(showTooltipArrow,"showTooltipArrow");
	HX_VISIT_MEMBER_NAME(cameras,"cameras");
	HX_VISIT_MEMBER_NAME(_init,"_init");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(tooltip,"tooltip");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(lastPosition,"lastPosition");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(subState,"subState");
}

::hx::Val FlxUITooltipManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"_init") ) { return ::hx::Val( _init ); }
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameras") ) { return ::hx::Val( cameras ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"tooltip") ) { return ::hx::Val( tooltip ); }
		if (HX_FIELD_EQ(inName,"current") ) { return ::hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"findBtn") ) { return ::hx::Val( findBtn_dyn() ); }
		if (HX_FIELD_EQ(inName,"findObj") ) { return ::hx::Val( findObj_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { return ::hx::Val( subState ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isVisible") ) { return ::hx::Val( isVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"findThing") ) { return ::hx::Val( findThing_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showOnClick") ) { return ::hx::Val( showOnClick ); }
		if (HX_FIELD_EQ(inName,"hideCurrent") ) { return ::hx::Val( hideCurrent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return ::hx::Val( set_cameras_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultStyle") ) { return ::hx::Val( defaultStyle ); }
		if (HX_FIELD_EQ(inName,"lastPosition") ) { return ::hx::Val( lastPosition ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultAnchor") ) { return ::hx::Val( defaultAnchor ); }
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { return ::hx::Val( fixedPosition ); }
		if (HX_FIELD_EQ(inName,"checkAutoFlip") ) { return ::hx::Val( checkAutoFlip_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"autoFlipAnchor") ) { return ::hx::Val( autoFlipAnchor ); }
		if (HX_FIELD_EQ(inName,"showTooltipFor") ) { return ::hx::Val( showTooltipFor_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"showTooltipArrow") ) { return ::hx::Val( showTooltipArrow ); }
		if (HX_FIELD_EQ(inName,"stickyTooltipFor") ) { return ::hx::Val( stickyTooltipFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"enableTooltipFor") ) { return ::hx::Val( enableTooltipFor_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_fixedPosition") ) { return ::hx::Val( set_fixedPosition_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_showTooltipArrow") ) { return ::hx::Val( set_showTooltipArrow_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"doesCurrentTooltipBelongTo") ) { return ::hx::Val( doesCurrentTooltipBelongTo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUITooltipManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_init") ) { _init=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::flixel::addons::ui::FlxUIState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameras(inValue.Cast< ::Array< ::Dynamic> >()) );cameras=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tooltip") ) { tooltip=inValue.Cast<  ::flixel::addons::ui::FlxUITooltip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast<  ::flixel::addons::ui::FlxUISubState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showOnClick") ) { showOnClick=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultStyle") ) { defaultStyle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastPosition") ) { lastPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultAnchor") ) { defaultAnchor=inValue.Cast<  ::flixel::addons::ui::Anchor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fixedPosition(inValue.Cast<  ::Dynamic >()) );fixedPosition=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"autoFlipAnchor") ) { autoFlipAnchor=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"showTooltipArrow") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_showTooltipArrow(inValue.Cast< bool >()) );showTooltipArrow=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITooltipManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoFlipAnchor",51,a5,23,1e));
	outFields->push(HX_("defaultAnchor",16,0e,ea,5a));
	outFields->push(HX_("fixedPosition",3d,ea,d2,12));
	outFields->push(HX_("defaultStyle",b0,e0,78,39));
	outFields->push(HX_("showOnClick",2c,b7,37,bb));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("showTooltipArrow",63,5a,be,21));
	outFields->push(HX_("cameras",2e,8a,31,e3));
	outFields->push(HX_("_init",ef,56,cc,f8));
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("tooltip",03,ad,8c,6a));
	outFields->push(HX_("current",39,9c,e3,cb));
	outFields->push(HX_("lastPosition",1f,ad,8c,2c));
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("subState",71,cc,2a,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUITooltipManager_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxUITooltipManager_obj,autoFlipAnchor),HX_("autoFlipAnchor",51,a5,23,1e)},
	{::hx::fsObject /*  ::flixel::addons::ui::Anchor */ ,(int)offsetof(FlxUITooltipManager_obj,defaultAnchor),HX_("defaultAnchor",16,0e,ea,5a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITooltipManager_obj,fixedPosition),HX_("fixedPosition",3d,ea,d2,12)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITooltipManager_obj,defaultStyle),HX_("defaultStyle",b0,e0,78,39)},
	{::hx::fsBool,(int)offsetof(FlxUITooltipManager_obj,showOnClick),HX_("showOnClick",2c,b7,37,bb)},
	{::hx::fsFloat,(int)offsetof(FlxUITooltipManager_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(FlxUITooltipManager_obj,showTooltipArrow),HX_("showTooltipArrow",63,5a,be,21)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxUITooltipManager_obj,cameras),HX_("cameras",2e,8a,31,e3)},
	{::hx::fsBool,(int)offsetof(FlxUITooltipManager_obj,_init),HX_("_init",ef,56,cc,f8)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxUITooltipManager_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITooltip */ ,(int)offsetof(FlxUITooltipManager_obj,tooltip),HX_("tooltip",03,ad,8c,6a)},
	{::hx::fsInt,(int)offsetof(FlxUITooltipManager_obj,current),HX_("current",39,9c,e3,cb)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxUITooltipManager_obj,lastPosition),HX_("lastPosition",1f,ad,8c,2c)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIState */ ,(int)offsetof(FlxUITooltipManager_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUISubState */ ,(int)offsetof(FlxUITooltipManager_obj,subState),HX_("subState",71,cc,2a,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUITooltipManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUITooltipManager_obj_sMemberFields[] = {
	HX_("autoFlipAnchor",51,a5,23,1e),
	HX_("defaultAnchor",16,0e,ea,5a),
	HX_("fixedPosition",3d,ea,d2,12),
	HX_("defaultStyle",b0,e0,78,39),
	HX_("showOnClick",2c,b7,37,bb),
	HX_("delay",83,d7,26,d7),
	HX_("showTooltipArrow",63,5a,be,21),
	HX_("cameras",2e,8a,31,e3),
	HX_("init",10,3b,bb,45),
	HX_("destroy",fa,2c,86,24),
	HX_("clear",8d,71,5b,48),
	HX_("hideCurrent",97,8b,4f,c9),
	HX_("isVisible",a8,f5,22,a7),
	HX_("doesCurrentTooltipBelongTo",9d,37,2f,77),
	HX_("stickyTooltipFor",4f,b4,11,3b),
	HX_("showTooltipFor",23,6d,33,3b),
	HX_("enableTooltipFor",29,aa,bd,ad),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("update",09,86,05,87),
	HX_("_init",ef,56,cc,f8),
	HX_("list",5e,1c,b3,47),
	HX_("tooltip",03,ad,8c,6a),
	HX_("current",39,9c,e3,cb),
	HX_("lastPosition",1f,ad,8c,2c),
	HX_("state",11,76,0b,84),
	HX_("subState",71,cc,2a,f9),
	HX_("hide",c2,34,0e,45),
	HX_("findThing",f5,b8,80,fe),
	HX_("findBtn",a3,d3,65,25),
	HX_("findObj",3e,a1,6f,25),
	HX_("set_fixedPosition",a0,cd,b0,3c),
	HX_("set_showTooltipArrow",e0,76,e0,0c),
	HX_("show",fd,d4,52,4c),
	HX_("checkAutoFlip",a4,5e,3e,0f),
	HX_("set_cameras",51,f1,98,73),
	::String(null()) };

::hx::Class FlxUITooltipManager_obj::__mClass;

void FlxUITooltipManager_obj::__register()
{
	FlxUITooltipManager_obj _hx_dummy;
	FlxUITooltipManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUITooltipManager",df,aa,6d,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUITooltipManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUITooltipManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUITooltipManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUITooltipManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui