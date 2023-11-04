#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5d54a5a10977b472_5_new,"backend.MusicBeatSubstate","new",0x494b9f64,"backend.MusicBeatSubstate.new","backend/MusicBeatSubstate.hx",5,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_26_get_controls,"backend.MusicBeatSubstate","get_controls",0x85166afb,"backend.MusicBeatSubstate.get_controls","backend/MusicBeatSubstate.hx",26,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_29_update,"backend.MusicBeatSubstate","update",0xc83df185,"backend.MusicBeatSubstate.update","backend/MusicBeatSubstate.hx",29,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_55_updateSection,"backend.MusicBeatSubstate","updateSection",0xc930a6e0,"backend.MusicBeatSubstate.updateSection","backend/MusicBeatSubstate.hx",55,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_67_rollbackSection,"backend.MusicBeatSubstate","rollbackSection",0xdf16b725,"backend.MusicBeatSubstate.rollbackSection","backend/MusicBeatSubstate.hx",67,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_88_updateBeat,"backend.MusicBeatSubstate","updateBeat",0x7cc2a59b,"backend.MusicBeatSubstate.updateBeat","backend/MusicBeatSubstate.hx",88,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_94_updateCurStep,"backend.MusicBeatSubstate","updateCurStep",0x22c9f9e7,"backend.MusicBeatSubstate.updateCurStep","backend/MusicBeatSubstate.hx",94,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_104_stepHit,"backend.MusicBeatSubstate","stepHit",0x51674f6b,"backend.MusicBeatSubstate.stepHit","backend/MusicBeatSubstate.hx",104,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_109_beatHit,"backend.MusicBeatSubstate","beatHit",0x442a8b81,"backend.MusicBeatSubstate.beatHit","backend/MusicBeatSubstate.hx",109,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_114_sectionHit,"backend.MusicBeatSubstate","sectionHit",0x41c7ceea,"backend.MusicBeatSubstate.sectionHit","backend/MusicBeatSubstate.hx",114,0xa5f1bf0d)
HX_LOCAL_STACK_FRAME(_hx_pos_5d54a5a10977b472_119_getBeatsOnSection,"backend.MusicBeatSubstate","getBeatsOnSection",0x3a2c45c3,"backend.MusicBeatSubstate.getBeatsOnSection","backend/MusicBeatSubstate.hx",119,0xa5f1bf0d)
namespace backend{

void MusicBeatSubstate_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_5_new)
HXLINE(  22)		this->curDecBeat = ((Float)0);
HXLINE(  21)		this->curDecStep = ((Float)0);
HXLINE(  19)		this->curBeat = 0;
HXLINE(  18)		this->curStep = 0;
HXLINE(  16)		this->lastStep = ((Float)0);
HXLINE(  15)		this->lastBeat = ((Float)0);
HXLINE(  13)		this->stepsToDo = 0;
HXLINE(  12)		this->curSection = 0;
HXLINE(   9)		super::__construct(null());
            	}

Dynamic MusicBeatSubstate_obj::__CreateEmpty() { return new MusicBeatSubstate_obj; }

void *MusicBeatSubstate_obj::_hx_vtable = 0;

Dynamic MusicBeatSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatSubstate_obj > _hx_result = new MusicBeatSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MusicBeatSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x3c0818b8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x3c0818b8;
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

 ::backend::Controls MusicBeatSubstate_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_26_get_controls)
HXDLIN(  26)		return ::backend::Controls_obj::instance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,get_controls,return )

void MusicBeatSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_29_update)
HXLINE(  31)		if (!(this->persistentUpdate)) {
HXLINE(  31)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::backend::MusicBeatState >();
HXDLIN(  31)			::backend::MusicBeatState_obj::timePassedOnState = (::backend::MusicBeatState_obj::timePassedOnState + elapsed);
            		}
HXLINE(  32)		int oldStep = this->curStep;
HXLINE(  34)		this->updateCurStep();
HXLINE(  35)		this->updateBeat();
HXLINE(  37)		if ((oldStep != this->curStep)) {
HXLINE(  39)			if ((this->curStep > 0)) {
HXLINE(  40)				this->stepHit();
            			}
HXLINE(  42)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE(  44)				if ((oldStep < this->curStep)) {
HXLINE(  45)					this->updateSection();
            				}
            				else {
HXLINE(  47)					this->rollbackSection();
            				}
            			}
            		}
HXLINE(  51)		this->super::update(elapsed);
            	}


void MusicBeatSubstate_obj::updateSection(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_55_updateSection)
HXLINE(  56)		if ((this->stepsToDo < 1)) {
HXLINE(  56)			this->stepsToDo = ::Math_obj::round((( (Float)(this->getBeatsOnSection()) ) * ( (Float)(4) )));
            		}
HXLINE(  57)		while((this->curStep >= this->stepsToDo)){
HXLINE(  59)			this->curSection++;
HXLINE(  60)			Float beats = ( (Float)(this->getBeatsOnSection()) );
HXLINE(  61)			 ::backend::MusicBeatSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  61)			_hx_tmp->stepsToDo = (_hx_tmp->stepsToDo + ::Math_obj::round((beats * ( (Float)(4) ))));
HXLINE(  62)			this->sectionHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,updateSection,(void))

void MusicBeatSubstate_obj::rollbackSection(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_67_rollbackSection)
HXLINE(  68)		if ((this->curStep < 0)) {
HXLINE(  68)			return;
            		}
HXLINE(  70)		int lastSection = this->curSection;
HXLINE(  71)		this->curSection = 0;
HXLINE(  72)		this->stepsToDo = 0;
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			int _g1 = ( (::Array< ::Dynamic>)(::states::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN(  73)			while((_g < _g1)){
HXLINE(  73)				_g = (_g + 1);
HXDLIN(  73)				int i = (_g - 1);
HXLINE(  75)				if (::hx::IsNotNull(  ::Dynamic(::states::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i) )) {
HXLINE(  77)					 ::backend::MusicBeatSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  77)					int _hx_tmp1 = _hx_tmp->stepsToDo;
HXDLIN(  77)					_hx_tmp->stepsToDo = (_hx_tmp1 + ::Math_obj::round((( (Float)(this->getBeatsOnSection()) ) * ( (Float)(4) ))));
HXLINE(  78)					if ((this->stepsToDo > this->curStep)) {
HXLINE(  78)						goto _hx_goto_5;
            					}
HXLINE(  80)					this->curSection++;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE(  84)		if ((this->curSection > lastSection)) {
HXLINE(  84)			this->sectionHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,rollbackSection,(void))

void MusicBeatSubstate_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_88_updateBeat)
HXLINE(  89)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
HXLINE(  90)		this->curDecBeat = (this->curDecStep / ( (Float)(4) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,updateBeat,(void))

void MusicBeatSubstate_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_94_updateCurStep)
HXLINE(  95)		 ::Dynamic lastChange = ::backend::Conductor_obj::getBPMFromSeconds(::backend::Conductor_obj::songPosition);
HXLINE(  97)		Float shit = (((::backend::Conductor_obj::songPosition - ( (Float)(::backend::ClientPrefs_obj::data->noteOffset) )) - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) ));
HXLINE(  98)		this->curDecStep = ( (Float)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + shit)) );
HXLINE(  99)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(shit))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,updateCurStep,(void))

void MusicBeatSubstate_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_104_stepHit)
HXDLIN( 104)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 105)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,stepHit,(void))

void MusicBeatSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_109_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,beatHit,(void))

void MusicBeatSubstate_obj::sectionHit(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_114_sectionHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,sectionHit,(void))

 ::Dynamic MusicBeatSubstate_obj::getBeatsOnSection(){
            	HX_STACKFRAME(&_hx_pos_5d54a5a10977b472_119_getBeatsOnSection)
HXLINE( 120)		 ::Dynamic val = 4;
HXLINE( 121)		bool _hx_tmp;
HXDLIN( 121)		if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 121)			_hx_tmp = ::hx::IsNotNull(  ::Dynamic(::states::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(this->curSection) );
            		}
            		else {
HXLINE( 121)			_hx_tmp = false;
            		}
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 121)			val =  ::Dynamic(::states::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(this->curSection)->__Field(HX_("sectionBeats",18,52,2e,0f),::hx::paccDynamic);
            		}
HXLINE( 122)		if (::hx::IsNull( val )) {
HXLINE( 122)			return 4;
            		}
            		else {
HXLINE( 122)			return val;
            		}
HXDLIN( 122)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,getBeatsOnSection,return )


::hx::ObjectPtr< MusicBeatSubstate_obj > MusicBeatSubstate_obj::__new() {
	::hx::ObjectPtr< MusicBeatSubstate_obj > __this = new MusicBeatSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MusicBeatSubstate_obj > MusicBeatSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MusicBeatSubstate_obj *__this = (MusicBeatSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatSubstate_obj), true, "backend.MusicBeatSubstate"));
	*(void **)__this = MusicBeatSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MusicBeatSubstate_obj::MusicBeatSubstate_obj()
{
}

::hx::Val MusicBeatSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepsToDo") ) { return ::hx::Val( stepsToDo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curSection") ) { return ::hx::Val( curSection ); }
		if (HX_FIELD_EQ(inName,"curDecStep") ) { return ::hx::Val( curDecStep ); }
		if (HX_FIELD_EQ(inName,"curDecBeat") ) { return ::hx::Val( curDecBeat ); }
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"sectionHit") ) { return ::hx::Val( sectionHit_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateSection") ) { return ::hx::Val( updateSection_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rollbackSection") ) { return ::hx::Val( rollbackSection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBeatsOnSection") ) { return ::hx::Val( getBeatsOnSection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MusicBeatSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepsToDo") ) { stepsToDo=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curSection") ) { curSection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curDecStep") ) { curDecStep=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curDecBeat") ) { curDecBeat=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MusicBeatSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSection",45,58,c1,68));
	outFields->push(HX_("stepsToDo",2d,3d,2d,4c));
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("curDecStep",8e,a8,37,e3));
	outFields->push(HX_("curDecBeat",b8,a2,ef,d7));
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MusicBeatSubstate_obj,curSection),HX_("curSection",45,58,c1,68)},
	{::hx::fsInt,(int)offsetof(MusicBeatSubstate_obj,stepsToDo),HX_("stepsToDo",2d,3d,2d,4c)},
	{::hx::fsFloat,(int)offsetof(MusicBeatSubstate_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatSubstate_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatSubstate_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatSubstate_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsFloat,(int)offsetof(MusicBeatSubstate_obj,curDecStep),HX_("curDecStep",8e,a8,37,e3)},
	{::hx::fsFloat,(int)offsetof(MusicBeatSubstate_obj,curDecBeat),HX_("curDecBeat",b8,a2,ef,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MusicBeatSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicBeatSubstate_obj_sMemberFields[] = {
	HX_("curSection",45,58,c1,68),
	HX_("stepsToDo",2d,3d,2d,4c),
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("curDecStep",8e,a8,37,e3),
	HX_("curDecBeat",b8,a2,ef,d7),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("update",09,86,05,87),
	HX_("updateSection",dc,6a,46,29),
	HX_("rollbackSection",21,72,22,c3),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	HX_("sectionHit",6e,f5,cd,be),
	HX_("getBeatsOnSection",bf,b7,d9,04),
	::String(null()) };

::hx::Class MusicBeatSubstate_obj::__mClass;

void MusicBeatSubstate_obj::__register()
{
	MusicBeatSubstate_obj _hx_dummy;
	MusicBeatSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.MusicBeatSubstate",72,5d,6f,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
