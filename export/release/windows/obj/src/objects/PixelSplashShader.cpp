#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_objects_PixelSplashShader
#include <objects/PixelSplashShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_70f0cc6e85e841ba_273_new,"objects.PixelSplashShader","new",0xb8c8064a,"objects.PixelSplashShader.new","objects/NoteSplash.hx",273,0xe471e78a)
namespace objects{

void PixelSplashShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_70f0cc6e85e841ba_273_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\r\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\r\n\t\t#pragma header\r\n\t\t\r\n\t\tuniform vec3 r;\r\n\t\tuniform vec3 g;\r\n\t\tuniform vec3 b;\r\n\t\tuniform float mult;\r\n\t\tuniform vec2 uBlocksize;\r\n\r\n\t\tvec4 flixel_texture2DCustom(sampler2D bitmap, vec2 coord) {\r\n\t\t\tvec2 blocks = openfl_TextureSize / uBlocksize;\r\n\t\t\tvec4 color = flixel_texture2D(bitmap, floor(coord * blocks) / blocks);\r\n\t\t\tif (!hasTransform) {\r\n\t\t\t\treturn color;\r\n\t\t\t}\r\n\r\n\t\t\tif(color.a == 0.0 || mult == 0.0) {\r\n\t\t\t\treturn color * openfl_Alphav;\r\n\t\t\t}\r\n\r\n\t\t\tvec4 newColor = color;\r\n\t\t\tnewColor.rgb = min(color.r * r + color.g * g + color.b * b, vec3(1.0));\r\n\t\t\tnewColor.a = color.a;\r\n\t\t\t\r\n\t\t\tcolor = mix(color, newColor, mult);\r\n\t\t\t\r\n\t\t\tif(color.a > 0.0) {\r\n\t\t\t\treturn vec4(color.rgb, color.a);\r\n\t\t\t}\r\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\r\n\t\t}\r\n\r\n\t\tvoid main() {\r\n\t\t\tgl_FragColor = flixel_texture2DCustom(bitmap, openfl_TextureCoordv);\r\n\t\t}",8a,55,d4,a7);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 274)		super::__construct();
HXLINE( 231)		this->_hx___isGenerated = true;
HXDLIN( 231)		this->_hx___initGL();
            	}

Dynamic PixelSplashShader_obj::__CreateEmpty() { return new PixelSplashShader_obj; }

void *PixelSplashShader_obj::_hx_vtable = 0;

Dynamic PixelSplashShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PixelSplashShader_obj > _hx_result = new PixelSplashShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PixelSplashShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x25f51fe6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< PixelSplashShader_obj > PixelSplashShader_obj::__new() {
	::hx::ObjectPtr< PixelSplashShader_obj > __this = new PixelSplashShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PixelSplashShader_obj > PixelSplashShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PixelSplashShader_obj *__this = (PixelSplashShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PixelSplashShader_obj), true, "objects.PixelSplashShader"));
	*(void **)__this = PixelSplashShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PixelSplashShader_obj::PixelSplashShader_obj()
{
}

void PixelSplashShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PixelSplashShader);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(mult,"mult");
	HX_MARK_MEMBER_NAME(uBlocksize,"uBlocksize");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PixelSplashShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(mult,"mult");
	HX_VISIT_MEMBER_NAME(uBlocksize,"uBlocksize");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PixelSplashShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return ::hx::Val( mult ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uBlocksize") ) { return ::hx::Val( uBlocksize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PixelSplashShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { mult=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uBlocksize") ) { uBlocksize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PixelSplashShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("mult",f0,67,65,48));
	outFields->push(HX_("uBlocksize",59,e9,e4,ea));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PixelSplashShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PixelSplashShader_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PixelSplashShader_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PixelSplashShader_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PixelSplashShader_obj,mult),HX_("mult",f0,67,65,48)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PixelSplashShader_obj,uBlocksize),HX_("uBlocksize",59,e9,e4,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PixelSplashShader_obj_sStaticStorageInfo = 0;
#endif

static ::String PixelSplashShader_obj_sMemberFields[] = {
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	HX_("mult",f0,67,65,48),
	HX_("uBlocksize",59,e9,e4,ea),
	::String(null()) };

::hx::Class PixelSplashShader_obj::__mClass;

void PixelSplashShader_obj::__register()
{
	PixelSplashShader_obj _hx_dummy;
	PixelSplashShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.PixelSplashShader",58,d9,e8,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PixelSplashShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PixelSplashShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PixelSplashShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PixelSplashShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
