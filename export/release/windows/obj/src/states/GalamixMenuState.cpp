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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_6_new,"states.GalamixMenuState","new",0x6ded9a83,"states.GalamixMenuState.new","states/GalamixMenuState.hx",6,0xdad50aec)
HX_LOCAL_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_13_create,"states.GalamixMenuState","create",0x705254b9,"states.GalamixMenuState.create","states/GalamixMenuState.hx",13,0xdad50aec)
static const int _hx_array_data_88cf9d11_3[] = {
	(int)0,
};
static const int _hx_array_data_88cf9d11_4[] = {
	(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_62_update,"states.GalamixMenuState","update",0x7b4873c6,"states.GalamixMenuState.update","states/GalamixMenuState.hx",62,0xdad50aec)
HX_LOCAL_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_57_update,"states.GalamixMenuState","update",0x7b4873c6,"states.GalamixMenuState.update","states/GalamixMenuState.hx",57,0xdad50aec)
static const bool _hx_array_data_88cf9d11_9[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c36377a93cbcc5a8_126_changeDiff,"states.GalamixMenuState","changeDiff",0x242ba1d2,"states.GalamixMenuState.changeDiff","states/GalamixMenuState.hx",126,0xdad50aec)
namespace states{

void GalamixMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_6_new)
HXLINE(  10)		this->curSelectedDiff = 0;
HXLINE(   6)		super::__construct(TransIn,TransOut);
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
            	HX_GC_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_13_create)
HXLINE(  14)		this->super::create();
HXLINE(  16)		this->oldMouse = ::flixel::FlxG_obj::mouse->visible;
HXLINE(  18)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  23)		::states::PlayState_obj::isStoryMode = true;
HXLINE(  24)		::backend::WeekData_obj::reloadWeekFiles(true);
HXLINE(  26)		this->items =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  27)		this->add(this->items);
HXLINE(  29)		int amount = -1;
HXLINE(  31)		::backend::WeekData_obj::weeksList->reverse();
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			int _g1 = ::backend::WeekData_obj::weeksList->length;
HXDLIN(  33)			while((_g < _g1)){
HXLINE(  33)				_g = (_g + 1);
HXDLIN(  33)				int i = (_g - 1);
HXLINE(  35)				 ::backend::WeekData weekFile = ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(i))) );
HXLINE(  36)				if (!(weekFile->galamix)) {
HXLINE(  37)					continue;
            				}
            				else {
HXLINE(  39)					amount = (amount + 1);
            				}
HXLINE(  41)				 ::flixel::FlxSprite character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(300 + (amount * 300)),0,null());
HXDLIN(  41)				 ::flixel::FlxSprite character1 = character->loadGraphic(::backend::Paths_obj::image((HX_("galamixMenu/",83,c8,bb,51) + weekFile->weekCharacter),null(),null()),null(),null(),null(),null(),null());
HXLINE(  42)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::backend::Paths_obj::image((HX_("galamixMenu/",83,c8,bb,51) + weekFile->weekCharacter),null(),null());
HXDLIN(  42)				int _hx_tmp1 = ::Std_obj::_hx_int((character1->get_width() / ( (Float)(2) )));
HXDLIN(  42)				character1->loadGraphic(_hx_tmp,true,_hx_tmp1,::Std_obj::_hx_int(character1->get_height()),null(),null());
HXLINE(  43)				character1->animation->add(HX_("idle",14,a7,b3,45),::Array_obj< int >::fromData( _hx_array_data_88cf9d11_3,1),0,false,null(),null());
HXLINE(  44)				character1->animation->add(HX_("selected",5b,2a,6d,b1),::Array_obj< int >::fromData( _hx_array_data_88cf9d11_4,1),0,false,null(),null());
HXLINE(  45)				character1->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  46)				character1->setGraphicSize(::Std_obj::_hx_int((character1->get_width() * ((Float)0.3))),null());
HXLINE(  47)				character1->updateHitbox();
HXLINE(  48)				character1->ID = i;
HXLINE(  49)				int _hx_tmp2 = ::flixel::FlxG_obj::height;
HXDLIN(  49)				character1->set_y((( (Float)(_hx_tmp2) ) - character1->get_height()));
HXLINE(  50)				this->items->add(character1).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  53)		this->diffText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,::flixel::FlxG_obj::width,50,0,HX_("",00,00,00,00),60,null());
HXLINE(  54)		 ::flixel::text::FlxText _hx_tmp = this->diffText;
HXDLIN(  54)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  54)		::String _hx_tmp1;
HXDLIN(  54)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  54)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  54)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  54)		_hx_tmp->setFormat(_hx_tmp1,50,-1,null(),null(),null(),null());
HXLINE(  55)		this->add(this->diffText);
            	}


void GalamixMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::GalamixMenuState,_gthis,::Array< bool >,ovarlapsAny) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite item){
            			HX_GC_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_62_update)
HXLINE(  62)			if (::flixel::FlxG_obj::mouse->overlaps(item,null())) {
HXLINE(  63)				ovarlapsAny[0] = true;
HXLINE(  64)				if ((item->animation->_curAnim->name == HX_("idle",14,a7,b3,45))) {
HXLINE(  65)					item->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE(  66)					if (::hx::IsNotNull( _gthis->popTween )) {
HXLINE(  67)						_gthis->popTween->cancel();
            					}
HXLINE(  68)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  68)					Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - item->get_height());
HXDLIN(  68)					_gthis->popTween = ::flixel::tweens::FlxTween_obj::tween(item, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),_hx_tmp1)),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())));
HXLINE(  69)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN(  69)					_hx_tmp2->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
HXLINE(  72)				::states::PlayState_obj::storyWeek = item->ID;
HXLINE(  73)				{
HXLINE(  73)					 ::backend::WeekData week = null();
HXDLIN(  73)					if (::hx::IsNull( week )) {
HXLINE(  73)						week = ::backend::WeekData_obj::getCurrentWeek();
            					}
HXDLIN(  73)					::String diffStr = week->difficulties;
HXDLIN(  73)					bool _hx_tmp;
HXDLIN(  73)					if (::hx::IsNotNull( diffStr )) {
HXLINE(  73)						_hx_tmp = (diffStr.length > 0);
            					}
            					else {
HXLINE(  73)						_hx_tmp = false;
            					}
HXDLIN(  73)					if (_hx_tmp) {
HXLINE(  73)						::Array< ::String > diffs = ::StringTools_obj::trim(diffStr).split(HX_(",",2c,00,00,00));
HXDLIN(  73)						int i = (diffs->length - 1);
HXDLIN(  73)						while((i > 0)){
HXLINE(  73)							if (::hx::IsNotNull( diffs->__get(i) )) {
HXLINE(  73)								diffs[i] = ::StringTools_obj::trim(diffs->__get(i));
HXDLIN(  73)								if ((diffs->__get(i).length < 1)) {
HXLINE(  73)									diffs->remove(diffs->__get(i));
            								}
            							}
HXDLIN(  73)							i = (i - 1);
            						}
HXDLIN(  73)						bool _hx_tmp;
HXDLIN(  73)						if ((diffs->length > 0)) {
HXLINE(  73)							_hx_tmp = (diffs->__get(0).length > 0);
            						}
            						else {
HXLINE(  73)							_hx_tmp = false;
            						}
HXDLIN(  73)						if (_hx_tmp) {
HXLINE(  73)							::backend::Difficulty_obj::list = diffs;
            						}
            					}
            					else {
HXLINE(  73)						::backend::Difficulty_obj::list = ::backend::Difficulty_obj::defaultList->copy();
            					}
            				}
HXLINE(  75)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  76)					 ::backend::WeekData leWeek = ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(item->ID))) );
HXLINE(  77)					::backend::WeekData_obj::setDirectoryFromWeek(leWeek);
HXLINE(  79)					::Array< ::String > songArray = ::Array_obj< ::String >::__new(0);
HXLINE(  80)					::cpp::VirtualArray leSongs = leWeek->songs;
HXLINE(  81)					{
HXLINE(  81)						int _g = 0;
HXDLIN(  81)						int _g1 = leSongs->get_length();
HXDLIN(  81)						while((_g < _g1)){
HXLINE(  81)							_g = (_g + 1);
HXDLIN(  81)							int i = (_g - 1);
HXLINE(  82)							songArray->push(leSongs->__get(i)->__GetItem(0));
            						}
            					}
HXLINE(  84)					::states::PlayState_obj::storyPlaylist = songArray;
HXLINE(  86)					 ::Dynamic num = _gthis->curSelectedDiff;
HXDLIN(  86)					if (::hx::IsNull( num )) {
HXLINE(  86)						num = ::states::PlayState_obj::storyDifficulty;
            					}
HXDLIN(  86)					::String fileSuffix = ::backend::Difficulty_obj::list->__get(( (int)(num) ));
HXDLIN(  86)					if ((fileSuffix != ::backend::Difficulty_obj::defaultDifficulty)) {
HXLINE(  86)						fileSuffix = (HX_("-",2d,00,00,00) + fileSuffix);
            					}
            					else {
HXLINE(  86)						fileSuffix = HX_("",00,00,00,00);
            					}
HXDLIN(  86)					 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN(  86)					 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN(  86)					::String path = invalidChars->split(::StringTools_obj::replace(fileSuffix,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN(  86)					::String diffic = hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
HXLINE(  87)					if (::hx::IsNull( diffic )) {
HXLINE(  87)						diffic = HX_("",00,00,00,00);
            					}
HXLINE(  89)					::states::PlayState_obj::storyDifficulty = _gthis->curSelectedDiff;
HXLINE(  91)					::String _hx_tmp = (::states::PlayState_obj::storyPlaylist->__get(0).toLowerCase() + diffic);
HXDLIN(  91)					::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(_hx_tmp,::states::PlayState_obj::storyPlaylist->__get(0).toLowerCase());
HXLINE(  92)					::states::PlayState_obj::campaignScore = 0;
HXLINE(  93)					::states::PlayState_obj::campaignMisses = 0;
HXLINE(  94)					::states::PlayState_obj::galamix = true;
HXLINE(  96)					::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true));
            				}
            			}
            			else {
HXLINE( 100)				item->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 101)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 101)				item->set_y(((( (Float)(_hx_tmp) ) - item->get_height()) + 10));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_57_update)
HXDLIN(  57)		 ::states::GalamixMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  58)		this->super::update(elapsed);
HXLINE(  60)		::Array< bool > ovarlapsAny = ::Array_obj< bool >::fromData( _hx_array_data_88cf9d11_9,1);
HXLINE(  61)		this->items->forEach( ::Dynamic(new _hx_Closure_0(_gthis,ovarlapsAny)),null());
HXLINE( 105)		this->diffText->set_visible(ovarlapsAny->__get(0));
HXLINE( 106)		if (ovarlapsAny->__get(0)) {
HXLINE( 107)			this->changeDiff(0);
            		}
HXLINE( 109)		if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE( 110)			this->changeDiff(-1);
HXLINE( 111)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 111)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 114)		if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 115)			this->changeDiff(1);
HXLINE( 116)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 116)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 119)		if (this->get_controls()->get_BACK()) {
HXLINE( 120)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 121)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 121)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 122)			::flixel::FlxG_obj::mouse->set_visible(this->oldMouse);
            		}
            	}


void GalamixMenuState_obj::changeDiff(int num){
            	HX_STACKFRAME(&_hx_pos_c36377a93cbcc5a8_126_changeDiff)
HXLINE( 127)		 ::states::GalamixMenuState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 127)		_hx_tmp->curSelectedDiff = (_hx_tmp->curSelectedDiff + num);
HXLINE( 129)		if ((this->curSelectedDiff > (::backend::Difficulty_obj::list->length - 1))) {
HXLINE( 130)			this->curSelectedDiff = 0;
            		}
HXLINE( 131)		if ((this->curSelectedDiff < 0)) {
HXLINE( 132)			this->curSelectedDiff = (::backend::Difficulty_obj::list->length - 1);
            		}
HXLINE( 134)		 ::Dynamic num1 = this->curSelectedDiff;
HXDLIN( 134)		 ::Dynamic thediff;
HXDLIN( 134)		if (::hx::IsNull( num1 )) {
HXLINE( 134)			thediff = ::states::PlayState_obj::storyDifficulty;
            		}
            		else {
HXLINE( 134)			thediff = num1;
            		}
HXDLIN( 134)		::String thediff1 = ::backend::Difficulty_obj::list->__get(( (int)(thediff) ));
HXLINE( 135)		 ::flixel::text::FlxText _hx_tmp1 = this->diffText;
HXDLIN( 135)		_hx_tmp1->set_text(((HX_("< ",64,34,00,00) + thediff1.toUpperCase()) + HX_(" >",1e,1c,00,00)));
HXLINE( 136)		 ::flixel::text::FlxText _hx_tmp2 = this->diffText;
HXDLIN( 136)		int _hx_tmp3 = (::flixel::FlxG_obj::width - 250);
HXDLIN( 136)		_hx_tmp2->set_x((( (Float)(_hx_tmp3) ) - (this->diffText->get_width() / ( (Float)(2) ))));
HXLINE( 137)		this->diffText->set_visible((::backend::Difficulty_obj::list->length > 1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalamixMenuState_obj,changeDiff,(void))


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
	HX_MARK_MEMBER_NAME(popTween,"popTween");
	HX_MARK_MEMBER_NAME(curSelectedDiff,"curSelectedDiff");
	HX_MARK_MEMBER_NAME(diffText,"diffText");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GalamixMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(oldMouse,"oldMouse");
	HX_VISIT_MEMBER_NAME(popTween,"popTween");
	HX_VISIT_MEMBER_NAME(curSelectedDiff,"curSelectedDiff");
	HX_VISIT_MEMBER_NAME(diffText,"diffText");
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
		if (HX_FIELD_EQ(inName,"popTween") ) { return ::hx::Val( popTween ); }
		if (HX_FIELD_EQ(inName,"diffText") ) { return ::hx::Val( diffText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"changeDiff") ) { return ::hx::Val( changeDiff_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"curSelectedDiff") ) { return ::hx::Val( curSelectedDiff ); }
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
		if (HX_FIELD_EQ(inName,"popTween") ) { popTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffText") ) { diffText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"curSelectedDiff") ) { curSelectedDiff=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GalamixMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("items",00,ac,0c,c2));
	outFields->push(HX_("oldMouse",fe,2f,30,f3));
	outFields->push(HX_("popTween",1a,ef,76,82));
	outFields->push(HX_("curSelectedDiff",a0,8d,53,41));
	outFields->push(HX_("diffText",52,3b,1b,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GalamixMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GalamixMenuState_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsBool,(int)offsetof(GalamixMenuState_obj,oldMouse),HX_("oldMouse",fe,2f,30,f3)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(GalamixMenuState_obj,popTween),HX_("popTween",1a,ef,76,82)},
	{::hx::fsInt,(int)offsetof(GalamixMenuState_obj,curSelectedDiff),HX_("curSelectedDiff",a0,8d,53,41)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalamixMenuState_obj,diffText),HX_("diffText",52,3b,1b,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GalamixMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String GalamixMenuState_obj_sMemberFields[] = {
	HX_("items",00,ac,0c,c2),
	HX_("oldMouse",fe,2f,30,f3),
	HX_("popTween",1a,ef,76,82),
	HX_("curSelectedDiff",a0,8d,53,41),
	HX_("diffText",52,3b,1b,21),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeDiff",95,91,b2,1c),
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
