#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_states_GalleryBar
#include <states/GalleryBar.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad5dfaa78ade375d_353_new,"states.GalleryBar","new",0x7ec51f9f,"states.GalleryBar.new","states/GalleryMenuState.hx",353,0xdfe23d11)
HX_LOCAL_STACK_FRAME(_hx_pos_ad5dfaa78ade375d_369_draw,"states.GalleryBar","draw",0x672433e5,"states.GalleryBar.draw","states/GalleryMenuState.hx",369,0xdfe23d11)
namespace states{

void GalleryBar_obj::__construct( ::Dynamic x, ::Dynamic y,Float barWidth,Float barHeight,int colorA,int colorB){
            	HX_STACKFRAME(&_hx_pos_ad5dfaa78ade375d_353_new)
HXLINE( 359)		this->percent = ((Float)0);
HXLINE( 355)		this->barHeight = ((Float)0);
HXLINE( 354)		this->barWidth = ((Float)0);
HXLINE( 361)		super::__construct(x,y,null());
HXLINE( 362)		this->barWidth = barWidth;
HXLINE( 363)		this->barHeight = barHeight;
HXLINE( 364)		this->colorA = colorA;
HXLINE( 365)		this->colorB = colorB;
HXLINE( 366)		int _hx_tmp = ::Std_obj::_hx_int(barWidth);
HXDLIN( 366)		this->makeGraphic(_hx_tmp,::Std_obj::_hx_int(barHeight),colorB,null(),null());
            	}

Dynamic GalleryBar_obj::__CreateEmpty() { return new GalleryBar_obj; }

void *GalleryBar_obj::_hx_vtable = 0;

Dynamic GalleryBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GalleryBar_obj > _hx_result = new GalleryBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool GalleryBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6c61ce43) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x6c61ce43;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void GalleryBar_obj::draw(){
            	HX_GC_STACKFRAME(&_hx_pos_ad5dfaa78ade375d_369_draw)
HXLINE( 370)		this->super::draw();
HXLINE( 371)		 ::flixel::FlxSprite barA =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->x,this->y,null());
HXDLIN( 371)		int barA1 = ::Std_obj::_hx_int((this->barWidth * this->percent));
HXDLIN( 371)		int barA2 = ::Std_obj::_hx_int(this->barHeight);
HXDLIN( 371)		 ::flixel::FlxSprite barA3 = barA->makeGraphic(barA1,barA2,this->colorA,null(),null());
HXLINE( 372)		barA3->set_alpha(this->alpha);
HXLINE( 373)		barA3->draw();
HXLINE( 375)		 ::flixel::FlxSprite UP =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->x,this->y,null());
HXDLIN( 375)		int UP1 = ::Std_obj::_hx_int(this->barWidth);
HXDLIN( 375)		 ::flixel::FlxSprite UP2 = UP->makeGraphic(UP1,::Std_obj::_hx_int((this->barHeight * ((Float)0.3))),-16777216,null(),null());
HXLINE( 376)		UP2->set_alpha(this->alpha);
HXLINE( 377)		UP2->draw();
HXLINE( 378)		Float DOWN = this->x;
HXDLIN( 378)		Float DOWN1 = (this->y + this->barHeight);
HXDLIN( 378)		 ::flixel::FlxSprite DOWN2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,DOWN,(DOWN1 - ( (Float)(::Std_obj::_hx_int((this->barHeight * ((Float)0.3)))) )),null());
HXDLIN( 378)		int DOWN3 = ::Std_obj::_hx_int(this->barWidth);
HXDLIN( 378)		 ::flixel::FlxSprite DOWN4 = DOWN2->makeGraphic(DOWN3,::Std_obj::_hx_int((this->barHeight * ((Float)0.3))),-16777216,null(),null());
HXLINE( 379)		DOWN4->set_alpha(this->alpha);
HXLINE( 380)		DOWN4->draw();
HXLINE( 381)		 ::flixel::FlxSprite UP3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->x,this->y,null());
HXDLIN( 381)		int UP4 = ::Std_obj::_hx_int((this->barWidth * ((Float)0.01)));
HXDLIN( 381)		 ::flixel::FlxSprite UP5 = UP3->makeGraphic(UP4,::Std_obj::_hx_int(this->barHeight),-16777216,null(),null());
HXLINE( 382)		UP5->set_alpha(this->alpha);
HXLINE( 383)		UP5->draw();
HXLINE( 384)		Float UP6 = (this->x + this->barWidth);
HXDLIN( 384)		Float UP7 = (UP6 - ( (Float)(::Std_obj::_hx_int((this->barWidth * ((Float)0.01)))) ));
HXDLIN( 384)		 ::flixel::FlxSprite UP8 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,UP7,this->y,null());
HXDLIN( 384)		int UP9 = ::Std_obj::_hx_int((this->barWidth * ((Float)0.01)));
HXDLIN( 384)		 ::flixel::FlxSprite UP10 = UP8->makeGraphic(UP9,::Std_obj::_hx_int(this->barHeight),-16777216,null(),null());
HXLINE( 385)		UP10->set_alpha(this->alpha);
HXLINE( 386)		UP10->draw();
            	}



::hx::ObjectPtr< GalleryBar_obj > GalleryBar_obj::__new( ::Dynamic x, ::Dynamic y,Float barWidth,Float barHeight,int colorA,int colorB) {
	::hx::ObjectPtr< GalleryBar_obj > __this = new GalleryBar_obj();
	__this->__construct(x,y,barWidth,barHeight,colorA,colorB);
	return __this;
}

::hx::ObjectPtr< GalleryBar_obj > GalleryBar_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic x, ::Dynamic y,Float barWidth,Float barHeight,int colorA,int colorB) {
	GalleryBar_obj *__this = (GalleryBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GalleryBar_obj), true, "states.GalleryBar"));
	*(void **)__this = GalleryBar_obj::_hx_vtable;
	__this->__construct(x,y,barWidth,barHeight,colorA,colorB);
	return __this;
}

GalleryBar_obj::GalleryBar_obj()
{
}

::hx::Val GalleryBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colorA") ) { return ::hx::Val( colorA ); }
		if (HX_FIELD_EQ(inName,"colorB") ) { return ::hx::Val( colorB ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return ::hx::Val( percent ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { return ::hx::Val( barWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { return ::hx::Val( barHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GalleryBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colorA") ) { colorA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorB") ) { colorB=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { barWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { barHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GalleryBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("barWidth",33,f7,30,99));
	outFields->push(HX_("barHeight",1a,ce,f6,27));
	outFields->push(HX_("colorA",7e,c5,86,c6));
	outFields->push(HX_("colorB",7f,c5,86,c6));
	outFields->push(HX_("percent",c5,aa,da,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GalleryBar_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GalleryBar_obj,barWidth),HX_("barWidth",33,f7,30,99)},
	{::hx::fsFloat,(int)offsetof(GalleryBar_obj,barHeight),HX_("barHeight",1a,ce,f6,27)},
	{::hx::fsInt,(int)offsetof(GalleryBar_obj,colorA),HX_("colorA",7e,c5,86,c6)},
	{::hx::fsInt,(int)offsetof(GalleryBar_obj,colorB),HX_("colorB",7f,c5,86,c6)},
	{::hx::fsFloat,(int)offsetof(GalleryBar_obj,percent),HX_("percent",c5,aa,da,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GalleryBar_obj_sStaticStorageInfo = 0;
#endif

static ::String GalleryBar_obj_sMemberFields[] = {
	HX_("barWidth",33,f7,30,99),
	HX_("barHeight",1a,ce,f6,27),
	HX_("colorA",7e,c5,86,c6),
	HX_("colorB",7f,c5,86,c6),
	HX_("percent",c5,aa,da,78),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class GalleryBar_obj::__mClass;

void GalleryBar_obj::__register()
{
	GalleryBar_obj _hx_dummy;
	GalleryBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.GalleryBar",2d,64,7f,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GalleryBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GalleryBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GalleryBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GalleryBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
