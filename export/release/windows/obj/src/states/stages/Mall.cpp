#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Countdown
#include <backend/Countdown.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
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
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_stages_Mall
#include <states/stages/Mall.h>
#endif
#ifndef INCLUDED_states_stages_objects_MallCrowd
#include <states/stages/objects/MallCrowd.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d703a93a94f2043_5_new,"states.stages.Mall","new",0xbef92e53,"states.stages.Mall.new","states/stages/Mall.hx",5,0x276e4e5d)
HX_LOCAL_STACK_FRAME(_hx_pos_4d703a93a94f2043_12_create,"states.stages.Mall","create",0xcc0102e9,"states.stages.Mall.create","states/stages/Mall.hx",12,0x276e4e5d)
static const ::String _hx_array_data_91f108e1_2[] = {
	HX_("Upper Crowd Bob",a4,72,cf,77),
};
static const ::String _hx_array_data_91f108e1_3[] = {
	HX_("santa idle in fear",72,07,31,fd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_4d703a93a94f2043_48_countdownTick,"states.stages.Mall","countdownTick",0x975b5861,"states.stages.Mall.countdownTick","states/stages/Mall.hx",48,0x276e4e5d)
HX_LOCAL_STACK_FRAME(_hx_pos_4d703a93a94f2043_49_beatHit,"states.stages.Mall","beatHit",0x177bbdf0,"states.stages.Mall.beatHit","states/stages/Mall.hx",49,0x276e4e5d)
HX_LOCAL_STACK_FRAME(_hx_pos_4d703a93a94f2043_53_eventCalled,"states.stages.Mall","eventCalled",0x6426a92a,"states.stages.Mall.eventCalled","states/stages/Mall.hx",53,0x276e4e5d)
HX_LOCAL_STACK_FRAME(_hx_pos_4d703a93a94f2043_66_everyoneDance,"states.stages.Mall","everyoneDance",0xf402b13b,"states.stages.Mall.everyoneDance","states/stages/Mall.hx",66,0x276e4e5d)
HX_LOCAL_STACK_FRAME(_hx_pos_4d703a93a94f2043_75_eggnogEndCutscene,"states.stages.Mall","eggnogEndCutscene",0xb8060dd7,"states.stages.Mall.eggnogEndCutscene","states/stages/Mall.hx",75,0x276e4e5d)
HX_LOCAL_STACK_FRAME(_hx_pos_4d703a93a94f2043_97_eggnogEndCutscene,"states.stages.Mall","eggnogEndCutscene",0xb8060dd7,"states.stages.Mall.eggnogEndCutscene","states/stages/Mall.hx",97,0x276e4e5d)
namespace states{
namespace stages{

void Mall_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4d703a93a94f2043_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Mall_obj::__CreateEmpty() { return new Mall_obj; }

void *Mall_obj::_hx_vtable = 0;

Dynamic Mall_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mall_obj > _hx_result = new Mall_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mall_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6f4309ab) {
		if (inClassId<=(int)0x230cab9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
		} else {
			return inClassId==(int)0x6f4309ab;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void Mall_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_4d703a93a94f2043_12_create)
HXLINE(  13)		 ::objects::BGSprite bg =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/bgWalls",57,9f,1b,51),-1000,-500,((Float)0.2),((Float)0.2),null(),null());
HXLINE(  14)		bg->setGraphicSize(::Std_obj::_hx_int((bg->get_width() * ((Float)0.8))),null());
HXLINE(  15)		bg->updateHitbox();
HXLINE(  16)		this->add(bg);
HXLINE(  18)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  19)			this->upperBoppers =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/upperBop",2e,2f,6d,ac),-240,-90,((Float)0.33),((Float)0.33),::Array_obj< ::String >::fromData( _hx_array_data_91f108e1_2,1),null());
HXLINE(  20)			 ::objects::BGSprite _hx_tmp = this->upperBoppers;
HXDLIN(  20)			_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->upperBoppers->get_width() * ((Float)0.85))),null());
HXLINE(  21)			this->upperBoppers->updateHitbox();
HXLINE(  22)			this->add(this->upperBoppers);
HXLINE(  24)			 ::objects::BGSprite bgEscalator =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/bgEscalator",64,1f,c0,d5),-1100,-600,((Float)0.3),((Float)0.3),null(),null());
HXLINE(  25)			bgEscalator->setGraphicSize(::Std_obj::_hx_int((bgEscalator->get_width() * ((Float)0.9))),null());
HXLINE(  26)			bgEscalator->updateHitbox();
HXLINE(  27)			this->add(bgEscalator);
            		}
HXLINE(  30)		 ::objects::BGSprite tree =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/christmasTree",73,57,6d,7b),370,-250,((Float)0.40),((Float)0.40),null(),null());
HXLINE(  31)		this->add(tree);
HXLINE(  33)		this->bottomBoppers =  ::states::stages::objects::MallCrowd_obj::__alloc( HX_CTX ,-300,140,null(),null(),null());
HXLINE(  34)		this->add(this->bottomBoppers);
HXLINE(  36)		 ::objects::BGSprite fgSnow =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/fgSnow",91,40,e7,37),-600,700,null(),null(),null(),null());
HXLINE(  37)		this->add(fgSnow);
HXLINE(  39)		this->santa =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("christmas/santa",00,86,f4,2d),-840,150,1,1,::Array_obj< ::String >::fromData( _hx_array_data_91f108e1_3,1),null());
HXLINE(  40)		this->add(this->santa);
HXLINE(  41)		this->precacheSound(HX_("Lights_Shut_off",86,a9,43,29));
HXLINE(  42)		this->setDefaultGF(HX_("gf-christmas",94,26,b1,6d));
HXLINE(  44)		bool _hx_tmp;
HXDLIN(  44)		if (::states::PlayState_obj::isStoryMode) {
HXLINE(  44)			_hx_tmp = !(::states::PlayState_obj::seenCutscene);
            		}
            		else {
HXLINE(  44)			_hx_tmp = false;
            		}
HXDLIN(  44)		if (_hx_tmp) {
HXLINE(  45)			this->setEndCallback(this->eggnogEndCutscene_dyn());
            		}
            	}


void Mall_obj::countdownTick( ::backend::Countdown count,int num){
            	HX_STACKFRAME(&_hx_pos_4d703a93a94f2043_48_countdownTick)
HXDLIN(  48)		this->everyoneDance();
            	}


void Mall_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_4d703a93a94f2043_49_beatHit)
HXDLIN(  49)		this->everyoneDance();
            	}


void Mall_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_STACKFRAME(&_hx_pos_4d703a93a94f2043_53_eventCalled)
HXDLIN(  53)		if ((eventName == HX_("Hey!",e5,69,e4,2f))) {
HXLINE(  56)			::String _hx_switch_0 = ::StringTools_obj::trim(value1.toLowerCase());
            			if (  (_hx_switch_0==HX_("0",30,00,00,00)) ||  (_hx_switch_0==HX_("bf",c4,55,00,00)) ||  (_hx_switch_0==HX_("boyfriend",6a,29,b8,e6)) ){
HXLINE(  58)				return;
HXDLIN(  58)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE(  60)			this->bottomBoppers->animation->play(HX_("hey",dc,42,4f,00),true,null(),null());
HXLINE(  61)			this->bottomBoppers->heyTimer = ( (Float)(flValue2) );
            		}
            	}


void Mall_obj::everyoneDance(){
            	HX_STACKFRAME(&_hx_pos_4d703a93a94f2043_66_everyoneDance)
HXLINE(  67)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  68)			this->upperBoppers->dance(true);
            		}
HXLINE(  70)		this->bottomBoppers->dance(true);
HXLINE(  71)		this->santa->dance(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mall_obj,everyoneDance,(void))

void Mall_obj::eggnogEndCutscene(){
            	HX_GC_STACKFRAME(&_hx_pos_4d703a93a94f2043_75_eggnogEndCutscene)
HXDLIN(  75)		 ::states::stages::Mall _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  76)		if (::hx::IsNull( ::states::PlayState_obj::storyPlaylist->__get(1) )) {
HXLINE(  78)			this->endSong();
HXLINE(  79)			return;
            		}
HXLINE(  82)		::String path = ::states::PlayState_obj::storyPlaylist->__get(1);
HXDLIN(  82)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN(  82)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN(  82)		::String path1 = invalidChars->split(::StringTools_obj::replace(path,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN(  82)		::String nextSong = hideChars->split(path1)->join(HX_("",00,00,00,00)).toLowerCase();
HXLINE(  83)		if ((nextSong == HX_("winter-horrorland",9d,39,f4,1e))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::Mall,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_4d703a93a94f2043_97_eggnogEndCutscene)
HXLINE(  97)				_gthis->endSong();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  85)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  85)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("Lights_Shut_off",86,a9,43,29),null()),null(),null(),null(),null(),null());
HXLINE(  87)			 ::flixel::FlxSprite blackShit =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(-(::flixel::FlxG_obj::width)) ) * ::flixel::FlxG_obj::camera->zoom),(( (Float)(-(::flixel::FlxG_obj::height)) ) * ::flixel::FlxG_obj::camera->zoom),null());
HXDLIN(  87)			 ::flixel::FlxSprite blackShit1 = blackShit->makeGraphic((::flixel::FlxG_obj::width * 3),(::flixel::FlxG_obj::height * 3),-16777216,null(),null());
HXLINE(  89)			{
HXLINE(  89)				 ::flixel::math::FlxBasePoint this1 = blackShit1->scrollFactor;
HXDLIN(  89)				this1->set_x(( (Float)(0) ));
HXDLIN(  89)				this1->set_y(( (Float)(0) ));
            			}
HXLINE(  90)			this->add(blackShit1);
HXLINE(  91)			( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(false);
HXLINE(  93)			this->game->__SetField(HX_("inCutscene",8f,21,01,56),true,::hx::paccDynamic);
HXLINE(  94)			this->game->__SetField(HX_("canPause",c6,18,eb,2b),false,::hx::paccDynamic);
HXLINE(  96)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.5), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            		else {
HXLINE( 100)			this->endSong();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mall_obj,eggnogEndCutscene,(void))


::hx::ObjectPtr< Mall_obj > Mall_obj::__new() {
	::hx::ObjectPtr< Mall_obj > __this = new Mall_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Mall_obj > Mall_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Mall_obj *__this = (Mall_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mall_obj), true, "states.stages.Mall"));
	*(void **)__this = Mall_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Mall_obj::Mall_obj()
{
}

void Mall_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mall);
	HX_MARK_MEMBER_NAME(upperBoppers,"upperBoppers");
	HX_MARK_MEMBER_NAME(bottomBoppers,"bottomBoppers");
	HX_MARK_MEMBER_NAME(santa,"santa");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mall_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(upperBoppers,"upperBoppers");
	HX_VISIT_MEMBER_NAME(bottomBoppers,"bottomBoppers");
	HX_VISIT_MEMBER_NAME(santa,"santa");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Mall_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"santa") ) { return ::hx::Val( santa ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"upperBoppers") ) { return ::hx::Val( upperBoppers ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bottomBoppers") ) { return ::hx::Val( bottomBoppers ); }
		if (HX_FIELD_EQ(inName,"countdownTick") ) { return ::hx::Val( countdownTick_dyn() ); }
		if (HX_FIELD_EQ(inName,"everyoneDance") ) { return ::hx::Val( everyoneDance_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"eggnogEndCutscene") ) { return ::hx::Val( eggnogEndCutscene_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Mall_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"santa") ) { santa=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"upperBoppers") ) { upperBoppers=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bottomBoppers") ) { bottomBoppers=inValue.Cast<  ::states::stages::objects::MallCrowd >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mall_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("upperBoppers",37,47,71,21));
	outFields->push(HX_("bottomBoppers",ce,2c,ba,6e));
	outFields->push(HX_("santa",8d,45,86,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Mall_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Mall_obj,upperBoppers),HX_("upperBoppers",37,47,71,21)},
	{::hx::fsObject /*  ::states::stages::objects::MallCrowd */ ,(int)offsetof(Mall_obj,bottomBoppers),HX_("bottomBoppers",ce,2c,ba,6e)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Mall_obj,santa),HX_("santa",8d,45,86,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Mall_obj_sStaticStorageInfo = 0;
#endif

static ::String Mall_obj_sMemberFields[] = {
	HX_("upperBoppers",37,47,71,21),
	HX_("bottomBoppers",ce,2c,ba,6e),
	HX_("santa",8d,45,86,77),
	HX_("create",fc,66,0f,7c),
	HX_("countdownTick",ae,ec,5f,18),
	HX_("beatHit",7d,ea,04,74),
	HX_("eventCalled",37,a0,35,0a),
	HX_("everyoneDance",88,45,07,75),
	HX_("eggnogEndCutscene",a4,4c,bf,ae),
	::String(null()) };

::hx::Class Mall_obj::__mClass;

void Mall_obj::__register()
{
	Mall_obj _hx_dummy;
	Mall_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.Mall",e1,08,f1,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mall_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mall_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mall_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mall_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages