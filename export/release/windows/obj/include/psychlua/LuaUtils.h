#ifndef INCLUDED_psychlua_LuaUtils
#define INCLUDED_psychlua_LuaUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(psychlua,LuaUtils)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES LuaUtils_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LuaUtils_obj OBJ_;
		LuaUtils_obj();

	public:
		enum { _hx_ClassId = 0x23f0befa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="psychlua.LuaUtils")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"psychlua.LuaUtils"); }

		inline static ::hx::ObjectPtr< LuaUtils_obj > __new() {
			::hx::ObjectPtr< LuaUtils_obj > __this = new LuaUtils_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LuaUtils_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LuaUtils_obj *__this = (LuaUtils_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LuaUtils_obj), false, "psychlua.LuaUtils"));
			*(void **)__this = LuaUtils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LuaUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LuaUtils",79,41,f3,02); }

		static  ::Dynamic getLuaTween( ::Dynamic options);
		static ::Dynamic getLuaTween_dyn();

		static  ::Dynamic setVarInArray( ::Dynamic instance,::String variable, ::Dynamic value,::hx::Null< bool >  allowMaps);
		static ::Dynamic setVarInArray_dyn();

		static  ::Dynamic getVarInArray( ::Dynamic instance,::String variable,::hx::Null< bool >  allowMaps);
		static ::Dynamic getVarInArray_dyn();

		static bool isMap( ::Dynamic variable);
		static ::Dynamic isMap_dyn();

		static  ::Dynamic setGroupStuff( ::Dynamic leArray,::String variable, ::Dynamic value, ::Dynamic allowMaps);
		static ::Dynamic setGroupStuff_dyn();

		static  ::Dynamic getGroupStuff( ::Dynamic leArray,::String variable, ::Dynamic allowMaps);
		static ::Dynamic getGroupStuff_dyn();

		static  ::Dynamic getPropertyLoop(::Array< ::String > split, ::Dynamic checkForTextsToo, ::Dynamic getProperty, ::Dynamic allowMaps);
		static ::Dynamic getPropertyLoop_dyn();

		static  ::Dynamic getObjectDirectly(::String objectName, ::Dynamic checkForTextsToo, ::Dynamic allowMaps);
		static ::Dynamic getObjectDirectly_dyn();

		static  ::flixel::text::FlxText getTextObject(::String name);
		static ::Dynamic getTextObject_dyn();

		static bool isOfTypes( ::Dynamic value,::cpp::VirtualArray types);
		static ::Dynamic isOfTypes_dyn();

		static  ::flixel::FlxState getTargetInstance();
		static ::Dynamic getTargetInstance_dyn();

		static  ::flixel::group::FlxTypedSpriteGroup getLowestCharacterGroup();
		static ::Dynamic getLowestCharacterGroup_dyn();

		static bool addAnimByIndices(::String obj,::String name,::String prefix, ::Dynamic indices,::hx::Null< int >  framerate,::hx::Null< bool >  loop);
		static ::Dynamic addAnimByIndices_dyn();

		static void loadFrames( ::flixel::FlxSprite spr,::String image,::String spriteType);
		static ::Dynamic loadFrames_dyn();

		static void resetTextTag(::String tag);
		static ::Dynamic resetTextTag_dyn();

		static void resetSpriteTag(::String tag);
		static ::Dynamic resetSpriteTag_dyn();

		static void cancelTween(::String tag);
		static ::Dynamic cancelTween_dyn();

		static  ::Dynamic tweenPrepare(::String tag,::String vars);
		static ::Dynamic tweenPrepare_dyn();

		static void cancelTimer(::String tag);
		static ::Dynamic cancelTimer_dyn();

		static int getTweenTypeByString(::String type);
		static ::Dynamic getTweenTypeByString_dyn();

		static  ::Dynamic getTweenEaseByString(::String ease);
		static ::Dynamic getTweenEaseByString_dyn();

		static  ::Dynamic blendModeFromString(::String blend);
		static ::Dynamic blendModeFromString_dyn();

		static ::String typeToString(int type);
		static ::Dynamic typeToString_dyn();

		static  ::flixel::FlxCamera cameraFromString(::String cam);
		static ::Dynamic cameraFromString_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_LuaUtils */ 
