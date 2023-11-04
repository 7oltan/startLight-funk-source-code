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
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICursor
#include <flixel/addons/ui/FlxUICursor.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
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
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_30_new,"flixel.addons.ui.FlxUISubState","new",0x76fcf9d8,"flixel.addons.ui.FlxUISubState.new","flixel/addons/ui/FlxUISubState.hx",30,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_64_forceScrollFactor,"flixel.addons.ui.FlxUISubState","forceScrollFactor",0x43e16abf,"flixel.addons.ui.FlxUISubState.forceScrollFactor","flixel/addons/ui/FlxUISubState.hx",64,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_79_forceFocus,"flixel.addons.ui.FlxUISubState","forceFocus",0x1fc1bf75,"flixel.addons.ui.FlxUISubState.forceFocus","flixel/addons/ui/FlxUISubState.hx",79,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_93_create,"flixel.addons.ui.FlxUISubState","create",0x3e177884,"flixel.addons.ui.FlxUISubState.create","flixel/addons/ui/FlxUISubState.hx",93,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_162_onCursorEvent,"flixel.addons.ui.FlxUISubState","onCursorEvent",0x2ce8edfd,"flixel.addons.ui.FlxUISubState.onCursorEvent","flixel/addons/ui/FlxUISubState.hx",162,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_166_onShowTooltip,"flixel.addons.ui.FlxUISubState","onShowTooltip",0x756b161f,"flixel.addons.ui.FlxUISubState.onShowTooltip","flixel/addons/ui/FlxUISubState.hx",166,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_172_onResize,"flixel.addons.ui.FlxUISubState","onResize",0x497dd3fb,"flixel.addons.ui.FlxUISubState.onResize","flixel/addons/ui/FlxUISubState.hx",172,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_181_update,"flixel.addons.ui.FlxUISubState","update",0x490d9791,"flixel.addons.ui.FlxUISubState.update","flixel/addons/ui/FlxUISubState.hx",181,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_198_destroy,"flixel.addons.ui.FlxUISubState","destroy",0x298d7272,"flixel.addons.ui.FlxUISubState.destroy","flixel/addons/ui/FlxUISubState.hx",198,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_218_getEvent,"flixel.addons.ui.FlxUISubState","getEvent",0x36f15b2c,"flixel.addons.ui.FlxUISubState.getEvent","flixel/addons/ui/FlxUISubState.hx",218,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_225_getRequest,"flixel.addons.ui.FlxUISubState","getRequest",0x1849dae1,"flixel.addons.ui.FlxUISubState.getRequest","flixel/addons/ui/FlxUISubState.hx",225,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_229_getText,"flixel.addons.ui.FlxUISubState","getText",0x2483c1db,"flixel.addons.ui.FlxUISubState.getText","flixel/addons/ui/FlxUISubState.hx",229,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_245_cleanup,"flixel.addons.ui.FlxUISubState","cleanup",0xb049519c,"flixel.addons.ui.FlxUISubState.cleanup","flixel/addons/ui/FlxUISubState.hx",245,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_254_createCursor,"flixel.addons.ui.FlxUISubState","createCursor",0x5d8fb67a,"flixel.addons.ui.FlxUISubState.createCursor","flixel/addons/ui/FlxUISubState.hx",254,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_262_createUI,"flixel.addons.ui.FlxUISubState","createUI",0x8d49ebd8,"flixel.addons.ui.FlxUISubState.createUI","flixel/addons/ui/FlxUISubState.hx",262,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_266_reloadUI,"flixel.addons.ui.FlxUISubState","reloadUI",0x9a336975,"flixel.addons.ui.FlxUISubState.reloadUI","flixel/addons/ui/FlxUISubState.hx",266,0x21143c79)
namespace flixel{
namespace addons{
namespace ui{

void FlxUISubState_obj::__construct(::hx::Null< int >  __o_BGColor){
            		int BGColor = __o_BGColor.Default(0);
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_30_new)
HXLINE(  55)		this->getTextFallback = null();
HXLINE(  53)		this->_reload_countdown = 0;
HXLINE(  52)		this->_reload = false;
HXLINE(  50)		this->reload_ui_on_resize = false;
HXLINE(  45)		this->_xml_id = HX_("",00,00,00,00);
HXLINE(  35)		this->cursor = null();
HXLINE(  59)		super::__construct(BGColor);
            	}

Dynamic FlxUISubState_obj::__CreateEmpty() { return new FlxUISubState_obj; }

void *FlxUISubState_obj::_hx_vtable = 0;

Dynamic FlxUISubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUISubState_obj > _hx_result = new FlxUISubState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxUISubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x4ba866f4) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4ba866f4;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

static ::flixel::addons::ui::interfaces::IEventGetter_obj _hx_flixel_addons_ui_FlxUISubState__hx_flixel_addons_ui_interfaces_IEventGetter= {
	( void (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUISubState_obj::getEvent,
	(  ::Dynamic (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUISubState_obj::getRequest,
};

static ::flixel::addons::ui::interfaces::IFlxUIState_obj _hx_flixel_addons_ui_FlxUISubState__hx_flixel_addons_ui_interfaces_IFlxUIState= {
	( void (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUISubState_obj::getEvent,
	(  ::Dynamic (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUISubState_obj::getRequest,
	( void (::hx::Object::*)(bool,::Dynamic))&::flixel::addons::ui::FlxUISubState_obj::forceFocus,
};

void *FlxUISubState_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xdcf9e4f9: return &_hx_flixel_addons_ui_FlxUISubState__hx_flixel_addons_ui_interfaces_IEventGetter;
		case (int)0x0bdac137: return &_hx_flixel_addons_ui_FlxUISubState__hx_flixel_addons_ui_interfaces_IFlxUIState;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUISubState_obj::forceScrollFactor(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_64_forceScrollFactor)
HXDLIN(  64)		if (::hx::IsNotNull( this->_ui )) {
HXLINE(  66)			{
HXLINE(  66)				int _g = 0;
HXDLIN(  66)				::Array< ::Dynamic> _g1 = this->_ui->group->members;
HXDLIN(  66)				while((_g < _g1->length)){
HXLINE(  66)					 ::flixel::FlxSprite w = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  66)					_g = (_g + 1);
HXLINE(  68)					{
HXLINE(  68)						 ::flixel::math::FlxBasePoint this1 = w->scrollFactor;
HXDLIN(  68)						this1->set_x(X);
HXDLIN(  68)						this1->set_y(Y);
            					}
            				}
            			}
HXLINE(  70)			if (::hx::IsNotNull( this->_ui->scrollFactor )) {
HXLINE(  72)				 ::flixel::math::FlxBasePoint this1 = this->_ui->scrollFactor;
HXDLIN(  72)				this1->set_x(X);
HXDLIN(  72)				this1->set_y(Y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUISubState_obj,forceScrollFactor,(void))

void FlxUISubState_obj::forceFocus(bool b,::Dynamic thing){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_79_forceFocus)
HXDLIN(  79)		if (::hx::IsNotNull( this->_ui )) {
HXLINE(  81)			if (b) {
HXLINE(  83)				this->_ui->set_focus(thing);
            			}
            			else {
HXLINE(  87)				this->_ui->set_focus(null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUISubState_obj,forceFocus,(void))

void FlxUISubState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_93_create)
HXLINE(  94)		if (::hx::IsNotNull( ::flixel::addons::ui::FlxUIState_obj::static_tongue )) {
HXLINE(  96)			this->_tongue = ::flixel::addons::ui::FlxUIState_obj::static_tongue;
            		}
HXLINE( 100)		if ((this->_makeCursor == true)) {
HXLINE( 102)			this->cursor = this->createCursor();
            		}
HXLINE( 106)		this->tooltips =  ::flixel::addons::ui::FlxUITooltipManager_obj::__alloc( HX_CTX ,null(),::hx::ObjectPtr<OBJ_>(this));
HXLINE( 108)		this->_ui = this->createUI(null(),::hx::ObjectPtr<OBJ_>(this),null(),this->_tongue,null());
HXLINE( 109)		this->add(this->_ui);
HXLINE( 111)		this->_ui->getTextFallback = this->getTextFallback;
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if ((this->_xml_id != HX_("",00,00,00,00))) {
HXLINE( 113)			_hx_tmp = ::hx::IsNotNull( this->_xml_id );
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 115)			 ::Xml data = ( ( ::Xml)(::flixel::addons::ui::U_obj::xml(this->_xml_id,null(),null(),null())) );
HXLINE( 116)			if (::hx::IsNull( data )) {
HXLINE( 118)				data = ( ( ::Xml)(::flixel::addons::ui::U_obj::xml(this->_xml_id,HX_("xml",d7,6d,5b,00),true,HX_("",00,00,00,00))) );
            			}
HXLINE( 121)			if (::hx::IsNotNull( data )) {
HXLINE( 129)				this->_ui->load(data);
            			}
            		}
            		else {
HXLINE( 134)			this->_ui->load(null());
            		}
HXLINE( 138)		bool _hx_tmp1;
HXDLIN( 138)		if (::hx::IsNotNull( this->cursor )) {
HXLINE( 138)			_hx_tmp1 = ::hx::IsNotNull( this->_ui );
            		}
            		else {
HXLINE( 138)			_hx_tmp1 = false;
            		}
HXDLIN( 138)		if (_hx_tmp1) {
HXLINE( 140)			this->add(this->cursor);
HXLINE( 141)			this->cursor->addWidgetsFromUI(this->_ui);
HXLINE( 142)			this->cursor->findVisibleLocation(0,null(),null());
            		}
HXLINE( 145)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE( 148)		this->tooltips->init();
HXLINE( 150)		this->super::create();
HXLINE( 152)		this->cleanup();
HXLINE( 154)		if (::Std_obj::isOfType(this->_parentState,::hx::ClassOf< ::flixel::addons::ui::FlxUIState >())) {
HXLINE( 156)			this->reload_ui_on_resize = ::hx::TCast<  ::flixel::addons::ui::FlxUIState >::cast(this->_parentState)->reload_ui_on_resize;
            		}
            	}


void FlxUISubState_obj::onCursorEvent(::String code,::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_162_onCursorEvent)
HXDLIN( 162)		this->getEvent(code,target,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUISubState_obj,onCursorEvent,(void))

void FlxUISubState_obj::onShowTooltip( ::flixel::addons::ui::FlxUITooltip t){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_166_onShowTooltip)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISubState_obj,onShowTooltip,(void))

void FlxUISubState_obj::onResize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_172_onResize)
HXDLIN( 172)		if (this->reload_ui_on_resize) {
HXLINE( 174)			::flixel::FlxG_obj::scaleMode->onMeasure(Width,Height);
HXLINE( 175)			this->_reload_countdown = 5;
HXLINE( 176)			this->_reload = true;
            		}
            	}


void FlxUISubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_181_update)
HXLINE( 182)		this->super::update(elapsed);
HXLINE( 183)		this->tooltips->update(elapsed);
HXLINE( 184)		if (this->_reload) {
HXLINE( 186)			if ((this->_reload_countdown > 0)) {
HXLINE( 188)				this->_reload_countdown--;
HXLINE( 189)				if ((this->_reload_countdown == 0)) {
HXLINE( 191)					this->reloadUI();
            				}
            			}
            		}
            	}


void FlxUISubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_198_destroy)
HXLINE( 199)		this->destroyed = true;
HXLINE( 201)		if (::hx::IsNotNull( this->tooltips )) {
HXLINE( 203)			this->tooltips->destroy();
HXLINE( 204)			this->tooltips = null();
            		}
HXLINE( 207)		if (::hx::IsNotNull( this->_ui )) {
HXLINE( 209)			this->_ui->destroy();
HXLINE( 210)			this->remove(this->_ui,true);
HXLINE( 211)			this->_ui = null();
            		}
HXLINE( 214)		this->super::destroy();
            	}


void FlxUISubState_obj::getEvent(::String id,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_218_getEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUISubState_obj,getEvent,(void))

 ::Dynamic FlxUISubState_obj::getRequest(::String id,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_225_getRequest)
HXDLIN( 225)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUISubState_obj,getRequest,return )

::String FlxUISubState_obj::getText(::String Flag,::String __o_Context,::hx::Null< bool >  __o_Safe){
            		::String Context = __o_Context;
            		if (::hx::IsNull(__o_Context)) Context = HX_("ui",54,66,00,00);
            		bool Safe = __o_Safe.Default(true);
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_229_getText)
HXLINE( 230)		if (::hx::IsNotNull( this->_tongue )) {
HXLINE( 232)			return ::flixel::addons::ui::interfaces::IFireTongue_obj::get(this->_tongue,Flag,Context,Safe);
            		}
HXLINE( 234)		if (::hx::IsNotNull( this->getTextFallback )) {
HXLINE( 236)			return ( (::String)(this->getTextFallback(Flag,Context,Safe)) );
            		}
HXLINE( 238)		return Flag;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUISubState_obj,getText,return )

void FlxUISubState_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_245_cleanup)
HXDLIN( 245)		this->_ui->cleanup();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUISubState_obj,cleanup,(void))

 ::flixel::addons::ui::FlxUICursor FlxUISubState_obj::createCursor(){
            	HX_GC_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_254_createCursor)
HXDLIN( 254)		return  ::flixel::addons::ui::FlxUICursor_obj::__alloc( HX_CTX ,this->onCursorEvent_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUISubState_obj,createCursor,return )

 ::flixel::addons::ui::FlxUI FlxUISubState_obj::createUI( ::Xml data,::Dynamic ptr, ::flixel::addons::ui::FlxUI superIndex_,::Dynamic tongue_,::String __o_liveFilePath_){
            		::String liveFilePath_ = __o_liveFilePath_;
            		if (::hx::IsNull(__o_liveFilePath_)) liveFilePath_ = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_262_createUI)
HXDLIN( 262)		return  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,data,ptr,superIndex_,tongue_,liveFilePath_,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxUISubState_obj,createUI,return )

void FlxUISubState_obj::reloadUI(){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_266_reloadUI)
HXLINE( 267)		if (::hx::IsNotNull( this->_ui )) {
HXLINE( 269)			this->remove(this->_ui,true);
HXLINE( 270)			this->_ui->destroy();
HXLINE( 271)			this->_ui = null();
            		}
HXLINE( 274)		this->_ui = this->createUI(null(),::hx::ObjectPtr<OBJ_>(this),null(),this->_tongue,null());
HXLINE( 275)		this->add(this->_ui);
HXLINE( 277)		 ::Xml data = ( ( ::Xml)(::flixel::addons::ui::U_obj::xml(this->_xml_id,null(),null(),null())) );
HXLINE( 278)		this->_ui->load(data);
HXLINE( 280)		this->_reload = false;
HXLINE( 281)		this->_reload_countdown = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUISubState_obj,reloadUI,(void))


::hx::ObjectPtr< FlxUISubState_obj > FlxUISubState_obj::__new(::hx::Null< int >  __o_BGColor) {
	::hx::ObjectPtr< FlxUISubState_obj > __this = new FlxUISubState_obj();
	__this->__construct(__o_BGColor);
	return __this;
}

::hx::ObjectPtr< FlxUISubState_obj > FlxUISubState_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_BGColor) {
	FlxUISubState_obj *__this = (FlxUISubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUISubState_obj), true, "flixel.addons.ui.FlxUISubState"));
	*(void **)__this = FlxUISubState_obj::_hx_vtable;
	__this->__construct(__o_BGColor);
	return __this;
}

FlxUISubState_obj::FlxUISubState_obj()
{
}

void FlxUISubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUISubState);
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(_makeCursor,"_makeCursor");
	HX_MARK_MEMBER_NAME(tooltips,"tooltips");
	HX_MARK_MEMBER_NAME(_xml_id,"_xml_id");
	HX_MARK_MEMBER_NAME(_ui,"_ui");
	HX_MARK_MEMBER_NAME(_tongue,"_tongue");
	HX_MARK_MEMBER_NAME(reload_ui_on_resize,"reload_ui_on_resize");
	HX_MARK_MEMBER_NAME(_reload,"_reload");
	HX_MARK_MEMBER_NAME(_reload_countdown,"_reload_countdown");
	HX_MARK_MEMBER_NAME(getTextFallback,"getTextFallback");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUISubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(_makeCursor,"_makeCursor");
	HX_VISIT_MEMBER_NAME(tooltips,"tooltips");
	HX_VISIT_MEMBER_NAME(_xml_id,"_xml_id");
	HX_VISIT_MEMBER_NAME(_ui,"_ui");
	HX_VISIT_MEMBER_NAME(_tongue,"_tongue");
	HX_VISIT_MEMBER_NAME(reload_ui_on_resize,"reload_ui_on_resize");
	HX_VISIT_MEMBER_NAME(_reload,"_reload");
	HX_VISIT_MEMBER_NAME(_reload_countdown,"_reload_countdown");
	HX_VISIT_MEMBER_NAME(getTextFallback,"getTextFallback");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUISubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { return ::hx::Val( _ui ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return ::hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_xml_id") ) { return ::hx::Val( _xml_id ); }
		if (HX_FIELD_EQ(inName,"_tongue") ) { return ::hx::Val( _tongue ); }
		if (HX_FIELD_EQ(inName,"_reload") ) { return ::hx::Val( _reload ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return ::hx::Val( cleanup_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tooltips") ) { return ::hx::Val( tooltips ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEvent") ) { return ::hx::Val( getEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"createUI") ) { return ::hx::Val( createUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"reloadUI") ) { return ::hx::Val( reloadUI_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return ::hx::Val( destroyed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceFocus") ) { return ::hx::Val( forceFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRequest") ) { return ::hx::Val( getRequest_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_makeCursor") ) { return ::hx::Val( _makeCursor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCursor") ) { return ::hx::Val( createCursor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onCursorEvent") ) { return ::hx::Val( onCursorEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"onShowTooltip") ) { return ::hx::Val( onShowTooltip_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { return ::hx::Val( getTextFallback ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_reload_countdown") ) { return ::hx::Val( _reload_countdown ); }
		if (HX_FIELD_EQ(inName,"forceScrollFactor") ) { return ::hx::Val( forceScrollFactor_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"reload_ui_on_resize") ) { return ::hx::Val( reload_ui_on_resize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUISubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { _ui=inValue.Cast<  ::flixel::addons::ui::FlxUI >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast<  ::flixel::addons::ui::FlxUICursor >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_xml_id") ) { _xml_id=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tongue") ) { _tongue=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reload") ) { _reload=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tooltips") ) { tooltips=inValue.Cast<  ::flixel::addons::ui::FlxUITooltipManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_makeCursor") ) { _makeCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { getTextFallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_reload_countdown") ) { _reload_countdown=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"reload_ui_on_resize") ) { reload_ui_on_resize=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUISubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("destroyed",d9,37,27,f4));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("_makeCursor",83,30,42,63));
	outFields->push(HX_("tooltips",10,b6,8a,d0));
	outFields->push(HX_("_xml_id",22,16,a3,73));
	outFields->push(HX_("_ui",73,7c,48,00));
	outFields->push(HX_("_tongue",63,57,5b,02));
	outFields->push(HX_("reload_ui_on_resize",4f,eb,1e,44));
	outFields->push(HX_("_reload",f8,64,56,72));
	outFields->push(HX_("_reload_countdown",6a,17,8b,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUISubState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxUISubState_obj,destroyed),HX_("destroyed",d9,37,27,f4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICursor */ ,(int)offsetof(FlxUISubState_obj,cursor),HX_("cursor",d6,8e,e8,3e)},
	{::hx::fsBool,(int)offsetof(FlxUISubState_obj,_makeCursor),HX_("_makeCursor",83,30,42,63)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITooltipManager */ ,(int)offsetof(FlxUISubState_obj,tooltips),HX_("tooltips",10,b6,8a,d0)},
	{::hx::fsString,(int)offsetof(FlxUISubState_obj,_xml_id),HX_("_xml_id",22,16,a3,73)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUI */ ,(int)offsetof(FlxUISubState_obj,_ui),HX_("_ui",73,7c,48,00)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FlxUISubState_obj,_tongue),HX_("_tongue",63,57,5b,02)},
	{::hx::fsBool,(int)offsetof(FlxUISubState_obj,reload_ui_on_resize),HX_("reload_ui_on_resize",4f,eb,1e,44)},
	{::hx::fsBool,(int)offsetof(FlxUISubState_obj,_reload),HX_("_reload",f8,64,56,72)},
	{::hx::fsInt,(int)offsetof(FlxUISubState_obj,_reload_countdown),HX_("_reload_countdown",6a,17,8b,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUISubState_obj,getTextFallback),HX_("getTextFallback",a5,c3,03,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUISubState_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUISubState_obj_sMemberFields[] = {
	HX_("destroyed",d9,37,27,f4),
	HX_("cursor",d6,8e,e8,3e),
	HX_("_makeCursor",83,30,42,63),
	HX_("tooltips",10,b6,8a,d0),
	HX_("_xml_id",22,16,a3,73),
	HX_("_ui",73,7c,48,00),
	HX_("_tongue",63,57,5b,02),
	HX_("reload_ui_on_resize",4f,eb,1e,44),
	HX_("_reload",f8,64,56,72),
	HX_("_reload_countdown",6a,17,8b,78),
	HX_("getTextFallback",a5,c3,03,82),
	HX_("forceScrollFactor",47,9f,ef,b4),
	HX_("forceFocus",ed,49,5e,9b),
	HX_("create",fc,66,0f,7c),
	HX_("onCursorEvent",85,3e,90,61),
	HX_("onShowTooltip",a7,66,12,aa),
	HX_("onResize",73,50,28,e8),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("getEvent",a4,d7,9b,d5),
	HX_("getRequest",59,65,e6,93),
	HX_("getText",63,7c,7c,1f),
	HX_("cleanup",24,0c,42,ab),
	HX_("createCursor",f2,ce,3d,61),
	HX_("createUI",50,68,f4,2b),
	HX_("reloadUI",ed,e5,dd,38),
	::String(null()) };

::hx::Class FlxUISubState_obj::__mClass;

void FlxUISubState_obj::__register()
{
	FlxUISubState_obj _hx_dummy;
	FlxUISubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUISubState",e6,6d,5d,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUISubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUISubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUISubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUISubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
