#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5ed655cc53689dfd_6_new,"flixel.animation.FlxAnimationController","new",0x0b6477fc,"flixel.animation.FlxAnimationController.new","flixel/animation/FlxAnimationController.hx",6,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_101_update,"flixel.animation.FlxAnimationController","update",0x8fb487ed,"flixel.animation.FlxAnimationController.update","flixel/animation/FlxAnimationController.hx",101,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_116_copyFrom,"flixel.animation.FlxAnimationController","copyFrom",0x9c3f4ea3,"flixel.animation.FlxAnimationController.copyFrom","flixel/animation/FlxAnimationController.hx",116,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_140_createPrerotated,"flixel.animation.FlxAnimationController","createPrerotated",0xc538c8e6,"flixel.animation.FlxAnimationController.createPrerotated","flixel/animation/FlxAnimationController.hx",140,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_148_destroyAnimations,"flixel.animation.FlxAnimationController","destroyAnimations",0x0b136325,"flixel.animation.FlxAnimationController.destroyAnimations","flixel/animation/FlxAnimationController.hx",148,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_154_destroy,"flixel.animation.FlxAnimationController","destroy",0xb4f8d296,"flixel.animation.FlxAnimationController.destroy","flixel/animation/FlxAnimationController.hx",154,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_170_clearPrerotated,"flixel.animation.FlxAnimationController","clearPrerotated",0x8ef9ed6f,"flixel.animation.FlxAnimationController.clearPrerotated","flixel/animation/FlxAnimationController.hx",170,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_179_clearAnimations,"flixel.animation.FlxAnimationController","clearAnimations",0x7ffc9e78,"flixel.animation.FlxAnimationController.clearAnimations","flixel/animation/FlxAnimationController.hx",179,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_208_add,"flixel.animation.FlxAnimationController","add",0x0b5a99bd,"flixel.animation.FlxAnimationController.add","flixel/animation/FlxAnimationController.hx",208,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_242_remove,"flixel.animation.FlxAnimationController","remove",0x0d379e28,"flixel.animation.FlxAnimationController.remove","flixel/animation/FlxAnimationController.hx",242,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_260_append,"flixel.animation.FlxAnimationController","append",0x9882e3be,"flixel.animation.FlxAnimationController.append","flixel/animation/FlxAnimationController.hx",260,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_295_addByNames,"flixel.animation.FlxAnimationController","addByNames",0x17c20e34,"flixel.animation.FlxAnimationController.addByNames","flixel/animation/FlxAnimationController.hx",295,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_317_appendByNames,"flixel.animation.FlxAnimationController","appendByNames",0xcdc97653,"flixel.animation.FlxAnimationController.appendByNames","flixel/animation/FlxAnimationController.hx",317,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_347_addByStringIndices,"flixel.animation.FlxAnimationController","addByStringIndices",0x0f3d3cc2,"flixel.animation.FlxAnimationController.addByStringIndices","flixel/animation/FlxAnimationController.hx",347,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_373_appendByStringIndices,"flixel.animation.FlxAnimationController","appendByStringIndices",0x42285be1,"flixel.animation.FlxAnimationController.appendByStringIndices","flixel/animation/FlxAnimationController.hx",373,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_403_addByIndices,"flixel.animation.FlxAnimationController","addByIndices",0x4dbf3893,"flixel.animation.FlxAnimationController.addByIndices","flixel/animation/FlxAnimationController.hx",403,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_430_appendByIndices,"flixel.animation.FlxAnimationController","appendByIndices",0x22882672,"flixel.animation.FlxAnimationController.appendByIndices","flixel/animation/FlxAnimationController.hx",430,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_452_findSpriteFrame,"flixel.animation.FlxAnimationController","findSpriteFrame",0x746a2bcb,"flixel.animation.FlxAnimationController.findSpriteFrame","flixel/animation/FlxAnimationController.hx",452,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_483_addByPrefix,"flixel.animation.FlxAnimationController","addByPrefix",0x4347f9a6,"flixel.animation.FlxAnimationController.addByPrefix","flixel/animation/FlxAnimationController.hx",483,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_513_appendByPrefix,"flixel.animation.FlxAnimationController","appendByPrefix",0xd3bbaca7,"flixel.animation.FlxAnimationController.appendByPrefix","flixel/animation/FlxAnimationController.hx",513,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_545_play,"flixel.animation.FlxAnimationController","play",0xeddc2ed8,"flixel.animation.FlxAnimationController.play","flixel/animation/FlxAnimationController.hx",545,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_584_reset,"flixel.animation.FlxAnimationController","reset",0x5507106b,"flixel.animation.FlxAnimationController.reset","flixel/animation/FlxAnimationController.hx",584,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_595_finish,"flixel.animation.FlxAnimationController","finish",0x8f2e4237,"flixel.animation.FlxAnimationController.finish","flixel/animation/FlxAnimationController.hx",595,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_606_stop,"flixel.animation.FlxAnimationController","stop",0xefddf0e6,"flixel.animation.FlxAnimationController.stop","flixel/animation/FlxAnimationController.hx",606,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_617_pause,"flixel.animation.FlxAnimationController","pause",0x2b969d92,"flixel.animation.FlxAnimationController.pause","flixel/animation/FlxAnimationController.hx",617,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_628_resume,"flixel.animation.FlxAnimationController","resume",0x11336b91,"flixel.animation.FlxAnimationController.resume","flixel/animation/FlxAnimationController.hx",628,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_639_reverse,"flixel.animation.FlxAnimationController","reverse",0xab6edebe,"flixel.animation.FlxAnimationController.reverse","flixel/animation/FlxAnimationController.hx",639,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_650_getByName,"flixel.animation.FlxAnimationController","getByName",0x1940f994,"flixel.animation.FlxAnimationController.getByName","flixel/animation/FlxAnimationController.hx",650,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_658_randomFrame,"flixel.animation.FlxAnimationController","randomFrame",0x12c43ec6,"flixel.animation.FlxAnimationController.randomFrame","flixel/animation/FlxAnimationController.hx",658,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_669_fireCallback,"flixel.animation.FlxAnimationController","fireCallback",0x1523547f,"flixel.animation.FlxAnimationController.fireCallback","flixel/animation/FlxAnimationController.hx",669,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_680_fireFinishCallback,"flixel.animation.FlxAnimationController","fireFinishCallback",0x96b92372,"flixel.animation.FlxAnimationController.fireFinishCallback","flixel/animation/FlxAnimationController.hx",680,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_688_byNamesHelper,"flixel.animation.FlxAnimationController","byNamesHelper",0x4e6fbd5b,"flixel.animation.FlxAnimationController.byNamesHelper","flixel/animation/FlxAnimationController.hx",688,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_700_byStringIndicesHelper,"flixel.animation.FlxAnimationController","byStringIndicesHelper",0xccff0b69,"flixel.animation.FlxAnimationController.byStringIndicesHelper","flixel/animation/FlxAnimationController.hx",700,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_713_byIndicesHelper,"flixel.animation.FlxAnimationController","byIndicesHelper",0xe757113a,"flixel.animation.FlxAnimationController.byIndicesHelper","flixel/animation/FlxAnimationController.hx",713,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_724_byPrefixHelper,"flixel.animation.FlxAnimationController","byPrefixHelper",0x238152fb,"flixel.animation.FlxAnimationController.byPrefixHelper","flixel/animation/FlxAnimationController.hx",724,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_738_findByPrefix,"flixel.animation.FlxAnimationController","findByPrefix",0x32419106,"flixel.animation.FlxAnimationController.findByPrefix","flixel/animation/FlxAnimationController.hx",738,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_748_set_frameIndex,"flixel.animation.FlxAnimationController","set_frameIndex",0xd769c646,"flixel.animation.FlxAnimationController.set_frameIndex","flixel/animation/FlxAnimationController.hx",748,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_762_get_frameName,"flixel.animation.FlxAnimationController","get_frameName",0x1674c78b,"flixel.animation.FlxAnimationController.get_frameName","flixel/animation/FlxAnimationController.hx",762,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_766_set_frameName,"flixel.animation.FlxAnimationController","set_frameName",0x5b7aa997,"flixel.animation.FlxAnimationController.set_frameName","flixel/animation/FlxAnimationController.hx",766,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_786_get_name,"flixel.animation.FlxAnimationController","get_name",0x9c9870b8,"flixel.animation.FlxAnimationController.get_name","flixel/animation/FlxAnimationController.hx",786,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_796_set_name,"flixel.animation.FlxAnimationController","set_name",0x4af5ca2c,"flixel.animation.FlxAnimationController.set_name","flixel/animation/FlxAnimationController.hx",796,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_803_get_curAnim,"flixel.animation.FlxAnimationController","get_curAnim",0xd32cfb64,"flixel.animation.FlxAnimationController.get_curAnim","flixel/animation/FlxAnimationController.hx",803,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_807_set_curAnim,"flixel.animation.FlxAnimationController","set_curAnim",0xdd9a0270,"flixel.animation.FlxAnimationController.set_curAnim","flixel/animation/FlxAnimationController.hx",807,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_824_get_paused,"flixel.animation.FlxAnimationController","get_paused",0x1a2b745b,"flixel.animation.FlxAnimationController.get_paused","flixel/animation/FlxAnimationController.hx",824,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_834_set_paused,"flixel.animation.FlxAnimationController","set_paused",0x1da912cf,"flixel.animation.FlxAnimationController.set_paused","flixel/animation/FlxAnimationController.hx",834,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_850_get_finished,"flixel.animation.FlxAnimationController","get_finished",0x1eabcc5f,"flixel.animation.FlxAnimationController.get_finished","flixel/animation/FlxAnimationController.hx",850,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_860_set_finished,"flixel.animation.FlxAnimationController","set_finished",0x33a4efd3,"flixel.animation.FlxAnimationController.set_finished","flixel/animation/FlxAnimationController.hx",860,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_870_get_numFrames,"flixel.animation.FlxAnimationController","get_numFrames",0x3d7b90ff,"flixel.animation.FlxAnimationController.get_numFrames","flixel/animation/FlxAnimationController.hx",870,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_874_get_frames,"flixel.animation.FlxAnimationController","get_frames",0xd72ce353,"flixel.animation.FlxAnimationController.get_frames","flixel/animation/FlxAnimationController.hx",874,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_884_getFrameIndex,"flixel.animation.FlxAnimationController","getFrameIndex",0x1c3dee77,"flixel.animation.FlxAnimationController.getFrameIndex","flixel/animation/FlxAnimationController.hx",884,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_96_boot,"flixel.animation.FlxAnimationController","boot",0xe49d8516,"flixel.animation.FlxAnimationController.boot","flixel/animation/FlxAnimationController.hx",96,0xa6f01372)
namespace flixel{
namespace animation{

void FlxAnimationController_obj::__construct( ::flixel::FlxSprite Sprite){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_6_new)
HXLINE(  97)		this->followGlobalSpeed = true;
HXLINE(  16)		this->frameIndex = -1;
HXLINE(  92)		this->_sprite = Sprite;
HXLINE(  93)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic FlxAnimationController_obj::__CreateEmpty() { return new FlxAnimationController_obj; }

void *FlxAnimationController_obj::_hx_vtable = 0;

Dynamic FlxAnimationController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAnimationController_obj > _hx_result = new FlxAnimationController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxAnimationController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33fb2b2e;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_animation_FlxAnimationController__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::animation::FlxAnimationController_obj::destroy,
};

void *FlxAnimationController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_animation_FlxAnimationController__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxAnimationController_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_101_update)
HXDLIN( 101)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 103)			Float e = elapsed;
HXLINE( 104)			if (this->followGlobalSpeed) {
HXLINE( 105)				e = (e * ::flixel::animation::FlxAnimationController_obj::globalSpeed);
            			}
HXLINE( 107)			this->_curAnim->update(e);
            		}
            		else {
HXLINE( 109)			if (::hx::IsNotNull( this->_prerotated )) {
HXLINE( 111)				this->_prerotated->set_angle(this->_sprite->angle);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,update,(void))

 ::flixel::animation::FlxAnimationController FlxAnimationController_obj::copyFrom( ::flixel::animation::FlxAnimationController controller){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_116_copyFrom)
HXLINE( 117)		this->destroyAnimations();
HXLINE( 119)		{
HXLINE( 119)			 ::Dynamic anim = controller->_animations->iterator();
HXDLIN( 119)			while(( (bool)(anim->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 119)				 ::flixel::animation::FlxAnimation anim1 = ( ( ::flixel::animation::FlxAnimation)(anim->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 121)				this->add(anim1->name,anim1->frames,anim1->frameRate,anim1->looped,anim1->flipX,anim1->flipY);
            			}
            		}
HXLINE( 124)		if (::hx::IsNotNull( controller->_prerotated )) {
HXLINE( 126)			this->createPrerotated(null());
            		}
HXLINE( 129)		if (::hx::IsNotNull( controller->get_name() )) {
HXLINE( 131)			this->set_name(controller->get_name());
            		}
HXLINE( 134)		this->set_frameIndex(controller->frameIndex);
HXLINE( 136)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,copyFrom,return )

void FlxAnimationController_obj::createPrerotated( ::flixel::animation::FlxAnimationController Controller){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_140_createPrerotated)
HXLINE( 141)		this->destroyAnimations();
HXLINE( 142)		if (::hx::IsNull( Controller )) {
HXLINE( 142)			Controller = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 143)		this->_prerotated =  ::flixel::animation::FlxPrerotatedAnimation_obj::__alloc( HX_CTX ,Controller,Controller->_sprite->bakedRotationAngle);
HXLINE( 144)		this->_prerotated->set_angle(this->_sprite->angle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,createPrerotated,(void))

void FlxAnimationController_obj::destroyAnimations(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_148_destroyAnimations)
HXLINE( 149)		this->clearAnimations();
HXLINE( 150)		this->clearPrerotated();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroyAnimations,(void))

void FlxAnimationController_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_154_destroy)
HXLINE( 155)		this->destroyAnimations();
HXLINE( 156)		this->_animations = null();
HXLINE( 157)		this->callback = null();
HXLINE( 158)		this->_sprite = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroy,(void))

void FlxAnimationController_obj::clearPrerotated(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_170_clearPrerotated)
HXLINE( 171)		if (::hx::IsNotNull( this->_prerotated )) {
HXLINE( 173)			this->_prerotated->destroy();
            		}
HXLINE( 175)		this->_prerotated = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearPrerotated,(void))

void FlxAnimationController_obj::clearAnimations(){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_179_clearAnimations)
HXLINE( 180)		if (::hx::IsNotNull( this->_animations )) {
HXLINE( 182)			 ::flixel::animation::FlxAnimation anim;
HXLINE( 183)			{
HXLINE( 183)				 ::Dynamic key = this->_animations->keys();
HXDLIN( 183)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 183)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 185)					anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(key1)) );
HXLINE( 186)					if (::hx::IsNotNull( anim )) {
HXLINE( 188)						anim->destroy();
            					}
            				}
            			}
            		}
HXLINE( 193)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 194)		this->_curAnim = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearAnimations,(void))

void FlxAnimationController_obj::add(::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		Float FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_208_add)
HXLINE( 210)		::Array< int > framesToAdd = Frames;
HXLINE( 211)		int numFrames = (framesToAdd->length - 1);
HXLINE( 212)		int i = numFrames;
HXLINE( 213)		while((i >= 0)){
HXLINE( 215)			if ((framesToAdd->__get(i) >= this->_sprite->numFrames)) {
HXLINE( 219)				if (::hx::IsPointerEq( framesToAdd,Frames )) {
HXLINE( 221)					framesToAdd = Frames->copy();
            				}
HXLINE( 224)				framesToAdd->removeRange(i,1);
            			}
HXLINE( 226)			i = (i - 1);
            		}
HXLINE( 229)		if ((framesToAdd->length > 0)) {
HXLINE( 231)			 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,framesToAdd,FrameRate,Looped,FlipX,FlipY);
HXLINE( 232)			this->_animations->set(Name,anim);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,add,(void))

void FlxAnimationController_obj::remove(::String Name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_242_remove)
HXLINE( 243)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 244)		if (::hx::IsNotNull( anim )) {
HXLINE( 246)			this->_animations->remove(Name);
HXLINE( 247)			anim->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,remove,(void))

void FlxAnimationController_obj::append(::String Name,::Array< int > Frames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_260_append)
HXLINE( 261)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 262)		if (::hx::IsNull( anim )) {
HXLINE( 266)			return;
            		}
HXLINE( 270)		int numFrames = (Frames->length - 1);
HXLINE( 271)		int i = numFrames;
HXLINE( 272)		while((i >= 0)){
HXLINE( 274)			if ((Frames->__get((numFrames - i)) < this->_sprite->numFrames)) {
HXLINE( 277)				anim->frames->push(Frames->__get((numFrames - i)));
            			}
HXLINE( 279)			i = (i - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,append,(void))

void FlxAnimationController_obj::addByNames(::String Name,::Array< ::String > FrameNames,::hx::Null< int >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		int FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_295_addByNames)
HXDLIN( 295)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 297)			::Array< int > indices = ::Array_obj< int >::__new();
HXLINE( 298)			this->byNamesHelper(indices,FrameNames);
HXLINE( 300)			if ((indices->length > 0)) {
HXLINE( 302)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,indices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 303)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByNames,(void))

void FlxAnimationController_obj::appendByNames(::String Name,::Array< ::String > FrameNames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_317_appendByNames)
HXLINE( 318)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 319)		if (::hx::IsNull( anim )) {
HXLINE( 322)			return;
            		}
HXLINE( 325)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 327)			this->byNamesHelper(anim->frames,FrameNames);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByNames,(void))

void FlxAnimationController_obj::addByStringIndices(::String Name,::String Prefix,::Array< ::String > Indices,::String Postfix,::hx::Null< int >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		int FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_347_addByStringIndices)
HXDLIN( 347)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 349)			::Array< int > frameIndices = ::Array_obj< int >::__new();
HXLINE( 351)			this->byStringIndicesHelper(frameIndices,Prefix,Indices,Postfix);
HXLINE( 353)			if ((frameIndices->length > 0)) {
HXLINE( 355)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 356)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimationController_obj,addByStringIndices,(void))

void FlxAnimationController_obj::appendByStringIndices(::String Name,::String Prefix,::Array< ::String > Indices,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_373_appendByStringIndices)
HXLINE( 374)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 375)		if (::hx::IsNull( anim )) {
HXLINE( 378)			return;
            		}
HXLINE( 381)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 384)			this->byStringIndicesHelper(anim->frames,Prefix,Indices,Postfix);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByStringIndices,(void))

void FlxAnimationController_obj::addByIndices(::String Name,::String Prefix,::Array< int > Indices,::String Postfix,::hx::Null< int >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		int FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_403_addByIndices)
HXDLIN( 403)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 405)			::Array< int > frameIndices = ::Array_obj< int >::__new();
HXLINE( 407)			this->byIndicesHelper(frameIndices,Prefix,Indices,Postfix);
HXLINE( 409)			if ((frameIndices->length > 0)) {
HXLINE( 411)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 412)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimationController_obj,addByIndices,(void))

void FlxAnimationController_obj::appendByIndices(::String Name,::String Prefix,::Array< int > Indices,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_430_appendByIndices)
HXLINE( 431)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 432)		if (::hx::IsNull( anim )) {
HXLINE( 435)			return;
            		}
HXLINE( 438)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 441)			this->byIndicesHelper(anim->frames,Prefix,Indices,Postfix);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByIndices,(void))

int FlxAnimationController_obj::findSpriteFrame(::String Prefix,int Index,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_452_findSpriteFrame)
HXLINE( 453)		int numFrames = this->_sprite->numFrames;
HXLINE( 454)		::Array< ::Dynamic> flxFrames = this->_sprite->frames->frames;
HXLINE( 455)		{
HXLINE( 455)			int _g = 0;
HXDLIN( 455)			int _g1 = numFrames;
HXDLIN( 455)			while((_g < _g1)){
HXLINE( 455)				_g = (_g + 1);
HXDLIN( 455)				int i = (_g - 1);
HXLINE( 457)				::String name = flxFrames->__get(i).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name;
HXLINE( 458)				bool _hx_tmp;
HXDLIN( 458)				if (::StringTools_obj::startsWith(name,Prefix)) {
HXLINE( 458)					_hx_tmp = ::StringTools_obj::endsWith(name,Postfix);
            				}
            				else {
HXLINE( 458)					_hx_tmp = false;
            				}
HXDLIN( 458)				if (_hx_tmp) {
HXLINE( 460)					 ::Dynamic index = ::Std_obj::parseInt(name.substring(Prefix.length,(name.length - Postfix.length)));
HXLINE( 461)					bool _hx_tmp;
HXDLIN( 461)					if (::hx::IsNotNull( index )) {
HXLINE( 461)						_hx_tmp = ::hx::IsEq( index,Index );
            					}
            					else {
HXLINE( 461)						_hx_tmp = false;
            					}
HXDLIN( 461)					if (_hx_tmp) {
HXLINE( 463)						return i;
            					}
            				}
            			}
            		}
HXLINE( 468)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,findSpriteFrame,return )

void FlxAnimationController_obj::addByPrefix(::String Name,::String Prefix,::hx::Null< int >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		int FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_483_addByPrefix)
HXDLIN( 483)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 485)			::Array< ::Dynamic> animFrames = ::Array_obj< ::Dynamic>::__new();
HXLINE( 486)			this->findByPrefix(animFrames,Prefix);
HXLINE( 488)			if ((animFrames->length > 0)) {
HXLINE( 490)				::Array< int > frameIndices = ::Array_obj< int >::__new();
HXLINE( 491)				this->byPrefixHelper(frameIndices,animFrames,Prefix);
HXLINE( 493)				if ((frameIndices->length > 0)) {
HXLINE( 495)					 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 496)					this->_animations->set(Name,anim);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByPrefix,(void))

void FlxAnimationController_obj::appendByPrefix(::String Name,::String Prefix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_513_appendByPrefix)
HXLINE( 514)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 515)		if (::hx::IsNull( anim )) {
HXLINE( 518)			return;
            		}
HXLINE( 521)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 523)			::Array< ::Dynamic> animFrames = ::Array_obj< ::Dynamic>::__new();
HXLINE( 524)			this->findByPrefix(animFrames,Prefix);
HXLINE( 526)			if ((animFrames->length > 0)) {
HXLINE( 529)				this->byPrefixHelper(anim->frames,animFrames,Prefix);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByPrefix,(void))

void FlxAnimationController_obj::play(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_545_play)
HXLINE( 546)		if (::hx::IsNull( AnimName )) {
HXLINE( 548)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 550)				this->_curAnim->stop();
            			}
HXLINE( 552)			this->_curAnim = null();
            		}
HXLINE( 555)		bool _hx_tmp;
HXDLIN( 555)		if (::hx::IsNotNull( AnimName )) {
HXLINE( 555)			_hx_tmp = ::hx::IsNull( this->_animations->get(AnimName) );
            		}
            		else {
HXLINE( 555)			_hx_tmp = true;
            		}
HXDLIN( 555)		if (_hx_tmp) {
HXLINE( 558)			return;
            		}
HXLINE( 561)		bool oldFlipX = false;
HXLINE( 562)		bool oldFlipY = false;
HXLINE( 564)		bool _hx_tmp1;
HXDLIN( 564)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 564)			_hx_tmp1 = (AnimName != this->_curAnim->name);
            		}
            		else {
HXLINE( 564)			_hx_tmp1 = false;
            		}
HXDLIN( 564)		if (_hx_tmp1) {
HXLINE( 566)			oldFlipX = this->_curAnim->flipX;
HXLINE( 567)			oldFlipY = this->_curAnim->flipY;
HXLINE( 568)			this->_curAnim->stop();
            		}
HXLINE( 570)		this->_curAnim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(AnimName)) );
HXLINE( 571)		this->_curAnim->play(Force,Reversed,Frame);
HXLINE( 573)		bool _hx_tmp2;
HXDLIN( 573)		if ((oldFlipX == this->_curAnim->flipX)) {
HXLINE( 573)			_hx_tmp2 = (oldFlipY != this->_curAnim->flipY);
            		}
            		else {
HXLINE( 573)			_hx_tmp2 = true;
            		}
HXDLIN( 573)		if (_hx_tmp2) {
HXLINE( 575)			this->_sprite->dirty = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,play,(void))

void FlxAnimationController_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_584_reset)
HXDLIN( 584)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 586)			this->_curAnim->reset();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,reset,(void))

void FlxAnimationController_obj::finish(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_595_finish)
HXDLIN( 595)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 597)			this->_curAnim->finish();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,finish,(void))

void FlxAnimationController_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_606_stop)
HXDLIN( 606)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 608)			this->_curAnim->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,stop,(void))

void FlxAnimationController_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_617_pause)
HXDLIN( 617)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 619)			this->_curAnim->pause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,pause,(void))

void FlxAnimationController_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_628_resume)
HXDLIN( 628)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 630)			this->_curAnim->paused = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,resume,(void))

void FlxAnimationController_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_639_reverse)
HXDLIN( 639)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 641)			this->_curAnim->reverse();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,reverse,(void))

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::getByName(::String Name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_650_getByName)
HXDLIN( 650)		return ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getByName,return )

void FlxAnimationController_obj::randomFrame(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_658_randomFrame)
HXLINE( 659)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 661)			this->_curAnim->stop();
HXLINE( 662)			this->_curAnim = null();
            		}
HXLINE( 664)		this->set_frameIndex(::flixel::FlxG_obj::random->_hx_int(0,(this->_sprite->numFrames - 1),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,randomFrame,(void))

void FlxAnimationController_obj::fireCallback(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_669_fireCallback)
HXDLIN( 669)		if (::hx::IsNotNull( this->callback )) {
HXLINE( 671)			::String name;
HXDLIN( 671)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 671)				name = this->_curAnim->name;
            			}
            			else {
HXLINE( 671)				name = null();
            			}
HXLINE( 672)			int number;
HXDLIN( 672)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 672)				number = this->_curAnim->curFrame;
            			}
            			else {
HXLINE( 672)				number = this->frameIndex;
            			}
HXLINE( 673)			this->callback(name,number,this->frameIndex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,fireCallback,(void))

void FlxAnimationController_obj::fireFinishCallback(::String name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_680_fireFinishCallback)
HXDLIN( 680)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE( 682)			this->finishCallback(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,fireFinishCallback,(void))

void FlxAnimationController_obj::byNamesHelper(::Array< int > AddTo,::Array< ::String > FrameNames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_688_byNamesHelper)
HXDLIN( 688)		int _g = 0;
HXDLIN( 688)		while((_g < FrameNames->length)){
HXDLIN( 688)			::String frameName = FrameNames->__get(_g);
HXDLIN( 688)			_g = (_g + 1);
HXLINE( 690)			if (this->_sprite->frames->framesHash->exists(frameName)) {
HXLINE( 692)				 ::flixel::graphics::frames::FlxFrame frameToAdd = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesHash->get(frameName)) );
HXLINE( 693)				AddTo->push(this->_sprite->frames->frames->indexOf(frameToAdd,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,byNamesHelper,(void))

void FlxAnimationController_obj::byStringIndicesHelper(::Array< int > AddTo,::String Prefix,::Array< ::String > Indices,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_700_byStringIndicesHelper)
HXDLIN( 700)		int _g = 0;
HXDLIN( 700)		while((_g < Indices->length)){
HXDLIN( 700)			::String index = Indices->__get(_g);
HXDLIN( 700)			_g = (_g + 1);
HXLINE( 702)			::String name = ((Prefix + index) + Postfix);
HXLINE( 703)			if (this->_sprite->frames->framesHash->exists(name)) {
HXLINE( 705)				 ::flixel::graphics::frames::FlxFrame frameToAdd = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesHash->get(name)) );
HXLINE( 706)				AddTo->push(this->_sprite->frames->frames->indexOf(frameToAdd,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byStringIndicesHelper,(void))

void FlxAnimationController_obj::byIndicesHelper(::Array< int > AddTo,::String Prefix,::Array< int > Indices,::String Postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_713_byIndicesHelper)
HXDLIN( 713)		int _g = 0;
HXDLIN( 713)		while((_g < Indices->length)){
HXDLIN( 713)			int index = Indices->__get(_g);
HXDLIN( 713)			_g = (_g + 1);
HXLINE( 715)			int indexToAdd = this->findSpriteFrame(Prefix,index,Postfix);
HXLINE( 716)			if ((indexToAdd != -1)) {
HXLINE( 718)				AddTo->push(indexToAdd);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byIndicesHelper,(void))

void FlxAnimationController_obj::byPrefixHelper(::Array< int > AddTo,::Array< ::Dynamic> AnimFrames,::String Prefix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_724_byPrefixHelper)
HXLINE( 725)		::String name = AnimFrames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name;
HXLINE( 726)		int postIndex = name.indexOf(HX_(".",2e,00,00,00),Prefix.length);
HXLINE( 727)		int postFix;
HXDLIN( 727)		if ((postIndex == -1)) {
HXLINE( 727)			postFix = name.length;
            		}
            		else {
HXLINE( 727)			postFix = postIndex;
            		}
HXDLIN( 727)		::String postFix1 = name.substring(postFix,name.length);
HXLINE( 728)		::flixel::graphics::frames::FlxFrame_obj::sort(AnimFrames,Prefix.length,postFix1.length);
HXLINE( 730)		{
HXLINE( 730)			int _g = 0;
HXDLIN( 730)			while((_g < AnimFrames->length)){
HXLINE( 730)				 ::flixel::graphics::frames::FlxFrame animFrame = AnimFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 730)				_g = (_g + 1);
HXLINE( 732)				AddTo->push(this->_sprite->frames->frames->indexOf(animFrame,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,byPrefixHelper,(void))

void FlxAnimationController_obj::findByPrefix(::Array< ::Dynamic> AnimFrames,::String Prefix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_738_findByPrefix)
HXDLIN( 738)		int _g = 0;
HXDLIN( 738)		::Array< ::Dynamic> _g1 = this->_sprite->frames->frames;
HXDLIN( 738)		while((_g < _g1->length)){
HXDLIN( 738)			 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 738)			_g = (_g + 1);
HXLINE( 740)			bool _hx_tmp;
HXDLIN( 740)			if (::hx::IsNotNull( frame->name )) {
HXLINE( 740)				_hx_tmp = ::StringTools_obj::startsWith(frame->name,Prefix);
            			}
            			else {
HXLINE( 740)				_hx_tmp = false;
            			}
HXDLIN( 740)			if (_hx_tmp) {
HXLINE( 742)				AnimFrames->push(frame);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,findByPrefix,(void))

int FlxAnimationController_obj::set_frameIndex(int Frame){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_748_set_frameIndex)
HXLINE( 749)		bool _hx_tmp;
HXDLIN( 749)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 749)			_hx_tmp = (this->_sprite->numFrames > 0);
            		}
            		else {
HXLINE( 749)			_hx_tmp = false;
            		}
HXDLIN( 749)		if (_hx_tmp) {
HXLINE( 751)			Frame = ::hx::Mod(Frame,this->_sprite->numFrames);
HXLINE( 752)			this->_sprite->set_frame(this->_sprite->frames->frames->__get(Frame).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE( 753)			this->frameIndex = Frame;
HXLINE( 754)			if (::hx::IsNotNull( this->callback )) {
HXLINE( 754)				::String name;
HXDLIN( 754)				if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 754)					name = this->_curAnim->name;
            				}
            				else {
HXLINE( 754)					name = null();
            				}
HXDLIN( 754)				int number;
HXDLIN( 754)				if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 754)					number = this->_curAnim->curFrame;
            				}
            				else {
HXLINE( 754)					number = this->frameIndex;
            				}
HXDLIN( 754)				this->callback(name,number,this->frameIndex);
            			}
            		}
HXLINE( 757)		return this->frameIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameIndex,return )

::String FlxAnimationController_obj::get_frameName(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_762_get_frameName)
HXDLIN( 762)		return this->_sprite->frame->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frameName,return )

::String FlxAnimationController_obj::set_frameName(::String Value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_766_set_frameName)
HXLINE( 767)		bool _hx_tmp;
HXDLIN( 767)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 767)			_hx_tmp = this->_sprite->frames->framesHash->exists(Value);
            		}
            		else {
HXLINE( 767)			_hx_tmp = false;
            		}
HXDLIN( 767)		if (_hx_tmp) {
HXLINE( 769)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 771)				this->_curAnim->stop();
HXLINE( 772)				this->_curAnim = null();
            			}
HXLINE( 775)			 ::flixel::graphics::frames::FlxFrame frame = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesHash->get(Value)) );
HXLINE( 776)			if (::hx::IsNotNull( frame )) {
HXLINE( 778)				this->set_frameIndex(this->_sprite->frames->frames->indexOf(frame,null()));
            			}
            		}
HXLINE( 782)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameName,return )

::String FlxAnimationController_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_786_get_name)
HXLINE( 787)		::String animName = null();
HXLINE( 788)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 790)			animName = this->_curAnim->name;
            		}
HXLINE( 792)		return animName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_name,return )

::String FlxAnimationController_obj::set_name(::String AnimName){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_796_set_name)
HXLINE( 797)		this->play(AnimName,null(),null(),null());
HXLINE( 798)		return AnimName;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_name,return )

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::get_curAnim(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_803_get_curAnim)
HXDLIN( 803)		return this->_curAnim;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_curAnim,return )

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::set_curAnim( ::flixel::animation::FlxAnimation Anim){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_807_set_curAnim)
HXLINE( 808)		if (::hx::IsInstanceNotEq( Anim,this->_curAnim )) {
HXLINE( 810)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 812)				this->_curAnim->stop();
            			}
HXLINE( 815)			if (::hx::IsNotNull( Anim )) {
HXLINE( 817)				Anim->play(null(),null(),null());
            			}
            		}
HXLINE( 820)		return (this->_curAnim = Anim);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_curAnim,return )

bool FlxAnimationController_obj::get_paused(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_824_get_paused)
HXLINE( 825)		bool paused = false;
HXLINE( 826)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 828)			paused = this->_curAnim->paused;
            		}
HXLINE( 830)		return paused;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_paused,return )

bool FlxAnimationController_obj::set_paused(bool Value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_834_set_paused)
HXLINE( 835)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 837)			if (Value) {
HXLINE( 839)				this->_curAnim->pause();
            			}
            			else {
HXLINE( 843)				this->_curAnim->paused = false;
            			}
            		}
HXLINE( 846)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_paused,return )

bool FlxAnimationController_obj::get_finished(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_850_get_finished)
HXLINE( 851)		bool finished = true;
HXLINE( 852)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 854)			finished = this->_curAnim->finished;
            		}
HXLINE( 856)		return finished;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_finished,return )

bool FlxAnimationController_obj::set_finished(bool Value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_860_set_finished)
HXLINE( 861)		bool _hx_tmp;
HXDLIN( 861)		if (Value) {
HXLINE( 861)			_hx_tmp = ::hx::IsNotNull( this->_curAnim );
            		}
            		else {
HXLINE( 861)			_hx_tmp = false;
            		}
HXDLIN( 861)		if (_hx_tmp) {
HXLINE( 863)			this->_curAnim->finish();
            		}
HXLINE( 865)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_finished,return )

int FlxAnimationController_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_870_get_numFrames)
HXDLIN( 870)		return this->_sprite->numFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_numFrames,return )

int FlxAnimationController_obj::get_frames(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_874_get_frames)
HXDLIN( 874)		return this->_sprite->numFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frames,return )

int FlxAnimationController_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame Frame){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_884_getFrameIndex)
HXDLIN( 884)		return this->_sprite->frames->frames->indexOf(Frame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getFrameIndex,return )

Float FlxAnimationController_obj::globalSpeed;


::hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__new( ::flixel::FlxSprite Sprite) {
	::hx::ObjectPtr< FlxAnimationController_obj > __this = new FlxAnimationController_obj();
	__this->__construct(Sprite);
	return __this;
}

::hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite Sprite) {
	FlxAnimationController_obj *__this = (FlxAnimationController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAnimationController_obj), true, "flixel.animation.FlxAnimationController"));
	*(void **)__this = FlxAnimationController_obj::_hx_vtable;
	__this->__construct(Sprite);
	return __this;
}

FlxAnimationController_obj::FlxAnimationController_obj()
{
}

void FlxAnimationController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimationController);
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(_prerotated,"_prerotated");
	HX_MARK_MEMBER_NAME(followGlobalSpeed,"followGlobalSpeed");
	HX_MARK_END_CLASS();
}

void FlxAnimationController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(_prerotated,"_prerotated");
	HX_VISIT_MEMBER_NAME(followGlobalSpeed,"followGlobalSpeed");
}

::hx::Val FlxAnimationController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paused() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frames() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		if (HX_FIELD_EQ(inName,"finish") ) { return ::hx::Val( finish_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_curAnim() ); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return ::hx::Val( _sprite ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return ::hx::Val( reverse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_finished() ); }
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return ::hx::Val( _curAnim ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return ::hx::Val( set_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frameName() ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return ::hx::Val( getByName_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return ::hx::Val( frameIndex ); }
		if (HX_FIELD_EQ(inName,"addByNames") ) { return ::hx::Val( addByNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paused") ) { return ::hx::Val( get_paused_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return ::hx::Val( set_paused_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frames") ) { return ::hx::Val( get_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return ::hx::Val( _animations ); }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { return ::hx::Val( _prerotated ); }
		if (HX_FIELD_EQ(inName,"addByPrefix") ) { return ::hx::Val( addByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return ::hx::Val( randomFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_curAnim") ) { return ::hx::Val( get_curAnim_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_curAnim") ) { return ::hx::Val( set_curAnim_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addByIndices") ) { return ::hx::Val( addByIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"fireCallback") ) { return ::hx::Val( fireCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"findByPrefix") ) { return ::hx::Val( findByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_finished") ) { return ::hx::Val( get_finished_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_finished") ) { return ::hx::Val( set_finished_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"appendByNames") ) { return ::hx::Val( appendByNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"byNamesHelper") ) { return ::hx::Val( byNamesHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frameName") ) { return ::hx::Val( get_frameName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frameName") ) { return ::hx::Val( set_frameName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return ::hx::Val( getFrameIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		if (HX_FIELD_EQ(inName,"appendByPrefix") ) { return ::hx::Val( appendByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"byPrefixHelper") ) { return ::hx::Val( byPrefixHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frameIndex") ) { return ::hx::Val( set_frameIndex_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearPrerotated") ) { return ::hx::Val( clearPrerotated_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearAnimations") ) { return ::hx::Val( clearAnimations_dyn() ); }
		if (HX_FIELD_EQ(inName,"appendByIndices") ) { return ::hx::Val( appendByIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"findSpriteFrame") ) { return ::hx::Val( findSpriteFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"byIndicesHelper") ) { return ::hx::Val( byIndicesHelper_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createPrerotated") ) { return ::hx::Val( createPrerotated_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"followGlobalSpeed") ) { return ::hx::Val( followGlobalSpeed ); }
		if (HX_FIELD_EQ(inName,"destroyAnimations") ) { return ::hx::Val( destroyAnimations_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addByStringIndices") ) { return ::hx::Val( addByStringIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"fireFinishCallback") ) { return ::hx::Val( fireFinishCallback_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"appendByStringIndices") ) { return ::hx::Val( appendByStringIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"byStringIndicesHelper") ) { return ::hx::Val( byStringIndicesHelper_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAnimationController_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"globalSpeed") ) { outValue = ( globalSpeed ); return true; }
	}
	return false;
}

::hx::Val FlxAnimationController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_name(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paused(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_curAnim(inValue.Cast<  ::flixel::animation::FlxAnimation >()) ); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_finished(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast<  ::flixel::animation::FlxAnimation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameName(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameIndex(inValue.Cast< int >()) );frameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { _prerotated=inValue.Cast<  ::flixel::animation::FlxPrerotatedAnimation >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"followGlobalSpeed") ) { followGlobalSpeed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAnimationController_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"globalSpeed") ) { globalSpeed=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void FlxAnimationController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curAnim",b1,f7,86,ab));
	outFields->push(HX_("frameIndex",a5,cf,3a,a1));
	outFields->push(HX_("frameName",18,31,80,36));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("_sprite",a4,ed,0c,32));
	outFields->push(HX_("_curAnim",32,51,3f,e5));
	outFields->push(HX_("_animations",0e,02,a6,55));
	outFields->push(HX_("_prerotated",05,51,a3,64));
	outFields->push(HX_("followGlobalSpeed",33,f9,9a,92));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAnimationController_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxAnimationController_obj,frameIndex),HX_("frameIndex",a5,cf,3a,a1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAnimationController_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAnimationController_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxAnimationController_obj,_sprite),HX_("_sprite",a4,ed,0c,32)},
	{::hx::fsObject /*  ::flixel::animation::FlxAnimation */ ,(int)offsetof(FlxAnimationController_obj,_curAnim),HX_("_curAnim",32,51,3f,e5)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxAnimationController_obj,_animations),HX_("_animations",0e,02,a6,55)},
	{::hx::fsObject /*  ::flixel::animation::FlxPrerotatedAnimation */ ,(int)offsetof(FlxAnimationController_obj,_prerotated),HX_("_prerotated",05,51,a3,64)},
	{::hx::fsBool,(int)offsetof(FlxAnimationController_obj,followGlobalSpeed),HX_("followGlobalSpeed",33,f9,9a,92)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxAnimationController_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &FlxAnimationController_obj::globalSpeed,HX_("globalSpeed",24,ef,a7,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxAnimationController_obj_sMemberFields[] = {
	HX_("frameIndex",a5,cf,3a,a1),
	HX_("callback",c5,99,06,7f),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("_sprite",a4,ed,0c,32),
	HX_("_curAnim",32,51,3f,e5),
	HX_("_animations",0e,02,a6,55),
	HX_("_prerotated",05,51,a3,64),
	HX_("followGlobalSpeed",33,f9,9a,92),
	HX_("update",09,86,05,87),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("createPrerotated",02,02,47,c7),
	HX_("destroyAnimations",89,22,77,d5),
	HX_("destroy",fa,2c,86,24),
	HX_("clearPrerotated",d3,4b,be,18),
	HX_("clearAnimations",dc,fc,c0,09),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("append",da,e1,d3,8f),
	HX_("addByNames",50,4a,a2,dd),
	HX_("appendByNames",b7,b3,38,af),
	HX_("addByStringIndices",de,f4,20,5c),
	HX_("appendByStringIndices",45,9d,e9,96),
	HX_("addByIndices",af,b3,3b,79),
	HX_("appendByIndices",d6,84,4c,ac),
	HX_("findSpriteFrame",2f,8a,2e,fe),
	HX_("addByPrefix",0a,56,9c,a1),
	HX_("appendByPrefix",c3,26,a2,33),
	HX_("play",f4,2d,5a,4a),
	HX_("reset",cf,49,c8,e6),
	HX_("finish",53,40,7f,86),
	HX_("stop",02,f0,5b,4c),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("reverse",22,39,fc,1a),
	HX_("getByName",f8,b4,a4,8a),
	HX_("randomFrame",2a,9b,18,71),
	HX_("fireCallback",9b,cf,9f,40),
	HX_("fireFinishCallback",8e,db,9c,e3),
	HX_("byNamesHelper",bf,fa,de,2f),
	HX_("byStringIndicesHelper",cd,4c,c0,21),
	HX_("byIndicesHelper",9e,6f,1b,71),
	HX_("byPrefixHelper",17,cd,67,83),
	HX_("findByPrefix",22,0c,be,5d),
	HX_("set_frameIndex",62,40,50,37),
	HX_("get_frameName",ef,04,e4,f7),
	HX_("set_frameName",fb,e6,e9,3c),
	HX_("get_name",d4,2d,ba,c8),
	HX_("set_name",48,87,17,77),
	HX_("get_curAnim",c8,57,81,31),
	HX_("set_curAnim",d4,5e,ee,3b),
	HX_("get_paused",77,b0,0b,e0),
	HX_("set_paused",eb,4e,89,e3),
	HX_("get_finished",7b,47,28,4a),
	HX_("set_finished",ef,6a,21,5f),
	HX_("get_numFrames",63,ce,ea,1e),
	HX_("get_frames",6f,1f,0d,9d),
	HX_("getFrameIndex",db,2b,ad,fd),
	::String(null()) };

static void FlxAnimationController_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::globalSpeed,"globalSpeed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAnimationController_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::globalSpeed,"globalSpeed");
};

#endif

::hx::Class FlxAnimationController_obj::__mClass;

static ::String FlxAnimationController_obj_sStaticFields[] = {
	HX_("globalSpeed",24,ef,a7,59),
	::String(null())
};

void FlxAnimationController_obj::__register()
{
	FlxAnimationController_obj _hx_dummy;
	FlxAnimationController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.animation.FlxAnimationController",0a,0a,da,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAnimationController_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAnimationController_obj::__SetStatic;
	__mClass->mMarkFunc = FlxAnimationController_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAnimationController_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAnimationController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAnimationController_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAnimationController_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnimationController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnimationController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxAnimationController_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_96_boot)
HXDLIN(  96)		globalSpeed = ((Float)1);
            	}
}

} // end namespace flixel
} // end namespace animation
