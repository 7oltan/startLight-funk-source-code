#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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
#ifndef INCLUDED_shaders_RGBPaletteShader
#include <shaders/RGBPaletteShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7cea3061d3662d29_158_new,"shaders.RGBPaletteShader","new",0x51b57a05,"shaders.RGBPaletteShader.new","shaders/RGBPalette.hx",158,0xd43b990f)
namespace shaders{

void RGBPaletteShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7cea3061d3662d29_158_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\r\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\r\n\t\t#pragma header\r\n\t\t\r\n\t\tuniform vec3 r;\r\n\t\tuniform vec3 g;\r\n\t\tuniform vec3 b;\r\n\t\tuniform float mult;\r\n\r\n\t\tvec4 flixel_texture2DCustom(sampler2D bitmap, vec2 coord) {\r\n\t\t\tvec4 color = flixel_texture2D(bitmap, coord);\r\n\t\t\tif (!hasTransform) {\r\n\t\t\t\treturn color;\r\n\t\t\t}\r\n\r\n\t\t\tif(color.a == 0.0 || mult == 0.0) {\r\n\t\t\t\treturn color * openfl_Alphav;\r\n\t\t\t}\r\n\r\n\t\t\tvec4 newColor = color;\r\n\t\t\tnewColor.rgb = min(color.r * r + color.g * g + color.b * b, vec3(1.0));\r\n\t\t\tnewColor.a = color.a;\r\n\t\t\t\r\n\t\t\tcolor = mix(color, newColor, mult);\r\n\t\t\t\r\n\t\t\tif(color.a > 0.0) {\r\n\t\t\t\treturn vec4(color.rgb, color.a);\r\n\t\t\t}\r\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\r\n\t\t}\r\n\r\n\t\tvoid main() {\r\n\t\t\tgl_FragColor = flixel_texture2DCustom(bitmap, openfl_TextureCoordv);\r\n\t\t}",12,4c,dc,cd);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 159)		super::__construct();
HXLINE( 119)		this->_hx___isGenerated = true;
HXDLIN( 119)		this->_hx___initGL();
            	}

Dynamic RGBPaletteShader_obj::__CreateEmpty() { return new RGBPaletteShader_obj; }

void *RGBPaletteShader_obj::_hx_vtable = 0;

Dynamic RGBPaletteShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RGBPaletteShader_obj > _hx_result = new RGBPaletteShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RGBPaletteShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x64a0941d || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< RGBPaletteShader_obj > RGBPaletteShader_obj::__new() {
	::hx::ObjectPtr< RGBPaletteShader_obj > __this = new RGBPaletteShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RGBPaletteShader_obj > RGBPaletteShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RGBPaletteShader_obj *__this = (RGBPaletteShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RGBPaletteShader_obj), true, "shaders.RGBPaletteShader"));
	*(void **)__this = RGBPaletteShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RGBPaletteShader_obj::RGBPaletteShader_obj()
{
}

void RGBPaletteShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RGBPaletteShader);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(mult,"mult");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RGBPaletteShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(mult,"mult");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RGBPaletteShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return ::hx::Val( mult ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RGBPaletteShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { mult=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RGBPaletteShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("mult",f0,67,65,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RGBPaletteShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(RGBPaletteShader_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(RGBPaletteShader_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(RGBPaletteShader_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(RGBPaletteShader_obj,mult),HX_("mult",f0,67,65,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RGBPaletteShader_obj_sStaticStorageInfo = 0;
#endif

static ::String RGBPaletteShader_obj_sMemberFields[] = {
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	HX_("mult",f0,67,65,48),
	::String(null()) };

::hx::Class RGBPaletteShader_obj::__mClass;

void RGBPaletteShader_obj::__register()
{
	RGBPaletteShader_obj _hx_dummy;
	RGBPaletteShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.RGBPaletteShader",93,13,8d,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RGBPaletteShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RGBPaletteShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RGBPaletteShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RGBPaletteShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders