#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_psychlua_CustomFlxColor
#include <psychlua/CustomFlxColor.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_358_fromRGB,"psychlua.CustomFlxColor","fromRGB",0xcd1a0ac8,"psychlua.CustomFlxColor.fromRGB","psychlua/HScript.hx",358,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_362_fromRGBFloat,"psychlua.CustomFlxColor","fromRGBFloat",0x936615b4,"psychlua.CustomFlxColor.fromRGBFloat","psychlua/HScript.hx",362,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_367_fromHSB,"psychlua.CustomFlxColor","fromHSB",0xcd127eb2,"psychlua.CustomFlxColor.fromHSB","psychlua/HScript.hx",367,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_371_fromHSL,"psychlua.CustomFlxColor","fromHSL",0xcd127ebc,"psychlua.CustomFlxColor.fromHSL","psychlua/HScript.hx",371,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_375_fromString,"psychlua.CustomFlxColor","fromString",0x6ee8a3f6,"psychlua.CustomFlxColor.fromString","psychlua/HScript.hx",375,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_339_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",339,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_340_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",340,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_341_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",341,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_342_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",342,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_344_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",344,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_345_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",345,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_346_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",346,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_347_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",347,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_348_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",348,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_349_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",349,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_350_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",350,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_351_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",351,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_352_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",352,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_353_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",353,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_dfa518c81f8e41b4_354_boot,"psychlua.CustomFlxColor","boot",0x8f72240d,"psychlua.CustomFlxColor.boot","psychlua/HScript.hx",354,0x619ca0dd)
namespace psychlua{

void CustomFlxColor_obj::__construct() { }

Dynamic CustomFlxColor_obj::__CreateEmpty() { return new CustomFlxColor_obj; }

void *CustomFlxColor_obj::_hx_vtable = 0;

Dynamic CustomFlxColor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomFlxColor_obj > _hx_result = new CustomFlxColor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CustomFlxColor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3b77575f;
}

int CustomFlxColor_obj::TRANSPARENT;

int CustomFlxColor_obj::BLACK;

int CustomFlxColor_obj::WHITE;

int CustomFlxColor_obj::GRAY;

int CustomFlxColor_obj::GREEN;

int CustomFlxColor_obj::LIME;

int CustomFlxColor_obj::YELLOW;

int CustomFlxColor_obj::ORANGE;

int CustomFlxColor_obj::RED;

int CustomFlxColor_obj::PURPLE;

int CustomFlxColor_obj::BLUE;

int CustomFlxColor_obj::BROWN;

int CustomFlxColor_obj::PINK;

int CustomFlxColor_obj::MAGENTA;

int CustomFlxColor_obj::CYAN;

int CustomFlxColor_obj::fromRGB(int Red,int Green,int Blue,::hx::Null< int >  __o_Alpha){
            		int Alpha = __o_Alpha.Default(255);
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_358_fromRGB)
HXDLIN( 358)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 358)		{
HXDLIN( 358)			color = (color & -16711681);
HXDLIN( 358)			int color1;
HXDLIN( 358)			if ((Red > 255)) {
HXDLIN( 358)				color1 = 255;
            			}
            			else {
HXDLIN( 358)				if ((Red < 0)) {
HXDLIN( 358)					color1 = 0;
            				}
            				else {
HXDLIN( 358)					color1 = Red;
            				}
            			}
HXDLIN( 358)			color = (color | (color1 << 16));
            		}
HXDLIN( 358)		{
HXDLIN( 358)			color = (color & -65281);
HXDLIN( 358)			int color2;
HXDLIN( 358)			if ((Green > 255)) {
HXDLIN( 358)				color2 = 255;
            			}
            			else {
HXDLIN( 358)				if ((Green < 0)) {
HXDLIN( 358)					color2 = 0;
            				}
            				else {
HXDLIN( 358)					color2 = Green;
            				}
            			}
HXDLIN( 358)			color = (color | (color2 << 8));
            		}
HXDLIN( 358)		{
HXDLIN( 358)			color = (color & -256);
HXDLIN( 358)			int color3;
HXDLIN( 358)			if ((Blue > 255)) {
HXDLIN( 358)				color3 = 255;
            			}
            			else {
HXDLIN( 358)				if ((Blue < 0)) {
HXDLIN( 358)					color3 = 0;
            				}
            				else {
HXDLIN( 358)					color3 = Blue;
            				}
            			}
HXDLIN( 358)			color = (color | color3);
            		}
HXDLIN( 358)		{
HXDLIN( 358)			color = (color & 16777215);
HXDLIN( 358)			int color4;
HXDLIN( 358)			if ((Alpha > 255)) {
HXDLIN( 358)				color4 = 255;
            			}
            			else {
HXDLIN( 358)				if ((Alpha < 0)) {
HXDLIN( 358)					color4 = 0;
            				}
            				else {
HXDLIN( 358)					color4 = Alpha;
            				}
            			}
HXDLIN( 358)			color = (color | (color4 << 24));
            		}
HXDLIN( 358)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CustomFlxColor_obj,fromRGB,return )

int CustomFlxColor_obj::fromRGBFloat(Float Red,Float Green,Float Blue,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_362_fromRGBFloat)
HXDLIN( 362)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 362)		{
HXDLIN( 362)			int Value = ::Math_obj::round((Red * ( (Float)(255) )));
HXDLIN( 362)			color = (color & -16711681);
HXDLIN( 362)			int color1;
HXDLIN( 362)			if ((Value > 255)) {
HXDLIN( 362)				color1 = 255;
            			}
            			else {
HXDLIN( 362)				if ((Value < 0)) {
HXDLIN( 362)					color1 = 0;
            				}
            				else {
HXDLIN( 362)					color1 = Value;
            				}
            			}
HXDLIN( 362)			color = (color | (color1 << 16));
            		}
HXDLIN( 362)		{
HXDLIN( 362)			int Value1 = ::Math_obj::round((Green * ( (Float)(255) )));
HXDLIN( 362)			color = (color & -65281);
HXDLIN( 362)			int color2;
HXDLIN( 362)			if ((Value1 > 255)) {
HXDLIN( 362)				color2 = 255;
            			}
            			else {
HXDLIN( 362)				if ((Value1 < 0)) {
HXDLIN( 362)					color2 = 0;
            				}
            				else {
HXDLIN( 362)					color2 = Value1;
            				}
            			}
HXDLIN( 362)			color = (color | (color2 << 8));
            		}
HXDLIN( 362)		{
HXDLIN( 362)			int Value2 = ::Math_obj::round((Blue * ( (Float)(255) )));
HXDLIN( 362)			color = (color & -256);
HXDLIN( 362)			int color3;
HXDLIN( 362)			if ((Value2 > 255)) {
HXDLIN( 362)				color3 = 255;
            			}
            			else {
HXDLIN( 362)				if ((Value2 < 0)) {
HXDLIN( 362)					color3 = 0;
            				}
            				else {
HXDLIN( 362)					color3 = Value2;
            				}
            			}
HXDLIN( 362)			color = (color | color3);
            		}
HXDLIN( 362)		{
HXDLIN( 362)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 362)			color = (color & 16777215);
HXDLIN( 362)			int color4;
HXDLIN( 362)			if ((Value3 > 255)) {
HXDLIN( 362)				color4 = 255;
            			}
            			else {
HXDLIN( 362)				if ((Value3 < 0)) {
HXDLIN( 362)					color4 = 0;
            				}
            				else {
HXDLIN( 362)					color4 = Value3;
            				}
            			}
HXDLIN( 362)			color = (color | (color4 << 24));
            		}
HXDLIN( 362)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CustomFlxColor_obj,fromRGBFloat,return )

int CustomFlxColor_obj::fromHSB(Float Hue,Float Sat,Float Brt,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_367_fromHSB)
HXDLIN( 367)		return ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(Hue,Sat,Brt,Alpha);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CustomFlxColor_obj,fromHSB,return )

int CustomFlxColor_obj::fromHSL(Float Hue,Float Sat,Float Light,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_371_fromHSL)
HXDLIN( 371)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 371)		Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Light) - ( (Float)(1) )))) * Sat);
HXDLIN( 371)		Float match = (Light - (chroma / ( (Float)(2) )));
HXDLIN( 371)		Float Hue1 = Hue;
HXDLIN( 371)		Float Chroma = chroma;
HXDLIN( 371)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 371)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 371)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 371)		Chroma = (Chroma + match);
HXDLIN( 371)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXDLIN( 371)				{
HXDLIN( 371)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -16711681);
HXDLIN( 371)					int color1;
HXDLIN( 371)					if ((Value > 255)) {
HXDLIN( 371)						color1 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value < 0)) {
HXDLIN( 371)							color1 = 0;
            						}
            						else {
HXDLIN( 371)							color1 = Value;
            						}
            					}
HXDLIN( 371)					color = (color | (color1 << 16));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -65281);
HXDLIN( 371)					int color2;
HXDLIN( 371)					if ((Value1 > 255)) {
HXDLIN( 371)						color2 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value1 < 0)) {
HXDLIN( 371)							color2 = 0;
            						}
            						else {
HXDLIN( 371)							color2 = Value1;
            						}
            					}
HXDLIN( 371)					color = (color | (color2 << 8));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -256);
HXDLIN( 371)					int color3;
HXDLIN( 371)					if ((Value2 > 255)) {
HXDLIN( 371)						color3 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value2 < 0)) {
HXDLIN( 371)							color3 = 0;
            						}
            						else {
HXDLIN( 371)							color3 = Value2;
            						}
            					}
HXDLIN( 371)					color = (color | color3);
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 371)					color = (color & 16777215);
HXDLIN( 371)					int color4;
HXDLIN( 371)					if ((Value3 > 255)) {
HXDLIN( 371)						color4 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value3 < 0)) {
HXDLIN( 371)							color4 = 0;
            						}
            						else {
HXDLIN( 371)							color4 = Value3;
            						}
            					}
HXDLIN( 371)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 371)				{
HXDLIN( 371)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -16711681);
HXDLIN( 371)					int color1;
HXDLIN( 371)					if ((Value > 255)) {
HXDLIN( 371)						color1 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value < 0)) {
HXDLIN( 371)							color1 = 0;
            						}
            						else {
HXDLIN( 371)							color1 = Value;
            						}
            					}
HXDLIN( 371)					color = (color | (color1 << 16));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -65281);
HXDLIN( 371)					int color2;
HXDLIN( 371)					if ((Value1 > 255)) {
HXDLIN( 371)						color2 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value1 < 0)) {
HXDLIN( 371)							color2 = 0;
            						}
            						else {
HXDLIN( 371)							color2 = Value1;
            						}
            					}
HXDLIN( 371)					color = (color | (color2 << 8));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -256);
HXDLIN( 371)					int color3;
HXDLIN( 371)					if ((Value2 > 255)) {
HXDLIN( 371)						color3 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value2 < 0)) {
HXDLIN( 371)							color3 = 0;
            						}
            						else {
HXDLIN( 371)							color3 = Value2;
            						}
            					}
HXDLIN( 371)					color = (color | color3);
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 371)					color = (color & 16777215);
HXDLIN( 371)					int color4;
HXDLIN( 371)					if ((Value3 > 255)) {
HXDLIN( 371)						color4 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value3 < 0)) {
HXDLIN( 371)							color4 = 0;
            						}
            						else {
HXDLIN( 371)							color4 = Value3;
            						}
            					}
HXDLIN( 371)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 371)				{
HXDLIN( 371)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -16711681);
HXDLIN( 371)					int color1;
HXDLIN( 371)					if ((Value > 255)) {
HXDLIN( 371)						color1 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value < 0)) {
HXDLIN( 371)							color1 = 0;
            						}
            						else {
HXDLIN( 371)							color1 = Value;
            						}
            					}
HXDLIN( 371)					color = (color | (color1 << 16));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -65281);
HXDLIN( 371)					int color2;
HXDLIN( 371)					if ((Value1 > 255)) {
HXDLIN( 371)						color2 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value1 < 0)) {
HXDLIN( 371)							color2 = 0;
            						}
            						else {
HXDLIN( 371)							color2 = Value1;
            						}
            					}
HXDLIN( 371)					color = (color | (color2 << 8));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -256);
HXDLIN( 371)					int color3;
HXDLIN( 371)					if ((Value2 > 255)) {
HXDLIN( 371)						color3 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value2 < 0)) {
HXDLIN( 371)							color3 = 0;
            						}
            						else {
HXDLIN( 371)							color3 = Value2;
            						}
            					}
HXDLIN( 371)					color = (color | color3);
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 371)					color = (color & 16777215);
HXDLIN( 371)					int color4;
HXDLIN( 371)					if ((Value3 > 255)) {
HXDLIN( 371)						color4 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value3 < 0)) {
HXDLIN( 371)							color4 = 0;
            						}
            						else {
HXDLIN( 371)							color4 = Value3;
            						}
            					}
HXDLIN( 371)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 371)				{
HXDLIN( 371)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -16711681);
HXDLIN( 371)					int color1;
HXDLIN( 371)					if ((Value > 255)) {
HXDLIN( 371)						color1 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value < 0)) {
HXDLIN( 371)							color1 = 0;
            						}
            						else {
HXDLIN( 371)							color1 = Value;
            						}
            					}
HXDLIN( 371)					color = (color | (color1 << 16));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -65281);
HXDLIN( 371)					int color2;
HXDLIN( 371)					if ((Value1 > 255)) {
HXDLIN( 371)						color2 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value1 < 0)) {
HXDLIN( 371)							color2 = 0;
            						}
            						else {
HXDLIN( 371)							color2 = Value1;
            						}
            					}
HXDLIN( 371)					color = (color | (color2 << 8));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -256);
HXDLIN( 371)					int color3;
HXDLIN( 371)					if ((Value2 > 255)) {
HXDLIN( 371)						color3 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value2 < 0)) {
HXDLIN( 371)							color3 = 0;
            						}
            						else {
HXDLIN( 371)							color3 = Value2;
            						}
            					}
HXDLIN( 371)					color = (color | color3);
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 371)					color = (color & 16777215);
HXDLIN( 371)					int color4;
HXDLIN( 371)					if ((Value3 > 255)) {
HXDLIN( 371)						color4 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value3 < 0)) {
HXDLIN( 371)							color4 = 0;
            						}
            						else {
HXDLIN( 371)							color4 = Value3;
            						}
            					}
HXDLIN( 371)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 371)				{
HXDLIN( 371)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -16711681);
HXDLIN( 371)					int color1;
HXDLIN( 371)					if ((Value > 255)) {
HXDLIN( 371)						color1 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value < 0)) {
HXDLIN( 371)							color1 = 0;
            						}
            						else {
HXDLIN( 371)							color1 = Value;
            						}
            					}
HXDLIN( 371)					color = (color | (color1 << 16));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -65281);
HXDLIN( 371)					int color2;
HXDLIN( 371)					if ((Value1 > 255)) {
HXDLIN( 371)						color2 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value1 < 0)) {
HXDLIN( 371)							color2 = 0;
            						}
            						else {
HXDLIN( 371)							color2 = Value1;
            						}
            					}
HXDLIN( 371)					color = (color | (color2 << 8));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -256);
HXDLIN( 371)					int color3;
HXDLIN( 371)					if ((Value2 > 255)) {
HXDLIN( 371)						color3 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value2 < 0)) {
HXDLIN( 371)							color3 = 0;
            						}
            						else {
HXDLIN( 371)							color3 = Value2;
            						}
            					}
HXDLIN( 371)					color = (color | color3);
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 371)					color = (color & 16777215);
HXDLIN( 371)					int color4;
HXDLIN( 371)					if ((Value3 > 255)) {
HXDLIN( 371)						color4 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value3 < 0)) {
HXDLIN( 371)							color4 = 0;
            						}
            						else {
HXDLIN( 371)							color4 = Value3;
            						}
            					}
HXDLIN( 371)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 371)				{
HXDLIN( 371)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -16711681);
HXDLIN( 371)					int color1;
HXDLIN( 371)					if ((Value > 255)) {
HXDLIN( 371)						color1 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value < 0)) {
HXDLIN( 371)							color1 = 0;
            						}
            						else {
HXDLIN( 371)							color1 = Value;
            						}
            					}
HXDLIN( 371)					color = (color | (color1 << 16));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -65281);
HXDLIN( 371)					int color2;
HXDLIN( 371)					if ((Value1 > 255)) {
HXDLIN( 371)						color2 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value1 < 0)) {
HXDLIN( 371)							color2 = 0;
            						}
            						else {
HXDLIN( 371)							color2 = Value1;
            						}
            					}
HXDLIN( 371)					color = (color | (color2 << 8));
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 371)					color = (color & -256);
HXDLIN( 371)					int color3;
HXDLIN( 371)					if ((Value2 > 255)) {
HXDLIN( 371)						color3 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value2 < 0)) {
HXDLIN( 371)							color3 = 0;
            						}
            						else {
HXDLIN( 371)							color3 = Value2;
            						}
            					}
HXDLIN( 371)					color = (color | color3);
            				}
HXDLIN( 371)				{
HXDLIN( 371)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 371)					color = (color & 16777215);
HXDLIN( 371)					int color4;
HXDLIN( 371)					if ((Value3 > 255)) {
HXDLIN( 371)						color4 = 255;
            					}
            					else {
HXDLIN( 371)						if ((Value3 < 0)) {
HXDLIN( 371)							color4 = 0;
            						}
            						else {
HXDLIN( 371)							color4 = Value3;
            						}
            					}
HXDLIN( 371)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 371)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CustomFlxColor_obj,fromHSL,return )

int CustomFlxColor_obj::fromString(::String str){
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_375_fromString)
HXDLIN( 375)		return ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(str)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CustomFlxColor_obj,fromString,return )


CustomFlxColor_obj::CustomFlxColor_obj()
{
}

bool CustomFlxColor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { outValue = ( RED ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"GRAY") ) { outValue = ( GRAY ); return true; }
		if (HX_FIELD_EQ(inName,"LIME") ) { outValue = ( LIME ); return true; }
		if (HX_FIELD_EQ(inName,"BLUE") ) { outValue = ( BLUE ); return true; }
		if (HX_FIELD_EQ(inName,"PINK") ) { outValue = ( PINK ); return true; }
		if (HX_FIELD_EQ(inName,"CYAN") ) { outValue = ( CYAN ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BLACK") ) { outValue = ( BLACK ); return true; }
		if (HX_FIELD_EQ(inName,"WHITE") ) { outValue = ( WHITE ); return true; }
		if (HX_FIELD_EQ(inName,"GREEN") ) { outValue = ( GREEN ); return true; }
		if (HX_FIELD_EQ(inName,"BROWN") ) { outValue = ( BROWN ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"YELLOW") ) { outValue = ( YELLOW ); return true; }
		if (HX_FIELD_EQ(inName,"ORANGE") ) { outValue = ( ORANGE ); return true; }
		if (HX_FIELD_EQ(inName,"PURPLE") ) { outValue = ( PURPLE ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MAGENTA") ) { outValue = ( MAGENTA ); return true; }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { outValue = fromRGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromHSB") ) { outValue = fromHSB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromHSL") ) { outValue = fromHSL_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { outValue = ( TRANSPARENT ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromRGBFloat") ) { outValue = fromRGBFloat_dyn(); return true; }
	}
	return false;
}

bool CustomFlxColor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { RED=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"GRAY") ) { GRAY=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"LIME") ) { LIME=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BLUE") ) { BLUE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"PINK") ) { PINK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CYAN") ) { CYAN=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BLACK") ) { BLACK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"WHITE") ) { WHITE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"GREEN") ) { GREEN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BROWN") ) { BROWN=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"YELLOW") ) { YELLOW=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ORANGE") ) { ORANGE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"PURPLE") ) { PURPLE=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MAGENTA") ) { MAGENTA=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { TRANSPARENT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CustomFlxColor_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CustomFlxColor_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CustomFlxColor_obj::TRANSPARENT,HX_("TRANSPARENT",32,37,f6,f8)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::BLACK,HX_("BLACK",9f,0d,e0,32)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::WHITE,HX_("WHITE",89,82,ab,47)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::GRAY,HX_("GRAY",e3,97,2c,2f)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::GREEN,HX_("GREEN",a3,46,db,17)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::LIME,HX_("LIME",15,df,73,32)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::YELLOW,HX_("YELLOW",74,4b,df,82)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::ORANGE,HX_("ORANGE",ee,5e,3f,f8)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::RED,HX_("RED",31,75,3e,00)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::PURPLE,HX_("PURPLE",3c,a2,0c,24)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::BLUE,HX_("BLUE",9a,0a,da,2b)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::BROWN,HX_("BROWN",56,06,e2,36)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::PINK,HX_("PINK",76,ba,18,35)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::MAGENTA,HX_("MAGENTA",09,8e,71,8e)},
	{::hx::fsInt,(void *) &CustomFlxColor_obj::CYAN,HX_("CYAN",23,0d,8d,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CustomFlxColor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::LIME,"LIME");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::ORANGE,"ORANGE");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::PURPLE,"PURPLE");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::BROWN,"BROWN");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(CustomFlxColor_obj::CYAN,"CYAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CustomFlxColor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::LIME,"LIME");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::ORANGE,"ORANGE");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::PURPLE,"PURPLE");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::BROWN,"BROWN");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(CustomFlxColor_obj::CYAN,"CYAN");
};

#endif

::hx::Class CustomFlxColor_obj::__mClass;

static ::String CustomFlxColor_obj_sStaticFields[] = {
	HX_("TRANSPARENT",32,37,f6,f8),
	HX_("BLACK",9f,0d,e0,32),
	HX_("WHITE",89,82,ab,47),
	HX_("GRAY",e3,97,2c,2f),
	HX_("GREEN",a3,46,db,17),
	HX_("LIME",15,df,73,32),
	HX_("YELLOW",74,4b,df,82),
	HX_("ORANGE",ee,5e,3f,f8),
	HX_("RED",31,75,3e,00),
	HX_("PURPLE",3c,a2,0c,24),
	HX_("BLUE",9a,0a,da,2b),
	HX_("BROWN",56,06,e2,36),
	HX_("PINK",76,ba,18,35),
	HX_("MAGENTA",09,8e,71,8e),
	HX_("CYAN",23,0d,8d,2c),
	HX_("fromRGB",c3,8f,01,58),
	HX_("fromRGBFloat",d9,a2,53,9a),
	HX_("fromHSB",ad,03,fa,57),
	HX_("fromHSL",b7,03,fa,57),
	HX_("fromString",db,2d,74,54),
	::String(null())
};

void CustomFlxColor_obj::__register()
{
	CustomFlxColor_obj _hx_dummy;
	CustomFlxColor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.CustomFlxColor",73,ce,17,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CustomFlxColor_obj::__GetStatic;
	__mClass->mSetStaticField = &CustomFlxColor_obj::__SetStatic;
	__mClass->mMarkFunc = CustomFlxColor_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CustomFlxColor_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CustomFlxColor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CustomFlxColor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomFlxColor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomFlxColor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CustomFlxColor_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_339_boot)
HXDLIN( 339)		TRANSPARENT = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_340_boot)
HXDLIN( 340)		BLACK = -16777216;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_341_boot)
HXDLIN( 341)		WHITE = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_342_boot)
HXDLIN( 342)		GRAY = -8355712;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_344_boot)
HXDLIN( 344)		GREEN = -16744448;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_345_boot)
HXDLIN( 345)		LIME = -16711936;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_346_boot)
HXDLIN( 346)		YELLOW = -256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_347_boot)
HXDLIN( 347)		ORANGE = -23296;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_348_boot)
HXDLIN( 348)		RED = -65536;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_349_boot)
HXDLIN( 349)		PURPLE = -8388480;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_350_boot)
HXDLIN( 350)		BLUE = -16776961;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_351_boot)
HXDLIN( 351)		BROWN = -7650029;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_352_boot)
HXDLIN( 352)		PINK = -16181;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_353_boot)
HXDLIN( 353)		MAGENTA = -65281;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfa518c81f8e41b4_354_boot)
HXDLIN( 354)		CYAN = -16711681;
            	}
}

} // end namespace psychlua
