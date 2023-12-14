#include <hxcpp.h>

#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_objects_AlphaCharacter
#include <objects/AlphaCharacter.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_TypedAlphabet
#include <objects/TypedAlphabet.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_dec4dbf5a1c4a038_3_new,"objects.TypedAlphabet","new",0x2d2e8075,"objects.TypedAlphabet.new","objects/TypedAlphabet.hx",3,0xbc8dd69c)
HX_LOCAL_STACK_FRAME(_hx_pos_dec4dbf5a1c4a038_19_set_text,"objects.TypedAlphabet","set_text",0xacf7c575,"objects.TypedAlphabet.set_text","objects/TypedAlphabet.hx",19,0xbc8dd69c)
HX_LOCAL_STACK_FRAME(_hx_pos_dec4dbf5a1c4a038_29_update,"objects.TypedAlphabet","update",0xc1da5114,"objects.TypedAlphabet.update","objects/TypedAlphabet.hx",29,0xbc8dd69c)
HX_LOCAL_STACK_FRAME(_hx_pos_dec4dbf5a1c4a038_59_showCharacterUpTo,"objects.TypedAlphabet","showCharacterUpTo",0xd21ef897,"objects.TypedAlphabet.showCharacterUpTo","objects/TypedAlphabet.hx",59,0xbc8dd69c)
HX_LOCAL_STACK_FRAME(_hx_pos_dec4dbf5a1c4a038_71_resetDialogue,"objects.TypedAlphabet","resetDialogue",0xd588965c,"objects.TypedAlphabet.resetDialogue","objects/TypedAlphabet.hx",71,0xbc8dd69c)
HX_LOCAL_STACK_FRAME(_hx_pos_dec4dbf5a1c4a038_82_finishText,"objects.TypedAlphabet","finishText",0xbb330b2b,"objects.TypedAlphabet.finishText","objects/TypedAlphabet.hx",82,0xbc8dd69c)
namespace objects{

void TypedAlphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic delay = __o_delay;
            		if (::hx::IsNull(__o_delay)) delay = ((Float)0.05);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            	HX_STACKFRAME(&_hx_pos_dec4dbf5a1c4a038_3_new)
HXLINE(  27)		this->_timeToUpdate = ((Float)0);
HXLINE(  26)		this->_curLetter = -1;
HXLINE(   9)		this->volume = ((Float)1);
HXLINE(   8)		this->sound = HX_("dialogue",18,2d,94,a7);
HXLINE(   7)		this->delay = ((Float)0.05);
HXLINE(   6)		this->finishedText = false;
HXLINE(   5)		this->onFinish = null();
HXLINE(  13)		super::__construct(x,y,text,bold);
HXLINE(  15)		this->delay = ( (Float)(delay) );
            	}

Dynamic TypedAlphabet_obj::__CreateEmpty() { return new TypedAlphabet_obj; }

void *TypedAlphabet_obj::_hx_vtable = 0;

Dynamic TypedAlphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypedAlphabet_obj > _hx_result = new TypedAlphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TypedAlphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x774670c9) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x774670c9;
		}
	} else {
		if (inClassId<=(int)0x7dab0655) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
		} else {
			return inClassId==(int)0x7fcdf037;
		}
	}
}

::String TypedAlphabet_obj::set_text(::String newText){
            	HX_STACKFRAME(&_hx_pos_dec4dbf5a1c4a038_19_set_text)
HXLINE(  20)		this->super::set_text(newText);
HXLINE(  22)		this->resetDialogue();
HXLINE(  23)		return newText;
            	}


void TypedAlphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_dec4dbf5a1c4a038_29_update)
HXLINE(  30)		if (!(this->finishedText)) {
HXLINE(  32)			bool playedSound = false;
HXLINE(  33)			 ::objects::TypedAlphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  33)			_hx_tmp->_timeToUpdate = (_hx_tmp->_timeToUpdate + elapsed);
HXLINE(  34)			while((this->_timeToUpdate >= this->delay)){
HXLINE(  36)				this->showCharacterUpTo((this->_curLetter + 1));
HXLINE(  37)				bool _hx_tmp;
HXDLIN(  37)				bool _hx_tmp1;
HXDLIN(  37)				if (!(playedSound)) {
HXLINE(  37)					_hx_tmp1 = (this->sound != HX_("",00,00,00,00));
            				}
            				else {
HXLINE(  37)					_hx_tmp1 = false;
            				}
HXDLIN(  37)				if (_hx_tmp1) {
HXLINE(  37)					if (!((this->delay > ((Float)0.025)))) {
HXLINE(  37)						_hx_tmp = (::hx::Mod(this->_curLetter,2) == 0);
            					}
            					else {
HXLINE(  37)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  37)					_hx_tmp = false;
            				}
HXDLIN(  37)				if (_hx_tmp) {
HXLINE(  39)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  39)					 ::openfl::media::Sound _hx_tmp1 = ::backend::Paths_obj::sound(this->sound,null());
HXDLIN(  39)					_hx_tmp->play(_hx_tmp1,this->volume,null(),null(),null(),null());
            				}
HXLINE(  41)				playedSound = true;
HXLINE(  43)				this->_curLetter++;
HXLINE(  44)				if ((this->_curLetter >= (this->letters->length - 1))) {
HXLINE(  46)					this->finishedText = true;
HXLINE(  47)					if (::hx::IsNotNull( this->onFinish )) {
HXLINE(  47)						this->onFinish();
            					}
HXLINE(  48)					this->_timeToUpdate = ( (Float)(0) );
HXLINE(  49)					goto _hx_goto_2;
            				}
HXLINE(  51)				this->_timeToUpdate = ( (Float)(0) );
            			}
            			_hx_goto_2:;
            		}
HXLINE(  55)		this->super::update(elapsed);
            	}


void TypedAlphabet_obj::showCharacterUpTo(int upTo){
            	HX_STACKFRAME(&_hx_pos_dec4dbf5a1c4a038_59_showCharacterUpTo)
HXLINE(  60)		int start = this->_curLetter;
HXLINE(  61)		if ((start < 0)) {
HXLINE(  61)			start = 0;
            		}
HXLINE(  63)		{
HXLINE(  63)			int _g = start;
HXDLIN(  63)			int _g1 = (upTo + 1);
HXDLIN(  63)			while((_g < _g1)){
HXLINE(  63)				_g = (_g + 1);
HXDLIN(  63)				int i = (_g - 1);
HXLINE(  65)				if (::hx::IsNotNull( this->letters->__get(i).StaticCast<  ::objects::AlphaCharacter >() )) {
HXLINE(  65)					this->letters->__get(i).StaticCast<  ::objects::AlphaCharacter >()->set_visible(true);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TypedAlphabet_obj,showCharacterUpTo,(void))

void TypedAlphabet_obj::resetDialogue(){
            	HX_STACKFRAME(&_hx_pos_dec4dbf5a1c4a038_71_resetDialogue)
HXLINE(  72)		this->_curLetter = -1;
HXLINE(  73)		this->finishedText = false;
HXLINE(  74)		this->_timeToUpdate = ( (Float)(0) );
HXLINE(  75)		{
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			::Array< ::Dynamic> _g1 = this->letters;
HXDLIN(  75)			while((_g < _g1->length)){
HXLINE(  75)				 ::objects::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::objects::AlphaCharacter >();
HXDLIN(  75)				_g = (_g + 1);
HXLINE(  77)				letter->set_visible(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TypedAlphabet_obj,resetDialogue,(void))

void TypedAlphabet_obj::finishText(){
            	HX_STACKFRAME(&_hx_pos_dec4dbf5a1c4a038_82_finishText)
HXLINE(  83)		if (this->finishedText) {
HXLINE(  83)			return;
            		}
HXLINE(  85)		this->showCharacterUpTo((this->letters->length - 1));
HXLINE(  86)		if ((this->sound != HX_("",00,00,00,00))) {
HXLINE(  86)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  86)			 ::openfl::media::Sound _hx_tmp1 = ::backend::Paths_obj::sound(this->sound,null());
HXDLIN(  86)			_hx_tmp->play(_hx_tmp1,this->volume,null(),null(),null(),null());
            		}
HXLINE(  87)		this->finishedText = true;
HXLINE(  89)		if (::hx::IsNotNull( this->onFinish )) {
HXLINE(  89)			this->onFinish();
            		}
HXLINE(  90)		this->_timeToUpdate = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TypedAlphabet_obj,finishText,(void))


::hx::ObjectPtr< TypedAlphabet_obj > TypedAlphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold) {
	::hx::ObjectPtr< TypedAlphabet_obj > __this = new TypedAlphabet_obj();
	__this->__construct(x,y,__o_text,__o_delay,__o_bold);
	return __this;
}

::hx::ObjectPtr< TypedAlphabet_obj > TypedAlphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold) {
	TypedAlphabet_obj *__this = (TypedAlphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypedAlphabet_obj), true, "objects.TypedAlphabet"));
	*(void **)__this = TypedAlphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_delay,__o_bold);
	return __this;
}

TypedAlphabet_obj::TypedAlphabet_obj()
{
}

void TypedAlphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TypedAlphabet);
	HX_MARK_MEMBER_NAME(onFinish,"onFinish");
	HX_MARK_MEMBER_NAME(finishedText,"finishedText");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(_curLetter,"_curLetter");
	HX_MARK_MEMBER_NAME(_timeToUpdate,"_timeToUpdate");
	 ::objects::Alphabet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TypedAlphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onFinish,"onFinish");
	HX_VISIT_MEMBER_NAME(finishedText,"finishedText");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(_curLetter,"_curLetter");
	HX_VISIT_MEMBER_NAME(_timeToUpdate,"_timeToUpdate");
	 ::objects::Alphabet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TypedAlphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { return ::hx::Val( onFinish ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curLetter") ) { return ::hx::Val( _curLetter ); }
		if (HX_FIELD_EQ(inName,"finishText") ) { return ::hx::Val( finishText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishedText") ) { return ::hx::Val( finishedText ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_timeToUpdate") ) { return ::hx::Val( _timeToUpdate ); }
		if (HX_FIELD_EQ(inName,"resetDialogue") ) { return ::hx::Val( resetDialogue_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"showCharacterUpTo") ) { return ::hx::Val( showCharacterUpTo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TypedAlphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { onFinish=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curLetter") ) { _curLetter=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishedText") ) { finishedText=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_timeToUpdate") ) { _timeToUpdate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TypedAlphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("finishedText",3f,2d,d5,f6));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("_curLetter",47,42,38,6f));
	outFields->push(HX_("_timeToUpdate",f0,9d,4f,29));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TypedAlphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TypedAlphabet_obj,onFinish),HX_("onFinish",d2,36,2c,66)},
	{::hx::fsBool,(int)offsetof(TypedAlphabet_obj,finishedText),HX_("finishedText",3f,2d,d5,f6)},
	{::hx::fsFloat,(int)offsetof(TypedAlphabet_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsString,(int)offsetof(TypedAlphabet_obj,sound),HX_("sound",cf,8c,cc,80)},
	{::hx::fsFloat,(int)offsetof(TypedAlphabet_obj,volume),HX_("volume",da,29,53,5f)},
	{::hx::fsInt,(int)offsetof(TypedAlphabet_obj,_curLetter),HX_("_curLetter",47,42,38,6f)},
	{::hx::fsFloat,(int)offsetof(TypedAlphabet_obj,_timeToUpdate),HX_("_timeToUpdate",f0,9d,4f,29)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TypedAlphabet_obj_sStaticStorageInfo = 0;
#endif

static ::String TypedAlphabet_obj_sMemberFields[] = {
	HX_("onFinish",d2,36,2c,66),
	HX_("finishedText",3f,2d,d5,f6),
	HX_("delay",83,d7,26,d7),
	HX_("sound",cf,8c,cc,80),
	HX_("volume",da,29,53,5f),
	HX_("set_text",aa,e1,11,7b),
	HX_("_curLetter",47,42,38,6f),
	HX_("_timeToUpdate",f0,9d,4f,29),
	HX_("update",09,86,05,87),
	HX_("showCharacterUpTo",c2,2d,4c,65),
	HX_("resetDialogue",07,1a,33,d8),
	HX_("finishText",a0,5e,34,d9),
	::String(null()) };

::hx::Class TypedAlphabet_obj::__mClass;

void TypedAlphabet_obj::__register()
{
	TypedAlphabet_obj _hx_dummy;
	TypedAlphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.TypedAlphabet",03,22,86,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TypedAlphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TypedAlphabet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypedAlphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypedAlphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects