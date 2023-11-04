#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_AttachedText
#include <objects/AttachedText.h>
#endif
#ifndef INCLUDED_objects_CheckboxThingie
#include <objects/CheckboxThingie.h>
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
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11861b212311743c_7_new,"options.BaseOptionsMenu","new",0x99505d4e,"options.BaseOptionsMenu.new","options/BaseOptionsMenu.hx",7,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_98_addOption,"options.BaseOptionsMenu","addOption",0xc780fbe4,"options.BaseOptionsMenu.addOption","options/BaseOptionsMenu.hx",98,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_107_update,"options.BaseOptionsMenu","update",0xdab941db,"options.BaseOptionsMenu.update","options/BaseOptionsMenu.hx",107,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_232_updateTextFrom,"options.BaseOptionsMenu","updateTextFrom",0x9c56c9b2,"options.BaseOptionsMenu.updateTextFrom","options/BaseOptionsMenu.hx",232,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_241_clearHold,"options.BaseOptionsMenu","clearHold",0x9cb5a4da,"options.BaseOptionsMenu.clearHold","options/BaseOptionsMenu.hx",241,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_249_changeSelection,"options.BaseOptionsMenu","changeSelection",0x8948d2aa,"options.BaseOptionsMenu.changeSelection","options/BaseOptionsMenu.hx",249,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_287_reloadCheckboxes,"options.BaseOptionsMenu","reloadCheckboxes",0x856a587c,"options.BaseOptionsMenu.reloadCheckboxes","options/BaseOptionsMenu.hx",287,0x82de5a23)
namespace options{

void BaseOptionsMenu_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_7_new)
HXLINE( 105)		this->holdValue = ((Float)0);
HXLINE( 104)		this->holdTime = ((Float)0);
HXLINE( 103)		this->nextAccept = 5;
HXLINE(  10)		this->curSelected = 0;
HXLINE(   9)		this->curOption = null();
HXLINE(  25)		super::__construct();
HXLINE(  27)		if (::hx::IsNull( this->title )) {
HXLINE(  27)			this->title = HX_("Options",3e,5b,4f,ad);
            		}
HXLINE(  28)		if (::hx::IsNull( this->rpcTitle )) {
HXLINE(  28)			this->rpcTitle = HX_("Options Menu",e1,25,4c,98);
            		}
HXLINE(  31)		::backend::DiscordClient_obj::changePresence(this->rpcTitle,null(),null(),null(),null());
HXLINE(  34)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  34)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("menuDesat",26,91,04,72),null(),null()),null(),null(),null(),null(),null());
HXLINE(  35)		bg1->set_color(-1412611);
HXLINE(  36)		{
HXLINE(  36)			int axes = 17;
HXDLIN(  36)			bool _hx_tmp;
HXDLIN(  36)			if ((axes != 1)) {
HXLINE(  36)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  36)				_hx_tmp = true;
            			}
HXDLIN(  36)			if (_hx_tmp) {
HXLINE(  36)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  36)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  36)			bool _hx_tmp1;
HXDLIN(  36)			if ((axes != 16)) {
HXLINE(  36)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  36)				_hx_tmp1 = true;
            			}
HXDLIN(  36)			if (_hx_tmp1) {
HXLINE(  36)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  36)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  37)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  38)		this->add(bg1);
HXLINE(  41)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  42)		this->add(this->grpOptions);
HXLINE(  44)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  45)		this->add(this->grpTexts);
HXLINE(  47)		this->checkboxGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  48)		this->add(this->checkboxGroup);
HXLINE(  50)		this->descBox =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(1,1,-16777216,null(),null());
HXLINE(  51)		this->descBox->set_alpha(((Float)0.6));
HXLINE(  52)		this->add(this->descBox);
HXLINE(  54)		 ::objects::Alphabet titleText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(75) ),( (Float)(45) ),this->title,true);
HXLINE(  55)		titleText->setScale(((Float)0.6),null());
HXLINE(  56)		titleText->set_alpha(((Float)0.4));
HXLINE(  57)		this->add(titleText);
HXLINE(  59)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,600,1180,HX_("",00,00,00,00),32,null());
HXLINE(  60)		 ::flixel::text::FlxText _hx_tmp2 = this->descText;
HXDLIN(  60)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  60)		::String _hx_tmp3;
HXDLIN(  60)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  60)			_hx_tmp3 = file;
            		}
            		else {
HXLINE(  60)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  60)		_hx_tmp2->setFormat(_hx_tmp3,32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  61)		{
HXLINE(  61)			 ::flixel::math::FlxBasePoint this1 = this->descText->scrollFactor;
HXDLIN(  61)			this1->set_x(( (Float)(0) ));
HXDLIN(  61)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  62)		this->descText->set_borderSize(((Float)2.4));
HXLINE(  63)		this->add(this->descText);
HXLINE(  65)		{
HXLINE(  65)			int _g = 0;
HXDLIN(  65)			int _g1 = this->optionsArray->length;
HXDLIN(  65)			while((_g < _g1)){
HXLINE(  65)				_g = (_g + 1);
HXDLIN(  65)				int i = (_g - 1);
HXLINE(  67)				 ::objects::Alphabet optionText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(290) ),( (Float)(260) ),this->optionsArray->__get(i).StaticCast<  ::options::Option >()->name,false);
HXLINE(  68)				optionText->isMenuItem = true;
HXLINE(  71)				optionText->targetY = i;
HXLINE(  72)				this->grpOptions->add(optionText).StaticCast<  ::objects::Alphabet >();
HXLINE(  74)				if ((this->optionsArray->__get(i).StaticCast<  ::options::Option >()->get_type() == HX_("bool",2a,84,1b,41))) {
HXLINE(  75)					Float checkbox = (optionText->x - ( (Float)(105) ));
HXDLIN(  75)					Float optionText1 = optionText->y;
HXDLIN(  75)					 ::objects::CheckboxThingie checkbox1 =  ::objects::CheckboxThingie_obj::__alloc( HX_CTX ,checkbox,optionText1,::hx::IsEq( this->optionsArray->__get(i).StaticCast<  ::options::Option >()->getValue(),true ));
HXLINE(  76)					checkbox1->sprTracker = optionText;
HXLINE(  77)					checkbox1->ID = i;
HXLINE(  78)					this->checkboxGroup->add(checkbox1).StaticCast<  ::objects::CheckboxThingie >();
            				}
            				else {
HXLINE(  80)					optionText->set_x((optionText->x - ( (Float)(80) )));
HXLINE(  81)					optionText->startPosition->set_x((optionText->startPosition->x - ( (Float)(80) )));
HXLINE(  83)					::String valueText = (HX_("",00,00,00,00) + ::Std_obj::string(this->optionsArray->__get(i).StaticCast<  ::options::Option >()->getValue()));
HXDLIN(  83)					 ::objects::AttachedText valueText1 =  ::objects::AttachedText_obj::__alloc( HX_CTX ,valueText,(optionText->get_width() + 60),null(),null(),null());
HXLINE(  84)					valueText1->sprTracker = optionText;
HXLINE(  85)					valueText1->copyAlpha = true;
HXLINE(  86)					valueText1->ID = i;
HXLINE(  87)					this->grpTexts->add(valueText1).StaticCast<  ::objects::AttachedText >();
HXLINE(  88)					this->optionsArray->__get(i).StaticCast<  ::options::Option >()->child = valueText1;
            				}
HXLINE(  91)				this->updateTextFrom(this->optionsArray->__get(i).StaticCast<  ::options::Option >());
            			}
            		}
HXLINE(  94)		this->changeSelection(null());
HXLINE(  95)		this->reloadCheckboxes();
            	}

Dynamic BaseOptionsMenu_obj::__CreateEmpty() { return new BaseOptionsMenu_obj; }

void *BaseOptionsMenu_obj::_hx_vtable = 0;

Dynamic BaseOptionsMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseOptionsMenu_obj > _hx_result = new BaseOptionsMenu_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseOptionsMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x3c0818b8) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
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

void BaseOptionsMenu_obj::addOption( ::options::Option option){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_98_addOption)
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		if (::hx::IsNotNull( this->optionsArray )) {
HXLINE(  99)			_hx_tmp = (this->optionsArray->length < 1);
            		}
            		else {
HXLINE(  99)			_hx_tmp = true;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE(  99)			this->optionsArray = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 100)		this->optionsArray->push(option);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,addOption,(void))

void BaseOptionsMenu_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_107_update)
HXLINE( 108)		if (::backend::Controls_obj::instance->get_UI_UP_P()) {
HXLINE( 110)			this->changeSelection(-1);
            		}
HXLINE( 112)		if (::backend::Controls_obj::instance->get_UI_DOWN_P()) {
HXLINE( 114)			this->changeSelection(1);
            		}
HXLINE( 117)		if (::backend::Controls_obj::instance->get_BACK()) {
HXLINE( 118)			this->close();
HXLINE( 119)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 119)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 122)		if ((this->nextAccept <= 0)) {
HXLINE( 124)			bool usesCheckbox = true;
HXLINE( 125)			if ((this->curOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 127)				usesCheckbox = false;
            			}
HXLINE( 130)			if (usesCheckbox) {
HXLINE( 132)				if (::backend::Controls_obj::instance->get_ACCEPT()) {
HXLINE( 134)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 134)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 135)					 ::options::Option _hx_tmp1 = this->curOption;
HXDLIN( 135)					 ::Dynamic _hx_tmp2;
HXDLIN( 135)					if (::hx::IsEq( this->curOption->getValue(),true )) {
HXLINE( 135)						_hx_tmp2 = false;
            					}
            					else {
HXLINE( 135)						_hx_tmp2 = true;
            					}
HXDLIN( 135)					_hx_tmp1->setValue(_hx_tmp2);
HXLINE( 136)					this->curOption->change();
HXLINE( 137)					this->reloadCheckboxes();
            				}
            			}
            			else {
HXLINE( 140)				bool _hx_tmp;
HXDLIN( 140)				if (!(::backend::Controls_obj::instance->get_UI_LEFT())) {
HXLINE( 140)					_hx_tmp = ::backend::Controls_obj::instance->get_UI_RIGHT();
            				}
            				else {
HXLINE( 140)					_hx_tmp = true;
            				}
HXDLIN( 140)				if (_hx_tmp) {
HXLINE( 141)					bool pressed;
HXDLIN( 141)					if (!(::backend::Controls_obj::instance->get_UI_LEFT_P())) {
HXLINE( 141)						pressed = ::backend::Controls_obj::instance->get_UI_RIGHT_P();
            					}
            					else {
HXLINE( 141)						pressed = true;
            					}
HXLINE( 142)					bool _hx_tmp;
HXDLIN( 142)					if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 142)						_hx_tmp = pressed;
            					}
            					else {
HXLINE( 142)						_hx_tmp = true;
            					}
HXDLIN( 142)					if (_hx_tmp) {
HXLINE( 143)						if (pressed) {
HXLINE( 144)							 ::Dynamic add = null();
HXLINE( 145)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 146)								if (::backend::Controls_obj::instance->get_UI_LEFT()) {
HXLINE( 146)									add = -(this->curOption->changeValue);
            								}
            								else {
HXLINE( 146)									add = this->curOption->changeValue;
            								}
            							}
HXLINE( 149)							::String _hx_switch_0 = this->curOption->get_type();
            							if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 152)								this->holdValue = ( (Float)((this->curOption->getValue() + add)) );
HXLINE( 153)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 153)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 154)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 154)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 156)								::String _hx_switch_1 = this->curOption->get_type();
            								if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ){
HXLINE( 159)									this->holdValue = ( (Float)(::Math_obj::round(this->holdValue)) );
HXLINE( 160)									this->curOption->setValue(this->holdValue);
HXLINE( 158)									goto _hx_goto_4;
            								}
            								if (  (_hx_switch_1==HX_("float",9c,c5,96,02)) ||  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 163)									this->holdValue = ::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals);
HXLINE( 164)									this->curOption->setValue(this->holdValue);
HXLINE( 162)									goto _hx_goto_4;
            								}
            								_hx_goto_4:;
HXLINE( 151)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 168)								int num = this->curOption->curOption;
HXLINE( 169)								if (::backend::Controls_obj::instance->get_UI_LEFT_P()) {
HXLINE( 169)									num = (num - 1);
            								}
            								else {
HXLINE( 170)									num = (num + 1);
            								}
HXLINE( 172)								if ((num < 0)) {
HXLINE( 173)									num = (this->curOption->options->length - 1);
            								}
            								else {
HXLINE( 174)									if ((num >= this->curOption->options->length)) {
HXLINE( 175)										num = 0;
            									}
            								}
HXLINE( 178)								this->curOption->curOption = num;
HXLINE( 179)								this->curOption->setValue(this->curOption->options->__get(num));
HXLINE( 167)								goto _hx_goto_3;
            							}
            							_hx_goto_3:;
HXLINE( 182)							this->updateTextFrom(this->curOption);
HXLINE( 183)							this->curOption->change();
HXLINE( 184)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 184)							_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            						else {
HXLINE( 185)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 186)								 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 186)								Float _hx_tmp1 = _hx_tmp->holdValue;
HXDLIN( 186)								Float _hx_tmp2 = (this->curOption->scrollSpeed * elapsed);
HXDLIN( 186)								int _hx_tmp3;
HXDLIN( 186)								if (::backend::Controls_obj::instance->get_UI_LEFT()) {
HXLINE( 186)									_hx_tmp3 = -1;
            								}
            								else {
HXLINE( 186)									_hx_tmp3 = 1;
            								}
HXDLIN( 186)								_hx_tmp->holdValue = (_hx_tmp1 + (_hx_tmp2 * ( (Float)(_hx_tmp3) )));
HXLINE( 187)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 187)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 188)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 188)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 190)								::String _hx_switch_2 = this->curOption->get_type();
            								if (  (_hx_switch_2==HX_("int",ef,0c,50,00)) ){
HXLINE( 193)									this->curOption->setValue(::Math_obj::round(this->holdValue));
HXDLIN( 193)									goto _hx_goto_5;
            								}
            								if (  (_hx_switch_2==HX_("float",9c,c5,96,02)) ||  (_hx_switch_2==HX_("percent",c5,aa,da,78)) ){
HXLINE( 196)									 ::options::Option _hx_tmp = this->curOption;
HXDLIN( 196)									_hx_tmp->setValue(::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals));
HXDLIN( 196)									goto _hx_goto_5;
            								}
            								_hx_goto_5:;
HXLINE( 198)								this->updateTextFrom(this->curOption);
HXLINE( 199)								this->curOption->change();
            							}
            						}
            					}
HXLINE( 203)					if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 204)						 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            				else {
HXLINE( 206)					bool _hx_tmp;
HXDLIN( 206)					if (!(::backend::Controls_obj::instance->get_UI_LEFT_R())) {
HXLINE( 206)						_hx_tmp = ::backend::Controls_obj::instance->get_UI_RIGHT_R();
            					}
            					else {
HXLINE( 206)						_hx_tmp = true;
            					}
HXDLIN( 206)					if (_hx_tmp) {
HXLINE( 207)						this->clearHold();
            					}
            				}
            			}
HXLINE( 211)			if (::backend::Controls_obj::instance->get_RESET()) {
HXLINE( 213)				 ::options::Option leOption = this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >();
HXLINE( 214)				leOption->setValue(leOption->defaultValue);
HXLINE( 215)				if ((leOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 217)					if ((leOption->get_type() == HX_("string",d1,28,30,11))) {
HXLINE( 217)						::Array< ::String > leOption1 = leOption->options;
HXDLIN( 217)						leOption->curOption = leOption1->indexOf(leOption->getValue(),null());
            					}
HXLINE( 218)					this->updateTextFrom(leOption);
            				}
HXLINE( 220)				leOption->change();
HXLINE( 221)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 221)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 222)				this->reloadCheckboxes();
            			}
            		}
HXLINE( 226)		if ((this->nextAccept > 0)) {
HXLINE( 227)			 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 227)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 229)		this->super::update(elapsed);
            	}


void BaseOptionsMenu_obj::updateTextFrom( ::options::Option option){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_232_updateTextFrom)
HXLINE( 233)		::String text = option->displayFormat;
HXLINE( 234)		 ::Dynamic val = option->getValue();
HXLINE( 235)		if ((option->get_type() == HX_("percent",c5,aa,da,78))) {
HXLINE( 235)			val = (val * 100);
            		}
HXLINE( 236)		 ::Dynamic def = option->defaultValue;
HXLINE( 237)		option->set_text(::StringTools_obj::replace(::StringTools_obj::replace(text,HX_("%v",b1,20,00,00),( (::String)(val) )),HX_("%d",9f,20,00,00),( (::String)(def) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,updateTextFrom,(void))

void BaseOptionsMenu_obj::clearHold(){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_241_clearHold)
HXLINE( 242)		if ((this->holdTime > ((Float)0.5))) {
HXLINE( 243)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 243)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 245)		this->holdTime = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseOptionsMenu_obj,clearHold,(void))

void BaseOptionsMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_249_changeSelection)
HXLINE( 250)		 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 250)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 251)		if ((this->curSelected < 0)) {
HXLINE( 252)			this->curSelected = (this->optionsArray->length - 1);
            		}
HXLINE( 253)		if ((this->curSelected >= this->optionsArray->length)) {
HXLINE( 254)			this->curSelected = 0;
            		}
HXLINE( 256)		this->descText->set_text(this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >()->description);
HXLINE( 257)		{
HXLINE( 257)			 ::flixel::text::FlxText _this = this->descText;
HXDLIN( 257)			int axes = 16;
HXDLIN( 257)			bool _hx_tmp1;
HXDLIN( 257)			if ((axes != 1)) {
HXLINE( 257)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE( 257)				_hx_tmp1 = true;
            			}
HXDLIN( 257)			if (_hx_tmp1) {
HXLINE( 257)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 257)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 257)			bool _hx_tmp2;
HXDLIN( 257)			if ((axes != 16)) {
HXLINE( 257)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE( 257)				_hx_tmp2 = true;
            			}
HXDLIN( 257)			if (_hx_tmp2) {
HXLINE( 257)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 257)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 258)		 ::flixel::text::FlxText fh = this->descText;
HXDLIN( 258)		fh->set_y((fh->y + 270));
HXLINE( 260)		int bullShit = 0;
HXLINE( 262)		{
HXLINE( 262)			int _g = 0;
HXDLIN( 262)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 262)			while((_g < _g1->length)){
HXLINE( 262)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 262)				_g = (_g + 1);
HXLINE( 263)				item->targetY = (bullShit - this->curSelected);
HXLINE( 264)				bullShit = (bullShit + 1);
HXLINE( 266)				item->set_alpha(((Float)0.6));
HXLINE( 267)				if ((item->targetY == 0)) {
HXLINE( 268)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 271)		{
HXLINE( 271)			 ::Dynamic filter = null();
HXDLIN( 271)			 ::flixel::group::FlxTypedGroupIterator text =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpTexts->members,filter);
HXDLIN( 271)			while(text->hasNext()){
HXLINE( 271)				 ::objects::AttachedText text1 = text->next().StaticCast<  ::objects::AttachedText >();
HXLINE( 272)				text1->set_alpha(((Float)0.6));
HXLINE( 273)				if ((text1->ID == this->curSelected)) {
HXLINE( 274)					text1->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 278)		this->descBox->setPosition((this->descText->x - ( (Float)(10) )),(this->descText->y - ( (Float)(10) )));
HXLINE( 279)		 ::flixel::FlxSprite _hx_tmp3 = this->descBox;
HXDLIN( 279)		int _hx_tmp4 = ::Std_obj::_hx_int((this->descText->get_width() + 20));
HXDLIN( 279)		_hx_tmp3->setGraphicSize(_hx_tmp4,::Std_obj::_hx_int((this->descText->get_height() + 25)));
HXLINE( 280)		this->descBox->updateHitbox();
HXLINE( 282)		this->curOption = this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >();
HXLINE( 283)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp5 = ::flixel::FlxG_obj::sound;
HXDLIN( 283)		_hx_tmp5->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,changeSelection,(void))

void BaseOptionsMenu_obj::reloadCheckboxes(){
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_287_reloadCheckboxes)
HXDLIN( 287)		 ::Dynamic filter = null();
HXDLIN( 287)		 ::flixel::group::FlxTypedGroupIterator checkbox =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->checkboxGroup->members,filter);
HXDLIN( 287)		while(checkbox->hasNext()){
HXDLIN( 287)			 ::objects::CheckboxThingie checkbox1 = checkbox->next().StaticCast<  ::objects::CheckboxThingie >();
HXLINE( 288)			checkbox1->set_daValue(::hx::IsEq( this->optionsArray->__get(checkbox1->ID).StaticCast<  ::options::Option >()->getValue(),true ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseOptionsMenu_obj,reloadCheckboxes,(void))


::hx::ObjectPtr< BaseOptionsMenu_obj > BaseOptionsMenu_obj::__new() {
	::hx::ObjectPtr< BaseOptionsMenu_obj > __this = new BaseOptionsMenu_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BaseOptionsMenu_obj > BaseOptionsMenu_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BaseOptionsMenu_obj *__this = (BaseOptionsMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseOptionsMenu_obj), true, "options.BaseOptionsMenu"));
	*(void **)__this = BaseOptionsMenu_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BaseOptionsMenu_obj::BaseOptionsMenu_obj()
{
}

void BaseOptionsMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseOptionsMenu);
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(optionsArray,"optionsArray");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(descBox,"descBox");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(rpcTitle,"rpcTitle");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseOptionsMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(optionsArray,"optionsArray");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(descBox,"descBox");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(rpcTitle,"rpcTitle");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseOptionsMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { return ::hx::Val( descBox ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		if (HX_FIELD_EQ(inName,"rpcTitle") ) { return ::hx::Val( rpcTitle ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		if (HX_FIELD_EQ(inName,"addOption") ) { return ::hx::Val( addOption_dyn() ); }
		if (HX_FIELD_EQ(inName,"holdValue") ) { return ::hx::Val( holdValue ); }
		if (HX_FIELD_EQ(inName,"clearHold") ) { return ::hx::Val( clearHold_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { return ::hx::Val( optionsArray ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { return ::hx::Val( checkboxGroup ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateTextFrom") ) { return ::hx::Val( updateTextFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadCheckboxes") ) { return ::hx::Val( reloadCheckboxes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseOptionsMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { descBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rpcTitle") ) { rpcTitle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast<  ::options::Option >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdValue") ) { holdValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { optionsArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { checkboxGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseOptionsMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("optionsArray",5b,b5,f1,e8));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxGroup",fc,3d,bc,23));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("descBox",3a,20,25,19));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("rpcTitle",73,04,98,e2));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("holdValue",b2,41,96,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseOptionsMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::options::Option */ ,(int)offsetof(BaseOptionsMenu_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsInt,(int)offsetof(BaseOptionsMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BaseOptionsMenu_obj,optionsArray),HX_("optionsArray",5b,b5,f1,e8)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,checkboxGroup),HX_("checkboxGroup",fc,3d,bc,23)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(BaseOptionsMenu_obj,descBox),HX_("descBox",3a,20,25,19)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(BaseOptionsMenu_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsString,(int)offsetof(BaseOptionsMenu_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsString,(int)offsetof(BaseOptionsMenu_obj,rpcTitle),HX_("rpcTitle",73,04,98,e2)},
	{::hx::fsInt,(int)offsetof(BaseOptionsMenu_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(BaseOptionsMenu_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsFloat,(int)offsetof(BaseOptionsMenu_obj,holdValue),HX_("holdValue",b2,41,96,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseOptionsMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseOptionsMenu_obj_sMemberFields[] = {
	HX_("curOption",15,ed,07,9c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("optionsArray",5b,b5,f1,e8),
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxGroup",fc,3d,bc,23),
	HX_("grpTexts",01,f1,99,f0),
	HX_("descBox",3a,20,25,19),
	HX_("descText",9e,53,35,f3),
	HX_("title",98,15,3b,10),
	HX_("rpcTitle",73,04,98,e2),
	HX_("addOption",76,08,9f,e3),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("holdValue",b2,41,96,ca),
	HX_("update",09,86,05,87),
	HX_("updateTextFrom",e0,eb,e7,7b),
	HX_("clearHold",6c,b1,d3,b8),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadCheckboxes",2a,e2,2a,45),
	::String(null()) };

::hx::Class BaseOptionsMenu_obj::__mClass;

void BaseOptionsMenu_obj::__register()
{
	BaseOptionsMenu_obj _hx_dummy;
	BaseOptionsMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.BaseOptionsMenu",5c,5e,30,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseOptionsMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseOptionsMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseOptionsMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseOptionsMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
