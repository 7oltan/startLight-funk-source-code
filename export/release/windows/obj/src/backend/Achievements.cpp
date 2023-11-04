#include <hxcpp.h>

#ifndef INCLUDED_backend_Achievements
#include <backend/Achievements.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0df3ce31f36d3c87_25_unlockAchievement,"backend.Achievements","unlockAchievement",0xb894617b,"backend.Achievements.unlockAchievement","backend/Achievements.hx",25,0x86eda8bf)
HX_LOCAL_STACK_FRAME(_hx_pos_0df3ce31f36d3c87_31_isAchievementUnlocked,"backend.Achievements","isAchievementUnlocked",0xdcefa358,"backend.Achievements.isAchievementUnlocked","backend/Achievements.hx",31,0x86eda8bf)
HX_LOCAL_STACK_FRAME(_hx_pos_0df3ce31f36d3c87_38_getAchievementIndex,"backend.Achievements","getAchievementIndex",0xcb817a49,"backend.Achievements.getAchievementIndex","backend/Achievements.hx",38,0x86eda8bf)
HX_LOCAL_STACK_FRAME(_hx_pos_0df3ce31f36d3c87_48_loadAchievements,"backend.Achievements","loadAchievements",0x134528fa,"backend.Achievements.loadAchievements","backend/Achievements.hx",48,0x86eda8bf)
HX_LOCAL_STACK_FRAME(_hx_pos_0df3ce31f36d3c87_4_boot,"backend.Achievements","boot",0x45d6ecc2,"backend.Achievements.boot","backend/Achievements.hx",4,0x86eda8bf)
HX_LOCAL_STACK_FRAME(_hx_pos_0df3ce31f36d3c87_22_boot,"backend.Achievements","boot",0x45d6ecc2,"backend.Achievements.boot","backend/Achievements.hx",22,0x86eda8bf)
HX_LOCAL_STACK_FRAME(_hx_pos_0df3ce31f36d3c87_24_boot,"backend.Achievements","boot",0x45d6ecc2,"backend.Achievements.boot","backend/Achievements.hx",24,0x86eda8bf)
namespace backend{

void Achievements_obj::__construct() { }

Dynamic Achievements_obj::__CreateEmpty() { return new Achievements_obj; }

void *Achievements_obj::_hx_vtable = 0;

Dynamic Achievements_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Achievements_obj > _hx_result = new Achievements_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Achievements_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32ede490;
}

::cpp::VirtualArray Achievements_obj::achievementsStuff;

 ::haxe::ds::StringMap Achievements_obj::achievementsMap;

int Achievements_obj::henchmenDeath;

void Achievements_obj::unlockAchievement(::String name){
            	HX_STACKFRAME(&_hx_pos_0df3ce31f36d3c87_25_unlockAchievement)
HXLINE(  27)		::backend::Achievements_obj::achievementsMap->set(name,true);
HXLINE(  28)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  28)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Achievements_obj,unlockAchievement,(void))

bool Achievements_obj::isAchievementUnlocked(::String name){
            	HX_STACKFRAME(&_hx_pos_0df3ce31f36d3c87_31_isAchievementUnlocked)
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (::backend::Achievements_obj::achievementsMap->exists(name)) {
HXLINE(  32)			_hx_tmp = ::backend::Achievements_obj::achievementsMap->get_bool(name);
            		}
            		else {
HXLINE(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  33)			return true;
            		}
HXLINE(  35)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Achievements_obj,isAchievementUnlocked,return )

int Achievements_obj::getAchievementIndex(::String name){
            	HX_STACKFRAME(&_hx_pos_0df3ce31f36d3c87_38_getAchievementIndex)
HXLINE(  39)		{
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			int _g1 = ::backend::Achievements_obj::achievementsStuff->get_length();
HXDLIN(  39)			while((_g < _g1)){
HXLINE(  39)				_g = (_g + 1);
HXDLIN(  39)				int i = (_g - 1);
HXLINE(  40)				if (::hx::IsEq( ::backend::Achievements_obj::achievementsStuff->__get(i)->__GetItem(2),name )) {
HXLINE(  41)					return i;
            				}
            			}
            		}
HXLINE(  44)		return -1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Achievements_obj,getAchievementIndex,return )

void Achievements_obj::loadAchievements(){
            	HX_STACKFRAME(&_hx_pos_0df3ce31f36d3c87_48_loadAchievements)
HXDLIN(  48)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE(  49)			if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("achievementsMap",d8,6f,d5,91),::hx::paccDynamic) )) {
HXLINE(  50)				::backend::Achievements_obj::achievementsMap = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("achievementsMap",d8,6f,d5,91),::hx::paccDynamic)) );
            			}
HXLINE(  52)			bool _hx_tmp;
HXDLIN(  52)			if ((::backend::Achievements_obj::henchmenDeath == 0)) {
HXLINE(  52)				_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("henchmenDeath",f4,76,2a,dd),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  52)				_hx_tmp = false;
            			}
HXDLIN(  52)			if (_hx_tmp) {
HXLINE(  53)				::backend::Achievements_obj::henchmenDeath = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("henchmenDeath",f4,76,2a,dd),::hx::paccDynamic)) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Achievements_obj,loadAchievements,(void))


Achievements_obj::Achievements_obj()
{
}

bool Achievements_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"henchmenDeath") ) { outValue = ( henchmenDeath ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"achievementsMap") ) { outValue = ( achievementsMap ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadAchievements") ) { outValue = loadAchievements_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"achievementsStuff") ) { outValue = ( achievementsStuff ); return true; }
		if (HX_FIELD_EQ(inName,"unlockAchievement") ) { outValue = unlockAchievement_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAchievementIndex") ) { outValue = getAchievementIndex_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"isAchievementUnlocked") ) { outValue = isAchievementUnlocked_dyn(); return true; }
	}
	return false;
}

bool Achievements_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"henchmenDeath") ) { henchmenDeath=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"achievementsMap") ) { achievementsMap=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"achievementsStuff") ) { achievementsStuff=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Achievements_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Achievements_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Achievements_obj::achievementsStuff,HX_("achievementsStuff",30,c3,ed,46)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Achievements_obj::achievementsMap,HX_("achievementsMap",d8,6f,d5,91)},
	{::hx::fsInt,(void *) &Achievements_obj::henchmenDeath,HX_("henchmenDeath",f4,76,2a,dd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Achievements_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Achievements_obj::achievementsStuff,"achievementsStuff");
	HX_MARK_MEMBER_NAME(Achievements_obj::achievementsMap,"achievementsMap");
	HX_MARK_MEMBER_NAME(Achievements_obj::henchmenDeath,"henchmenDeath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Achievements_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Achievements_obj::achievementsStuff,"achievementsStuff");
	HX_VISIT_MEMBER_NAME(Achievements_obj::achievementsMap,"achievementsMap");
	HX_VISIT_MEMBER_NAME(Achievements_obj::henchmenDeath,"henchmenDeath");
};

#endif

::hx::Class Achievements_obj::__mClass;

static ::String Achievements_obj_sStaticFields[] = {
	HX_("achievementsStuff",30,c3,ed,46),
	HX_("achievementsMap",d8,6f,d5,91),
	HX_("henchmenDeath",f4,76,2a,dd),
	HX_("unlockAchievement",0b,e4,d1,6a),
	HX_("isAchievementUnlocked",e8,ad,c9,f2),
	HX_("getAchievementIndex",d9,c0,10,aa),
	HX_("loadAchievements",6a,28,c7,f2),
	::String(null())
};

void Achievements_obj::__register()
{
	Achievements_obj _hx_dummy;
	Achievements_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Achievements",de,c1,f1,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Achievements_obj::__GetStatic;
	__mClass->mSetStaticField = &Achievements_obj::__SetStatic;
	__mClass->mMarkFunc = Achievements_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Achievements_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Achievements_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Achievements_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Achievements_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Achievements_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Achievements_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0df3ce31f36d3c87_4_boot)
HXDLIN(   4)		achievementsStuff = ::cpp::VirtualArray_obj::__new(16)->init(0,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Freaky on a Friday Night",ad,12,d0,d9))->init(1,HX_("Play on a Friday... Night.",1b,3d,4b,6e))->init(2,HX_("friday_night_play",9b,1f,4e,c7))->init(3,true))->init(1,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("She Calls Me Daddy Too",43,38,20,2e))->init(1,HX_("Beat Week 1 on Hard with no Misses.",3a,80,c0,14))->init(2,HX_("week1_nomiss",3f,c5,3b,fe))->init(3,false))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("No More Tricks",6c,b7,d5,1c))->init(1,HX_("Beat Week 2 on Hard with no Misses.",3b,bb,c7,1d))->init(2,HX_("week2_nomiss",5e,37,6e,37))->init(3,false))->init(3,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Call Me The Hitman",fc,32,c3,c7))->init(1,HX_("Beat Week 3 on Hard with no Misses.",3c,f6,ce,26))->init(2,HX_("week3_nomiss",7d,a9,a0,70))->init(3,false))->init(4,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Lady Killer",a1,5f,9f,79))->init(1,HX_("Beat Week 4 on Hard with no Misses.",3d,31,d6,2f))->init(2,HX_("week4_nomiss",9c,1b,d3,a9))->init(3,false))->init(5,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Missless Christmas",f7,6d,cc,37))->init(1,HX_("Beat Week 5 on Hard with no Misses.",3e,6c,dd,38))->init(2,HX_("week5_nomiss",bb,8d,05,e3))->init(3,false))->init(6,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Highscore!!",70,79,53,b1))->init(1,HX_("Beat Week 6 on Hard with no Misses.",3f,a7,e4,41))->init(2,HX_("week6_nomiss",da,ff,37,1c))->init(3,false))->init(7,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("God Effing Damn It!",13,1d,66,f7))->init(1,HX_("Beat Week 7 on Hard with no Misses.",40,e2,eb,4a))->init(2,HX_("week7_nomiss",f9,71,6a,55))->init(3,false))->init(8,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("What a Funkin' Disaster!",9b,9a,f3,3d))->init(1,HX_("Complete a Song with a rating lower than 20%.",b8,88,a7,a1))->init(2,HX_("ur_bad",a3,4f,85,aa))->init(3,false))->init(9,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Perfectionist",2f,2d,d8,1a))->init(1,HX_("Complete a Song with a rating of 100%.",60,20,3e,99))->init(2,HX_("ur_good",9f,19,79,8d))->init(3,false))->init(10,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Roadkill Enthusiast",16,f9,a7,f4))->init(1,HX_("Watch the Henchmen die over 50 times.",a1,7b,e7,10))->init(2,HX_("roadkill_enthusiast",15,e2,55,56))->init(3,false))->init(11,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Oversinging Much...?",7f,24,1b,aa))->init(1,HX_("Hold down a note for 10 seconds.",47,92,e2,c6))->init(2,HX_("oversinging",1f,13,8f,78))->init(3,false))->init(12,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Hyperactive",12,ed,1a,97))->init(1,HX_("Finish a Song without going Idle.",3d,4e,8d,8b))->init(2,HX_("hype",46,63,1a,45))->init(3,false))->init(13,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Just the Two of Us",f0,46,92,7c))->init(1,HX_("Finish a Song pressing only two keys.",34,0f,a6,8a))->init(2,HX_("two_keys",c7,f4,0a,9b))->init(3,false))->init(14,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Toaster Gamer",b4,2b,0d,33))->init(1,HX_("Have you tried to run the game on a toaster?",97,b9,bf,ff))->init(2,HX_("toastie",43,0c,91,5f))->init(3,false))->init(15,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Debugger",41,e0,9c,6a))->init(1,HX_("Beat the \"Test\" Stage from the Chart Editor.",15,c5,9f,4a))->init(2,HX_("debugger",21,24,eb,90))->init(3,true));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_0df3ce31f36d3c87_22_boot)
HXDLIN(  22)		achievementsMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_0df3ce31f36d3c87_24_boot)
HXDLIN(  24)		henchmenDeath = 0;
            	}
}

} // end namespace backend
