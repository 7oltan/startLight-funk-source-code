#include <hxcpp.h>

#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f62a08375576215_6_new,"objects.BGSprite","new",0xa37a9976,"objects.BGSprite.new","objects/BGSprite.hx",6,0xcb173459)
HX_LOCAL_STACK_FRAME(_hx_pos_1f62a08375576215_30_dance,"objects.BGSprite","dance",0xa5bf3dc9,"objects.BGSprite.dance","objects/BGSprite.hx",30,0xcb173459)
namespace objects{

void BGSprite_obj::__construct(::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		 ::Dynamic scrollX = __o_scrollX;
            		if (::hx::IsNull(__o_scrollX)) scrollX = 1;
            		 ::Dynamic scrollY = __o_scrollY;
            		if (::hx::IsNull(__o_scrollY)) scrollY = 1;
            		 ::Dynamic loop = __o_loop;
            		if (::hx::IsNull(__o_loop)) loop = false;
            	HX_STACKFRAME(&_hx_pos_1f62a08375576215_6_new)
HXLINE(   7)		super::__construct(x,y,null());
HXLINE(   9)		if (::hx::IsNotNull( animArray )) {
HXLINE(  10)			::String library = null();
HXDLIN(  10)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(image,null(),true);
HXDLIN(  10)			bool xmlExists = false;
HXDLIN(  10)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  10)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  10)				xmlExists = true;
            			}
HXDLIN(  10)			 ::Dynamic _hx_tmp;
HXDLIN(  10)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  10)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  10)				_hx_tmp = ::backend::Paths_obj::image(image,library,true);
            			}
HXDLIN(  10)			::String _hx_tmp1;
HXDLIN(  10)			if (xmlExists) {
HXLINE(  10)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE(  10)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN(  10)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  11)			{
HXLINE(  11)				int _g = 0;
HXDLIN(  11)				int _g1 = animArray->length;
HXDLIN(  11)				while((_g < _g1)){
HXLINE(  11)					_g = (_g + 1);
HXDLIN(  11)					int i = (_g - 1);
HXLINE(  12)					::String anim = animArray->__get(i);
HXLINE(  13)					this->animation->addByPrefix(anim,anim,24,loop,null(),null());
HXLINE(  14)					if (::hx::IsNull( this->idleAnim )) {
HXLINE(  15)						this->idleAnim = anim;
HXLINE(  16)						this->animation->play(anim,null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE(  20)			if (::hx::IsNotNull( image )) {
HXLINE(  21)				this->loadGraphic(::backend::Paths_obj::image(image,null(),null()),null(),null(),null(),null(),null());
            			}
HXLINE(  23)			this->set_active(false);
            		}
HXLINE(  25)		{
HXLINE(  25)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  25)			this1->set_x(( (Float)(scrollX) ));
HXDLIN(  25)			this1->set_y(( (Float)(scrollY) ));
            		}
HXLINE(  26)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            	}

Dynamic BGSprite_obj::__CreateEmpty() { return new BGSprite_obj; }

void *BGSprite_obj::_hx_vtable = 0;

Dynamic BGSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BGSprite_obj > _hx_result = new BGSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool BGSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x199d8d7e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x199d8d7e;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void BGSprite_obj::dance( ::Dynamic __o_forceplay){
            		 ::Dynamic forceplay = __o_forceplay;
            		if (::hx::IsNull(__o_forceplay)) forceplay = false;
            	HX_STACKFRAME(&_hx_pos_1f62a08375576215_30_dance)
HXDLIN(  30)		if (::hx::IsNotNull( this->idleAnim )) {
HXLINE(  31)			this->animation->play(this->idleAnim,forceplay,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BGSprite_obj,dance,(void))


::hx::ObjectPtr< BGSprite_obj > BGSprite_obj::__new(::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop) {
	::hx::ObjectPtr< BGSprite_obj > __this = new BGSprite_obj();
	__this->__construct(image,__o_x,__o_y,__o_scrollX,__o_scrollY,animArray,__o_loop);
	return __this;
}

::hx::ObjectPtr< BGSprite_obj > BGSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop) {
	BGSprite_obj *__this = (BGSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BGSprite_obj), true, "objects.BGSprite"));
	*(void **)__this = BGSprite_obj::_hx_vtable;
	__this->__construct(image,__o_x,__o_y,__o_scrollX,__o_scrollY,animArray,__o_loop);
	return __this;
}

BGSprite_obj::BGSprite_obj()
{
}

void BGSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BGSprite);
	HX_MARK_MEMBER_NAME(idleAnim,"idleAnim");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BGSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(idleAnim,"idleAnim");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BGSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { return ::hx::Val( idleAnim ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BGSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { idleAnim=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BGSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("idleAnim",45,73,61,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BGSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(BGSprite_obj,idleAnim),HX_("idleAnim",45,73,61,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BGSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String BGSprite_obj_sMemberFields[] = {
	HX_("idleAnim",45,73,61,35),
	HX_("dance",33,83,83,d4),
	::String(null()) };

::hx::Class BGSprite_obj::__mClass;

void BGSprite_obj::__register()
{
	BGSprite_obj _hx_dummy;
	BGSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.BGSprite",84,66,2f,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BGSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BGSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BGSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BGSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
