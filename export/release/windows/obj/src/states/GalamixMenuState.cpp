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
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_Difficulty
#include <backend/Difficulty.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_Song
#include <backend/Song.h>
#endif
#ifndef INCLUDED_backend_WeekData
#include <backend/WeekData.h>
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
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_states_FreeplayState
#include <states/FreeplayState.h>
#endif
#ifndef INCLUDED_states_GalamixMenuState
#include <states/GalamixMenuState.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_6_new,"states.GalamixMenuState","new",0x6ded9a83,"states.GalamixMenuState.new","states/GalamixMenuState.hx",6,0xdad50aec)
HX_LOCAL_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_9_create,"states.GalamixMenuState","create",0x705254b9,"states.GalamixMenuState.create","states/GalamixMenuState.hx",9,0xdad50aec)
static const int _hx_array_data_88cf9d11_3[] = {
	(int)0,
};
static const int _hx_array_data_88cf9d11_4[] = {
	(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_47_update,"states.GalamixMenuState","update",0x7b4873c6,"states.GalamixMenuState.update","states/GalamixMenuState.hx",47,0xdad50aec)
HX_LOCAL_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_43_update,"states.GalamixMenuState","update",0x7b4873c6,"states.GalamixMenuState.update","states/GalamixMenuState.hx",43,0xdad50aec)
namespace states{

void GalamixMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_6_new)
HXDLIN(   6)		super::__construct(TransIn,TransOut);
            	}

Dynamic GalamixMenuState_obj::__CreateEmpty() { return new GalamixMenuState_obj; }

void *GalamixMenuState_obj::_hx_vtable = 0;

Dynamic GalamixMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GalamixMenuState_obj > _hx_result = new GalamixMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GalamixMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x082383d3) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x082383d3;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GalamixMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_9_create)
HXLINE(  10)		this->super::create();
HXLINE(  12)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  14)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  19)		::states::PlayState_obj::isStoryMode = true;
HXLINE(  20)		::backend::WeekData_obj::reloadWeekFiles(true);
HXLINE(  22)		this->items =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  23)		this->add(this->items);
HXLINE(  25)		{
HXLINE(  25)			int _g = 0;
HXDLIN(  25)			int _g1 = ::backend::WeekData_obj::weeksList->length;
HXDLIN(  25)			while((_g < _g1)){
HXLINE(  25)				_g = (_g + 1);
HXDLIN(  25)				int i = (_g - 1);
HXLINE(  27)				 ::backend::WeekData weekFile = ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(i))) );
HXLINE(  28)				if (!(weekFile->galamix)) {
HXLINE(  29)					continue;
            				}
HXLINE(  31)				 ::flixel::FlxSprite character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(i * 300),0,null());
HXDLIN(  31)				 ::flixel::FlxSprite character1 = character->loadGraphic(::backend::Paths_obj::image((HX_("galamixMenu/",83,c8,bb,51) + weekFile->weekCharacter),null(),null()),null(),null(),null(),null(),null());
HXLINE(  32)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::backend::Paths_obj::image((HX_("galamixMenu/",83,c8,bb,51) + weekFile->weekCharacter),null(),null());
HXDLIN(  32)				int _hx_tmp1 = ::Std_obj::_hx_int((character1->get_width() / ( (Float)(2) )));
HXDLIN(  32)				character1->loadGraphic(_hx_tmp,true,_hx_tmp1,::Std_obj::_hx_int(character1->get_height()),null(),null());
HXLINE(  33)				character1->animation->add(HX_("idle",14,a7,b3,45),::Array_obj< int >::fromData( _hx_array_data_88cf9d11_3,1),0,false,null(),null());
HXLINE(  34)				character1->animation->add(HX_("selected",5b,2a,6d,b1),::Array_obj< int >::fromData( _hx_array_data_88cf9d11_4,1),0,false,null(),null());
HXLINE(  35)				character1->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  36)				character1->setGraphicSize(::Std_obj::_hx_int((character1->get_width() * ((Float)0.3))),null());
HXLINE(  37)				character1->updateHitbox();
HXLINE(  38)				character1->ID = i;
HXLINE(  39)				int _hx_tmp2 = ::flixel::FlxG_obj::height;
HXDLIN(  39)				character1->set_y((( (Float)(_hx_tmp2) ) - character1->get_height()));
HXLINE(  40)				this->items->add(character1).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
            	}


void GalamixMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite item){
            			HX_GC_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_47_update)
HXLINE(  47)			if (::flixel::FlxG_obj::mouse->overlaps(item,null())) {
HXLINE(  48)				item->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE(  50)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  51)					 ::backend::WeekData leWeek = ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(item->ID))) );
HXLINE(  52)					::backend::WeekData_obj::setDirectoryFromWeek(leWeek);
HXLINE(  54)					::states::PlayState_obj::storyWeek = item->ID;
HXLINE(  55)					{
HXLINE(  55)						 ::backend::WeekData week = null();
HXDLIN(  55)						if (::hx::IsNull( week )) {
HXLINE(  55)							week = ::backend::WeekData_obj::getCurrentWeek();
            						}
HXDLIN(  55)						::haxe::Log_obj::trace(week->fileName,::hx::SourceInfo(HX_("source/backend/Difficulty.hx",54,35,44,46),32,HX_("backend.Difficulty",75,ec,84,d1),HX_("loadFromWeek",c4,1a,2a,66)));
HXDLIN(  55)						::String diffStr = week->difficulties;
HXDLIN(  55)						bool _hx_tmp;
HXDLIN(  55)						if (::hx::IsNotNull( diffStr )) {
HXLINE(  55)							_hx_tmp = (diffStr.length > 0);
            						}
            						else {
HXLINE(  55)							_hx_tmp = false;
            						}
HXDLIN(  55)						if (_hx_tmp) {
HXLINE(  55)							::Array< ::String > diffs = ::StringTools_obj::trim(diffStr).split(HX_(",",2c,00,00,00));
HXDLIN(  55)							int i = (diffs->length - 1);
HXDLIN(  55)							while((i > 0)){
HXLINE(  55)								if (::hx::IsNotNull( diffs->__get(i) )) {
HXLINE(  55)									diffs[i] = ::StringTools_obj::trim(diffs->__get(i));
HXDLIN(  55)									if ((diffs->__get(i).length < 1)) {
HXLINE(  55)										diffs->remove(diffs->__get(i));
            									}
            								}
HXDLIN(  55)								i = (i - 1);
            							}
HXDLIN(  55)							bool _hx_tmp;
HXDLIN(  55)							if ((diffs->length > 0)) {
HXLINE(  55)								_hx_tmp = (diffs->__get(0).length > 0);
            							}
            							else {
HXLINE(  55)								_hx_tmp = false;
            							}
HXDLIN(  55)							if (_hx_tmp) {
HXLINE(  55)								::backend::Difficulty_obj::list = diffs;
            							}
            						}
            						else {
HXLINE(  55)							::backend::Difficulty_obj::list = ::backend::Difficulty_obj::defaultList->copy();
            						}
            					}
HXLINE(  57)					::Array< ::String > songArray = ::Array_obj< ::String >::__new(0);
HXLINE(  58)					::cpp::VirtualArray leSongs = leWeek->songs;
HXLINE(  59)					{
HXLINE(  59)						int _g = 0;
HXDLIN(  59)						int _g1 = leSongs->get_length();
HXDLIN(  59)						while((_g < _g1)){
HXLINE(  59)							_g = (_g + 1);
HXDLIN(  59)							int i = (_g - 1);
HXLINE(  60)							songArray->push(leSongs->__get(i)->__GetItem(0));
            						}
            					}
HXLINE(  62)					::states::PlayState_obj::storyPlaylist = songArray;
HXLINE(  64)					 ::Dynamic num = 0;
HXDLIN(  64)					if (::hx::IsNull( num )) {
HXLINE(  64)						num = ::states::PlayState_obj::storyDifficulty;
            					}
HXDLIN(  64)					::String fileSuffix = ::backend::Difficulty_obj::list->__get(( (int)(num) ));
HXDLIN(  64)					if ((fileSuffix != ::backend::Difficulty_obj::defaultDifficulty)) {
HXLINE(  64)						fileSuffix = (HX_("-",2d,00,00,00) + fileSuffix);
            					}
            					else {
HXLINE(  64)						fileSuffix = HX_("",00,00,00,00);
            					}
HXDLIN(  64)					 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN(  64)					 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN(  64)					::String path = invalidChars->split(::StringTools_obj::replace(fileSuffix,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN(  64)					::String diffic = hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
HXLINE(  65)					if (::hx::IsNull( diffic )) {
HXLINE(  65)						diffic = HX_("",00,00,00,00);
            					}
HXLINE(  67)					::states::PlayState_obj::storyDifficulty = 0;
HXLINE(  69)					::String _hx_tmp1 = (::states::PlayState_obj::storyPlaylist->__get(0).toLowerCase() + diffic);
HXDLIN(  69)					::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(_hx_tmp1,::states::PlayState_obj::storyPlaylist->__get(0).toLowerCase());
HXLINE(  70)					::states::PlayState_obj::campaignScore = 0;
HXLINE(  71)					::states::PlayState_obj::campaignMisses = 0;
HXLINE(  73)					::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true));
HXLINE(  74)					::states::FreeplayState_obj::destroyFreeplayVocals();
            				}
            			}
            			else {
HXLINE(  78)				item->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_43_update)
HXLINE(  44)		this->super::update(elapsed);
HXLINE(  46)		this->items->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE(  81)		if (this->get_controls()->get_BACK()) {
HXLINE(  82)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE(  83)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  83)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  84)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
            		}
            	}



::hx::ObjectPtr< GalamixMenuState_obj > GalamixMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< GalamixMenuState_obj > __this = new GalamixMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< GalamixMenuState_obj > GalamixMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	GalamixMenuState_obj *__this = (GalamixMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GalamixMenuState_obj), true, "states.GalamixMenuState"));
	*(void **)__this = GalamixMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

GalamixMenuState_obj::GalamixMenuState_obj()
{
}

void GalamixMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GalamixMenuState);
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(oldMouse,"oldMouse");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GalamixMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(oldMouse,"oldMouse");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GalamixMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return ::hx::Val( items ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldMouse") ) { return ::hx::Val( oldMouse ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GalamixMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldMouse") ) { oldMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GalamixMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("items",00,ac,0c,c2));
	outFields->push(HX_("oldMouse",fe,2f,30,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GalamixMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GalamixMenuState_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsBool,(int)offsetof(GalamixMenuState_obj,oldMouse),HX_("oldMouse",fe,2f,30,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GalamixMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String GalamixMenuState_obj_sMemberFields[] = {
	HX_("items",00,ac,0c,c2),
	HX_("oldMouse",fe,2f,30,f3),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class GalamixMenuState_obj::__mClass;

void GalamixMenuState_obj::__register()
{
	GalamixMenuState_obj _hx_dummy;
	GalamixMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.GalamixMenuState",11,9d,cf,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GalamixMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GalamixMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GalamixMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GalamixMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
