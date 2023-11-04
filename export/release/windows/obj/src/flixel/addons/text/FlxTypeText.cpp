#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
#endif
#ifndef INCLUDED_flixel_addons_text_TypeSound
#include <flixel/addons/text/TypeSound.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_09182b6b580f8cf2_27_new,"flixel.addons.text.FlxTypeText","new",0x24edf2f3,"flixel.addons.text.FlxTypeText.new","flixel/addons/text/FlxTypeText.hx",27,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_195_start,"flixel.addons.text.FlxTypeText","start",0x9d61a1b5,"flixel.addons.text.FlxTypeText.start","flixel/addons/text/FlxTypeText.hx",195,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_230_applyMarkup,"flixel.addons.text.FlxTypeText","applyMarkup",0x7596b149,"flixel.addons.text.FlxTypeText.applyMarkup","flixel/addons/text/FlxTypeText.hx",230,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_241_insertBreakLines,"flixel.addons.text.FlxTypeText","insertBreakLines",0x530ffae6,"flixel.addons.text.FlxTypeText.insertBreakLines","flixel/addons/text/FlxTypeText.hx",241,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_282_erase,"flixel.addons.text.FlxTypeText","erase",0x8c731639,"flixel.addons.text.FlxTypeText.erase","flixel/addons/text/FlxTypeText.hx",282,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_318_resetText,"flixel.addons.text.FlxTypeText","resetText",0xe198a8ef,"flixel.addons.text.FlxTypeText.resetText","flixel/addons/text/FlxTypeText.hx",318,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_337_setTypingVariation,"flixel.addons.text.FlxTypeText","setTypingVariation",0x5d85e3a7,"flixel.addons.text.FlxTypeText.setTypingVariation","flixel/addons/text/FlxTypeText.hx",337,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_346_onComplete,"flixel.addons.text.FlxTypeText","onComplete",0xeb447ac5,"flixel.addons.text.FlxTypeText.onComplete","flixel/addons/text/FlxTypeText.hx",346,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_379_onErased,"flixel.addons.text.FlxTypeText","onErased",0xfbbc7fca,"flixel.addons.text.FlxTypeText.onErased","flixel/addons/text/FlxTypeText.hx",379,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_390_update,"flixel.addons.text.FlxTypeText","update",0x99170156,"flixel.addons.text.FlxTypeText.update","flixel/addons/text/FlxTypeText.hx",390,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_528_skip,"flixel.addons.text.FlxTypeText","skip",0x2e99348c,"flixel.addons.text.FlxTypeText.skip","flixel/addons/text/FlxTypeText.hx",528,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_542_loadDefaultSound,"flixel.addons.text.FlxTypeText","loadDefaultSound",0xf442cd21,"flixel.addons.text.FlxTypeText.loadDefaultSound","flixel/addons/text/FlxTypeText.hx",542,0x9451ed7e)
HX_LOCAL_STACK_FRAME(_hx_pos_09182b6b580f8cf2_159_boot,"flixel.addons.text.FlxTypeText","boot",0x235fa23f,"flixel.addons.text.FlxTypeText.boot","flixel/addons/text/FlxTypeText.hx",159,0x9451ed7e)
namespace flixel{
namespace addons{
namespace text{

void FlxTypeText_obj::__construct(Float X,Float Y,int Width,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont){
            		int Size = __o_Size.Default(8);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_27_new)
HXLINE( 154)		this->_typeVarPercent = ((Float)0.5);
HXLINE( 149)		this->_typingVariation = false;
HXLINE( 144)		this->_cursorTimer = ((Float)0.0);
HXLINE( 139)		this->_waiting = false;
HXLINE( 134)		this->_erasing = false;
HXLINE( 129)		this->_typing = false;
HXLINE( 124)		this->_length = 0;
HXLINE( 119)		this->_waitTimer = ((Float)0.0);
HXLINE( 114)		this->_timer = ((Float)0.0);
HXLINE( 109)		this->_finalText = HX_("",00,00,00,00);
HXLINE(  94)		this->skipKeys = ::Array_obj< int >::__new(0);
HXLINE(  89)		this->finishSounds = false;
HXLINE(  82)		this->useDefaultSound = false;
HXLINE(  72)		this->paused = false;
HXLINE(  67)		this->waitTime = ((Float)1.0);
HXLINE(  62)		this->autoErase = false;
HXLINE(  57)		this->prefix = HX_("",00,00,00,00);
HXLINE(  52)		this->cursorBlinkSpeed = ((Float)0.5);
HXLINE(  47)		this->cursorCharacter = HX_("|",7c,00,00,00);
HXLINE(  42)		this->showCursor = false;
HXLINE(  37)		this->eraseDelay = ((Float)0.02);
HXLINE(  32)		this->delay = ((Float)0.05);
HXLINE( 179)		super::__construct(X,Y,Width,HX_("",00,00,00,00),Size,EmbeddedFont);
HXLINE( 180)		this->_finalText = Text;
            	}

Dynamic FlxTypeText_obj::__CreateEmpty() { return new FlxTypeText_obj; }

void *FlxTypeText_obj::_hx_vtable = 0;

Dynamic FlxTypeText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypeText_obj > _hx_result = new FlxTypeText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxTypeText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x55ec573d) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x55ec573d;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTypeText_obj::start( ::Dynamic Delay,::hx::Null< bool >  __o_ForceRestart,::hx::Null< bool >  __o_AutoErase,::Array< int > SkipKeys, ::Dynamic Callback){
            		bool ForceRestart = __o_ForceRestart.Default(false);
            		bool AutoErase = __o_AutoErase.Default(false);
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_195_start)
HXLINE( 196)		if (::hx::IsNotNull( Delay )) {
HXLINE( 198)			this->delay = ( (Float)(Delay) );
            		}
HXLINE( 201)		this->_typing = true;
HXLINE( 202)		this->_erasing = false;
HXLINE( 203)		this->paused = false;
HXLINE( 204)		this->_waiting = false;
HXLINE( 206)		if (ForceRestart) {
HXLINE( 208)			this->set_text(HX_("",00,00,00,00));
HXLINE( 209)			this->_length = 0;
            		}
HXLINE( 212)		this->autoErase = AutoErase;
HXLINE( 214)		if (::hx::IsNotNull( SkipKeys )) {
HXLINE( 216)			this->skipKeys = SkipKeys;
            		}
HXLINE( 219)		this->completeCallback = Callback;
HXLINE( 221)		this->insertBreakLines();
HXLINE( 223)		if (this->useDefaultSound) {
HXLINE( 225)			this->loadDefaultSound();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypeText_obj,start,(void))

 ::flixel::text::FlxText FlxTypeText_obj::applyMarkup(::String input,::Array< ::Dynamic> rules){
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_230_applyMarkup)
HXLINE( 231)		this->super::applyMarkup(input,rules);
HXLINE( 232)		this->resetText(this->text);
HXLINE( 233)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void FlxTypeText_obj::insertBreakLines(){
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_241_insertBreakLines)
HXLINE( 242)		::String saveText = this->text;
HXLINE( 244)		int last = this->_finalText.length;
HXLINE( 245)		int n0 = 0;
HXLINE( 246)		int n1 = 0;
HXLINE( 248)		while(true){
HXLINE( 250)			last = this->_finalText.substr(0,last).lastIndexOf(HX_(" ",20,00,00,00),null());
HXLINE( 252)			if ((last <= 0)) {
HXLINE( 253)				goto _hx_goto_3;
            			}
HXLINE( 255)			this->set_text((this->prefix + this->_finalText));
HXLINE( 256)			n0 = this->textField->get_numLines();
HXLINE( 258)			::String nextText = (this->_finalText.substr(0,last) + HX_("\n",0a,00,00,00));
HXDLIN( 258)			::String nextText1 = (nextText + this->_finalText.substr((last + 1),this->_finalText.length));
HXLINE( 260)			this->set_text((this->prefix + nextText1));
HXLINE( 261)			n1 = this->textField->get_numLines();
HXLINE( 263)			if ((n0 == n1)) {
HXLINE( 265)				this->_finalText = nextText1;
            			}
            		}
            		_hx_goto_3:;
HXLINE( 269)		this->set_text(saveText);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypeText_obj,insertBreakLines,(void))

void FlxTypeText_obj::erase( ::Dynamic Delay,::hx::Null< bool >  __o_ForceRestart,::Array< int > SkipKeys, ::Dynamic Callback){
            		bool ForceRestart = __o_ForceRestart.Default(false);
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_282_erase)
HXLINE( 283)		this->_erasing = true;
HXLINE( 284)		this->_typing = false;
HXLINE( 285)		this->paused = false;
HXLINE( 286)		this->_waiting = false;
HXLINE( 288)		if (::hx::IsNotNull( Delay )) {
HXLINE( 290)			this->eraseDelay = ( (Float)(Delay) );
            		}
HXLINE( 293)		if (ForceRestart) {
HXLINE( 295)			this->_length = this->_finalText.length;
HXLINE( 296)			this->set_text(this->_finalText);
            		}
HXLINE( 299)		if (::hx::IsNotNull( SkipKeys )) {
HXLINE( 301)			this->skipKeys = SkipKeys;
            		}
HXLINE( 304)		this->eraseCallback = Callback;
HXLINE( 306)		if (this->useDefaultSound) {
HXLINE( 308)			this->loadDefaultSound();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypeText_obj,erase,(void))

void FlxTypeText_obj::resetText(::String Text){
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_318_resetText)
HXLINE( 319)		this->set_text(HX_("",00,00,00,00));
HXLINE( 320)		this->_finalText = Text;
HXLINE( 321)		this->_typing = false;
HXLINE( 322)		this->_erasing = false;
HXLINE( 323)		this->paused = false;
HXLINE( 324)		this->_waiting = false;
HXLINE( 325)		this->_length = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypeText_obj,resetText,(void))

void FlxTypeText_obj::setTypingVariation(::hx::Null< Float >  __o_Amount,::hx::Null< bool >  __o_On){
            		Float Amount = __o_Amount.Default(((Float)0.5));
            		bool On = __o_On.Default(true);
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_337_setTypingVariation)
HXLINE( 338)		this->_typingVariation = On;
HXLINE( 339)		Float lowerBound;
HXDLIN( 339)		if ((Amount < 0)) {
HXLINE( 339)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 339)			lowerBound = Amount;
            		}
HXDLIN( 339)		Float _hx_tmp;
HXDLIN( 339)		if ((lowerBound > 1)) {
HXLINE( 339)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 339)			_hx_tmp = lowerBound;
            		}
HXDLIN( 339)		this->_typeVarPercent = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypeText_obj,setTypingVariation,(void))

void FlxTypeText_obj::onComplete(){
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_346_onComplete)
HXLINE( 347)		this->_timer = ( (Float)(0) );
HXLINE( 348)		this->_typing = false;
HXLINE( 350)		if (this->useDefaultSound) {
HXLINE( 352)			 ::flixel::sound::FlxSound _this = this->_sound;
HXDLIN( 352)			_this->cleanup(_this->autoDestroy,true);
            		}
            		else {
HXLINE( 354)			if (::hx::IsNotNull( this->sounds )) {
HXLINE( 356)				int _g = 0;
HXDLIN( 356)				::Array< ::Dynamic> _g1 = this->sounds;
HXDLIN( 356)				while((_g < _g1->length)){
HXLINE( 356)					 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN( 356)					_g = (_g + 1);
HXLINE( 358)					sound->cleanup(sound->autoDestroy,true);
            				}
            			}
            		}
HXLINE( 362)		if (::hx::IsNotNull( this->completeCallback )) {
HXLINE( 364)			this->completeCallback();
            		}
HXLINE( 367)		bool _hx_tmp;
HXDLIN( 367)		if (this->autoErase) {
HXLINE( 367)			_hx_tmp = (this->waitTime <= 0);
            		}
            		else {
HXLINE( 367)			_hx_tmp = false;
            		}
HXDLIN( 367)		if (_hx_tmp) {
HXLINE( 369)			this->_erasing = true;
            		}
            		else {
HXLINE( 371)			if (this->autoErase) {
HXLINE( 373)				this->_waitTimer = this->waitTime;
HXLINE( 374)				this->_waiting = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypeText_obj,onComplete,(void))

void FlxTypeText_obj::onErased(){
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_379_onErased)
HXLINE( 380)		this->_timer = ( (Float)(0) );
HXLINE( 381)		this->_erasing = false;
HXLINE( 383)		if (::hx::IsNotNull( this->eraseCallback )) {
HXLINE( 385)			this->eraseCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypeText_obj,onErased,(void))

void FlxTypeText_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_390_update)
HXLINE( 393)		bool _hx_tmp;
HXDLIN( 393)		bool _hx_tmp1;
HXDLIN( 393)		if (::hx::IsNotNull( this->skipKeys )) {
HXLINE( 393)			_hx_tmp1 = (this->skipKeys->length > 0);
            		}
            		else {
HXLINE( 393)			_hx_tmp1 = false;
            		}
HXDLIN( 393)		if (_hx_tmp1) {
HXLINE( 393)			_hx_tmp = ::flixel::FlxG_obj::keys->checkKeyArrayState(this->skipKeys,2);
            		}
            		else {
HXLINE( 393)			_hx_tmp = false;
            		}
HXDLIN( 393)		if (_hx_tmp) {
HXLINE( 395)			this->skip();
            		}
HXLINE( 399)		bool _hx_tmp2;
HXDLIN( 399)		if (this->_waiting) {
HXLINE( 399)			_hx_tmp2 = !(this->paused);
            		}
            		else {
HXLINE( 399)			_hx_tmp2 = false;
            		}
HXDLIN( 399)		if (_hx_tmp2) {
HXLINE( 401)			 ::flixel::addons::text::FlxTypeText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 401)			_hx_tmp->_waitTimer = (_hx_tmp->_waitTimer - elapsed);
HXLINE( 403)			if ((this->_waitTimer <= 0)) {
HXLINE( 405)				this->_waiting = false;
HXLINE( 406)				this->_erasing = true;
            			}
            		}
HXLINE( 411)		bool _hx_tmp3;
HXDLIN( 411)		if (!(this->_waiting)) {
HXLINE( 411)			_hx_tmp3 = !(this->paused);
            		}
            		else {
HXLINE( 411)			_hx_tmp3 = false;
            		}
HXDLIN( 411)		if (_hx_tmp3) {
HXLINE( 413)			bool _hx_tmp;
HXDLIN( 413)			if ((this->_length < this->_finalText.length)) {
HXLINE( 413)				_hx_tmp = this->_typing;
            			}
            			else {
HXLINE( 413)				_hx_tmp = false;
            			}
HXDLIN( 413)			if (_hx_tmp) {
HXLINE( 415)				 ::flixel::addons::text::FlxTypeText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 415)				_hx_tmp->_timer = (_hx_tmp->_timer + elapsed);
            			}
HXLINE( 418)			bool _hx_tmp1;
HXDLIN( 418)			if ((this->_length > 0)) {
HXLINE( 418)				_hx_tmp1 = this->_erasing;
            			}
            			else {
HXLINE( 418)				_hx_tmp1 = false;
            			}
HXDLIN( 418)			if (_hx_tmp1) {
HXLINE( 420)				 ::flixel::addons::text::FlxTypeText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 420)				_hx_tmp->_timer = (_hx_tmp->_timer + elapsed);
            			}
            		}
HXLINE( 426)		bool _hx_tmp4;
HXDLIN( 426)		if (!(this->_typing)) {
HXLINE( 426)			_hx_tmp4 = this->_erasing;
            		}
            		else {
HXLINE( 426)			_hx_tmp4 = true;
            		}
HXDLIN( 426)		if (_hx_tmp4) {
HXLINE( 428)			bool _hx_tmp;
HXDLIN( 428)			if (this->_typing) {
HXLINE( 428)				_hx_tmp = (this->_timer >= this->delay);
            			}
            			else {
HXLINE( 428)				_hx_tmp = false;
            			}
HXDLIN( 428)			if (_hx_tmp) {
HXLINE( 430)				 ::flixel::addons::text::FlxTypeText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 430)				int _hx_tmp1 = _hx_tmp->_length;
HXDLIN( 430)				_hx_tmp->_length = (_hx_tmp1 + ::Std_obj::_hx_int((this->_timer / this->delay)));
HXLINE( 431)				if ((this->_length > this->_finalText.length)) {
HXLINE( 432)					this->_length = this->_finalText.length;
            				}
            			}
HXLINE( 435)			bool _hx_tmp1;
HXDLIN( 435)			if (this->_erasing) {
HXLINE( 435)				_hx_tmp1 = (this->_timer >= this->eraseDelay);
            			}
            			else {
HXLINE( 435)				_hx_tmp1 = false;
            			}
HXDLIN( 435)			if (_hx_tmp1) {
HXLINE( 437)				 ::flixel::addons::text::FlxTypeText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 437)				int _hx_tmp1 = _hx_tmp->_length;
HXDLIN( 437)				_hx_tmp->_length = (_hx_tmp1 - ::Std_obj::_hx_int((this->_timer / this->eraseDelay)));
HXLINE( 438)				if ((this->_length < 0)) {
HXLINE( 439)					this->_length = 0;
            				}
            			}
HXLINE( 442)			bool _hx_tmp2;
HXDLIN( 442)			bool _hx_tmp3;
HXDLIN( 442)			if (this->_typing) {
HXLINE( 442)				_hx_tmp3 = (this->_timer >= this->delay);
            			}
            			else {
HXLINE( 442)				_hx_tmp3 = false;
            			}
HXDLIN( 442)			if (!(_hx_tmp3)) {
HXLINE( 442)				if (this->_erasing) {
HXLINE( 442)					_hx_tmp2 = (this->_timer >= this->eraseDelay);
            				}
            				else {
HXLINE( 442)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 442)				_hx_tmp2 = true;
            			}
HXDLIN( 442)			if (_hx_tmp2) {
HXLINE( 444)				if (this->_typingVariation) {
HXLINE( 446)					if (this->_typing) {
HXLINE( 448)						this->_timer = ::flixel::FlxG_obj::random->_hx_float(((-(this->delay) * this->_typeVarPercent) / ( (Float)(2) )),((this->delay * this->_typeVarPercent) / ( (Float)(2) )),null());
            					}
            					else {
HXLINE( 452)						this->_timer = ::flixel::FlxG_obj::random->_hx_float(((-(this->eraseDelay) * this->_typeVarPercent) / ( (Float)(2) )),((this->eraseDelay * this->_typeVarPercent) / ( (Float)(2) )),null());
            					}
            				}
            				else {
HXLINE( 457)					 ::flixel::addons::text::FlxTypeText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 457)					_hx_tmp->_timer = ::hx::Mod(_hx_tmp->_timer,this->delay);
            				}
HXLINE( 460)				bool _hx_tmp;
HXDLIN( 460)				if (::hx::IsNotNull( this->sounds )) {
HXLINE( 460)					_hx_tmp = !(this->useDefaultSound);
            				}
            				else {
HXLINE( 460)					_hx_tmp = false;
            				}
HXDLIN( 460)				if (_hx_tmp) {
HXLINE( 462)					if (!(this->finishSounds)) {
HXLINE( 464)						int _g = 0;
HXDLIN( 464)						::Array< ::Dynamic> _g1 = this->sounds;
HXDLIN( 464)						while((_g < _g1->length)){
HXLINE( 464)							 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN( 464)							_g = (_g + 1);
HXLINE( 466)							sound->cleanup(sound->autoDestroy,true);
            						}
            					}
HXLINE( 470)					::flixel::FlxG_obj::random->getObject_flixel_system_FlxSound(this->sounds,null(),null(),null())->play(!(this->finishSounds),null(),null());
            				}
            				else {
HXLINE( 472)					if (this->useDefaultSound) {
HXLINE( 474)						this->_sound->play(!(this->finishSounds),null(),null());
            					}
            				}
            			}
            		}
HXLINE( 480)		::String _hx_tmp5 = this->prefix;
HXDLIN( 480)		::flixel::addons::text::FlxTypeText_obj::helperString = (_hx_tmp5 + this->_finalText.substr(0,this->_length));
HXLINE( 483)		if (this->showCursor) {
HXLINE( 485)			 ::flixel::addons::text::FlxTypeText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 485)			_hx_tmp->_cursorTimer = (_hx_tmp->_cursorTimer + elapsed);
HXLINE( 488)			bool isBreakLine = ((this->prefix + this->_finalText).charAt(::flixel::addons::text::FlxTypeText_obj::helperString.length) == HX_("\n",0a,00,00,00));
HXLINE( 490)			bool _hx_tmp1;
HXDLIN( 490)			if ((this->_cursorTimer > (this->cursorBlinkSpeed / ( (Float)(2) )))) {
HXLINE( 490)				_hx_tmp1 = !(isBreakLine);
            			}
            			else {
HXLINE( 490)				_hx_tmp1 = false;
            			}
HXDLIN( 490)			if (_hx_tmp1) {
HXLINE( 492)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::flixel::addons::text::FlxTypeText >();
HXDLIN( 492)				::String _hx_tmp1 = ::flixel::addons::text::FlxTypeText_obj::helperString;
HXDLIN( 492)				::flixel::addons::text::FlxTypeText_obj::helperString = (_hx_tmp1 + this->cursorCharacter.charAt(0));
            			}
HXLINE( 495)			if ((this->_cursorTimer > this->cursorBlinkSpeed)) {
HXLINE( 497)				this->_cursorTimer = ( (Float)(0) );
            			}
            		}
HXLINE( 502)		if ((::flixel::addons::text::FlxTypeText_obj::helperString != this->text)) {
HXLINE( 504)			this->set_text(::flixel::addons::text::FlxTypeText_obj::helperString);
HXLINE( 507)			bool _hx_tmp;
HXDLIN( 507)			bool _hx_tmp1;
HXDLIN( 507)			bool _hx_tmp2;
HXDLIN( 507)			if ((this->_length >= this->_finalText.length)) {
HXLINE( 507)				_hx_tmp2 = this->_typing;
            			}
            			else {
HXLINE( 507)				_hx_tmp2 = false;
            			}
HXDLIN( 507)			if (_hx_tmp2) {
HXLINE( 507)				_hx_tmp1 = !(this->_waiting);
            			}
            			else {
HXLINE( 507)				_hx_tmp1 = false;
            			}
HXDLIN( 507)			if (_hx_tmp1) {
HXLINE( 507)				_hx_tmp = !(this->_erasing);
            			}
            			else {
HXLINE( 507)				_hx_tmp = false;
            			}
HXDLIN( 507)			if (_hx_tmp) {
HXLINE( 509)				this->onComplete();
            			}
HXLINE( 513)			bool _hx_tmp3;
HXDLIN( 513)			bool _hx_tmp4;
HXDLIN( 513)			bool _hx_tmp5;
HXDLIN( 513)			if ((this->_length == 0)) {
HXLINE( 513)				_hx_tmp5 = this->_erasing;
            			}
            			else {
HXLINE( 513)				_hx_tmp5 = false;
            			}
HXDLIN( 513)			if (_hx_tmp5) {
HXLINE( 513)				_hx_tmp4 = !(this->_typing);
            			}
            			else {
HXLINE( 513)				_hx_tmp4 = false;
            			}
HXDLIN( 513)			if (_hx_tmp4) {
HXLINE( 513)				_hx_tmp3 = !(this->_waiting);
            			}
            			else {
HXLINE( 513)				_hx_tmp3 = false;
            			}
HXDLIN( 513)			if (_hx_tmp3) {
HXLINE( 515)				this->onErased();
            			}
            		}
HXLINE( 519)		this->super::update(elapsed);
            	}


void FlxTypeText_obj::skip(){
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_528_skip)
HXDLIN( 528)		bool _hx_tmp;
HXDLIN( 528)		if (!(this->_erasing)) {
HXDLIN( 528)			_hx_tmp = this->_waiting;
            		}
            		else {
HXDLIN( 528)			_hx_tmp = true;
            		}
HXDLIN( 528)		if (_hx_tmp) {
HXLINE( 530)			this->_length = 0;
HXLINE( 531)			this->_waiting = false;
            		}
            		else {
HXLINE( 533)			if (this->_typing) {
HXLINE( 535)				this->_length = this->_finalText.length;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypeText_obj,skip,(void))

void FlxTypeText_obj::loadDefaultSound(){
            	HX_GC_STACKFRAME(&_hx_pos_09182b6b580f8cf2_542_loadDefaultSound)
HXDLIN( 542)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 542)		this->_sound = _hx_tmp->load( ::flixel::addons::text::TypeSound_obj::__alloc( HX_CTX ,null(),null()),null(),null(),null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypeText_obj,loadDefaultSound,(void))

::String FlxTypeText_obj::helperString;


::hx::ObjectPtr< FlxTypeText_obj > FlxTypeText_obj::__new(Float X,Float Y,int Width,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxTypeText_obj > __this = new FlxTypeText_obj();
	__this->__construct(X,Y,Width,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxTypeText_obj > FlxTypeText_obj::__alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,int Width,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxTypeText_obj *__this = (FlxTypeText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypeText_obj), true, "flixel.addons.text.FlxTypeText"));
	*(void **)__this = FlxTypeText_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

FlxTypeText_obj::FlxTypeText_obj()
{
}

void FlxTypeText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypeText);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(eraseDelay,"eraseDelay");
	HX_MARK_MEMBER_NAME(showCursor,"showCursor");
	HX_MARK_MEMBER_NAME(cursorCharacter,"cursorCharacter");
	HX_MARK_MEMBER_NAME(cursorBlinkSpeed,"cursorBlinkSpeed");
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(autoErase,"autoErase");
	HX_MARK_MEMBER_NAME(waitTime,"waitTime");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(sounds,"sounds");
	HX_MARK_MEMBER_NAME(useDefaultSound,"useDefaultSound");
	HX_MARK_MEMBER_NAME(finishSounds,"finishSounds");
	HX_MARK_MEMBER_NAME(skipKeys,"skipKeys");
	HX_MARK_MEMBER_NAME(completeCallback,"completeCallback");
	HX_MARK_MEMBER_NAME(eraseCallback,"eraseCallback");
	HX_MARK_MEMBER_NAME(_finalText,"_finalText");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_waitTimer,"_waitTimer");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(_typing,"_typing");
	HX_MARK_MEMBER_NAME(_erasing,"_erasing");
	HX_MARK_MEMBER_NAME(_waiting,"_waiting");
	HX_MARK_MEMBER_NAME(_cursorTimer,"_cursorTimer");
	HX_MARK_MEMBER_NAME(_typingVariation,"_typingVariation");
	HX_MARK_MEMBER_NAME(_typeVarPercent,"_typeVarPercent");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	 ::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypeText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(eraseDelay,"eraseDelay");
	HX_VISIT_MEMBER_NAME(showCursor,"showCursor");
	HX_VISIT_MEMBER_NAME(cursorCharacter,"cursorCharacter");
	HX_VISIT_MEMBER_NAME(cursorBlinkSpeed,"cursorBlinkSpeed");
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(autoErase,"autoErase");
	HX_VISIT_MEMBER_NAME(waitTime,"waitTime");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(sounds,"sounds");
	HX_VISIT_MEMBER_NAME(useDefaultSound,"useDefaultSound");
	HX_VISIT_MEMBER_NAME(finishSounds,"finishSounds");
	HX_VISIT_MEMBER_NAME(skipKeys,"skipKeys");
	HX_VISIT_MEMBER_NAME(completeCallback,"completeCallback");
	HX_VISIT_MEMBER_NAME(eraseCallback,"eraseCallback");
	HX_VISIT_MEMBER_NAME(_finalText,"_finalText");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_waitTimer,"_waitTimer");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(_typing,"_typing");
	HX_VISIT_MEMBER_NAME(_erasing,"_erasing");
	HX_VISIT_MEMBER_NAME(_waiting,"_waiting");
	HX_VISIT_MEMBER_NAME(_cursorTimer,"_cursorTimer");
	HX_VISIT_MEMBER_NAME(_typingVariation,"_typingVariation");
	HX_VISIT_MEMBER_NAME(_typeVarPercent,"_typeVarPercent");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	 ::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypeText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"erase") ) { return ::hx::Val( erase_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { return ::hx::Val( prefix ); }
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"sounds") ) { return ::hx::Val( sounds ); }
		if (HX_FIELD_EQ(inName,"_timer") ) { return ::hx::Val( _timer ); }
		if (HX_FIELD_EQ(inName,"_sound") ) { return ::hx::Val( _sound ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { return ::hx::Val( _length ); }
		if (HX_FIELD_EQ(inName,"_typing") ) { return ::hx::Val( _typing ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitTime") ) { return ::hx::Val( waitTime ); }
		if (HX_FIELD_EQ(inName,"skipKeys") ) { return ::hx::Val( skipKeys ); }
		if (HX_FIELD_EQ(inName,"_erasing") ) { return ::hx::Val( _erasing ); }
		if (HX_FIELD_EQ(inName,"_waiting") ) { return ::hx::Val( _waiting ); }
		if (HX_FIELD_EQ(inName,"onErased") ) { return ::hx::Val( onErased_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoErase") ) { return ::hx::Val( autoErase ); }
		if (HX_FIELD_EQ(inName,"resetText") ) { return ::hx::Val( resetText_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eraseDelay") ) { return ::hx::Val( eraseDelay ); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return ::hx::Val( showCursor ); }
		if (HX_FIELD_EQ(inName,"_finalText") ) { return ::hx::Val( _finalText ); }
		if (HX_FIELD_EQ(inName,"_waitTimer") ) { return ::hx::Val( _waitTimer ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return ::hx::Val( applyMarkup_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishSounds") ) { return ::hx::Val( finishSounds ); }
		if (HX_FIELD_EQ(inName,"_cursorTimer") ) { return ::hx::Val( _cursorTimer ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"eraseCallback") ) { return ::hx::Val( eraseCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorCharacter") ) { return ::hx::Val( cursorCharacter ); }
		if (HX_FIELD_EQ(inName,"useDefaultSound") ) { return ::hx::Val( useDefaultSound ); }
		if (HX_FIELD_EQ(inName,"_typeVarPercent") ) { return ::hx::Val( _typeVarPercent ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cursorBlinkSpeed") ) { return ::hx::Val( cursorBlinkSpeed ); }
		if (HX_FIELD_EQ(inName,"completeCallback") ) { return ::hx::Val( completeCallback ); }
		if (HX_FIELD_EQ(inName,"_typingVariation") ) { return ::hx::Val( _typingVariation ); }
		if (HX_FIELD_EQ(inName,"insertBreakLines") ) { return ::hx::Val( insertBreakLines_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadDefaultSound") ) { return ::hx::Val( loadDefaultSound_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setTypingVariation") ) { return ::hx::Val( setTypingVariation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTypeText_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"helperString") ) { outValue = ( helperString ); return true; }
	}
	return false;
}

::hx::Val FlxTypeText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast<  ::flixel::sound::FlxSound >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typing") ) { _typing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitTime") ) { waitTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipKeys") ) { skipKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_erasing") ) { _erasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waiting") ) { _waiting=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoErase") ) { autoErase=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eraseDelay") ) { eraseDelay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showCursor") ) { showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finalText") ) { _finalText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitTimer") ) { _waitTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishSounds") ) { finishSounds=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursorTimer") ) { _cursorTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"eraseCallback") ) { eraseCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorCharacter") ) { cursorCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useDefaultSound") ) { useDefaultSound=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typeVarPercent") ) { _typeVarPercent=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cursorBlinkSpeed") ) { cursorBlinkSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"completeCallback") ) { completeCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typingVariation") ) { _typingVariation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTypeText_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"helperString") ) { helperString=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void FlxTypeText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("eraseDelay",bd,5c,83,f3));
	outFields->push(HX_("showCursor",b3,33,5d,a8));
	outFields->push(HX_("cursorCharacter",f3,a1,7a,94));
	outFields->push(HX_("cursorBlinkSpeed",01,63,0f,cc));
	outFields->push(HX_("prefix",92,d9,b6,ae));
	outFields->push(HX_("autoErase",f7,26,28,51));
	outFields->push(HX_("waitTime",22,31,df,55));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("sounds",c4,a8,2e,32));
	outFields->push(HX_("useDefaultSound",35,0f,08,0e));
	outFields->push(HX_("finishSounds",77,dd,a7,2f));
	outFields->push(HX_("skipKeys",13,d0,5b,bd));
	outFields->push(HX_("_finalText",04,c7,73,eb));
	outFields->push(HX_("_timer",06,07,1d,0c));
	outFields->push(HX_("_waitTimer",d1,48,0e,29));
	outFields->push(HX_("_length",85,a6,7e,0d));
	outFields->push(HX_("_typing",16,10,b1,c5));
	outFields->push(HX_("_erasing",24,31,91,5c));
	outFields->push(HX_("_waiting",0e,43,e0,18));
	outFields->push(HX_("_cursorTimer",10,c7,20,ff));
	outFields->push(HX_("_typingVariation",dd,98,2c,da));
	outFields->push(HX_("_typeVarPercent",97,5a,85,58));
	outFields->push(HX_("_sound",10,d4,b3,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypeText_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxTypeText_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsFloat,(int)offsetof(FlxTypeText_obj,eraseDelay),HX_("eraseDelay",bd,5c,83,f3)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,showCursor),HX_("showCursor",b3,33,5d,a8)},
	{::hx::fsString,(int)offsetof(FlxTypeText_obj,cursorCharacter),HX_("cursorCharacter",f3,a1,7a,94)},
	{::hx::fsFloat,(int)offsetof(FlxTypeText_obj,cursorBlinkSpeed),HX_("cursorBlinkSpeed",01,63,0f,cc)},
	{::hx::fsString,(int)offsetof(FlxTypeText_obj,prefix),HX_("prefix",92,d9,b6,ae)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,autoErase),HX_("autoErase",f7,26,28,51)},
	{::hx::fsFloat,(int)offsetof(FlxTypeText_obj,waitTime),HX_("waitTime",22,31,df,55)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTypeText_obj,sounds),HX_("sounds",c4,a8,2e,32)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,useDefaultSound),HX_("useDefaultSound",35,0f,08,0e)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,finishSounds),HX_("finishSounds",77,dd,a7,2f)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTypeText_obj,skipKeys),HX_("skipKeys",13,d0,5b,bd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTypeText_obj,completeCallback),HX_("completeCallback",9e,37,f5,50)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTypeText_obj,eraseCallback),HX_("eraseCallback",cb,94,e1,93)},
	{::hx::fsString,(int)offsetof(FlxTypeText_obj,_finalText),HX_("_finalText",04,c7,73,eb)},
	{::hx::fsFloat,(int)offsetof(FlxTypeText_obj,_timer),HX_("_timer",06,07,1d,0c)},
	{::hx::fsFloat,(int)offsetof(FlxTypeText_obj,_waitTimer),HX_("_waitTimer",d1,48,0e,29)},
	{::hx::fsInt,(int)offsetof(FlxTypeText_obj,_length),HX_("_length",85,a6,7e,0d)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,_typing),HX_("_typing",16,10,b1,c5)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,_erasing),HX_("_erasing",24,31,91,5c)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,_waiting),HX_("_waiting",0e,43,e0,18)},
	{::hx::fsFloat,(int)offsetof(FlxTypeText_obj,_cursorTimer),HX_("_cursorTimer",10,c7,20,ff)},
	{::hx::fsBool,(int)offsetof(FlxTypeText_obj,_typingVariation),HX_("_typingVariation",dd,98,2c,da)},
	{::hx::fsFloat,(int)offsetof(FlxTypeText_obj,_typeVarPercent),HX_("_typeVarPercent",97,5a,85,58)},
	{::hx::fsObject /*  ::flixel::sound::FlxSound */ ,(int)offsetof(FlxTypeText_obj,_sound),HX_("_sound",10,d4,b3,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxTypeText_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxTypeText_obj::helperString,HX_("helperString",df,e0,c7,51)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxTypeText_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("eraseDelay",bd,5c,83,f3),
	HX_("showCursor",b3,33,5d,a8),
	HX_("cursorCharacter",f3,a1,7a,94),
	HX_("cursorBlinkSpeed",01,63,0f,cc),
	HX_("prefix",92,d9,b6,ae),
	HX_("autoErase",f7,26,28,51),
	HX_("waitTime",22,31,df,55),
	HX_("paused",ae,40,84,ef),
	HX_("sounds",c4,a8,2e,32),
	HX_("useDefaultSound",35,0f,08,0e),
	HX_("finishSounds",77,dd,a7,2f),
	HX_("skipKeys",13,d0,5b,bd),
	HX_("completeCallback",9e,37,f5,50),
	HX_("eraseCallback",cb,94,e1,93),
	HX_("_finalText",04,c7,73,eb),
	HX_("_timer",06,07,1d,0c),
	HX_("_waitTimer",d1,48,0e,29),
	HX_("_length",85,a6,7e,0d),
	HX_("_typing",16,10,b1,c5),
	HX_("_erasing",24,31,91,5c),
	HX_("_waiting",0e,43,e0,18),
	HX_("_cursorTimer",10,c7,20,ff),
	HX_("_typingVariation",dd,98,2c,da),
	HX_("_typeVarPercent",97,5a,85,58),
	HX_("_sound",10,d4,b3,7c),
	HX_("start",62,74,0b,84),
	HX_("applyMarkup",b6,43,6b,f6),
	HX_("insertBreakLines",59,7d,50,01),
	HX_("erase",e6,e8,1c,73),
	HX_("resetText",1c,d6,e5,92),
	HX_("setTypingVariation",da,28,c2,7e),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onErased",3d,d7,db,25),
	HX_("update",09,86,05,87),
	HX_("skip",7f,16,55,4c),
	HX_("loadDefaultSound",94,4f,83,a2),
	::String(null()) };

static void FlxTypeText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypeText_obj::helperString,"helperString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTypeText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypeText_obj::helperString,"helperString");
};

#endif

::hx::Class FlxTypeText_obj::__mClass;

static ::String FlxTypeText_obj_sStaticFields[] = {
	HX_("helperString",df,e0,c7,51),
	::String(null())
};

void FlxTypeText_obj::__register()
{
	FlxTypeText_obj _hx_dummy;
	FlxTypeText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.text.FlxTypeText",81,fd,be,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypeText_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTypeText_obj::__SetStatic;
	__mClass->mMarkFunc = FlxTypeText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTypeText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypeText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypeText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTypeText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypeText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypeText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTypeText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_09182b6b580f8cf2_159_boot)
HXDLIN( 159)		helperString = HX_("",00,00,00,00);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace text
