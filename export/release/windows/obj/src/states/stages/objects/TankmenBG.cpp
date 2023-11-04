#include <hxcpp.h>

#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_states_stages_objects_TankmenBG
#include <states/stages/objects/TankmenBG.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca82a9d465dd2ad1_14_new,"states.stages.objects.TankmenBG","new",0xe9e25ddc,"states.stages.objects.TankmenBG.new","states/stages/objects/TankmenBG.hx",14,0x1215d0b5)
HX_LOCAL_STACK_FRAME(_hx_pos_ca82a9d465dd2ad1_33_resetShit,"states.stages.objects.TankmenBG","resetShit",0x911aabab,"states.stages.objects.TankmenBG.resetShit","states/stages/objects/TankmenBG.hx",33,0x1215d0b5)
HX_LOCAL_STACK_FRAME(_hx_pos_ca82a9d465dd2ad1_43_update,"states.stages.objects.TankmenBG","update",0x0f438e0d,"states.stages.objects.TankmenBG.update","states/stages/objects/TankmenBG.hx",43,0x1215d0b5)
HX_LOCAL_STACK_FRAME(_hx_pos_ca82a9d465dd2ad1_7_boot,"states.stages.objects.TankmenBG","boot",0xb448c336,"states.stages.objects.TankmenBG.boot","states/stages/objects/TankmenBG.hx",7,0x1215d0b5)
namespace states{
namespace stages{
namespace objects{

void TankmenBG_obj::__construct(Float x,Float y,bool facingRight){
            	HX_STACKFRAME(&_hx_pos_ca82a9d465dd2ad1_14_new)
HXLINE(  15)		this->tankSpeed = ((Float)0.7);
HXLINE(  16)		this->goingRight = false;
HXLINE(  17)		this->strumTime = ( (Float)(0) );
HXLINE(  18)		this->goingRight = facingRight;
HXLINE(  19)		super::__construct(x,y,null());
HXLINE(  21)		::String library = null();
HXDLIN(  21)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("tankmanKilled1",04,7a,c5,c3),null(),true);
HXDLIN(  21)		bool xmlExists = false;
HXDLIN(  21)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("tankmanKilled1",04,7a,c5,c3)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  21)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  21)			xmlExists = true;
            		}
HXDLIN(  21)		 ::Dynamic _hx_tmp;
HXDLIN(  21)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  21)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE(  21)			_hx_tmp = ::backend::Paths_obj::image(HX_("tankmanKilled1",04,7a,c5,c3),library,true);
            		}
HXDLIN(  21)		::String _hx_tmp1;
HXDLIN(  21)		if (xmlExists) {
HXLINE(  21)			_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE(  21)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("tankmanKilled1",04,7a,c5,c3)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN(  21)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  22)		this->animation->addByPrefix(HX_("run",4b,e7,56,00),HX_("tankman running",cf,9f,c7,29),24,true,null(),null());
HXLINE(  23)		 ::flixel::animation::FlxAnimationController _hx_tmp2 = this->animation;
HXDLIN(  23)		_hx_tmp2->addByPrefix(HX_("shot",fa,d4,52,4c),(HX_("John Shot ",11,13,ab,01) + ::flixel::FlxG_obj::random->_hx_int(1,2,null())),24,false,null(),null());
HXLINE(  24)		this->animation->play(HX_("run",4b,e7,56,00),null(),null(),null());
HXLINE(  25)		 ::flixel::animation::FlxAnimation _hx_tmp3 = this->animation->_curAnim;
HXDLIN(  25)		_hx_tmp3->set_curFrame(::flixel::FlxG_obj::random->_hx_int(0,(this->animation->_curAnim->frames->length - 1),null()));
HXLINE(  26)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  28)		{
HXLINE(  28)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  28)			this1->set_x(((Float)0.8));
HXDLIN(  28)			this1->set_y(((Float)0.8));
            		}
HXLINE(  29)		this->updateHitbox();
            	}

Dynamic TankmenBG_obj::__CreateEmpty() { return new TankmenBG_obj; }

void *TankmenBG_obj::_hx_vtable = 0;

Dynamic TankmenBG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TankmenBG_obj > _hx_result = new TankmenBG_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TankmenBG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x2a940a58) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2a940a58;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void TankmenBG_obj::resetShit(Float x,Float y,bool goingRight){
            	HX_STACKFRAME(&_hx_pos_ca82a9d465dd2ad1_33_resetShit)
HXLINE(  34)		this->set_x(x);
HXLINE(  35)		this->set_y(y);
HXLINE(  36)		this->goingRight = goingRight;
HXLINE(  37)		this->endingOffset = ::flixel::FlxG_obj::random->_hx_float(50,200,null());
HXLINE(  38)		this->tankSpeed = ::flixel::FlxG_obj::random->_hx_float(((Float)0.6),1,null());
HXLINE(  39)		this->set_flipX(goingRight);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TankmenBG_obj,resetShit,(void))

void TankmenBG_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ca82a9d465dd2ad1_43_update)
HXLINE(  44)		this->super::update(elapsed);
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if ((this->x > (((Float)-0.5) * ( (Float)(::flixel::FlxG_obj::width) )))) {
HXLINE(  46)			_hx_tmp = (this->x < (((Float)1.2) * ( (Float)(::flixel::FlxG_obj::width) )));
            		}
            		else {
HXLINE(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		this->set_visible(_hx_tmp);
HXLINE(  48)		if ((this->animation->_curAnim->name == HX_("run",4b,e7,56,00))) {
HXLINE(  50)			Float speed = ((::backend::Conductor_obj::songPosition - this->strumTime) * this->tankSpeed);
HXLINE(  51)			if (this->goingRight) {
HXLINE(  52)				this->set_x((((((Float)0.02) * ( (Float)(::flixel::FlxG_obj::width) )) - this->endingOffset) + speed));
            			}
            			else {
HXLINE(  54)				this->set_x((((((Float)0.74) * ( (Float)(::flixel::FlxG_obj::width) )) + this->endingOffset) - speed));
            			}
            		}
            		else {
HXLINE(  56)			if (this->animation->_curAnim->finished) {
HXLINE(  58)				this->kill();
            			}
            		}
HXLINE(  61)		if ((::backend::Conductor_obj::songPosition > this->strumTime)) {
HXLINE(  63)			this->animation->play(HX_("shot",fa,d4,52,4c),null(),null(),null());
HXLINE(  64)			if (this->goingRight) {
HXLINE(  66)				this->offset->set_x(( (Float)(300) ));
HXLINE(  67)				this->offset->set_y(( (Float)(200) ));
            			}
            		}
            	}


::cpp::VirtualArray TankmenBG_obj::animationNotes;


::hx::ObjectPtr< TankmenBG_obj > TankmenBG_obj::__new(Float x,Float y,bool facingRight) {
	::hx::ObjectPtr< TankmenBG_obj > __this = new TankmenBG_obj();
	__this->__construct(x,y,facingRight);
	return __this;
}

::hx::ObjectPtr< TankmenBG_obj > TankmenBG_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,bool facingRight) {
	TankmenBG_obj *__this = (TankmenBG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TankmenBG_obj), true, "states.stages.objects.TankmenBG"));
	*(void **)__this = TankmenBG_obj::_hx_vtable;
	__this->__construct(x,y,facingRight);
	return __this;
}

TankmenBG_obj::TankmenBG_obj()
{
}

::hx::Val TankmenBG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tankSpeed") ) { return ::hx::Val( tankSpeed ); }
		if (HX_FIELD_EQ(inName,"strumTime") ) { return ::hx::Val( strumTime ); }
		if (HX_FIELD_EQ(inName,"resetShit") ) { return ::hx::Val( resetShit_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goingRight") ) { return ::hx::Val( goingRight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endingOffset") ) { return ::hx::Val( endingOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TankmenBG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"animationNotes") ) { outValue = ( animationNotes ); return true; }
	}
	return false;
}

::hx::Val TankmenBG_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"tankSpeed") ) { tankSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strumTime") ) { strumTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goingRight") ) { goingRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endingOffset") ) { endingOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TankmenBG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"animationNotes") ) { animationNotes=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void TankmenBG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tankSpeed",3d,7c,80,fc));
	outFields->push(HX_("endingOffset",da,16,d7,d5));
	outFields->push(HX_("goingRight",c2,3d,e0,d3));
	outFields->push(HX_("strumTime",f6,2d,21,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TankmenBG_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TankmenBG_obj,tankSpeed),HX_("tankSpeed",3d,7c,80,fc)},
	{::hx::fsFloat,(int)offsetof(TankmenBG_obj,endingOffset),HX_("endingOffset",da,16,d7,d5)},
	{::hx::fsBool,(int)offsetof(TankmenBG_obj,goingRight),HX_("goingRight",c2,3d,e0,d3)},
	{::hx::fsFloat,(int)offsetof(TankmenBG_obj,strumTime),HX_("strumTime",f6,2d,21,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TankmenBG_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &TankmenBG_obj::animationNotes,HX_("animationNotes",9d,6e,ee,af)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TankmenBG_obj_sMemberFields[] = {
	HX_("tankSpeed",3d,7c,80,fc),
	HX_("endingOffset",da,16,d7,d5),
	HX_("goingRight",c2,3d,e0,d3),
	HX_("strumTime",f6,2d,21,f4),
	HX_("resetShit",2f,d9,3e,92),
	HX_("update",09,86,05,87),
	::String(null()) };

static void TankmenBG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TankmenBG_obj::animationNotes,"animationNotes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TankmenBG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TankmenBG_obj::animationNotes,"animationNotes");
};

#endif

::hx::Class TankmenBG_obj::__mClass;

static ::String TankmenBG_obj_sStaticFields[] = {
	HX_("animationNotes",9d,6e,ee,af),
	::String(null())
};

void TankmenBG_obj::__register()
{
	TankmenBG_obj _hx_dummy;
	TankmenBG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.objects.TankmenBG",ea,7f,37,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TankmenBG_obj::__GetStatic;
	__mClass->mSetStaticField = &TankmenBG_obj::__SetStatic;
	__mClass->mMarkFunc = TankmenBG_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TankmenBG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TankmenBG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TankmenBG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TankmenBG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TankmenBG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TankmenBG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TankmenBG_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ca82a9d465dd2ad1_7_boot)
HXDLIN(   7)		animationNotes = ::cpp::VirtualArray_obj::__new(0);
            	}
}

} // end namespace states
} // end namespace stages
} // end namespace objects
