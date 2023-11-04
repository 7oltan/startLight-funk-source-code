#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSource
#include <lime/_internal/backend/native/NativeAudioSource.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_119249e340fa9820_32_new,"flixel.sound.FlxSound","new",0x97274060,"flixel.sound.FlxSound.new","flixel/sound/FlxSound.hx",32,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_227_reset,"flixel.sound.FlxSound","reset",0x6d57b9cf,"flixel.sound.FlxSound.reset","flixel/sound/FlxSound.hx",227,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_256_destroy,"flixel.sound.FlxSound","destroy",0x01d19cfa,"flixel.sound.FlxSound.destroy","flixel/sound/FlxSound.hx",256,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_286_update,"flixel.sound.FlxSound","update",0xbdf81609,"flixel.sound.FlxSound.update","flixel/sound/FlxSound.hx",286,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_330_kill,"flixel.sound.FlxSound","kill",0xa9386f9e,"flixel.sound.FlxSound.kill","flixel/sound/FlxSound.hx",330,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_346_loadEmbedded,"flixel.sound.FlxSound","loadEmbedded",0xa30995d0,"flixel.sound.FlxSound.loadEmbedded","flixel/sound/FlxSound.hx",346,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_391_loadStream,"flixel.sound.FlxSound","loadStream",0x11d2d346,"flixel.sound.FlxSound.loadStream","flixel/sound/FlxSound.hx",391,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_384_loadStream,"flixel.sound.FlxSound","loadStream",0x11d2d346,"flixel.sound.FlxSound.loadStream","flixel/sound/FlxSound.hx",384,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_431_init,"flixel.sound.FlxSound","init",0xa7e9cb10,"flixel.sound.FlxSound.init","flixel/sound/FlxSound.hx",431,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_454_proximity,"flixel.sound.FlxSound","proximity",0xdd2d393f,"flixel.sound.FlxSound.proximity","flixel/sound/FlxSound.hx",454,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_475_play,"flixel.sound.FlxSound","play",0xac88bdf4,"flixel.sound.FlxSound.play","flixel/sound/FlxSound.hx",475,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_497_resume,"flixel.sound.FlxSound","resume",0x3f76f9ad,"flixel.sound.FlxSound.resume","flixel/sound/FlxSound.hx",497,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_507_pause,"flixel.sound.FlxSound","pause",0x43e746f6,"flixel.sound.FlxSound.pause","flixel/sound/FlxSound.hx",507,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_521_stop,"flixel.sound.FlxSound","stop",0xae8a8002,"flixel.sound.FlxSound.stop","flixel/sound/FlxSound.hx",521,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_533_fadeOut,"flixel.sound.FlxSound","fadeOut",0x0e87a872,"flixel.sound.FlxSound.fadeOut","flixel/sound/FlxSound.hx",533,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_549_fadeIn,"flixel.sound.FlxSound","fadeIn",0x1b9ddc81,"flixel.sound.FlxSound.fadeIn","flixel/sound/FlxSound.hx",549,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_562_volumeTween,"flixel.sound.FlxSound","volumeTween",0x6bc66a31,"flixel.sound.FlxSound.volumeTween","flixel/sound/FlxSound.hx",562,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_572_getActualVolume,"flixel.sound.FlxSound","getActualVolume",0x75d80cbe,"flixel.sound.FlxSound.getActualVolume","flixel/sound/FlxSound.hx",572,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_583_setPosition,"flixel.sound.FlxSound","setPosition",0xbb1eda6b,"flixel.sound.FlxSound.setPosition","flixel/sound/FlxSound.hx",583,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_592_updateTransform,"flixel.sound.FlxSound","updateTransform",0xd3596e23,"flixel.sound.FlxSound.updateTransform","flixel/sound/FlxSound.hx",592,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_617_startSound,"flixel.sound.FlxSound","startSound",0xe85df50d,"flixel.sound.FlxSound.startSound","flixel/sound/FlxSound.hx",617,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_644_stopped,"flixel.sound.FlxSound","stopped",0x20ad420d,"flixel.sound.FlxSound.stopped","flixel/sound/FlxSound.hx",644,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_667_cleanup,"flixel.sound.FlxSound","cleanup",0x888d7c24,"flixel.sound.FlxSound.cleanup","flixel/sound/FlxSound.hx",667,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_694_gotID3,"flixel.sound.FlxSound","gotID3",0x9c137e2c,"flixel.sound.FlxSound.gotID3","flixel/sound/FlxSound.hx",694,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_704_onFocus,"flixel.sound.FlxSound","onFocus",0x78126e39,"flixel.sound.FlxSound.onFocus","flixel/sound/FlxSound.hx",704,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_710_onFocusLost,"flixel.sound.FlxSound","onFocusLost",0x014954bd,"flixel.sound.FlxSound.onFocusLost","flixel/sound/FlxSound.hx",710,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_717_set_group,"flixel.sound.FlxSound","set_group",0x1bf66ba2,"flixel.sound.FlxSound.set_group","flixel/sound/FlxSound.hx",717,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_738_get_playing,"flixel.sound.FlxSound","get_playing",0xcfd5df85,"flixel.sound.FlxSound.get_playing","flixel/sound/FlxSound.hx",738,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_743_get_volume,"flixel.sound.FlxSound","get_volume",0x9b5529a3,"flixel.sound.FlxSound.get_volume","flixel/sound/FlxSound.hx",743,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_747_set_volume,"flixel.sound.FlxSound","set_volume",0x9ed2c817,"flixel.sound.FlxSound.set_volume","flixel/sound/FlxSound.hx",747,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_755_get_pitch,"flixel.sound.FlxSound","get_pitch",0x61518817,"flixel.sound.FlxSound.get_pitch","flixel/sound/FlxSound.hx",755,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_760_set_pitch,"flixel.sound.FlxSound","set_pitch",0x44a27423,"flixel.sound.FlxSound.set_pitch","flixel/sound/FlxSound.hx",760,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_765_get_pan,"flixel.sound.FlxSound","get_pan",0x041589f4,"flixel.sound.FlxSound.get_pan","flixel/sound/FlxSound.hx",765,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_770_set_pan,"flixel.sound.FlxSound","set_pan",0xf7171b00,"flixel.sound.FlxSound.set_pan","flixel/sound/FlxSound.hx",770,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_775_get_time,"flixel.sound.FlxSound","get_time",0x916e1796,"flixel.sound.FlxSound.get_time","flixel/sound/FlxSound.hx",775,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_779_set_time,"flixel.sound.FlxSound","set_time",0x3fcb710a,"flixel.sound.FlxSound.set_time","flixel/sound/FlxSound.hx",779,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_790_get_length,"flixel.sound.FlxSound","get_length",0xdb0994af,"flixel.sound.FlxSound.get_length","flixel/sound/FlxSound.hx",790,0x5a8e478e)
HX_LOCAL_STACK_FRAME(_hx_pos_119249e340fa9820_795_toString,"flixel.sound.FlxSound","toString",0xfd2560ac,"flixel.sound.FlxSound.toString","flixel/sound/FlxSound.hx",795,0x5a8e478e)
namespace flixel{
namespace sound{

void FlxSound_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_32_new)
HXLINE( 212)		this->_alreadyPaused = false;
HXLINE( 192)		this->_volumeAdjust = ((Float)1.0);
HXLINE( 187)		this->_pitch = ((Float)1.0);
HXLINE( 182)		this->_length = ((Float)0);
HXLINE( 177)		this->_time = ((Float)0);
HXLINE( 133)		this->loopTime = ((Float)0);
HXLINE( 219)		super::__construct();
HXLINE( 220)		this->reset();
            	}

Dynamic FlxSound_obj::__CreateEmpty() { return new FlxSound_obj; }

void *FlxSound_obj::_hx_vtable = 0;

Dynamic FlxSound_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSound_obj > _hx_result = new FlxSound_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49283010) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x49283010;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxSound_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_119249e340fa9820_227_reset)
HXLINE( 228)		this->destroy();
HXLINE( 230)		this->x = ( (Float)(0) );
HXLINE( 231)		this->y = ( (Float)(0) );
HXLINE( 233)		this->_time = ( (Float)(0) );
HXLINE( 234)		this->_paused = false;
HXLINE( 235)		this->_volume = ((Float)1.0);
HXLINE( 236)		this->_pitch = ((Float)1.0);
HXLINE( 237)		this->_volumeAdjust = ((Float)1.0);
HXLINE( 238)		this->looped = false;
HXLINE( 239)		this->loopTime = ((Float)0.0);
HXLINE( 240)		this->endTime = ((Float)0.0);
HXLINE( 241)		this->_target = null();
HXLINE( 242)		this->_radius = ( (Float)(0) );
HXLINE( 243)		this->_proximityPan = false;
HXLINE( 244)		this->set_visible(false);
HXLINE( 245)		this->amplitude = ( (Float)(0) );
HXLINE( 246)		this->amplitudeLeft = ( (Float)(0) );
HXLINE( 247)		this->amplitudeRight = ( (Float)(0) );
HXLINE( 248)		this->autoDestroy = false;
HXLINE( 250)		if (::hx::IsNull( this->_transform )) {
HXLINE( 251)			this->_transform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 252)		this->_transform->pan = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,reset,(void))

void FlxSound_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_256_destroy)
HXLINE( 257)		this->_transform = null();
HXLINE( 258)		this->set_exists(false);
HXLINE( 259)		this->set_active(false);
HXLINE( 260)		this->_target = null();
HXLINE( 261)		this->name = null();
HXLINE( 262)		this->artist = null();
HXLINE( 264)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 266)			this->_channel->removeEventListener(HX_("soundComplete",a8,30,e6,1c),this->stopped_dyn(),null());
HXLINE( 267)			this->_channel->stop();
HXLINE( 268)			this->_channel = null();
            		}
HXLINE( 271)		if (::hx::IsNotNull( this->_sound )) {
HXLINE( 273)			this->_sound->removeEventListener(HX_("id3",f8,03,50,00),this->gotID3_dyn(),null());
HXLINE( 274)			this->_sound = null();
            		}
HXLINE( 277)		this->onComplete = null();
HXLINE( 279)		this->super::destroy();
            	}


void FlxSound_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_286_update)
HXLINE( 287)		if (::hx::IsNull( this->_channel )) {
HXLINE( 288)			return;
            		}
HXLINE( 290)		this->_time = this->_channel->get_position();
HXLINE( 292)		Float radialMultiplier = ((Float)1.0);
HXLINE( 295)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 297)			 ::flixel::math::FlxBasePoint targetPosition = this->_target->getPosition(null());
HXLINE( 298)			Float x = this->x;
HXDLIN( 298)			Float y = this->y;
HXDLIN( 298)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 298)			point->_inPool = false;
HXDLIN( 298)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 298)			point1->_weak = true;
HXDLIN( 298)			Float radialMultiplier1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::distanceTo(targetPosition,point1);
HXDLIN( 298)			radialMultiplier = (radialMultiplier1 / this->_radius);
HXLINE( 299)			targetPosition->put();
HXLINE( 300)			Float lowerBound;
HXDLIN( 300)			if ((radialMultiplier < 0)) {
HXLINE( 300)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 300)				lowerBound = radialMultiplier;
            			}
HXDLIN( 300)			Float radialMultiplier2;
HXDLIN( 300)			if ((lowerBound > 1)) {
HXLINE( 300)				radialMultiplier2 = ( (Float)(1) );
            			}
            			else {
HXLINE( 300)				radialMultiplier2 = lowerBound;
            			}
HXDLIN( 300)			radialMultiplier = (( (Float)(1) ) - radialMultiplier2);
HXLINE( 302)			if (this->_proximityPan) {
HXLINE( 304)				Float d = ((this->x - this->_target->x) / this->_radius);
HXLINE( 305)				Float lowerBound;
HXDLIN( 305)				if ((d < -1)) {
HXLINE( 305)					lowerBound = ( (Float)(-1) );
            				}
            				else {
HXLINE( 305)					lowerBound = d;
            				}
HXDLIN( 305)				Float _hx_tmp;
HXDLIN( 305)				if ((lowerBound > 1)) {
HXLINE( 305)					_hx_tmp = ( (Float)(1) );
            				}
            				else {
HXLINE( 305)					_hx_tmp = lowerBound;
            				}
HXDLIN( 305)				this->_transform->pan = _hx_tmp;
            			}
            		}
HXLINE( 309)		this->_volumeAdjust = radialMultiplier;
HXLINE( 310)		this->updateTransform();
HXLINE( 312)		if ((this->_transform->volume > 0)) {
HXLINE( 314)			this->amplitudeLeft = (this->_channel->leftPeak / this->_transform->volume);
HXLINE( 315)			this->amplitudeRight = (this->_channel->rightPeak / this->_transform->volume);
HXLINE( 316)			this->amplitude = ((this->amplitudeLeft + this->amplitudeRight) * ((Float)0.5));
            		}
            		else {
HXLINE( 320)			this->amplitudeLeft = ( (Float)(0) );
HXLINE( 321)			this->amplitudeRight = ( (Float)(0) );
HXLINE( 322)			this->amplitude = ( (Float)(0) );
            		}
HXLINE( 325)		bool _hx_tmp;
HXDLIN( 325)		if (::hx::IsNotNull( this->endTime )) {
HXLINE( 325)			_hx_tmp = ::hx::IsGreaterEq( this->_time,this->endTime );
            		}
            		else {
HXLINE( 325)			_hx_tmp = false;
            		}
HXDLIN( 325)		if (_hx_tmp) {
HXLINE( 326)			this->stopped(null());
            		}
            	}


void FlxSound_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_330_kill)
HXLINE( 331)		this->super::kill();
HXLINE( 332)		this->cleanup(false,null());
            	}


 ::flixel::sound::FlxSound FlxSound_obj::loadEmbedded( ::Dynamic EmbeddedSound,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete){
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(false);
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_346_loadEmbedded)
HXLINE( 347)		if (::hx::IsNull( EmbeddedSound )) {
HXLINE( 348)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 350)		this->cleanup(true,null());
HXLINE( 352)		if (::Std_obj::isOfType(EmbeddedSound,::hx::ClassOf< ::openfl::media::Sound >())) {
HXLINE( 354)			this->_sound = ( ( ::openfl::media::Sound)(EmbeddedSound) );
            		}
            		else {
HXLINE( 356)			if (::Std_obj::isOfType(EmbeddedSound,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 358)				this->_sound = ( ( ::openfl::media::Sound)(::Type_obj::createInstance(EmbeddedSound,::cpp::VirtualArray_obj::__new(0))) );
            			}
            			else {
HXLINE( 360)				if (::Std_obj::isOfType(EmbeddedSound,::hx::ClassOf< ::String >())) {
HXLINE( 362)					bool _hx_tmp;
HXDLIN( 362)					if (!(::openfl::utils::Assets_obj::exists(( (::String)(EmbeddedSound) ),HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 362)						_hx_tmp = ::openfl::utils::Assets_obj::exists(( (::String)(EmbeddedSound) ),HX_("MUSIC",85,08,49,8e));
            					}
            					else {
HXLINE( 362)						_hx_tmp = true;
            					}
HXDLIN( 362)					if (_hx_tmp) {
HXLINE( 363)						this->_sound = ::openfl::utils::Assets_obj::getSound(( (::String)(EmbeddedSound) ),null());
            					}
            				}
            			}
            		}
HXLINE( 369)		return this->init(Looped,AutoDestroy,OnComplete);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadEmbedded,return )

 ::flixel::sound::FlxSound FlxSound_obj::loadStream(::String SoundURL,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete, ::Dynamic OnLoad){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,OnLoad, ::flixel::sound::FlxSound,_gthis,::Array< ::Dynamic>,loadCallback) HXARGC(1)
            		void _hx_run( ::openfl::events::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_119249e340fa9820_391_loadStream)
HXLINE( 392)			::openfl::events::IEventDispatcher_obj::removeEventListener(e->target,e->type,loadCallback->__get(0),null());
HXLINE( 394)			if (::openfl::utils::_Object::Object_Impl__obj::_hx___eq(_gthis->_sound,e->target)) {
HXLINE( 396)				_gthis->_length = ( (Float)(_gthis->_sound->get_length()) );
HXLINE( 397)				if (::hx::IsNotNull( OnLoad )) {
HXLINE( 398)					OnLoad();
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_119249e340fa9820_384_loadStream)
HXDLIN( 384)		 ::flixel::sound::FlxSound _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 385)		this->cleanup(true,null());
HXLINE( 387)		this->_sound =  ::openfl::media::Sound_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 388)		this->_sound->addEventListener(HX_("id3",f8,03,50,00),this->gotID3_dyn(),null(),null(),null());
HXLINE( 389)		::Array< ::Dynamic> loadCallback = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 390)		loadCallback[0] =  ::Dynamic(new _hx_Closure_0(OnLoad,_gthis,loadCallback));
HXLINE( 402)		this->_sound->addEventListener(HX_("complete",b9,00,c8,7f),loadCallback->__get(0),false,0,true);
HXLINE( 403)		 ::openfl::media::Sound _hx_tmp = this->_sound;
HXDLIN( 403)		_hx_tmp->load( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,SoundURL),null());
HXLINE( 405)		return this->init(Looped,AutoDestroy,OnComplete);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSound_obj,loadStream,return )

 ::flixel::sound::FlxSound FlxSound_obj::init(::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete){
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(false);
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_431_init)
HXLINE( 432)		this->looped = Looped;
HXLINE( 433)		this->autoDestroy = AutoDestroy;
HXLINE( 434)		this->updateTransform();
HXLINE( 435)		this->set_exists(true);
HXLINE( 436)		this->onComplete = OnComplete;
HXLINE( 437)		Float _hx_tmp;
HXDLIN( 437)		if (::hx::IsNull( this->_sound )) {
HXLINE( 437)			_hx_tmp = ( (Float)(0) );
            		}
            		else {
HXLINE( 437)			_hx_tmp = ( (Float)(this->_sound->get_length()) );
            		}
HXDLIN( 437)		this->_length = _hx_tmp;
HXLINE( 438)		this->endTime = this->_length;
HXLINE( 439)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,init,return )

 ::flixel::sound::FlxSound FlxSound_obj::proximity(Float X,Float Y, ::flixel::FlxObject TargetObject,Float Radius,::hx::Null< bool >  __o_Pan){
            		bool Pan = __o_Pan.Default(true);
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_454_proximity)
HXLINE( 455)		this->x = X;
HXLINE( 456)		this->y = Y;
HXLINE( 457)		this->_target = TargetObject;
HXLINE( 458)		this->_radius = Radius;
HXLINE( 459)		this->_proximityPan = Pan;
HXLINE( 460)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSound_obj,proximity,return )

 ::flixel::sound::FlxSound FlxSound_obj::play(::hx::Null< bool >  __o_ForceRestart,::hx::Null< Float >  __o_StartTime, ::Dynamic EndTime){
            		bool ForceRestart = __o_ForceRestart.Default(false);
            		Float StartTime = __o_StartTime.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_475_play)
HXLINE( 476)		if (!(this->exists)) {
HXLINE( 477)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 479)		if (ForceRestart) {
HXLINE( 480)			this->cleanup(false,true);
            		}
            		else {
HXLINE( 481)			if (::hx::IsNotNull( this->_channel )) {
HXLINE( 482)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
            		}
HXLINE( 484)		if (this->_paused) {
HXLINE( 485)			this->resume();
            		}
            		else {
HXLINE( 487)			this->startSound(StartTime);
            		}
HXLINE( 489)		this->endTime = EndTime;
HXLINE( 490)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,play,return )

 ::flixel::sound::FlxSound FlxSound_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_497_resume)
HXLINE( 498)		if (this->_paused) {
HXLINE( 499)			this->startSound(this->_time);
            		}
HXLINE( 500)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,resume,return )

 ::flixel::sound::FlxSound FlxSound_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_507_pause)
HXLINE( 508)		if (::hx::IsNull( this->_channel )) {
HXLINE( 509)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 511)		this->_time = this->_channel->get_position();
HXLINE( 512)		this->_paused = true;
HXLINE( 513)		this->cleanup(false,false);
HXLINE( 514)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,pause,return )

 ::flixel::sound::FlxSound FlxSound_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_521_stop)
HXLINE( 522)		this->cleanup(this->autoDestroy,true);
HXLINE( 523)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,stop,return )

 ::flixel::sound::FlxSound FlxSound_obj::fadeOut(::hx::Null< Float >  __o_Duration, ::Dynamic __o_To, ::Dynamic onComplete){
            		Float Duration = __o_Duration.Default(1);
            		 ::Dynamic To = __o_To;
            		if (::hx::IsNull(__o_To)) To = 0;
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_533_fadeOut)
HXLINE( 534)		if (::hx::IsNotNull( this->fadeTween )) {
HXLINE( 535)			this->fadeTween->cancel();
            		}
HXLINE( 536)		this->fadeTween = ::flixel::tweens::FlxTween_obj::num(this->_volume,( (Float)(To) ),Duration, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),this->volumeTween_dyn());
HXLINE( 538)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,fadeOut,return )

 ::flixel::sound::FlxSound FlxSound_obj::fadeIn(::hx::Null< Float >  __o_Duration,::hx::Null< Float >  __o_From,::hx::Null< Float >  __o_To, ::Dynamic onComplete){
            		Float Duration = __o_Duration.Default(1);
            		Float From = __o_From.Default(0);
            		Float To = __o_To.Default(1);
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_549_fadeIn)
HXLINE( 550)		if (::hx::IsNull( this->_channel )) {
HXLINE( 551)			this->play(null(),null(),null());
            		}
HXLINE( 553)		if (::hx::IsNotNull( this->fadeTween )) {
HXLINE( 554)			this->fadeTween->cancel();
            		}
HXLINE( 556)		this->fadeTween = ::flixel::tweens::FlxTween_obj::num(From,To,Duration, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),this->volumeTween_dyn());
HXLINE( 557)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,fadeIn,return )

void FlxSound_obj::volumeTween(Float f){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_562_volumeTween)
HXDLIN( 562)		this->set_volume(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,volumeTween,(void))

Float FlxSound_obj::getActualVolume(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_572_getActualVolume)
HXDLIN( 572)		return (this->_volume * this->_volumeAdjust);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,getActualVolume,return )

void FlxSound_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_583_setPosition)
HXLINE( 584)		this->x = X;
HXLINE( 585)		this->y = Y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,setPosition,(void))

void FlxSound_obj::updateTransform(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_592_updateTransform)
HXLINE( 593)		int _hx_tmp;
HXDLIN( 593)		if (::flixel::FlxG_obj::sound->muted) {
HXLINE( 593)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 593)			_hx_tmp = 1;
            		}
HXLINE( 594)		Float _hx_tmp1;
HXDLIN( 594)		if (::hx::IsNotNull( this->group )) {
HXLINE( 594)			_hx_tmp1 = this->group->volume;
            		}
            		else {
HXLINE( 594)			_hx_tmp1 = ( (Float)(1) );
            		}
HXLINE( 593)		this->_transform->volume = ((((( (Float)(_hx_tmp) ) * ::flixel::FlxG_obj::sound->volume) * _hx_tmp1) * this->_volume) * this->_volumeAdjust);
HXLINE( 596)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 598)			this->_channel->set_soundTransform(this->_transform);
HXLINE( 601)			if (::hx::IsNotNull( this->_channel->_hx___source )) {
HXLINE( 605)				this->_channel->_hx___source->_hx___backend->setPitch(this->_pitch);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,updateTransform,(void))

void FlxSound_obj::startSound(Float StartTime){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_617_startSound)
HXLINE( 618)		if (::hx::IsNull( this->_sound )) {
HXLINE( 619)			return;
            		}
HXLINE( 621)		this->_time = StartTime;
HXLINE( 622)		this->_paused = false;
HXLINE( 623)		this->_channel = this->_sound->play(this->_time,0,this->_transform);
HXLINE( 624)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 629)			this->_channel->addEventListener(HX_("soundComplete",a8,30,e6,1c),this->stopped_dyn(),null(),null(),null());
HXLINE( 630)			this->set_active(true);
            		}
            		else {
HXLINE( 634)			this->set_exists(false);
HXLINE( 635)			this->set_active(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,startSound,(void))

void FlxSound_obj::stopped( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_644_stopped)
HXLINE( 645)		if (::hx::IsNotNull( this->onComplete )) {
HXLINE( 646)			this->onComplete();
            		}
HXLINE( 648)		if (this->looped) {
HXLINE( 650)			this->cleanup(false,null());
HXLINE( 651)			this->play(false,this->loopTime,this->endTime);
            		}
            		else {
HXLINE( 654)			this->cleanup(this->autoDestroy,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,stopped,(void))

void FlxSound_obj::cleanup(bool destroySound,::hx::Null< bool >  __o_resetPosition){
            		bool resetPosition = __o_resetPosition.Default(true);
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_667_cleanup)
HXLINE( 668)		if (destroySound) {
HXLINE( 670)			this->reset();
HXLINE( 671)			return;
            		}
HXLINE( 674)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 676)			this->_channel->removeEventListener(HX_("soundComplete",a8,30,e6,1c),this->stopped_dyn(),null());
HXLINE( 677)			this->_channel->stop();
HXLINE( 678)			this->_channel = null();
            		}
HXLINE( 681)		this->set_active(false);
HXLINE( 683)		if (resetPosition) {
HXLINE( 685)			this->_time = ( (Float)(0) );
HXLINE( 686)			this->_paused = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,cleanup,(void))

void FlxSound_obj::gotID3( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_694_gotID3)
HXLINE( 695)		this->name = this->_sound->get_id3()->songName;
HXLINE( 696)		this->artist = this->_sound->get_id3()->artist;
HXLINE( 697)		this->_sound->removeEventListener(HX_("id3",f8,03,50,00),this->gotID3_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,gotID3,(void))

void FlxSound_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_704_onFocus)
HXDLIN( 704)		if (!(this->_alreadyPaused)) {
HXLINE( 705)			this->resume();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocus,(void))

void FlxSound_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_710_onFocusLost)
HXLINE( 711)		this->_alreadyPaused = this->_paused;
HXLINE( 712)		this->pause();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocusLost,(void))

 ::flixel::_hx_system::FlxSoundGroup FlxSound_obj::set_group( ::flixel::_hx_system::FlxSoundGroup group){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_717_set_group)
HXLINE( 718)		if (::hx::IsInstanceNotEq( this->group,group )) {
HXLINE( 720)			 ::flixel::_hx_system::FlxSoundGroup oldGroup = this->group;
HXLINE( 723)			this->group = group;
HXLINE( 725)			if (::hx::IsNotNull( oldGroup )) {
HXLINE( 726)				oldGroup->remove(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 728)			if (::hx::IsNotNull( group )) {
HXLINE( 729)				group->add(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 731)			this->updateTransform();
            		}
HXLINE( 733)		return group;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_group,return )

bool FlxSound_obj::get_playing(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_738_get_playing)
HXDLIN( 738)		return ::hx::IsNotNull( this->_channel );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_playing,return )

Float FlxSound_obj::get_volume(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_743_get_volume)
HXDLIN( 743)		return this->_volume;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_volume,return )

Float FlxSound_obj::set_volume(Float Volume){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_747_set_volume)
HXLINE( 748)		Float lowerBound;
HXDLIN( 748)		if ((Volume < 0)) {
HXLINE( 748)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 748)			lowerBound = Volume;
            		}
HXDLIN( 748)		Float _hx_tmp;
HXDLIN( 748)		if ((lowerBound > 1)) {
HXLINE( 748)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 748)			_hx_tmp = lowerBound;
            		}
HXDLIN( 748)		this->_volume = _hx_tmp;
HXLINE( 749)		this->updateTransform();
HXLINE( 750)		return Volume;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_volume,return )

Float FlxSound_obj::get_pitch(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_755_get_pitch)
HXDLIN( 755)		return this->_pitch;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_pitch,return )

Float FlxSound_obj::set_pitch(Float v){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_760_set_pitch)
HXDLIN( 760)		return (this->_pitch = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_pitch,return )

Float FlxSound_obj::get_pan(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_765_get_pan)
HXDLIN( 765)		return this->_transform->pan;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_pan,return )

Float FlxSound_obj::set_pan(Float pan){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_770_set_pan)
HXDLIN( 770)		return (this->_transform->pan = pan);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_pan,return )

Float FlxSound_obj::get_time(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_775_get_time)
HXDLIN( 775)		return this->_time;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_time,return )

Float FlxSound_obj::set_time(Float time){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_779_set_time)
HXLINE( 780)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 782)			this->cleanup(false,true);
HXLINE( 783)			this->startSound(time);
            		}
HXLINE( 785)		return (this->_time = time);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_time,return )

Float FlxSound_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_790_get_length)
HXDLIN( 790)		return this->_length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_length,return )

::String FlxSound_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_119249e340fa9820_795_toString)
HXLINE( 796)		 ::Dynamic value = ::hx::IsNotNull( this->_channel );
HXDLIN( 796)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 796)		_this->label = HX_("playing",6e,0f,18,8a);
HXDLIN( 796)		_this->value = value;
HXLINE( 797)		 ::Dynamic value1 = this->_time;
HXDLIN( 797)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 797)		_this1->label = HX_("time",0d,cc,fc,4c);
HXDLIN( 797)		_this1->value = value1;
HXLINE( 798)		 ::Dynamic value2 = this->_length;
HXDLIN( 798)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 798)		_this2->label = HX_("length",e6,94,07,9f);
HXDLIN( 798)		_this2->value = value2;
HXLINE( 799)		 ::Dynamic value3 = this->_volume;
HXDLIN( 799)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 799)		_this3->label = HX_("volume",da,29,53,5f);
HXDLIN( 799)		_this3->value = value3;
HXLINE( 800)		 ::Dynamic value4 = this->_pitch;
HXDLIN( 800)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 800)		_this4->label = HX_("pitch",c0,bb,a0,c2);
HXDLIN( 800)		_this4->value = value4;
HXLINE( 795)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(5)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4));
            	}



::hx::ObjectPtr< FlxSound_obj > FlxSound_obj::__new() {
	::hx::ObjectPtr< FlxSound_obj > __this = new FlxSound_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSound_obj > FlxSound_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSound_obj *__this = (FlxSound_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSound_obj), true, "flixel.sound.FlxSound"));
	*(void **)__this = FlxSound_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSound_obj::FlxSound_obj()
{
}

void FlxSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSound);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(artist,"artist");
	HX_MARK_MEMBER_NAME(amplitude,"amplitude");
	HX_MARK_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_MARK_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_MARK_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(loopTime,"loopTime");
	HX_MARK_MEMBER_NAME(endTime,"endTime");
	HX_MARK_MEMBER_NAME(fadeTween,"fadeTween");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	HX_MARK_MEMBER_NAME(_channel,"_channel");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_volume,"_volume");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(_pitch,"_pitch");
	HX_MARK_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_MARK_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(artist,"artist");
	HX_VISIT_MEMBER_NAME(amplitude,"amplitude");
	HX_VISIT_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_VISIT_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_VISIT_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(loopTime,"loopTime");
	HX_VISIT_MEMBER_NAME(endTime,"endTime");
	HX_VISIT_MEMBER_NAME(fadeTween,"fadeTween");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	HX_VISIT_MEMBER_NAME(_channel,"_channel");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_volume,"_volume");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(_pitch,"_pitch");
	HX_VISIT_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_VISIT_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSound_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pan() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_time() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pitch() ); }
		if (HX_FIELD_EQ(inName,"group") ) { return ::hx::Val( group ); }
		if (HX_FIELD_EQ(inName,"_time") ) { return ::hx::Val( _time ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { return ::hx::Val( artist ); }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_volume() ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"looped") ) { return ::hx::Val( looped ); }
		if (HX_FIELD_EQ(inName,"_sound") ) { return ::hx::Val( _sound ); }
		if (HX_FIELD_EQ(inName,"_pitch") ) { return ::hx::Val( _pitch ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return ::hx::Val( fadeIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"gotID3") ) { return ::hx::Val( gotID3_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return ::hx::Val( persist ); }
		if (HX_FIELD_EQ(inName,"playing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_playing() ); }
		if (HX_FIELD_EQ(inName,"endTime") ) { return ::hx::Val( endTime ); }
		if (HX_FIELD_EQ(inName,"_paused") ) { return ::hx::Val( _paused ); }
		if (HX_FIELD_EQ(inName,"_volume") ) { return ::hx::Val( _volume ); }
		if (HX_FIELD_EQ(inName,"_length") ) { return ::hx::Val( _length ); }
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"_radius") ) { return ::hx::Val( _radius ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return ::hx::Val( fadeOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return ::hx::Val( stopped_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return ::hx::Val( cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return ::hx::Val( get_pan_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return ::hx::Val( set_pan_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopTime") ) { return ::hx::Val( loopTime ); }
		if (HX_FIELD_EQ(inName,"_channel") ) { return ::hx::Val( _channel ); }
		if (HX_FIELD_EQ(inName,"get_time") ) { return ::hx::Val( get_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"amplitude") ) { return ::hx::Val( amplitude ); }
		if (HX_FIELD_EQ(inName,"fadeTween") ) { return ::hx::Val( fadeTween ); }
		if (HX_FIELD_EQ(inName,"proximity") ) { return ::hx::Val( proximity_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return ::hx::Val( set_group_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pitch") ) { return ::hx::Val( get_pitch_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pitch") ) { return ::hx::Val( set_pitch_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return ::hx::Val( _transform ); }
		if (HX_FIELD_EQ(inName,"loadStream") ) { return ::hx::Val( loadStream_dyn() ); }
		if (HX_FIELD_EQ(inName,"startSound") ) { return ::hx::Val( startSound_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return ::hx::Val( get_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { return ::hx::Val( autoDestroy ); }
		if (HX_FIELD_EQ(inName,"volumeTween") ) { return ::hx::Val( volumeTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_playing") ) { return ::hx::Val( get_playing_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEmbedded") ) { return ::hx::Val( loadEmbedded_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { return ::hx::Val( amplitudeLeft ); }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { return ::hx::Val( _volumeAdjust ); }
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { return ::hx::Val( _proximityPan ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { return ::hx::Val( amplitudeRight ); }
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { return ::hx::Val( _alreadyPaused ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getActualVolume") ) { return ::hx::Val( getActualVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTransform") ) { return ::hx::Val( updateTransform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSound_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pan(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pitch(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_group(inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >()) );group=inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { artist=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pitch") ) { _pitch=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endTime") ) { endTime=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopTime") ) { loopTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_channel") ) { _channel=inValue.Cast<  ::openfl::media::SoundChannel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"amplitude") ) { amplitude=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fadeTween") ) { fadeTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { autoDestroy=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { amplitudeLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { _volumeAdjust=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { _proximityPan=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { amplitudeRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { _alreadyPaused=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("persist",14,22,71,83));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("artist",c7,f2,48,b9));
	outFields->push(HX_("amplitude",43,15,fb,69));
	outFields->push(HX_("amplitudeLeft",ea,a6,0b,b4));
	outFields->push(HX_("amplitudeRight",99,73,33,4d));
	outFields->push(HX_("autoDestroy",4b,d1,69,0a));
	outFields->push(HX_("pan",5d,51,55,00));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("pitch",c0,bb,a0,c2));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("group",3f,b3,f4,99));
	outFields->push(HX_("looped",c3,5f,b9,61));
	outFields->push(HX_("loopTime",91,a0,6a,3f));
	outFields->push(HX_("endTime",88,85,21,2f));
	outFields->push(HX_("fadeTween",4f,03,59,05));
	outFields->push(HX_("_sound",10,d4,b3,7c));
	outFields->push(HX_("_channel",44,5a,8a,06));
	outFields->push(HX_("_transform",2d,a9,35,a1));
	outFields->push(HX_("_paused",4d,52,fb,5d));
	outFields->push(HX_("_volume",79,3b,ca,cd));
	outFields->push(HX_("_time",ec,e7,0d,00));
	outFields->push(HX_("_length",85,a6,7e,0d));
	outFields->push(HX_("_pitch",01,03,88,be));
	outFields->push(HX_("_volumeAdjust",e8,dc,fb,32));
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("_radius",f1,e1,6d,1f));
	outFields->push(HX_("_proximityPan",3d,e4,2d,8b));
	outFields->push(HX_("_alreadyPaused",a7,fe,5b,ba));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSound_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,persist),HX_("persist",14,22,71,83)},
	{::hx::fsString,(int)offsetof(FlxSound_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(FlxSound_obj,artist),HX_("artist",c7,f2,48,b9)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,amplitude),HX_("amplitude",43,15,fb,69)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,amplitudeLeft),HX_("amplitudeLeft",ea,a6,0b,b4)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,amplitudeRight),HX_("amplitudeRight",99,73,33,4d)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,autoDestroy),HX_("autoDestroy",4b,d1,69,0a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSound_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSoundGroup */ ,(int)offsetof(FlxSound_obj,group),HX_("group",3f,b3,f4,99)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,looped),HX_("looped",c3,5f,b9,61)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,loopTime),HX_("loopTime",91,a0,6a,3f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSound_obj,endTime),HX_("endTime",88,85,21,2f)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(FlxSound_obj,fadeTween),HX_("fadeTween",4f,03,59,05)},
	{::hx::fsObject /*  ::openfl::media::Sound */ ,(int)offsetof(FlxSound_obj,_sound),HX_("_sound",10,d4,b3,7c)},
	{::hx::fsObject /*  ::openfl::media::SoundChannel */ ,(int)offsetof(FlxSound_obj,_channel),HX_("_channel",44,5a,8a,06)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(FlxSound_obj,_transform),HX_("_transform",2d,a9,35,a1)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,_paused),HX_("_paused",4d,52,fb,5d)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_volume),HX_("_volume",79,3b,ca,cd)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_time),HX_("_time",ec,e7,0d,00)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_length),HX_("_length",85,a6,7e,0d)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_pitch),HX_("_pitch",01,03,88,be)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_volumeAdjust),HX_("_volumeAdjust",e8,dc,fb,32)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxSound_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_radius),HX_("_radius",f1,e1,6d,1f)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,_proximityPan),HX_("_proximityPan",3d,e4,2d,8b)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,_alreadyPaused),HX_("_alreadyPaused",a7,fe,5b,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSound_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSound_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("persist",14,22,71,83),
	HX_("name",4b,72,ff,48),
	HX_("artist",c7,f2,48,b9),
	HX_("amplitude",43,15,fb,69),
	HX_("amplitudeLeft",ea,a6,0b,b4),
	HX_("amplitudeRight",99,73,33,4d),
	HX_("autoDestroy",4b,d1,69,0a),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("group",3f,b3,f4,99),
	HX_("looped",c3,5f,b9,61),
	HX_("loopTime",91,a0,6a,3f),
	HX_("endTime",88,85,21,2f),
	HX_("fadeTween",4f,03,59,05),
	HX_("_sound",10,d4,b3,7c),
	HX_("_channel",44,5a,8a,06),
	HX_("_transform",2d,a9,35,a1),
	HX_("_paused",4d,52,fb,5d),
	HX_("_volume",79,3b,ca,cd),
	HX_("_time",ec,e7,0d,00),
	HX_("_length",85,a6,7e,0d),
	HX_("_pitch",01,03,88,be),
	HX_("_volumeAdjust",e8,dc,fb,32),
	HX_("_target",f0,04,64,f5),
	HX_("_radius",f1,e1,6d,1f),
	HX_("_proximityPan",3d,e4,2d,8b),
	HX_("_alreadyPaused",a7,fe,5b,ba),
	HX_("reset",cf,49,c8,e6),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("kill",9e,df,09,47),
	HX_("loadEmbedded",d0,05,cb,97),
	HX_("loadStream",46,43,58,c6),
	HX_("init",10,3b,bb,45),
	HX_("proximity",3f,c9,25,82),
	HX_("play",f4,2d,5a,4a),
	HX_("resume",ad,69,84,08),
	HX_("pause",f6,d6,57,bd),
	HX_("stop",02,f0,5b,4c),
	HX_("fadeOut",72,38,3c,31),
	HX_("fadeIn",81,4c,ab,e4),
	HX_("volumeTween",31,fa,02,ac),
	HX_("getActualVolume",be,9c,9c,37),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("updateTransform",23,fe,1d,95),
	HX_("startSound",0d,65,e3,9c),
	HX_("stopped",0d,d2,61,43),
	HX_("cleanup",24,0c,42,ab),
	HX_("gotID3",2c,ee,20,65),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("set_group",a2,fb,ee,c0),
	HX_("get_playing",85,6f,12,10),
	HX_("get_volume",a3,99,da,4f),
	HX_("set_volume",17,38,58,53),
	HX_("get_pitch",17,18,4a,06),
	HX_("set_pitch",23,04,9b,e9),
	HX_("get_pan",f4,19,ca,26),
	HX_("set_pan",00,ab,cb,19),
	HX_("get_time",96,87,b7,cc),
	HX_("set_time",0a,e1,14,7b),
	HX_("get_length",af,04,8f,8f),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FlxSound_obj::__mClass;

void FlxSound_obj::__register()
{
	FlxSound_obj _hx_dummy;
	FlxSound_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.sound.FlxSound",6e,d0,2f,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSound_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSound_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSound_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace sound
