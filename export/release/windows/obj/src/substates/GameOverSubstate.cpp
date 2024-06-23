#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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
#ifndef INCLUDED_states_FreeplayState
#include <states/FreeplayState.h>
#endif
#ifndef INCLUDED_states_GalamixMenuState
#include <states/GalamixMenuState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_StoryMenuState
#include <states/StoryMenuState.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_745da79ee01f66a5_13_new,"substates.GameOverSubstate","new",0xbef04ad5,"substates.GameOverSubstate.new","substates/GameOverSubstate.hx",13,0xec6a4ada)
HX_DEFINE_STACK_FRAME(_hx_pos_745da79ee01f66a5_116_new,"substates.GameOverSubstate","new",0xbef04ad5,"substates.GameOverSubstate.new","substates/GameOverSubstate.hx",116,0xec6a4ada)
HX_DEFINE_STACK_FRAME(_hx_pos_745da79ee01f66a5_126_new,"substates.GameOverSubstate","new",0xbef04ad5,"substates.GameOverSubstate.new","substates/GameOverSubstate.hx",126,0xec6a4ada)
HX_DEFINE_STACK_FRAME(_hx_pos_745da79ee01f66a5_131_new,"substates.GameOverSubstate","new",0xbef04ad5,"substates.GameOverSubstate.new","substates/GameOverSubstate.hx",131,0xec6a4ada)
static const int _hx_array_data_db3b3c63_4[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,(int)15,
};
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_52_create,"substates.GameOverSubstate","create",0xb85123a7,"substates.GameOverSubstate.create","substates/GameOverSubstate.hx",52,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_155_beatHit,"substates.GameOverSubstate","beatHit",0xf1484372,"substates.GameOverSubstate.beatHit","substates/GameOverSubstate.hx",155,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_166_update,"substates.GameOverSubstate","update",0xc34742b4,"substates.GameOverSubstate.update","substates/GameOverSubstate.hx",166,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_247_coolStartDeath,"substates.GameOverSubstate","coolStartDeath",0x66d8bb46,"substates.GameOverSubstate.coolStartDeath","substates/GameOverSubstate.hx",247,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_252_endBullshit,"substates.GameOverSubstate","endBullshit",0x777d6ec3,"substates.GameOverSubstate.endBullshit","substates/GameOverSubstate.hx",252,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_263_endBullshit,"substates.GameOverSubstate","endBullshit",0x777d6ec3,"substates.GameOverSubstate.endBullshit","substates/GameOverSubstate.hx",263,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_261_endBullshit,"substates.GameOverSubstate","endBullshit",0x777d6ec3,"substates.GameOverSubstate.endBullshit","substates/GameOverSubstate.hx",261,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_271_destroy,"substates.GameOverSubstate","destroy",0xa1c985ef,"substates.GameOverSubstate.destroy","substates/GameOverSubstate.hx",271,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_35_resetVariables,"substates.GameOverSubstate","resetVariables",0xf2722693,"substates.GameOverSubstate.resetVariables","substates/GameOverSubstate.hx",35,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_22_boot,"substates.GameOverSubstate","boot",0x4b6a301d,"substates.GameOverSubstate.boot","substates/GameOverSubstate.hx",22,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_23_boot,"substates.GameOverSubstate","boot",0x4b6a301d,"substates.GameOverSubstate.boot","substates/GameOverSubstate.hx",23,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_24_boot,"substates.GameOverSubstate","boot",0x4b6a301d,"substates.GameOverSubstate.boot","substates/GameOverSubstate.hx",24,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_25_boot,"substates.GameOverSubstate","boot",0x4b6a301d,"substates.GameOverSubstate.boot","substates/GameOverSubstate.hx",25,0xec6a4ada)
namespace substates{

void GameOverSubstate_obj::__construct(Float x,Float y,Float camX,Float camY){
            	HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_13_new)
HXLINE( 243)		this->isEnding = false;
HXLINE( 164)		this->startedDeath = false;
HXLINE(  33)		this->ogZoom = ((Float)0);
HXLINE(  20)		this->stageSuffix = HX_("",00,00,00,00);
HXLINE(  18)		this->playingDeathSound = true;
HXLINE(  17)		this->updateCamera = false;
HXLINE(  61)		super::__construct();
HXLINE(  63)		::states::PlayState_obj::instance->setOnScripts(HX_("inGameOver",6b,97,d6,11),true,null());
HXLINE(  65)		::backend::Conductor_obj::songPosition = ( (Float)(0) );
HXLINE(  66)		::backend::Conductor_obj::set_bpm(( (Float)(98) ));
HXLINE(  69)		{
HXLINE(  69)			::String library = null();
HXDLIN(  69)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),::substates::GameOverSubstate_obj::loopSoundName,library);
            		}
HXLINE(  70)		{
HXLINE(  70)			::String library1 = null();
HXDLIN(  70)			 ::openfl::media::Sound file1 = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),::substates::GameOverSubstate_obj::endSoundName,library1);
            		}
HXLINE(  72)		this->coloredBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-(::flixel::FlxG_obj::width),-(::flixel::FlxG_obj::height),null());
HXLINE(  73)		this->coloredBG->makeGraphic((::flixel::FlxG_obj::width * 3),(::flixel::FlxG_obj::height * 3),null(),null(),null());
HXLINE(  74)		{
HXLINE(  74)			 ::flixel::math::FlxBasePoint this1 = this->coloredBG->scrollFactor;
HXDLIN(  74)			this1->set_x(( (Float)(0) ));
HXDLIN(  74)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  75)		this->coloredBG->set_alpha(((Float)0.0001));
HXLINE(  76)		this->add(this->coloredBG);
HXLINE(  78)		this->ogZoom = ::states::PlayState_obj::instance->defaultCamZoom;
HXLINE(  80)		this->boyfriend =  ::objects::Character_obj::__alloc( HX_CTX ,x,y,::substates::GameOverSubstate_obj::characterName,true);
HXLINE(  81)		 ::objects::Character fh = this->boyfriend;
HXDLIN(  81)		fh->set_x((fh->x + this->boyfriend->positionArray->__get(0)));
HXLINE(  82)		 ::objects::Character fh1 = this->boyfriend;
HXDLIN(  82)		fh1->set_y((fh1->y + this->boyfriend->positionArray->__get(1)));
HXLINE(  84)		if ((this->boyfriend->curCharacter == HX_("dog-dead",55,a5,b3,b9))) {
HXLINE(  85)			this->boyfriend->setGraphicSize(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height);
HXLINE(  86)			this->boyfriend->updateHitbox();
HXLINE(  87)			this->boyfriend->set_alpha(((Float)0.0001));
HXLINE(  88)			this->ogZoom = ( (Float)(1) );
HXLINE(  89)			::flixel::FlxG_obj::camera->set_zoom(( (Float)(1) ));
            		}
HXLINE(  91)		this->add(this->boyfriend);
HXLINE(  93)		if ((this->boyfriend->curCharacter == HX_("dog-dead",55,a5,b3,b9))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,explosion3) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer timer){
            				HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_116_new)
HXLINE( 117)				explosion3->set_alpha(( (Float)(1) ));
HXLINE( 118)				explosion3->animation->play(HX_("boom",2b,84,1b,41),null(),null(),null());
HXLINE( 119)				explosion3->updateHitbox();
HXLINE( 120)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 120)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("boom",2b,84,1b,41),null()),((Float)0.6),null(),null(),null(),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::flixel::text::FlxText,gameoverText3, ::flixel::FlxSprite,explosion3) HXARGC(1)
            			void _hx_run(::String name){
            				HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_126_new)
HXLINE( 127)				explosion3->set_alpha(((Float)0.0000001));
HXLINE( 128)				::flixel::tweens::FlxTween_obj::tween(gameoverText3, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),2,null());
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::flixel::FlxSprite,doggy3) HXARGC(3)
            			void _hx_run(::String name,int index,int frame){
            				HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_131_new)
HXLINE( 131)				if ((frame == 6)) {
HXLINE( 132)					doggy3->set_alpha(((Float)0.000001));
            				}
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE(  94)			Float doggy = this->boyfriend->x;
HXDLIN(  94)			Float doggy1 = (doggy + (this->boyfriend->get_width() / ( (Float)(2) )));
HXDLIN(  94)			Float doggy2 = this->boyfriend->y;
HXDLIN(  94)			 ::flixel::FlxSprite doggy3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,doggy1,((doggy2 + (this->boyfriend->get_height() / ( (Float)(2) ))) + 200),null());
HXLINE(  95)			 ::flixel::FlxSprite doggy4 = doggy3;
HXDLIN(  95)			doggy4->loadGraphic(::backend::Paths_obj::image(HX_("dog_sad",93,0d,68,2d),null(),null()),null(),null(),null(),null(),null());
HXLINE(  96)			 ::flixel::FlxSprite doggy5 = doggy3;
HXDLIN(  96)			doggy5->setGraphicSize(::Std_obj::_hx_int((doggy3->get_width() * ((Float)1.3))),null());
HXLINE(  97)			doggy3->updateHitbox();
HXLINE(  98)			 ::flixel::FlxSprite doggy6 = doggy3;
HXDLIN(  98)			Float doggy7 = doggy3->x;
HXDLIN(  98)			doggy6->set_x((doggy7 - (doggy3->get_width() / ( (Float)(2) ))));
HXLINE(  99)			 ::flixel::FlxSprite doggy8 = doggy3;
HXDLIN(  99)			Float doggy9 = doggy3->y;
HXDLIN(  99)			doggy8->set_y((doggy9 - (doggy3->get_height() / ( (Float)(2) ))));
HXLINE( 100)			doggy3->set_antialiasing(true);
HXLINE( 101)			this->add(doggy3);
HXLINE( 104)			Float gameoverText = this->boyfriend->x;
HXDLIN( 104)			Float gameoverText1 = (gameoverText + (this->boyfriend->get_width() / ( (Float)(2) )));
HXDLIN( 104)			Float gameoverText2 = this->boyfriend->y;
HXDLIN( 104)			 ::flixel::text::FlxText gameoverText3 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,gameoverText1,((gameoverText2 + (this->boyfriend->get_height() / ( (Float)(2) ))) - ( (Float)(200) )),0,HX_("GAME\nOVER",2c,dd,d2,15),80,null());
HXLINE( 105)			 ::flixel::text::FlxText gameoverText4 = gameoverText3;
HXDLIN( 105)			::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("bonerDeathFont.ttf",8d,6e,f6,90)));
HXDLIN( 105)			::String _hx_tmp;
HXDLIN( 105)			if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 105)				_hx_tmp = file;
            			}
            			else {
HXLINE( 105)				_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("bonerDeathFont.ttf",8d,6e,f6,90));
            			}
HXDLIN( 105)			gameoverText4->setFormat(_hx_tmp,100,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 106)			gameoverText3->set_antialiasing(false);
HXLINE( 107)			gameoverText3->set_alpha(((Float)0.00001));
HXLINE( 108)			 ::flixel::text::FlxText gameoverText5 = gameoverText3;
HXDLIN( 108)			Float gameoverText6 = gameoverText3->x;
HXDLIN( 108)			gameoverText5->set_x((gameoverText6 - (gameoverText3->get_width() / ( (Float)(2) ))));
HXLINE( 109)			 ::flixel::text::FlxText gameoverText7 = gameoverText3;
HXDLIN( 109)			Float gameoverText8 = gameoverText3->y;
HXDLIN( 109)			gameoverText7->set_y((gameoverText8 - (gameoverText3->get_height() / ( (Float)(2) ))));
HXLINE( 110)			this->add(gameoverText3);
HXLINE( 112)			Float explosion = this->boyfriend->x;
HXDLIN( 112)			Float explosion1 = (explosion + (this->boyfriend->get_width() / ( (Float)(2) )));
HXDLIN( 112)			Float explosion2 = this->boyfriend->y;
HXDLIN( 112)			 ::flixel::FlxSprite explosion3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,explosion1,((explosion2 + (this->boyfriend->get_height() / ( (Float)(2) ))) + 160),null());
HXLINE( 113)			 ::flixel::FlxSprite explosion4 = explosion3;
HXDLIN( 113)			explosion4->loadGraphic(::backend::Paths_obj::image(HX_("fx_explosion",28,43,cb,94),null(),null()),true,256,256,null(),null());
HXLINE( 114)			explosion3->animation->add(HX_("boom",2b,84,1b,41),::Array_obj< int >::fromData( _hx_array_data_db3b3c63_4,16),18,false,null(),null());
HXLINE( 115)			explosion3->set_alpha(((Float)0.0000001));
HXLINE( 116)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_0(explosion3)),null());
HXLINE( 122)			 ::flixel::FlxSprite explosion5 = explosion3;
HXDLIN( 122)			explosion5->setGraphicSize(::Std_obj::_hx_int((explosion3->get_width() * ((Float)1.3))),null());
HXLINE( 123)			explosion3->updateHitbox();
HXLINE( 124)			 ::flixel::FlxSprite explosion6 = explosion3;
HXDLIN( 124)			Float explosion7 = explosion3->x;
HXDLIN( 124)			explosion6->set_x((explosion7 - (explosion3->get_width() / ( (Float)(2) ))));
HXLINE( 125)			 ::flixel::FlxSprite explosion8 = explosion3;
HXDLIN( 125)			Float explosion9 = explosion3->y;
HXDLIN( 125)			explosion8->set_y((explosion9 - (explosion3->get_height() / ( (Float)(2) ))));
HXLINE( 126)			explosion3->animation->finishCallback =  ::Dynamic(new _hx_Closure_1(gameoverText3,explosion3));
HXLINE( 130)			explosion3->animation->callback =  ::Dynamic(new _hx_Closure_2(doggy3));
HXLINE( 134)			this->add(explosion3);
            		}
HXLINE( 137)		 ::flixel::FlxSprite _hx_tmp = this->coloredBG;
HXDLIN( 137)		int Red = this->boyfriend->healthColorArray->__get(0);
HXDLIN( 137)		int Green = this->boyfriend->healthColorArray->__get(1);
HXDLIN( 137)		int Blue = this->boyfriend->healthColorArray->__get(2);
HXDLIN( 137)		int Alpha = 255;
HXDLIN( 137)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 137)		{
HXLINE( 137)			color = (color & -16711681);
HXDLIN( 137)			int color1;
HXDLIN( 137)			if ((Red > 255)) {
HXLINE( 137)				color1 = 255;
            			}
            			else {
HXLINE( 137)				if ((Red < 0)) {
HXLINE( 137)					color1 = 0;
            				}
            				else {
HXLINE( 137)					color1 = Red;
            				}
            			}
HXDLIN( 137)			color = (color | (color1 << 16));
            		}
HXDLIN( 137)		{
HXLINE( 137)			color = (color & -65281);
HXDLIN( 137)			int color2;
HXDLIN( 137)			if ((Green > 255)) {
HXLINE( 137)				color2 = 255;
            			}
            			else {
HXLINE( 137)				if ((Green < 0)) {
HXLINE( 137)					color2 = 0;
            				}
            				else {
HXLINE( 137)					color2 = Green;
            				}
            			}
HXDLIN( 137)			color = (color | (color2 << 8));
            		}
HXDLIN( 137)		{
HXLINE( 137)			color = (color & -256);
HXDLIN( 137)			int color3;
HXDLIN( 137)			if ((Blue > 255)) {
HXLINE( 137)				color3 = 255;
            			}
            			else {
HXLINE( 137)				if ((Blue < 0)) {
HXLINE( 137)					color3 = 0;
            				}
            				else {
HXLINE( 137)					color3 = Blue;
            				}
            			}
HXDLIN( 137)			color = (color | color3);
            		}
HXDLIN( 137)		{
HXLINE( 137)			color = (color & 16777215);
HXDLIN( 137)			int color4;
HXDLIN( 137)			if ((Alpha > 255)) {
HXLINE( 137)				color4 = 255;
            			}
            			else {
HXLINE( 137)				if ((Alpha < 0)) {
HXLINE( 137)					color4 = 0;
            				}
            				else {
HXLINE( 137)					color4 = Alpha;
            				}
            			}
HXDLIN( 137)			color = (color | (color4 << 24));
            		}
HXDLIN( 137)		_hx_tmp->set_color(color);
HXLINE( 139)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 139)		this->deathSound = _hx_tmp1->play(::backend::Paths_obj::sound(::substates::GameOverSubstate_obj::deathSoundName,null()),null(),null(),null(),null(),null());
HXLINE( 140)		{
HXLINE( 140)			 ::flixel::math::FlxBasePoint this2 = ::flixel::FlxG_obj::camera->scroll;
HXDLIN( 140)			this2->set_x(( (Float)(0) ));
HXDLIN( 140)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 141)		::flixel::FlxG_obj::camera->target = null();
HXLINE( 143)		this->boyfriend->playAnim(HX_("deathLoop",b8,0b,79,2e),true,null(),null());
HXLINE( 144)		this->boyfriend->updateHitbox();
HXLINE( 145)		this->boyfriend->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 147)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE( 148)		 ::flixel::FlxObject _hx_tmp2 = this->camFollow;
HXDLIN( 148)		Float _hx_tmp3 = this->boyfriend->getGraphicMidpoint(null())->x;
HXDLIN( 148)		Float _hx_tmp4 = (_hx_tmp3 - this->boyfriend->cameraPosition->__get(0));
HXDLIN( 148)		Float _hx_tmp5 = this->boyfriend->getGraphicMidpoint(null())->y;
HXDLIN( 148)		_hx_tmp2->setPosition(_hx_tmp4,(_hx_tmp5 + this->boyfriend->cameraPosition->__get(1)));
HXLINE( 149)		{
HXLINE( 149)			 ::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;
HXDLIN( 149)			 ::flixel::math::FlxBasePoint this3 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::camera->scroll->x + (( (Float)(::flixel::FlxG_obj::camera->width) ) / ( (Float)(2) ))),(::flixel::FlxG_obj::camera->scroll->y + (( (Float)(::flixel::FlxG_obj::camera->height) ) / ( (Float)(2) ))));
HXDLIN( 149)			 ::flixel::math::FlxBasePoint point = this3;
HXDLIN( 149)			{
HXLINE( 149)				 ::flixel::math::FlxBasePoint this4 = _this->scroll;
HXDLIN( 149)				Float y1 = (point->y - (( (Float)(_this->height) ) * ((Float)0.5)));
HXDLIN( 149)				this4->set_x((point->x - (( (Float)(_this->width) ) * ((Float)0.5))));
HXDLIN( 149)				this4->set_y(y1);
            			}
HXDLIN( 149)			if (point->_weak) {
HXLINE( 149)				point->put();
            			}
            		}
HXLINE( 150)		this->add(this->camFollow);
HXLINE( 152)		this->beatHit();
            	}

Dynamic GameOverSubstate_obj::__CreateEmpty() { return new GameOverSubstate_obj; }

void *GameOverSubstate_obj::_hx_vtable = 0;

Dynamic GameOverSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameOverSubstate_obj > _hx_result = new GameOverSubstate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GameOverSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x3c0818b8) {
			if (inClassId<=(int)0x177974e9) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x177974e9;
			} else {
				return inClassId==(int)0x3c0818b8;
			}
		} else {
			return inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GameOverSubstate_obj::create(){
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_52_create)
HXLINE(  53)		::substates::GameOverSubstate_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  54)		::states::PlayState_obj::instance->callOnScripts(HX_("onGameOverStart",7d,47,34,c7),::cpp::VirtualArray_obj::__new(0),null(),null(),null());
HXLINE(  56)		this->super::create();
            	}


void GameOverSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_155_beatHit)
HXLINE( 156)		if ((this->boyfriend->curCharacter == HX_("dog-dead",55,a5,b3,b9))) {
HXLINE( 156)			return;
            		}
HXLINE( 157)		if ((::hx::Mod(this->curBeat,2) != 0)) {
HXLINE( 157)			return;
            		}
HXLINE( 158)		if ((this->boyfriend->animation->_curAnim->name == HX_("deathLoop",b8,0b,79,2e))) {
HXLINE( 159)			this->boyfriend->playAnim(HX_("deathLoop",b8,0b,79,2e),true,null(),null());
            		}
HXLINE( 160)		 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN( 160)		fh->set_zoom((fh->zoom + ((Float)0.015)));
HXLINE( 161)		 ::flixel::FlxSprite fh1 = this->coloredBG;
HXDLIN( 161)		fh1->set_alpha((fh1->alpha + ((Float)0.1)));
            	}


void GameOverSubstate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_166_update)
HXLINE( 167)		this->super::update(elapsed);
HXLINE( 169)		Float a = this->ogZoom;
HXDLIN( 169)		Float Value = (( (Float)(1) ) - (elapsed * ((Float)3.125)));
HXDLIN( 169)		Float lowerBound;
HXDLIN( 169)		if ((Value < 0)) {
HXLINE( 169)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 169)			lowerBound = Value;
            		}
HXDLIN( 169)		Float _hx_tmp;
HXDLIN( 169)		if ((lowerBound > 1)) {
HXLINE( 169)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 169)			_hx_tmp = lowerBound;
            		}
HXDLIN( 169)		::flixel::FlxG_obj::camera->set_zoom((a + (_hx_tmp * (::flixel::FlxG_obj::camera->zoom - a))));
HXLINE( 171)		Float Value1 = (( (Float)(1) ) - (elapsed * ((Float)3.125)));
HXDLIN( 171)		Float lowerBound1;
HXDLIN( 171)		if ((Value1 < 0)) {
HXLINE( 171)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 171)			lowerBound1 = Value1;
            		}
HXDLIN( 171)		Float _hx_tmp1;
HXDLIN( 171)		if ((lowerBound1 > 1)) {
HXLINE( 171)			_hx_tmp1 = ( (Float)(1) );
            		}
            		else {
HXLINE( 171)			_hx_tmp1 = lowerBound1;
            		}
HXDLIN( 171)		this->coloredBG->set_alpha((_hx_tmp1 * this->coloredBG->alpha));
HXLINE( 172)		this->coloredBG->set_visible(true);
HXLINE( 174)		if (::hx::IsNotNull( this->deathSound )) {
HXLINE( 175)			this->playingDeathSound = ::hx::IsNotNull( this->deathSound->_channel );
            		}
HXLINE( 177)		::states::PlayState_obj::instance->callOnScripts(HX_("onUpdate",88,7c,b2,66),::cpp::VirtualArray_obj::__new(1)->init(0,elapsed),null(),null(),null());
HXLINE( 179)		if (::backend::Controls_obj::instance->get_ACCEPT()) {
HXLINE( 181)			this->endBullshit();
            		}
HXLINE( 184)		if (::backend::Controls_obj::instance->get_BACK()) {
HXLINE( 186)			::backend::DiscordClient_obj::resetClientID();
HXLINE( 187)			{
HXLINE( 187)				 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 187)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 188)			::states::PlayState_obj::deathCounter = 0;
HXLINE( 189)			::states::PlayState_obj::seenCutscene = false;
HXLINE( 190)			::states::PlayState_obj::chartingMode = false;
HXLINE( 192)			::backend::Mods_obj::loadTopMod();
HXLINE( 194)			if (::states::PlayState_obj::fromMenu) {
HXLINE( 195)				::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            			else {
HXLINE( 196)				if (::states::PlayState_obj::isStoryMode) {
HXLINE( 197)					if (::states::PlayState_obj::galamix) {
HXLINE( 198)						::backend::MusicBeatState_obj::switchState( ::states::GalamixMenuState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            					else {
HXLINE( 200)						::backend::MusicBeatState_obj::switchState( ::states::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            				}
            				else {
HXLINE( 202)					::backend::MusicBeatState_obj::switchState( ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            			}
HXLINE( 203)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 203)			::String library = null();
HXDLIN( 203)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 203)			_hx_tmp->playMusic(file,null(),null(),null());
HXLINE( 204)			::states::PlayState_obj::instance->callOnScripts(HX_("onGameOverConfirm",db,ac,91,0d),::cpp::VirtualArray_obj::__new(1)->init(0,false),null(),null(),null());
            		}
HXLINE( 207)		if (::hx::IsNotNull( this->boyfriend->animation->_curAnim )) {
HXLINE( 209)			bool _hx_tmp;
HXDLIN( 209)			bool _hx_tmp1;
HXDLIN( 209)			if ((this->boyfriend->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE( 209)				_hx_tmp1 = this->boyfriend->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 209)				_hx_tmp1 = false;
            			}
HXDLIN( 209)			if (_hx_tmp1) {
HXLINE( 209)				_hx_tmp = this->startedDeath;
            			}
            			else {
HXLINE( 209)				_hx_tmp = false;
            			}
HXDLIN( 209)			if (_hx_tmp) {
HXLINE( 210)				this->boyfriend->playAnim(HX_("deathLoop",b8,0b,79,2e),true,null(),null());
            			}
HXLINE( 212)			if ((this->boyfriend->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE( 214)				bool _hx_tmp;
HXDLIN( 214)				bool _hx_tmp1;
HXDLIN( 214)				if ((this->boyfriend->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE( 214)					_hx_tmp1 = this->boyfriend->animation->_curAnim->finished;
            				}
            				else {
HXLINE( 214)					_hx_tmp1 = false;
            				}
HXDLIN( 214)				if (!(_hx_tmp1)) {
HXLINE( 214)					_hx_tmp = (this->boyfriend->curCharacter == HX_("dog-dead",55,a5,b3,b9));
            				}
            				else {
HXLINE( 214)					_hx_tmp = true;
            				}
HXDLIN( 214)				if (_hx_tmp) {
HXLINE( 216)					::flixel::FlxG_obj::camera->follow(this->camFollow,::flixel::FlxCameraFollowStyle_obj::LOCKON_dyn(),0);
HXLINE( 217)					this->updateCamera = true;
HXLINE( 218)					if ((this->boyfriend->curCharacter == HX_("dog-dead",55,a5,b3,b9))) {
HXLINE( 219)						::flixel::FlxG_obj::camera->snapToTarget();
            					}
            				}
HXLINE( 222)				bool _hx_tmp2;
HXDLIN( 222)				if (this->boyfriend->animation->_curAnim->finished) {
HXLINE( 222)					_hx_tmp2 = !(this->playingDeathSound);
            				}
            				else {
HXLINE( 222)					_hx_tmp2 = false;
            				}
HXDLIN( 222)				if (_hx_tmp2) {
HXLINE( 224)					this->startedDeath = true;
HXLINE( 225)					this->coolStartDeath(null());
            				}
            				else {
HXLINE( 228)					::backend::Conductor_obj::songPosition = (-(this->deathSound->_length) + this->deathSound->_time);
            				}
            			}
            		}
HXLINE( 233)		if (this->updateCamera) {
HXLINE( 233)			Float Value = ((elapsed * ((Float)0.6)) / (( (Float)(::flixel::FlxG_obj::updateFramerate) ) / ( (Float)(60) )));
HXDLIN( 233)			Float lowerBound;
HXDLIN( 233)			if ((Value < 0)) {
HXLINE( 233)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 233)				lowerBound = Value;
            			}
HXDLIN( 233)			Float _hx_tmp;
HXDLIN( 233)			if ((lowerBound > 1)) {
HXLINE( 233)				_hx_tmp = ( (Float)(1) );
            			}
            			else {
HXLINE( 233)				_hx_tmp = lowerBound;
            			}
HXDLIN( 233)			::flixel::FlxG_obj::camera->set_followLerp(_hx_tmp);
            		}
            		else {
HXLINE( 234)			::flixel::FlxG_obj::camera->set_followLerp(( (Float)(0) ));
            		}
HXLINE( 236)		bool _hx_tmp2;
HXDLIN( 236)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE( 236)			_hx_tmp2 = !(this->playingDeathSound);
            		}
            		else {
HXLINE( 236)			_hx_tmp2 = false;
            		}
HXDLIN( 236)		if (_hx_tmp2) {
HXLINE( 238)			::backend::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 240)		::states::PlayState_obj::instance->callOnScripts(HX_("onUpdatePost",08,11,55,db),::cpp::VirtualArray_obj::__new(1)->init(0,elapsed),null(),null(),null());
            	}


void GameOverSubstate_obj::coolStartDeath( ::Dynamic __o_volume){
            		 ::Dynamic volume = __o_volume;
            		if (::hx::IsNull(__o_volume)) volume = 1;
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_247_coolStartDeath)
HXDLIN( 247)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 247)		::String library = null();
HXDLIN( 247)		 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),::substates::GameOverSubstate_obj::loopSoundName,library);
HXDLIN( 247)		_hx_tmp->playMusic(file,volume,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameOverSubstate_obj,coolStartDeath,(void))

void GameOverSubstate_obj::endBullshit(){
            	HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_252_endBullshit)
HXDLIN( 252)		if (!(this->isEnding)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_263_endBullshit)
HXLINE( 263)					::backend::MusicBeatState_obj::resetState();
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_261_endBullshit)
HXLINE( 261)				::flixel::FlxG_obj::camera->fade(-16777216,2,false, ::Dynamic(new _hx_Closure_0()),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 254)			this->isEnding = true;
HXLINE( 255)			this->boyfriend->playAnim(HX_("deathConfirm",2c,44,2b,12),true,null(),null());
HXLINE( 256)			{
HXLINE( 256)				 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 256)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 257)			{
HXLINE( 257)				 ::flixel::sound::FlxSound _this1 = this->deathSound;
HXDLIN( 257)				_this1->cleanup(_this1->autoDestroy,true);
            			}
HXLINE( 258)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 258)			::String library = null();
HXDLIN( 258)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),::substates::GameOverSubstate_obj::endSoundName,library);
HXDLIN( 258)			_hx_tmp->play(file,null(),null(),null(),null(),null());
HXLINE( 259)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.7), ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 266)			::states::PlayState_obj::instance->callOnScripts(HX_("onGameOverConfirm",db,ac,91,0d),::cpp::VirtualArray_obj::__new(1)->init(0,true),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,endBullshit,(void))

void GameOverSubstate_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_271_destroy)
HXLINE( 272)		::substates::GameOverSubstate_obj::instance = null();
HXLINE( 273)		this->super::destroy();
            	}


::String GameOverSubstate_obj::characterName;

::String GameOverSubstate_obj::deathSoundName;

::String GameOverSubstate_obj::loopSoundName;

::String GameOverSubstate_obj::endSoundName;

 ::substates::GameOverSubstate GameOverSubstate_obj::instance;

void GameOverSubstate_obj::resetVariables(){
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_35_resetVariables)
HXLINE(  36)		::substates::GameOverSubstate_obj::characterName = HX_("bf-dead",0d,ad,0c,df);
HXLINE(  37)		::substates::GameOverSubstate_obj::deathSoundName = HX_("fnf_loss_sfx",6a,36,72,11);
HXLINE(  38)		::substates::GameOverSubstate_obj::loopSoundName = HX_("gameOver",66,92,de,b5);
HXLINE(  39)		::substates::GameOverSubstate_obj::endSoundName = HX_("gameOverEnd",15,2d,a9,8d);
HXLINE(  41)		 ::Dynamic _song = ::states::PlayState_obj::SONG;
HXLINE(  42)		if (::hx::IsNotNull( _song )) {
HXLINE(  44)			bool _hx_tmp;
HXDLIN(  44)			if (::hx::IsNotNull( _song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic) )) {
HXLINE(  44)				_hx_tmp = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic)) )).length > 0);
            			}
            			else {
HXLINE(  44)				_hx_tmp = false;
            			}
HXDLIN(  44)			if (_hx_tmp) {
HXLINE(  44)				::substates::GameOverSubstate_obj::characterName = ( (::String)(_song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic)) );
            			}
HXLINE(  45)			bool _hx_tmp1;
HXDLIN(  45)			if (::hx::IsNotNull( _song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic) )) {
HXLINE(  45)				_hx_tmp1 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic)) )).length > 0);
            			}
            			else {
HXLINE(  45)				_hx_tmp1 = false;
            			}
HXDLIN(  45)			if (_hx_tmp1) {
HXLINE(  45)				::substates::GameOverSubstate_obj::deathSoundName = ( (::String)(_song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic)) );
            			}
HXLINE(  46)			bool _hx_tmp2;
HXDLIN(  46)			if (::hx::IsNotNull( _song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic) )) {
HXLINE(  46)				_hx_tmp2 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic)) )).length > 0);
            			}
            			else {
HXLINE(  46)				_hx_tmp2 = false;
            			}
HXDLIN(  46)			if (_hx_tmp2) {
HXLINE(  46)				::substates::GameOverSubstate_obj::loopSoundName = ( (::String)(_song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic)) );
            			}
HXLINE(  47)			bool _hx_tmp3;
HXDLIN(  47)			if (::hx::IsNotNull( _song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic) )) {
HXLINE(  47)				_hx_tmp3 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic)) )).length > 0);
            			}
            			else {
HXLINE(  47)				_hx_tmp3 = false;
            			}
HXDLIN(  47)			if (_hx_tmp3) {
HXLINE(  47)				::substates::GameOverSubstate_obj::endSoundName = ( (::String)(_song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic)) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,resetVariables,(void))


::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__new(Float x,Float y,Float camX,Float camY) {
	::hx::ObjectPtr< GameOverSubstate_obj > __this = new GameOverSubstate_obj();
	__this->__construct(x,y,camX,camY);
	return __this;
}

::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float camX,Float camY) {
	GameOverSubstate_obj *__this = (GameOverSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameOverSubstate_obj), true, "substates.GameOverSubstate"));
	*(void **)__this = GameOverSubstate_obj::_hx_vtable;
	__this->__construct(x,y,camX,camY);
	return __this;
}

GameOverSubstate_obj::GameOverSubstate_obj()
{
}

void GameOverSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverSubstate);
	HX_MARK_MEMBER_NAME(boyfriend,"boyfriend");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(updateCamera,"updateCamera");
	HX_MARK_MEMBER_NAME(playingDeathSound,"playingDeathSound");
	HX_MARK_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_MARK_MEMBER_NAME(deathSound,"deathSound");
	HX_MARK_MEMBER_NAME(coloredBG,"coloredBG");
	HX_MARK_MEMBER_NAME(ogZoom,"ogZoom");
	HX_MARK_MEMBER_NAME(startedDeath,"startedDeath");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(boyfriend,"boyfriend");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(updateCamera,"updateCamera");
	HX_VISIT_MEMBER_NAME(playingDeathSound,"playingDeathSound");
	HX_VISIT_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_VISIT_MEMBER_NAME(deathSound,"deathSound");
	HX_VISIT_MEMBER_NAME(coloredBG,"coloredBG");
	HX_VISIT_MEMBER_NAME(ogZoom,"ogZoom");
	HX_VISIT_MEMBER_NAME(startedDeath,"startedDeath");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameOverSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ogZoom") ) { return ::hx::Val( ogZoom ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { return ::hx::Val( boyfriend ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		if (HX_FIELD_EQ(inName,"coloredBG") ) { return ::hx::Val( coloredBG ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deathSound") ) { return ::hx::Val( deathSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { return ::hx::Val( stageSuffix ); }
		if (HX_FIELD_EQ(inName,"endBullshit") ) { return ::hx::Val( endBullshit_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateCamera") ) { return ::hx::Val( updateCamera ); }
		if (HX_FIELD_EQ(inName,"startedDeath") ) { return ::hx::Val( startedDeath ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coolStartDeath") ) { return ::hx::Val( coolStartDeath_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playingDeathSound") ) { return ::hx::Val( playingDeathSound ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameOverSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endSoundName") ) { outValue = ( endSoundName ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterName") ) { outValue = ( characterName ); return true; }
		if (HX_FIELD_EQ(inName,"loopSoundName") ) { outValue = ( loopSoundName ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deathSoundName") ) { outValue = ( deathSoundName ); return true; }
		if (HX_FIELD_EQ(inName,"resetVariables") ) { outValue = resetVariables_dyn(); return true; }
	}
	return false;
}

::hx::Val GameOverSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ogZoom") ) { ogZoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { boyfriend=inValue.Cast<  ::objects::Character >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coloredBG") ) { coloredBG=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deathSound") ) { deathSound=inValue.Cast<  ::flixel::sound::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { stageSuffix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateCamera") ) { updateCamera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startedDeath") ) { startedDeath=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playingDeathSound") ) { playingDeathSound=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameOverSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::substates::GameOverSubstate >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endSoundName") ) { endSoundName=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterName") ) { characterName=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"loopSoundName") ) { loopSoundName=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deathSoundName") ) { deathSoundName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void GameOverSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("boyfriend",6a,29,b8,e6));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("updateCamera",8e,ed,4f,b7));
	outFields->push(HX_("playingDeathSound",09,ba,e7,f9));
	outFields->push(HX_("stageSuffix",2f,64,9f,2f));
	outFields->push(HX_("deathSound",fb,d0,43,83));
	outFields->push(HX_("coloredBG",c7,06,a3,33));
	outFields->push(HX_("ogZoom",4b,9c,b4,eb));
	outFields->push(HX_("startedDeath",33,aa,4e,72));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameOverSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::Character */ ,(int)offsetof(GameOverSubstate_obj,boyfriend),HX_("boyfriend",6a,29,b8,e6)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(GameOverSubstate_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,updateCamera),HX_("updateCamera",8e,ed,4f,b7)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,playingDeathSound),HX_("playingDeathSound",09,ba,e7,f9)},
	{::hx::fsString,(int)offsetof(GameOverSubstate_obj,stageSuffix),HX_("stageSuffix",2f,64,9f,2f)},
	{::hx::fsObject /*  ::flixel::sound::FlxSound */ ,(int)offsetof(GameOverSubstate_obj,deathSound),HX_("deathSound",fb,d0,43,83)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GameOverSubstate_obj,coloredBG),HX_("coloredBG",c7,06,a3,33)},
	{::hx::fsFloat,(int)offsetof(GameOverSubstate_obj,ogZoom),HX_("ogZoom",4b,9c,b4,eb)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,startedDeath),HX_("startedDeath",33,aa,4e,72)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GameOverSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GameOverSubstate_obj::characterName,HX_("characterName",94,02,ec,41)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::deathSoundName,HX_("deathSoundName",e6,08,d8,f2)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::loopSoundName,HX_("loopSoundName",b6,8b,da,e5)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::endSoundName,HX_("endSoundName",5f,47,cf,62)},
	{::hx::fsObject /*  ::substates::GameOverSubstate */ ,(void *) &GameOverSubstate_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GameOverSubstate_obj_sMemberFields[] = {
	HX_("boyfriend",6a,29,b8,e6),
	HX_("camFollow",e0,6e,47,22),
	HX_("updateCamera",8e,ed,4f,b7),
	HX_("playingDeathSound",09,ba,e7,f9),
	HX_("stageSuffix",2f,64,9f,2f),
	HX_("deathSound",fb,d0,43,83),
	HX_("coloredBG",c7,06,a3,33),
	HX_("ogZoom",4b,9c,b4,eb),
	HX_("create",fc,66,0f,7c),
	HX_("beatHit",7d,ea,04,74),
	HX_("startedDeath",33,aa,4e,72),
	HX_("update",09,86,05,87),
	HX_("isEnding",71,3f,f2,52),
	HX_("coolStartDeath",9b,db,39,51),
	HX_("endBullshit",4e,f7,81,48),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void GameOverSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::characterName,"characterName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::deathSoundName,"deathSoundName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::loopSoundName,"loopSoundName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::endSoundName,"endSoundName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameOverSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::characterName,"characterName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::deathSoundName,"deathSoundName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::loopSoundName,"loopSoundName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::endSoundName,"endSoundName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::instance,"instance");
};

#endif

::hx::Class GameOverSubstate_obj::__mClass;

static ::String GameOverSubstate_obj_sStaticFields[] = {
	HX_("characterName",94,02,ec,41),
	HX_("deathSoundName",e6,08,d8,f2),
	HX_("loopSoundName",b6,8b,da,e5),
	HX_("endSoundName",5f,47,cf,62),
	HX_("instance",95,1f,e1,59),
	HX_("resetVariables",e8,46,d3,dc),
	::String(null())
};

void GameOverSubstate_obj::__register()
{
	GameOverSubstate_obj _hx_dummy;
	GameOverSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("substates.GameOverSubstate",63,3c,3b,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameOverSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &GameOverSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = GameOverSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameOverSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameOverSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameOverSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_22_boot)
HXDLIN(  22)		characterName = HX_("bf-dead",0d,ad,0c,df);
            	}
{
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_23_boot)
HXDLIN(  23)		deathSoundName = HX_("fnf_loss_sfx",6a,36,72,11);
            	}
{
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_24_boot)
HXDLIN(  24)		loopSoundName = HX_("gameOver",66,92,de,b5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_25_boot)
HXDLIN(  25)		endSoundName = HX_("gameOverEnd",15,2d,a9,8d);
            	}
}

} // end namespace substates
