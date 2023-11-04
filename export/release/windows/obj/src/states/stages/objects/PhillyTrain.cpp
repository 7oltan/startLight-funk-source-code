#include <hxcpp.h>

#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_stages_objects_PhillyTrain
#include <states/stages/objects/PhillyTrain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6734573d924ac1af_3_new,"states.stages.objects.PhillyTrain","new",0x4f251eeb,"states.stages.objects.PhillyTrain.new","states/stages/objects/PhillyTrain.hx",3,0x4e8610c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6734573d924ac1af_25_update,"states.stages.objects.PhillyTrain","update",0x7b59a05e,"states.stages.objects.PhillyTrain.update","states/stages/objects/PhillyTrain.hx",25,0x4e8610c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6734573d924ac1af_63_beatHit,"states.stages.objects.PhillyTrain","beatHit",0x4947da88,"states.stages.objects.PhillyTrain.beatHit","states/stages/objects/PhillyTrain.hx",63,0x4e8610c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6734573d924ac1af_75_start,"states.stages.objects.PhillyTrain","start",0x24b5bbad,"states.stages.objects.PhillyTrain.start","states/stages/objects/PhillyTrain.hx",75,0x4e8610c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6734573d924ac1af_82_restart,"states.stages.objects.PhillyTrain","restart",0x3fe8b7da,"states.stages.objects.PhillyTrain.restart","states/stages/objects/PhillyTrain.hx",82,0x4e8610c6)
namespace states{
namespace stages{
namespace objects{

void PhillyTrain_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_image,::String __o_sound){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		::String image = __o_image;
            		if (::hx::IsNull(__o_image)) image = HX_("philly/train",61,ce,51,a4);
            		::String sound = __o_sound;
            		if (::hx::IsNull(__o_sound)) sound = HX_("train_passes",56,da,5a,7f);
            	HX_GC_STACKFRAME(&_hx_pos_6734573d924ac1af_3_new)
HXLINE(  22)		this->cooldown = 0;
HXLINE(  21)		this->cars = 8;
HXLINE(  19)		this->frameTiming = ((Float)0);
HXLINE(  18)		this->startedMoving = false;
HXLINE(  17)		this->finishing = false;
HXLINE(  16)		this->moving = false;
HXLINE(   8)		super::__construct(image,x,y,null(),null(),null(),null());
HXLINE(   9)		this->set_active(true);
HXLINE(  10)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  12)		 ::flixel::sound::FlxSound _hx_tmp =  ::flixel::sound::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  12)		this->sound = _hx_tmp->loadEmbedded(::backend::Paths_obj::sound(sound,null()),null(),null(),null());
HXLINE(  13)		::flixel::FlxG_obj::sound->list->add(this->sound).StaticCast<  ::flixel::sound::FlxSound >();
            	}

Dynamic PhillyTrain_obj::__CreateEmpty() { return new PhillyTrain_obj; }

void *PhillyTrain_obj::_hx_vtable = 0;

Dynamic PhillyTrain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PhillyTrain_obj > _hx_result = new PhillyTrain_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool PhillyTrain_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55694f67) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x199d8d7e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x199d8d7e;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x55694f67;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void PhillyTrain_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_6734573d924ac1af_25_update)
HXLINE(  26)		if (this->moving) {
HXLINE(  28)			 ::states::stages::objects::PhillyTrain _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  28)			_hx_tmp->frameTiming = (_hx_tmp->frameTiming + elapsed);
HXLINE(  29)			if ((this->frameTiming >= ((Float)0.041666666666666664))) {
HXLINE(  31)				if ((this->sound->_time >= 4700)) {
HXLINE(  33)					this->startedMoving = true;
HXLINE(  34)					if (::hx::IsNotNull( ::states::PlayState_obj::instance->gf )) {
HXLINE(  36)						::states::PlayState_obj::instance->gf->playAnim(HX_("hairBlow",b4,c9,39,c9),null(),null(),null());
HXLINE(  37)						::states::PlayState_obj::instance->gf->specialAnim = true;
            					}
            				}
HXLINE(  41)				if (this->startedMoving) {
HXLINE(  43)					this->set_x((this->x - ( (Float)(400) )));
HXLINE(  44)					bool _hx_tmp;
HXDLIN(  44)					if ((this->x < -2000)) {
HXLINE(  44)						_hx_tmp = !(this->finishing);
            					}
            					else {
HXLINE(  44)						_hx_tmp = false;
            					}
HXDLIN(  44)					if (_hx_tmp) {
HXLINE(  46)						this->set_x(( (Float)(-1150) ));
HXLINE(  47)						 ::states::stages::objects::PhillyTrain _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  47)						_hx_tmp->cars = (_hx_tmp->cars - 1);
HXLINE(  49)						if ((this->cars <= 0)) {
HXLINE(  50)							this->finishing = true;
            						}
            					}
HXLINE(  53)					bool _hx_tmp1;
HXDLIN(  53)					if ((this->x < -4000)) {
HXLINE(  53)						_hx_tmp1 = this->finishing;
            					}
            					else {
HXLINE(  53)						_hx_tmp1 = false;
            					}
HXDLIN(  53)					if (_hx_tmp1) {
HXLINE(  54)						this->restart();
            					}
            				}
HXLINE(  56)				this->frameTiming = ( (Float)(0) );
            			}
            		}
HXLINE(  59)		this->super::update(elapsed);
            	}


void PhillyTrain_obj::beatHit(int curBeat){
            	HX_STACKFRAME(&_hx_pos_6734573d924ac1af_63_beatHit)
HXLINE(  64)		if (!(this->moving)) {
HXLINE(  65)			 ::states::stages::objects::PhillyTrain _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  65)			_hx_tmp->cooldown = (_hx_tmp->cooldown + 1);
            		}
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		bool _hx_tmp1;
HXDLIN(  67)		bool _hx_tmp2;
HXDLIN(  67)		if ((::hx::Mod(curBeat,8) == 4)) {
HXLINE(  67)			_hx_tmp2 = (::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 30);
            		}
            		else {
HXLINE(  67)			_hx_tmp2 = false;
            		}
HXDLIN(  67)		if (_hx_tmp2) {
HXLINE(  67)			_hx_tmp1 = !(this->moving);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = false;
            		}
HXDLIN(  67)		if (_hx_tmp1) {
HXLINE(  67)			_hx_tmp = (this->cooldown > 8);
            		}
            		else {
HXLINE(  67)			_hx_tmp = false;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  69)			this->cooldown = ::flixel::FlxG_obj::random->_hx_int(-4,0,null());
HXLINE(  70)			this->start();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PhillyTrain_obj,beatHit,(void))

void PhillyTrain_obj::start(){
            	HX_STACKFRAME(&_hx_pos_6734573d924ac1af_75_start)
HXLINE(  76)		this->moving = true;
HXLINE(  77)		if (::hx::IsNull( this->sound->_channel )) {
HXLINE(  78)			this->sound->play(true,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PhillyTrain_obj,start,(void))

void PhillyTrain_obj::restart(){
            	HX_STACKFRAME(&_hx_pos_6734573d924ac1af_82_restart)
HXLINE(  83)		if (::hx::IsNotNull( ::states::PlayState_obj::instance->gf )) {
HXLINE(  85)			::states::PlayState_obj::instance->gf->danced = false;
HXLINE(  86)			::states::PlayState_obj::instance->gf->playAnim(HX_("hairFall",bd,48,d6,cb),null(),null(),null());
HXLINE(  87)			::states::PlayState_obj::instance->gf->specialAnim = true;
            		}
HXLINE(  89)		this->set_x(( (Float)((::flixel::FlxG_obj::width + 200)) ));
HXLINE(  90)		this->moving = false;
HXLINE(  91)		this->cars = 8;
HXLINE(  92)		this->finishing = false;
HXLINE(  93)		this->startedMoving = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PhillyTrain_obj,restart,(void))


::hx::ObjectPtr< PhillyTrain_obj > PhillyTrain_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_image,::String __o_sound) {
	::hx::ObjectPtr< PhillyTrain_obj > __this = new PhillyTrain_obj();
	__this->__construct(__o_x,__o_y,__o_image,__o_sound);
	return __this;
}

::hx::ObjectPtr< PhillyTrain_obj > PhillyTrain_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String __o_image,::String __o_sound) {
	PhillyTrain_obj *__this = (PhillyTrain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PhillyTrain_obj), true, "states.stages.objects.PhillyTrain"));
	*(void **)__this = PhillyTrain_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_image,__o_sound);
	return __this;
}

PhillyTrain_obj::PhillyTrain_obj()
{
}

void PhillyTrain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhillyTrain);
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(moving,"moving");
	HX_MARK_MEMBER_NAME(finishing,"finishing");
	HX_MARK_MEMBER_NAME(startedMoving,"startedMoving");
	HX_MARK_MEMBER_NAME(frameTiming,"frameTiming");
	HX_MARK_MEMBER_NAME(cars,"cars");
	HX_MARK_MEMBER_NAME(cooldown,"cooldown");
	 ::objects::BGSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhillyTrain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(moving,"moving");
	HX_VISIT_MEMBER_NAME(finishing,"finishing");
	HX_VISIT_MEMBER_NAME(startedMoving,"startedMoving");
	HX_VISIT_MEMBER_NAME(frameTiming,"frameTiming");
	HX_VISIT_MEMBER_NAME(cars,"cars");
	HX_VISIT_MEMBER_NAME(cooldown,"cooldown");
	 ::objects::BGSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PhillyTrain_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cars") ) { return ::hx::Val( cars ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moving") ) { return ::hx::Val( moving ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cooldown") ) { return ::hx::Val( cooldown ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"finishing") ) { return ::hx::Val( finishing ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameTiming") ) { return ::hx::Val( frameTiming ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startedMoving") ) { return ::hx::Val( startedMoving ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PhillyTrain_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cars") ) { cars=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::flixel::sound::FlxSound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moving") ) { moving=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cooldown") ) { cooldown=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"finishing") ) { finishing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameTiming") ) { frameTiming=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startedMoving") ) { startedMoving=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhillyTrain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("moving",8e,f2,af,cc));
	outFields->push(HX_("finishing",6f,82,b5,d7));
	outFields->push(HX_("startedMoving",af,76,97,fb));
	outFields->push(HX_("frameTiming",97,de,1c,fd));
	outFields->push(HX_("cars",df,1d,ba,41));
	outFields->push(HX_("cooldown",ab,4b,a2,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PhillyTrain_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::sound::FlxSound */ ,(int)offsetof(PhillyTrain_obj,sound),HX_("sound",cf,8c,cc,80)},
	{::hx::fsBool,(int)offsetof(PhillyTrain_obj,moving),HX_("moving",8e,f2,af,cc)},
	{::hx::fsBool,(int)offsetof(PhillyTrain_obj,finishing),HX_("finishing",6f,82,b5,d7)},
	{::hx::fsBool,(int)offsetof(PhillyTrain_obj,startedMoving),HX_("startedMoving",af,76,97,fb)},
	{::hx::fsFloat,(int)offsetof(PhillyTrain_obj,frameTiming),HX_("frameTiming",97,de,1c,fd)},
	{::hx::fsInt,(int)offsetof(PhillyTrain_obj,cars),HX_("cars",df,1d,ba,41)},
	{::hx::fsInt,(int)offsetof(PhillyTrain_obj,cooldown),HX_("cooldown",ab,4b,a2,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PhillyTrain_obj_sStaticStorageInfo = 0;
#endif

static ::String PhillyTrain_obj_sMemberFields[] = {
	HX_("sound",cf,8c,cc,80),
	HX_("moving",8e,f2,af,cc),
	HX_("finishing",6f,82,b5,d7),
	HX_("startedMoving",af,76,97,fb),
	HX_("frameTiming",97,de,1c,fd),
	HX_("cars",df,1d,ba,41),
	HX_("cooldown",ab,4b,a2,f9),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("start",62,74,0b,84),
	HX_("restart",cf,c7,a5,6a),
	::String(null()) };

::hx::Class PhillyTrain_obj::__mClass;

void PhillyTrain_obj::__register()
{
	PhillyTrain_obj _hx_dummy;
	PhillyTrain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.objects.PhillyTrain",79,cd,02,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PhillyTrain_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PhillyTrain_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PhillyTrain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PhillyTrain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
} // end namespace objects
