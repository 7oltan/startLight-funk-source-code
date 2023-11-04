#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08537cdcafeb1abd_30_new,"flixel.addons.transition.TransitionData","new",0xeede78c1,"flixel.addons.transition.TransitionData.new","flixel/addons/transition/TransitionData.hx",30,0x1113eace)
HX_LOCAL_STACK_FRAME(_hx_pos_08537cdcafeb1abd_41_destroy,"flixel.addons.transition.TransitionData","destroy",0x4b6319db,"flixel.addons.transition.TransitionData.destroy","flixel/addons/transition/TransitionData.hx",41,0x1113eace)
namespace flixel{
namespace addons{
namespace transition{

void TransitionData_obj::__construct(::String __o_TransType,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::flixel::math::FlxBasePoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region){
            		::String TransType = __o_TransType;
            		if (::hx::IsNull(__o_TransType)) TransType = HX_("fade",7c,b5,b5,43);
            		int Color = __o_Color.Default(-1);
            		Float Duration = __o_Duration.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_08537cdcafeb1abd_30_new)
HXLINE(  35)		this->duration = ((Float)1.0);
HXLINE(  54)		this->type = TransType;
HXLINE(  55)		this->tileData = TileData;
HXLINE(  56)		this->duration = Duration;
HXLINE(  57)		this->color = Color;
HXLINE(  58)		this->direction = Direction;
HXLINE(  59)		if (::hx::IsNull( this->direction )) {
HXLINE(  61)			 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,0,0);
HXDLIN(  61)			this->direction = this1;
            		}
HXLINE(  63)		{
HXLINE(  63)			Float Value = this->direction->x;
HXDLIN(  63)			Float lowerBound;
HXDLIN(  63)			if ((Value < -1)) {
HXLINE(  63)				lowerBound = ( (Float)(-1) );
            			}
            			else {
HXLINE(  63)				lowerBound = Value;
            			}
HXDLIN(  63)			bool _hx_tmp = (lowerBound > 1);
            		}
HXLINE(  64)		{
HXLINE(  64)			Float Value1 = this->direction->y;
HXDLIN(  64)			Float lowerBound1;
HXDLIN(  64)			if ((Value1 < -1)) {
HXLINE(  64)				lowerBound1 = ( (Float)(-1) );
            			}
            			else {
HXLINE(  64)				lowerBound1 = Value1;
            			}
HXDLIN(  64)			bool _hx_tmp1 = (lowerBound1 > 1);
            		}
HXLINE(  65)		this->tweenOptions =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),null()));
HXLINE(  66)		this->region = Region;
HXLINE(  67)		if (::hx::IsNull( Region )) {
HXLINE(  69)			this->region =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height);
            		}
            	}

Dynamic TransitionData_obj::__CreateEmpty() { return new TransitionData_obj; }

void *TransitionData_obj::_hx_vtable = 0;

Dynamic TransitionData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransitionData_obj > _hx_result = new TransitionData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool TransitionData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a19fee3;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_transition_TransitionData__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::transition::TransitionData_obj::destroy,
};

void *TransitionData_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_transition_TransitionData__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void TransitionData_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_08537cdcafeb1abd_41_destroy)
HXLINE(  42)		this->tileData = null();
HXLINE(  43)		this->direction = null();
HXLINE(  44)		this->tweenOptions->__SetField(HX_("onComplete",f8,d4,7e,5d),null(),::hx::paccDynamic);
HXLINE(  45)		this->tweenOptions->__SetField(HX_("ease",ee,8b,0c,43),null(),::hx::paccDynamic);
HXLINE(  46)		this->tweenOptions = null();
HXLINE(  47)		this->region = null();
HXLINE(  48)		this->direction = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TransitionData_obj,destroy,(void))


::hx::ObjectPtr< TransitionData_obj > TransitionData_obj::__new(::String __o_TransType,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::flixel::math::FlxBasePoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region) {
	::hx::ObjectPtr< TransitionData_obj > __this = new TransitionData_obj();
	__this->__construct(__o_TransType,__o_Color,__o_Duration,Direction,TileData,Region);
	return __this;
}

::hx::ObjectPtr< TransitionData_obj > TransitionData_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_TransType,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::flixel::math::FlxBasePoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region) {
	TransitionData_obj *__this = (TransitionData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransitionData_obj), true, "flixel.addons.transition.TransitionData"));
	*(void **)__this = TransitionData_obj::_hx_vtable;
	__this->__construct(__o_TransType,__o_Color,__o_Duration,Direction,TileData,Region);
	return __this;
}

TransitionData_obj::TransitionData_obj()
{
}

void TransitionData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransitionData);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(tileData,"tileData");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(tweenOptions,"tweenOptions");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_END_CLASS();
}

void TransitionData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(tileData,"tileData");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(tweenOptions,"tweenOptions");
	HX_VISIT_MEMBER_NAME(region,"region");
}

::hx::Val TransitionData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return ::hx::Val( region ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileData") ) { return ::hx::Val( tileData ); }
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tweenOptions") ) { return ::hx::Val( tweenOptions ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TransitionData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileData") ) { tileData=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tweenOptions") ) { tweenOptions=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransitionData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("tileData",78,7c,69,7c));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("tweenOptions",33,a4,bd,09));
	outFields->push(HX_("region",f4,c0,8c,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransitionData_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TransitionData_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TransitionData_obj,tileData),HX_("tileData",78,7c,69,7c)},
	{::hx::fsInt,(int)offsetof(TransitionData_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(TransitionData_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(TransitionData_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TransitionData_obj,tweenOptions),HX_("tweenOptions",33,a4,bd,09)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(TransitionData_obj,region),HX_("region",f4,c0,8c,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransitionData_obj_sStaticStorageInfo = 0;
#endif

static ::String TransitionData_obj_sMemberFields[] = {
	HX_("type",ba,f2,08,4d),
	HX_("tileData",78,7c,69,7c),
	HX_("color",63,71,5c,4a),
	HX_("duration",54,0f,8e,14),
	HX_("direction",3f,62,40,10),
	HX_("tweenOptions",33,a4,bd,09),
	HX_("region",f4,c0,8c,00),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class TransitionData_obj::__mClass;

void TransitionData_obj::__register()
{
	TransitionData_obj _hx_dummy;
	TransitionData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.transition.TransitionData",4f,04,a9,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransitionData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransitionData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransitionData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransitionData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition
