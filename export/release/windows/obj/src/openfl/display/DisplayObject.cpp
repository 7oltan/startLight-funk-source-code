#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_RenderEvent
#include <openfl/events/RenderEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_Lib
#include <openfl/utils/_internal/Lib.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_26400284d5456c16_1050_new,"openfl.display.DisplayObject","new",0xb225b469,"openfl.display.DisplayObject.new","openfl/display/DisplayObject.hx",1050,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1087_addEventListener,"openfl.display.DisplayObject","addEventListener",0xe74b9624,"openfl.display.DisplayObject.addEventListener","openfl/display/DisplayObject.hx",1087,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1119_dispatchEvent,"openfl.display.DisplayObject","dispatchEvent",0xe6cd7049,"openfl.display.DisplayObject.dispatchEvent","openfl/display/DisplayObject.hx",1119,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1163_getBounds,"openfl.display.DisplayObject","getBounds",0xdb0a2074,"openfl.display.DisplayObject.getBounds","openfl/display/DisplayObject.hx",1163,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1213_getRect,"openfl.display.DisplayObject","getRect",0x17591963,"openfl.display.DisplayObject.getRect","openfl/display/DisplayObject.hx",1213,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1235_globalToLocal,"openfl.display.DisplayObject","globalToLocal",0x8c16f816,"openfl.display.DisplayObject.globalToLocal","openfl/display/DisplayObject.hx",1235,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1249_hitTestObject,"openfl.display.DisplayObject","hitTestObject",0xf7ccfe2d,"openfl.display.DisplayObject.hitTestObject","openfl/display/DisplayObject.hx",1249,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1279_hitTestPoint,"openfl.display.DisplayObject","hitTestPoint",0x05917ca2,"openfl.display.DisplayObject.hitTestPoint","openfl/display/DisplayObject.hx",1279,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1295_invalidate,"openfl.display.DisplayObject","invalidate",0x11e2b892,"openfl.display.DisplayObject.invalidate","openfl/display/DisplayObject.hx",1295,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1323_localToGlobal,"openfl.display.DisplayObject","localToGlobal",0x6853eb12,"openfl.display.DisplayObject.localToGlobal","openfl/display/DisplayObject.hx",1323,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1330_removeEventListener,"openfl.display.DisplayObject","removeEventListener",0x3ae1cdd3,"openfl.display.DisplayObject.removeEventListener","openfl/display/DisplayObject.hx",1330,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1369___cleanup,"openfl.display.DisplayObject","__cleanup",0x25266dcd,"openfl.display.DisplayObject.__cleanup","openfl/display/DisplayObject.hx",1369,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1396___dispatch,"openfl.display.DisplayObject","__dispatch",0x4c54e0f1,"openfl.display.DisplayObject.__dispatch","openfl/display/DisplayObject.hx",1396,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1412___dispatchChildren,"openfl.display.DisplayObject","__dispatchChildren",0xdb948f50,"openfl.display.DisplayObject.__dispatchChildren","openfl/display/DisplayObject.hx",1412,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1415___dispatchEvent,"openfl.display.DisplayObject","__dispatchEvent",0xd8f34d69,"openfl.display.DisplayObject.__dispatchEvent","openfl/display/DisplayObject.hx",1415,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1440___dispatchWithCapture,"openfl.display.DisplayObject","__dispatchWithCapture",0x81f3d9af,"openfl.display.DisplayObject.__dispatchWithCapture","openfl/display/DisplayObject.hx",1440,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1481___enterFrame,"openfl.display.DisplayObject","__enterFrame",0x5c5351ec,"openfl.display.DisplayObject.__enterFrame","openfl/display/DisplayObject.hx",1481,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1485___getBounds,"openfl.display.DisplayObject","__getBounds",0xe772ed94,"openfl.display.DisplayObject.__getBounds","openfl/display/DisplayObject.hx",1485,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1493___getCursor,"openfl.display.DisplayObject","__getCursor",0xc03df5f5,"openfl.display.DisplayObject.__getCursor","openfl/display/DisplayObject.hx",1493,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1497___getFilterBounds,"openfl.display.DisplayObject","__getFilterBounds",0x4d6bbcac,"openfl.display.DisplayObject.__getFilterBounds","openfl/display/DisplayObject.hx",1497,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1524___getInteractive,"openfl.display.DisplayObject","__getInteractive",0xee1ea663,"openfl.display.DisplayObject.__getInteractive","openfl/display/DisplayObject.hx",1524,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1528___getLocalBounds,"openfl.display.DisplayObject","__getLocalBounds",0xd51d8ec1,"openfl.display.DisplayObject.__getLocalBounds","openfl/display/DisplayObject.hx",1528,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1544___getRenderBounds,"openfl.display.DisplayObject","__getRenderBounds",0xb06992ca,"openfl.display.DisplayObject.__getRenderBounds","openfl/display/DisplayObject.hx",1544,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1561___getRenderTransform,"openfl.display.DisplayObject","__getRenderTransform",0x9985c437,"openfl.display.DisplayObject.__getRenderTransform","openfl/display/DisplayObject.hx",1561,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1567___getWorldTransform,"openfl.display.DisplayObject","__getWorldTransform",0x71693ad9,"openfl.display.DisplayObject.__getWorldTransform","openfl/display/DisplayObject.hx",1567,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1602___globalToLocal,"openfl.display.DisplayObject","__globalToLocal",0x7e3cd536,"openfl.display.DisplayObject.__globalToLocal","openfl/display/DisplayObject.hx",1602,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1619___hitTest,"openfl.display.DisplayObject","__hitTest",0x5c63c1ee,"openfl.display.DisplayObject.__hitTest","openfl/display/DisplayObject.hx",1619,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1640___hitTestMask,"openfl.display.DisplayObject","__hitTestMask",0x5c65bdfa,"openfl.display.DisplayObject.__hitTestMask","openfl/display/DisplayObject.hx",1640,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1654___readGraphicsData,"openfl.display.DisplayObject","__readGraphicsData",0xd9311e42,"openfl.display.DisplayObject.__readGraphicsData","openfl/display/DisplayObject.hx",1654,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1661___setParentRenderDirty,"openfl.display.DisplayObject","__setParentRenderDirty",0x844e2287,"openfl.display.DisplayObject.__setParentRenderDirty","openfl/display/DisplayObject.hx",1661,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1672___setRenderDirty,"openfl.display.DisplayObject","__setRenderDirty",0x7766cdd1,"openfl.display.DisplayObject.__setRenderDirty","openfl/display/DisplayObject.hx",1672,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1681___setStageReference,"openfl.display.DisplayObject","__setStageReference",0xda522b58,"openfl.display.DisplayObject.__setStageReference","openfl/display/DisplayObject.hx",1681,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1686___setTransformDirty,"openfl.display.DisplayObject","__setTransformDirty",0x7e906131,"openfl.display.DisplayObject.__setTransformDirty","openfl/display/DisplayObject.hx",1686,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1697___setWorldTransformInvalid,"openfl.display.DisplayObject","__setWorldTransformInvalid",0x82c84692,"openfl.display.DisplayObject.__setWorldTransformInvalid","openfl/display/DisplayObject.hx",1697,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1700___stopAllMovieClips,"openfl.display.DisplayObject","__stopAllMovieClips",0x3954cfdb,"openfl.display.DisplayObject.__stopAllMovieClips","openfl/display/DisplayObject.hx",1700,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1703___update,"openfl.display.DisplayObject","__update",0x3f3ecc80,"openfl.display.DisplayObject.__update","openfl/display/DisplayObject.hx",1703,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1828___updateTransforms,"openfl.display.DisplayObject","__updateTransforms",0x37510227,"openfl.display.DisplayObject.__updateTransforms","openfl/display/DisplayObject.hx",1828,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1871_get_alpha,"openfl.display.DisplayObject","get_alpha",0x5dd6147e,"openfl.display.DisplayObject.get_alpha","openfl/display/DisplayObject.hx",1871,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1875_set_alpha,"openfl.display.DisplayObject","set_alpha",0x4127008a,"openfl.display.DisplayObject.set_alpha","openfl/display/DisplayObject.hx",1875,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1885_get_blendMode,"openfl.display.DisplayObject","get_blendMode",0xee046174,"openfl.display.DisplayObject.get_blendMode","openfl/display/DisplayObject.hx",1885,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1889_set_blendMode,"openfl.display.DisplayObject","set_blendMode",0x330a4380,"openfl.display.DisplayObject.set_blendMode","openfl/display/DisplayObject.hx",1889,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1898_get_cacheAsBitmap,"openfl.display.DisplayObject","get_cacheAsBitmap",0xa5311003,"openfl.display.DisplayObject.get_cacheAsBitmap","openfl/display/DisplayObject.hx",1898,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1902_set_cacheAsBitmap,"openfl.display.DisplayObject","set_cacheAsBitmap",0xc89ee80f,"openfl.display.DisplayObject.set_cacheAsBitmap","openfl/display/DisplayObject.hx",1902,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1913_get_cacheAsBitmapMatrix,"openfl.display.DisplayObject","get_cacheAsBitmapMatrix",0xe47a1ea4,"openfl.display.DisplayObject.get_cacheAsBitmapMatrix","openfl/display/DisplayObject.hx",1913,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1917_set_cacheAsBitmapMatrix,"openfl.display.DisplayObject","set_cacheAsBitmapMatrix",0xe6db87b0,"openfl.display.DisplayObject.set_cacheAsBitmapMatrix","openfl/display/DisplayObject.hx",1917,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1924_get_filters,"openfl.display.DisplayObject","get_filters",0x661396db,"openfl.display.DisplayObject.get_filters","openfl/display/DisplayObject.hx",1924,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1935_set_filters,"openfl.display.DisplayObject","set_filters",0x70809de7,"openfl.display.DisplayObject.set_filters","openfl/display/DisplayObject.hx",1935,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1962_get_height,"openfl.display.DisplayObject","get_height",0x7d8c16c7,"openfl.display.DisplayObject.get_height","openfl/display/DisplayObject.hx",1962,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1971_set_height,"openfl.display.DisplayObject","set_height",0x8109b53b,"openfl.display.DisplayObject.set_height","openfl/display/DisplayObject.hx",1971,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1994_get_loaderInfo,"openfl.display.DisplayObject","get_loaderInfo",0x6805b101,"openfl.display.DisplayObject.get_loaderInfo","openfl/display/DisplayObject.hx",1994,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2005_get_mask,"openfl.display.DisplayObject","get_mask",0xd81ad7cc,"openfl.display.DisplayObject.get_mask","openfl/display/DisplayObject.hx",2005,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2009_set_mask,"openfl.display.DisplayObject","set_mask",0x86783140,"openfl.display.DisplayObject.set_mask","openfl/display/DisplayObject.hx",2009,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2045_get_mouseX,"openfl.display.DisplayObject","get_mouseX",0x474e5973,"openfl.display.DisplayObject.get_mouseX","openfl/display/DisplayObject.hx",2045,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2053_get_mouseY,"openfl.display.DisplayObject","get_mouseY",0x474e5974,"openfl.display.DisplayObject.get_mouseY","openfl/display/DisplayObject.hx",2053,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2062_get_name,"openfl.display.DisplayObject","get_name",0xd8c4092b,"openfl.display.DisplayObject.get_name","openfl/display/DisplayObject.hx",2062,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2067_set_name,"openfl.display.DisplayObject","set_name",0x8721629f,"openfl.display.DisplayObject.set_name","openfl/display/DisplayObject.hx",2067,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2071_get_root,"openfl.display.DisplayObject","get_root",0xdb738502,"openfl.display.DisplayObject.get_root","openfl/display/DisplayObject.hx",2071,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2082_get_rotation,"openfl.display.DisplayObject","get_rotation",0xdf0fc41e,"openfl.display.DisplayObject.get_rotation","openfl/display/DisplayObject.hx",2082,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2086_set_rotation,"openfl.display.DisplayObject","set_rotation",0xf408e792,"openfl.display.DisplayObject.set_rotation","openfl/display/DisplayObject.hx",2086,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2106_get_scale9Grid,"openfl.display.DisplayObject","get_scale9Grid",0x40434fb5,"openfl.display.DisplayObject.get_scale9Grid","openfl/display/DisplayObject.hx",2106,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2116_set_scale9Grid,"openfl.display.DisplayObject","set_scale9Grid",0x60633829,"openfl.display.DisplayObject.set_scale9Grid","openfl/display/DisplayObject.hx",2116,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2137_get_scaleX,"openfl.display.DisplayObject","get_scaleX",0xb765f96e,"openfl.display.DisplayObject.get_scaleX","openfl/display/DisplayObject.hx",2137,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2141_set_scaleX,"openfl.display.DisplayObject","set_scaleX",0xbae397e2,"openfl.display.DisplayObject.set_scaleX","openfl/display/DisplayObject.hx",2141,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2171_get_scaleY,"openfl.display.DisplayObject","get_scaleY",0xb765f96f,"openfl.display.DisplayObject.get_scaleY","openfl/display/DisplayObject.hx",2171,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2175_set_scaleY,"openfl.display.DisplayObject","set_scaleY",0xbae397e3,"openfl.display.DisplayObject.set_scaleY","openfl/display/DisplayObject.hx",2175,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2204_get_scrollRect,"openfl.display.DisplayObject","get_scrollRect",0xba87dab1,"openfl.display.DisplayObject.get_scrollRect","openfl/display/DisplayObject.hx",2204,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2214_set_scrollRect,"openfl.display.DisplayObject","set_scrollRect",0xdaa7c325,"openfl.display.DisplayObject.set_scrollRect","openfl/display/DisplayObject.hx",2214,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2240_get_shader,"openfl.display.DisplayObject","get_shader",0x9860ce05,"openfl.display.DisplayObject.get_shader","openfl/display/DisplayObject.hx",2240,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2244_set_shader,"openfl.display.DisplayObject","set_shader",0x9bde6c79,"openfl.display.DisplayObject.set_shader","openfl/display/DisplayObject.hx",2244,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2251_get_transform,"openfl.display.DisplayObject","get_transform",0x275faa8c,"openfl.display.DisplayObject.get_transform","openfl/display/DisplayObject.hx",2251,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2261_set_transform,"openfl.display.DisplayObject","set_transform",0x6c658c98,"openfl.display.DisplayObject.set_transform","openfl/display/DisplayObject.hx",2261,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2287_get_visible,"openfl.display.DisplayObject","get_visible",0xfff16d92,"openfl.display.DisplayObject.get_visible","openfl/display/DisplayObject.hx",2287,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2291_set_visible,"openfl.display.DisplayObject","set_visible",0x0a5e749e,"openfl.display.DisplayObject.set_visible","openfl/display/DisplayObject.hx",2291,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2297_get_width,"openfl.display.DisplayObject","get_width",0x06a22326,"openfl.display.DisplayObject.get_width","openfl/display/DisplayObject.hx",2297,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2306_set_width,"openfl.display.DisplayObject","set_width",0xe9f30f32,"openfl.display.DisplayObject.set_width","openfl/display/DisplayObject.hx",2306,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2330_get_x,"openfl.display.DisplayObject","get_x",0xc67a5d98,"openfl.display.DisplayObject.get_x","openfl/display/DisplayObject.hx",2330,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2334_set_x,"openfl.display.DisplayObject","set_x",0xaf4953a4,"openfl.display.DisplayObject.set_x","openfl/display/DisplayObject.hx",2334,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2341_get_y,"openfl.display.DisplayObject","get_y",0xc67a5d99,"openfl.display.DisplayObject.get_y","openfl/display/DisplayObject.hx",2341,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_2345_set_y,"openfl.display.DisplayObject","set_y",0xaf4953a5,"openfl.display.DisplayObject.set_y","openfl/display/DisplayObject.hx",2345,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_1359___calculateAbsoluteTransform,"openfl.display.DisplayObject","__calculateAbsoluteTransform",0xba65dba6,"openfl.display.DisplayObject.__calculateAbsoluteTransform","openfl/display/DisplayObject.hx",1359,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_182_boot,"openfl.display.DisplayObject","boot",0x26f12809,"openfl.display.DisplayObject.boot","openfl/display/DisplayObject.hx",182,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_184_boot,"openfl.display.DisplayObject","boot",0x26f12809,"openfl.display.DisplayObject.boot","openfl/display/DisplayObject.hx",184,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_186_boot,"openfl.display.DisplayObject","boot",0x26f12809,"openfl.display.DisplayObject.boot","openfl/display/DisplayObject.hx",186,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_189_boot,"openfl.display.DisplayObject","boot",0x26f12809,"openfl.display.DisplayObject.boot","openfl/display/DisplayObject.hx",189,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_191_boot,"openfl.display.DisplayObject","boot",0x26f12809,"openfl.display.DisplayObject.boot","openfl/display/DisplayObject.hx",191,0xc7539829)
HX_LOCAL_STACK_FRAME(_hx_pos_26400284d5456c16_192_boot,"openfl.display.DisplayObject","boot",0x26f12809,"openfl.display.DisplayObject.boot","openfl/display/DisplayObject.hx",192,0xc7539829)
namespace openfl{
namespace display{

void DisplayObject_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_1050_new)
HXLINE(1051)		super::__construct(null());
HXLINE(1053)		this->_hx___drawableType = 1;
HXLINE(1055)		this->_hx___alpha = ( (Float)(1) );
HXLINE(1056)		this->_hx___blendMode = 10;
HXLINE(1057)		this->_hx___cacheAsBitmap = false;
HXLINE(1058)		this->_hx___transform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(1059)		this->_hx___visible = true;
HXLINE(1061)		this->_hx___rotation = ( (Float)(0) );
HXLINE(1062)		this->_hx___rotationSine = ( (Float)(0) );
HXLINE(1063)		this->_hx___rotationCosine = ( (Float)(1) );
HXLINE(1064)		this->_hx___scaleX = ( (Float)(1) );
HXLINE(1065)		this->_hx___scaleY = ( (Float)(1) );
HXLINE(1067)		this->_hx___worldAlpha = ( (Float)(1) );
HXLINE(1068)		this->_hx___worldBlendMode = 10;
HXLINE(1069)		this->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(1070)		this->_hx___worldColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(1071)		this->_hx___renderTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(1072)		this->_hx___worldVisible = true;
HXLINE(1074)		this->set_name((HX_("instance",95,1f,e1,59) + ++::openfl::display::DisplayObject_obj::_hx___instanceCount));
HXLINE(1076)		if (::hx::IsNotNull( ::openfl::display::DisplayObject_obj::_hx___initStage )) {
HXLINE(1078)			this->stage = ::openfl::display::DisplayObject_obj::_hx___initStage;
HXLINE(1079)			::openfl::display::DisplayObject_obj::_hx___initStage = null();
HXLINE(1080)			this->stage->addChild(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic DisplayObject_obj::__CreateEmpty() { return new DisplayObject_obj; }

void *DisplayObject_obj::_hx_vtable = 0;

Dynamic DisplayObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObject_obj > _hx_result = new DisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x6b353933;
	}
}

static ::openfl::display::IBitmapDrawable_obj _hx_openfl_display_DisplayObject__hx_openfl_display_IBitmapDrawable= {
	( void (::hx::Object::*)( ::openfl::geom::Rectangle, ::openfl::geom::Matrix))&::openfl::display::DisplayObject_obj::_hx___getBounds,
	( void (::hx::Object::*)(bool,bool))&::openfl::display::DisplayObject_obj::_hx___update,
	( void (::hx::Object::*)( ::openfl::geom::Matrix))&::openfl::display::DisplayObject_obj::_hx___updateTransforms,
};

void *DisplayObject_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc1c6fbe4: return &_hx_openfl_display_DisplayObject__hx_openfl_display_IBitmapDrawable;
	}
	return super::_hx_getInterface(inHash);
}

void DisplayObject_obj::addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_1087_addEventListener)
HXLINE(1088)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("activate",b3,1b,ac,e5)) ||  (_hx_switch_0==HX_("deactivate",34,5c,01,3c)) ||  (_hx_switch_0==HX_("enterFrame",f5,03,50,02)) ||  (_hx_switch_0==HX_("exitFrame",2f,64,48,12)) ||  (_hx_switch_0==HX_("frameConstructed",09,89,5d,98)) ||  (_hx_switch_0==HX_("render",56,6b,29,05)) ){
HXLINE(1091)			if (!(::openfl::display::DisplayObject_obj::_hx___broadcastEvents->exists(type))) {
HXLINE(1093)				::openfl::display::DisplayObject_obj::_hx___broadcastEvents->set(type,::Array_obj< ::Dynamic>::__new(0));
            			}
HXLINE(1096)			::Array< ::Dynamic> dispatchers = ( (::Array< ::Dynamic>)(::openfl::display::DisplayObject_obj::_hx___broadcastEvents->get(type)) );
HXLINE(1098)			if ((dispatchers->indexOf(::hx::ObjectPtr<OBJ_>(this),null()) == -1)) {
HXLINE(1100)				dispatchers->push(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE(1090)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("clearDOM",f5,22,08,31)) ||  (_hx_switch_0==HX_("renderCairo",52,5d,ca,0c)) ||  (_hx_switch_0==HX_("renderCanvas",ce,58,98,27)) ||  (_hx_switch_0==HX_("renderDOM",cc,ac,57,cd)) ||  (_hx_switch_0==HX_("renderOpenGL",65,4c,ea,90)) ){
HXLINE(1104)			if (::hx::IsNull( this->_hx___customRenderEvent )) {
HXLINE(1106)				this->_hx___customRenderEvent =  ::openfl::events::RenderEvent_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(1107)				this->_hx___customRenderEvent->objectColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(1108)				this->_hx___customRenderEvent->objectMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(1109)				this->_hx___customRenderClear = true;
            			}
HXLINE(1104)			goto _hx_goto_1;
            		}
            		/* default */{
            		}
            		_hx_goto_1:;
HXLINE(1115)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
            	}


bool DisplayObject_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1119_dispatchEvent)
HXLINE(1120)		if (::Std_obj::isOfType(event,::hx::ClassOf< ::openfl::events::MouseEvent >())) {
HXLINE(1122)			 ::openfl::events::MouseEvent mouseEvent = ( ( ::openfl::events::MouseEvent)(event) );
HXLINE(1123)			 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN(1123)			mouseEvent->stageX = (((mouseEvent->localX * _this->a) + (mouseEvent->localY * _this->c)) + _this->tx);
HXLINE(1124)			 ::openfl::geom::Matrix _this1 = this->_hx___getRenderTransform();
HXDLIN(1124)			mouseEvent->stageY = (((mouseEvent->localX * _this1->b) + (mouseEvent->localY * _this1->d)) + _this1->ty);
            		}
            		else {
HXLINE(1126)			if (::Std_obj::isOfType(event,::hx::ClassOf< ::openfl::events::TouchEvent >())) {
HXLINE(1128)				 ::openfl::events::TouchEvent touchEvent = ( ( ::openfl::events::TouchEvent)(event) );
HXLINE(1129)				 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN(1129)				touchEvent->stageX = (((touchEvent->localX * _this->a) + (touchEvent->localY * _this->c)) + _this->tx);
HXLINE(1130)				 ::openfl::geom::Matrix _this1 = this->_hx___getRenderTransform();
HXDLIN(1130)				touchEvent->stageY = (((touchEvent->localX * _this1->b) + (touchEvent->localY * _this1->d)) + _this1->ty);
            			}
            		}
HXLINE(1133)		event->target = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1135)		return this->_hx___dispatchWithCapture(event);
            	}


 ::openfl::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_1163_getBounds)
HXLINE(1164)		 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(1166)		bool _hx_tmp;
HXDLIN(1166)		if (::hx::IsNotNull( targetCoordinateSpace )) {
HXLINE(1166)			_hx_tmp = ::hx::IsInstanceNotEq( targetCoordinateSpace,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE(1166)			_hx_tmp = false;
            		}
HXDLIN(1166)		if (_hx_tmp) {
HXLINE(1168)			matrix->copyFrom(this->_hx___getWorldTransform());
HXLINE(1170)			 ::openfl::geom::Matrix targetMatrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(1172)			targetMatrix->copyFrom(targetCoordinateSpace->_hx___getWorldTransform());
HXLINE(1173)			targetMatrix->invert();
HXLINE(1175)			matrix->concat(targetMatrix);
HXLINE(1177)			::openfl::geom::Matrix_obj::_hx___pool->release(targetMatrix);
            		}
            		else {
HXLINE(1181)			matrix->identity();
            		}
HXLINE(1184)		 ::openfl::geom::Rectangle bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(1185)		this->_hx___getBounds(bounds,matrix);
HXLINE(1187)		::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE(1189)		return bounds;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

 ::openfl::geom::Rectangle DisplayObject_obj::getRect( ::openfl::display::DisplayObject targetCoordinateSpace){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1213_getRect)
HXDLIN(1213)		return this->getBounds(targetCoordinateSpace);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

 ::openfl::geom::Point DisplayObject_obj::globalToLocal( ::openfl::geom::Point pos){
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_1235_globalToLocal)
HXDLIN(1235)		return this->_hx___globalToLocal(pos, ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::display::DisplayObject obj){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1249_hitTestObject)
HXLINE(1250)		bool _hx_tmp;
HXDLIN(1250)		bool _hx_tmp1;
HXDLIN(1250)		if (::hx::IsNotNull( obj )) {
HXLINE(1250)			_hx_tmp1 = ::hx::IsNotNull( obj->parent );
            		}
            		else {
HXLINE(1250)			_hx_tmp1 = false;
            		}
HXDLIN(1250)		if (_hx_tmp1) {
HXLINE(1250)			_hx_tmp = ::hx::IsNotNull( this->parent );
            		}
            		else {
HXLINE(1250)			_hx_tmp = false;
            		}
HXDLIN(1250)		if (_hx_tmp) {
HXLINE(1252)			 ::openfl::geom::Rectangle currentBounds = this->getBounds(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1253)			 ::openfl::geom::Rectangle targetBounds = obj->getBounds(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1255)			return currentBounds->intersects(targetBounds);
            		}
HXLINE(1258)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint(Float x,Float y,::hx::Null< bool >  __o_shapeFlag){
            		bool shapeFlag = __o_shapeFlag.Default(false);
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1279_hitTestPoint)
HXDLIN(1279)		if (::hx::IsNotNull( this->stage )) {
HXLINE(1281)			return this->_hx___hitTest(x,y,shapeFlag,null(),false,::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE(1285)			return false;
            		}
HXLINE(1279)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

void DisplayObject_obj::invalidate(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1295_invalidate)
HXDLIN(1295)		if (!(this->_hx___renderDirty)) {
HXDLIN(1295)			this->_hx___renderDirty = true;
HXDLIN(1295)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,invalidate,(void))

 ::openfl::geom::Point DisplayObject_obj::localToGlobal( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1323_localToGlobal)
HXDLIN(1323)		return this->_hx___getRenderTransform()->transformPoint(point);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

void DisplayObject_obj::removeEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1330_removeEventListener)
HXLINE(1331)		this->super::removeEventListener(type,listener,useCapture);
HXLINE(1333)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("activate",b3,1b,ac,e5)) ||  (_hx_switch_0==HX_("deactivate",34,5c,01,3c)) ||  (_hx_switch_0==HX_("enterFrame",f5,03,50,02)) ||  (_hx_switch_0==HX_("exitFrame",2f,64,48,12)) ||  (_hx_switch_0==HX_("frameConstructed",09,89,5d,98)) ||  (_hx_switch_0==HX_("render",56,6b,29,05)) ){
HXLINE(1336)			if (!(this->hasEventListener(type))) {
HXLINE(1338)				if (::openfl::display::DisplayObject_obj::_hx___broadcastEvents->exists(type)) {
HXLINE(1340)					( (::Array< ::Dynamic>)(::openfl::display::DisplayObject_obj::_hx___broadcastEvents->get(type)) )->remove(::hx::ObjectPtr<OBJ_>(this));
            				}
            			}
HXLINE(1336)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("clearDOM",f5,22,08,31)) ||  (_hx_switch_0==HX_("renderCairo",52,5d,ca,0c)) ||  (_hx_switch_0==HX_("renderCanvas",ce,58,98,27)) ||  (_hx_switch_0==HX_("renderDOM",cc,ac,57,cd)) ||  (_hx_switch_0==HX_("renderOpenGL",65,4c,ea,90)) ){
HXLINE(1345)			bool _hx_tmp;
HXDLIN(1345)			bool _hx_tmp1;
HXDLIN(1345)			bool _hx_tmp2;
HXDLIN(1345)			bool _hx_tmp3;
HXDLIN(1345)			if (!(this->hasEventListener(HX_("clearDOM",f5,22,08,31)))) {
HXLINE(1345)				_hx_tmp3 = !(this->hasEventListener(HX_("renderCairo",52,5d,ca,0c)));
            			}
            			else {
HXLINE(1345)				_hx_tmp3 = false;
            			}
HXDLIN(1345)			if (_hx_tmp3) {
HXLINE(1345)				_hx_tmp2 = !(this->hasEventListener(HX_("renderCanvas",ce,58,98,27)));
            			}
            			else {
HXLINE(1345)				_hx_tmp2 = false;
            			}
HXDLIN(1345)			if (_hx_tmp2) {
HXLINE(1345)				_hx_tmp1 = !(this->hasEventListener(HX_("renderDOM",cc,ac,57,cd)));
            			}
            			else {
HXLINE(1345)				_hx_tmp1 = false;
            			}
HXDLIN(1345)			if (_hx_tmp1) {
HXLINE(1345)				_hx_tmp = !(this->hasEventListener(HX_("renderOpenGL",65,4c,ea,90)));
            			}
            			else {
HXLINE(1345)				_hx_tmp = false;
            			}
HXDLIN(1345)			if (_hx_tmp) {
HXLINE(1351)				this->_hx___customRenderEvent = null();
            			}
HXLINE(1345)			goto _hx_goto_11;
            		}
            		/* default */{
            		}
            		_hx_goto_11:;
            	}


void DisplayObject_obj::_hx___cleanup(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1369___cleanup)
HXLINE(1370)		this->_hx___cairo = null();
HXLINE(1377)		if (::hx::IsNotNull( this->_hx___graphics )) {
HXLINE(1379)			this->_hx___graphics->_hx___cleanup();
            		}
HXLINE(1382)		if (::hx::IsNotNull( this->_hx___cacheBitmap )) {
HXLINE(1384)			this->_hx___cacheBitmap->_hx___cleanup();
HXLINE(1385)			this->_hx___cacheBitmap = null();
            		}
HXLINE(1388)		if (::hx::IsNotNull( this->_hx___cacheBitmapData )) {
HXLINE(1390)			this->_hx___cacheBitmapData->dispose();
HXLINE(1391)			this->_hx___cacheBitmapData = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___cleanup,(void))

bool DisplayObject_obj::_hx___dispatch( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1396___dispatch)
HXLINE(1397)		bool _hx_tmp;
HXDLIN(1397)		if (::hx::IsNotNull( this->_hx___eventMap )) {
HXLINE(1397)			_hx_tmp = this->hasEventListener(event->type);
            		}
            		else {
HXLINE(1397)			_hx_tmp = false;
            		}
HXDLIN(1397)		if (_hx_tmp) {
HXLINE(1399)			bool result = this->super::_hx___dispatchEvent(event);
HXLINE(1401)			if (event->_hx___isCanceled) {
HXLINE(1403)				return true;
            			}
HXLINE(1406)			return result;
            		}
HXLINE(1409)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_hx___dispatch,return )

void DisplayObject_obj::_hx___dispatchChildren( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1412___dispatchChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_hx___dispatchChildren,(void))

bool DisplayObject_obj::_hx___dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1415___dispatchEvent)
HXLINE(1416)		 ::openfl::display::DisplayObjectContainer parent;
HXDLIN(1416)		if (event->bubbles) {
HXLINE(1416)			parent = this->parent;
            		}
            		else {
HXLINE(1416)			parent = null();
            		}
HXLINE(1417)		bool result = this->super::_hx___dispatchEvent(event);
HXLINE(1419)		if (event->_hx___isCanceled) {
HXLINE(1421)			return true;
            		}
HXLINE(1424)		bool _hx_tmp;
HXDLIN(1424)		if (::hx::IsNotNull( parent )) {
HXLINE(1424)			_hx_tmp = ::hx::IsInstanceNotEq( parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE(1424)			_hx_tmp = false;
            		}
HXDLIN(1424)		if (_hx_tmp) {
HXLINE(1426)			event->eventPhase = 3;
HXLINE(1428)			if (::hx::IsNull( event->target )) {
HXLINE(1430)				event->target = ::hx::ObjectPtr<OBJ_>(this);
            			}
HXLINE(1433)			parent->_hx___dispatchEvent(event);
            		}
HXLINE(1436)		return result;
            	}


bool DisplayObject_obj::_hx___dispatchWithCapture( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1440___dispatchWithCapture)
HXLINE(1441)		if (::hx::IsNull( event->target )) {
HXLINE(1443)			event->target = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(1446)		if (::hx::IsNotNull( this->parent )) {
HXLINE(1448)			event->eventPhase = 1;
HXLINE(1450)			if (::hx::IsInstanceEq( this->parent,this->stage )) {
HXLINE(1452)				this->parent->_hx___dispatch(event);
            			}
            			else {
HXLINE(1456)				 ::openfl::_Vector::ObjectVector stack = ::openfl::display::DisplayObject_obj::_hx___tempStack->get().StaticCast<  ::openfl::_Vector::ObjectVector >();
HXLINE(1457)				 ::openfl::display::DisplayObjectContainer parent = this->parent;
HXLINE(1458)				int i = 0;
HXLINE(1460)				while(::hx::IsNotNull( parent )){
HXLINE(1462)					stack->set(i,( ( ::openfl::display::DisplayObject)(parent) )).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE(1463)					parent = parent->parent;
HXLINE(1464)					i = (i + 1);
            				}
HXLINE(1467)				{
HXLINE(1467)					int _g = 0;
HXDLIN(1467)					int _g1 = i;
HXDLIN(1467)					while((_g < _g1)){
HXLINE(1467)						_g = (_g + 1);
HXDLIN(1467)						int j = (_g - 1);
HXLINE(1469)						stack->get(((i - j) - 1)).StaticCast<  ::openfl::display::DisplayObject >()->_hx___dispatch(event);
            					}
            				}
HXLINE(1472)				::openfl::display::DisplayObject_obj::_hx___tempStack->release(stack);
            			}
            		}
HXLINE(1476)		event->eventPhase = 2;
HXLINE(1478)		return this->_hx___dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_hx___dispatchWithCapture,return )

void DisplayObject_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1481___enterFrame)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_hx___enterFrame,(void))

void DisplayObject_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1485___getBounds)
HXDLIN(1485)		if (::hx::IsNotNull( this->_hx___graphics )) {
HXLINE(1487)			this->_hx___graphics->_hx___getBounds(rect,matrix);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,_hx___getBounds,(void))

::String DisplayObject_obj::_hx___getCursor(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1493___getCursor)
HXDLIN(1493)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___getCursor,return )

void DisplayObject_obj::_hx___getFilterBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1497___getFilterBounds)
HXLINE(1498)		this->_hx___getRenderBounds(rect,matrix);
HXLINE(1500)		if (::hx::IsNotNull( this->_hx___filters )) {
HXLINE(1502)			 ::openfl::geom::Rectangle extension = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1504)			{
HXLINE(1504)				int _g = 0;
HXDLIN(1504)				::Array< ::Dynamic> _g1 = this->_hx___filters;
HXDLIN(1504)				while((_g < _g1->length)){
HXLINE(1504)					 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN(1504)					_g = (_g + 1);
HXLINE(1506)					extension->_hx___expand(( (Float)(-(filter->_hx___leftExtension)) ),( (Float)(-(filter->_hx___topExtension)) ),( (Float)((filter->_hx___leftExtension + filter->_hx___rightExtension)) ),( (Float)((filter->_hx___topExtension + filter->_hx___bottomExtension)) ));
            				}
            			}
HXLINE(1513)			 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN(1513)			rect1->width = (rect1->width + extension->width);
HXLINE(1514)			 ::openfl::geom::Rectangle rect2 = rect;
HXDLIN(1514)			rect2->height = (rect2->height + extension->height);
HXLINE(1515)			 ::openfl::geom::Rectangle rect3 = rect;
HXDLIN(1515)			rect3->x = (rect3->x + extension->x);
HXLINE(1516)			 ::openfl::geom::Rectangle rect4 = rect;
HXDLIN(1516)			rect4->y = (rect4->y + extension->y);
HXLINE(1518)			::openfl::geom::Rectangle_obj::_hx___pool->release(extension);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,_hx___getFilterBounds,(void))

bool DisplayObject_obj::_hx___getInteractive(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1524___getInteractive)
HXDLIN(1524)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_hx___getInteractive,return )

void DisplayObject_obj::_hx___getLocalBounds( ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1528___getLocalBounds)
HXLINE(1533)		this->_hx___getBounds(rect,this->_hx___transform);
HXLINE(1538)		 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN(1538)		rect1->x = (rect1->x - this->_hx___transform->tx);
HXLINE(1539)		 ::openfl::geom::Rectangle rect2 = rect;
HXDLIN(1539)		rect2->y = (rect2->y - this->_hx___transform->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_hx___getLocalBounds,(void))

void DisplayObject_obj::_hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1544___getRenderBounds)
HXDLIN(1544)		if (::hx::IsNull( this->_hx___scrollRect )) {
HXLINE(1546)			this->_hx___getBounds(rect,matrix);
            		}
            		else {
HXLINE(1552)			 ::openfl::geom::Rectangle r = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1553)			r->copyFrom(this->_hx___scrollRect);
HXLINE(1554)			r->_hx___transform(r,matrix);
HXLINE(1555)			rect->_hx___expand(r->x,r->y,r->width,r->height);
HXLINE(1556)			::openfl::geom::Rectangle_obj::_hx___pool->release(r);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,_hx___getRenderBounds,(void))

 ::openfl::geom::Matrix DisplayObject_obj::_hx___getRenderTransform(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1561___getRenderTransform)
HXLINE(1562)		this->_hx___getWorldTransform();
HXLINE(1563)		return this->_hx___renderTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___getRenderTransform,return )

 ::openfl::geom::Matrix DisplayObject_obj::_hx___getWorldTransform(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1567___getWorldTransform)
HXLINE(1568)		bool transformDirty;
HXDLIN(1568)		if (!(this->_hx___transformDirty)) {
HXLINE(1568)			transformDirty = this->_hx___worldTransformInvalid;
            		}
            		else {
HXLINE(1568)			transformDirty = true;
            		}
HXLINE(1570)		if (transformDirty) {
HXLINE(1572)			::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1573)			 ::openfl::display::DisplayObject current = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1575)			if (::hx::IsNull( this->parent )) {
HXLINE(1577)				this->_hx___update(true,false);
            			}
            			else {
HXLINE(1581)				while(::hx::IsInstanceNotEq( current,this->stage )){
HXLINE(1583)					list->push(current);
HXLINE(1584)					current = current->parent;
HXLINE(1586)					if (::hx::IsNull( current )) {
HXLINE(1586)						goto _hx_goto_29;
            					}
            				}
            				_hx_goto_29:;
            			}
HXLINE(1590)			int i = list->length;
HXLINE(1591)			while(true){
HXLINE(1591)				i = (i - 1);
HXDLIN(1591)				if (!((i >= 0))) {
HXLINE(1591)					goto _hx_goto_30;
            				}
HXLINE(1593)				current = list->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE(1594)				current->_hx___update(true,false);
            			}
            			_hx_goto_30:;
            		}
HXLINE(1598)		return this->_hx___worldTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___getWorldTransform,return )

 ::openfl::geom::Point DisplayObject_obj::_hx___globalToLocal( ::openfl::geom::Point global, ::openfl::geom::Point local){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1602___globalToLocal)
HXLINE(1603)		this->_hx___getRenderTransform();
HXLINE(1605)		if (::hx::IsInstanceEq( global,local )) {
HXLINE(1607)			 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(1607)			Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(1607)			if ((norm == 0)) {
HXLINE(1607)				global->x = -(_this->tx);
HXDLIN(1607)				global->y = -(_this->ty);
            			}
            			else {
HXLINE(1607)				Float px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - global->y)) + (_this->d * (global->x - _this->tx))));
HXDLIN(1607)				global->y = ((((Float)1.0) / norm) * ((_this->a * (global->y - _this->ty)) + (_this->b * (_this->tx - global->x))));
HXDLIN(1607)				global->x = px;
            			}
            		}
            		else {
HXLINE(1611)			 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(1611)			Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(1611)			Float _hx_tmp;
HXDLIN(1611)			if ((norm == 0)) {
HXLINE(1611)				_hx_tmp = -(_this->tx);
            			}
            			else {
HXLINE(1611)				_hx_tmp = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - global->y)) + (_this->d * (global->x - _this->tx))));
            			}
HXDLIN(1611)			local->x = _hx_tmp;
HXLINE(1612)			 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN(1612)			Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(1612)			Float _hx_tmp1;
HXDLIN(1612)			if ((norm1 == 0)) {
HXLINE(1612)				_hx_tmp1 = -(_this1->ty);
            			}
            			else {
HXLINE(1612)				_hx_tmp1 = ((((Float)1.0) / norm1) * ((_this1->a * (global->y - _this1->ty)) + (_this1->b * (_this1->tx - global->x))));
            			}
HXDLIN(1612)			local->y = _hx_tmp1;
            		}
HXLINE(1615)		return local;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,_hx___globalToLocal,return )

bool DisplayObject_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1619___hitTest)
HXLINE(1620)		if (::hx::IsNotNull( this->_hx___graphics )) {
HXLINE(1622)			bool _hx_tmp;
HXDLIN(1622)			if (hitObject->_hx___visible) {
HXLINE(1622)				_hx_tmp = this->_hx___isMask;
            			}
            			else {
HXLINE(1622)				_hx_tmp = true;
            			}
HXDLIN(1622)			if (_hx_tmp) {
HXLINE(1622)				return false;
            			}
HXLINE(1623)			bool _hx_tmp1;
HXDLIN(1623)			if (::hx::IsNotNull( this->get_mask() )) {
HXLINE(1623)				_hx_tmp1 = !(this->get_mask()->_hx___hitTestMask(x,y));
            			}
            			else {
HXLINE(1623)				_hx_tmp1 = false;
            			}
HXDLIN(1623)			if (_hx_tmp1) {
HXLINE(1623)				return false;
            			}
HXLINE(1625)			 ::openfl::display::Graphics _hx_tmp2 = this->_hx___graphics;
HXDLIN(1625)			if (_hx_tmp2->_hx___hitTest(x,y,shapeFlag,this->_hx___getRenderTransform())) {
HXLINE(1627)				bool _hx_tmp;
HXDLIN(1627)				if (::hx::IsNotNull( stack )) {
HXLINE(1627)					_hx_tmp = !(interactiveOnly);
            				}
            				else {
HXLINE(1627)					_hx_tmp = false;
            				}
HXDLIN(1627)				if (_hx_tmp) {
HXLINE(1629)					stack->push(hitObject);
            				}
HXLINE(1632)				return true;
            			}
            		}
HXLINE(1636)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC6(DisplayObject_obj,_hx___hitTest,return )

bool DisplayObject_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1640___hitTestMask)
HXLINE(1641)		if (::hx::IsNotNull( this->_hx___graphics )) {
HXLINE(1643)			 ::openfl::display::Graphics _hx_tmp = this->_hx___graphics;
HXDLIN(1643)			if (_hx_tmp->_hx___hitTest(x,y,true,this->_hx___getRenderTransform())) {
HXLINE(1645)				return true;
            			}
            		}
HXLINE(1649)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,_hx___hitTestMask,return )

void DisplayObject_obj::_hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1654___readGraphicsData)
HXDLIN(1654)		if (::hx::IsNotNull( this->_hx___graphics )) {
HXLINE(1656)			this->_hx___graphics->_hx___readGraphicsData(graphicsData);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,_hx___readGraphicsData,(void))

void DisplayObject_obj::_hx___setParentRenderDirty(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1661___setParentRenderDirty)
HXLINE(1662)		 ::openfl::display::DisplayObject renderParent;
HXDLIN(1662)		if (::hx::IsNotNull( this->_hx___renderParent )) {
HXLINE(1662)			renderParent = this->_hx___renderParent;
            		}
            		else {
HXLINE(1662)			renderParent = this->parent;
            		}
HXLINE(1663)		bool _hx_tmp;
HXDLIN(1663)		if (::hx::IsNotNull( renderParent )) {
HXLINE(1663)			_hx_tmp = !(renderParent->_hx___renderDirty);
            		}
            		else {
HXLINE(1663)			_hx_tmp = false;
            		}
HXDLIN(1663)		if (_hx_tmp) {
HXLINE(1665)			renderParent->_hx___renderDirty = true;
HXLINE(1666)			renderParent->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___setParentRenderDirty,(void))

void DisplayObject_obj::_hx___setRenderDirty(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1672___setRenderDirty)
HXDLIN(1672)		if (!(this->_hx___renderDirty)) {
HXLINE(1674)			this->_hx___renderDirty = true;
HXLINE(1675)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___setRenderDirty,(void))

void DisplayObject_obj::_hx___setStageReference( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1681___setStageReference)
HXDLIN(1681)		this->stage = stage;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_hx___setStageReference,(void))

void DisplayObject_obj::_hx___setTransformDirty(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1686___setTransformDirty)
HXDLIN(1686)		if (!(this->_hx___transformDirty)) {
HXLINE(1688)			this->_hx___transformDirty = true;
HXLINE(1690)			this->_hx___setWorldTransformInvalid();
HXLINE(1691)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___setTransformDirty,(void))

void DisplayObject_obj::_hx___setWorldTransformInvalid(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1697___setWorldTransformInvalid)
HXDLIN(1697)		this->_hx___worldTransformInvalid = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___setWorldTransformInvalid,(void))

void DisplayObject_obj::_hx___stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1700___stopAllMovieClips)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,_hx___stopAllMovieClips,(void))

void DisplayObject_obj::_hx___update(bool transformOnly,bool updateChildren){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1703___update)
HXLINE(1704)		 ::openfl::display::DisplayObject renderParent;
HXDLIN(1704)		if (::hx::IsNotNull( this->_hx___renderParent )) {
HXLINE(1704)			renderParent = this->_hx___renderParent;
            		}
            		else {
HXLINE(1704)			renderParent = this->parent;
            		}
HXLINE(1705)		bool _hx_tmp;
HXDLIN(1705)		if (this->_hx___isMask) {
HXLINE(1705)			_hx_tmp = ::hx::IsNull( renderParent );
            		}
            		else {
HXLINE(1705)			_hx_tmp = false;
            		}
HXDLIN(1705)		if (_hx_tmp) {
HXLINE(1705)			renderParent = this->_hx___maskTarget;
            		}
HXLINE(1706)		bool _hx_tmp1;
HXDLIN(1706)		bool _hx_tmp2;
HXDLIN(1706)		bool _hx_tmp3;
HXDLIN(1706)		bool _hx_tmp4;
HXDLIN(1706)		if (this->_hx___visible) {
HXLINE(1706)			_hx_tmp4 = (this->_hx___scaleX != 0);
            		}
            		else {
HXLINE(1706)			_hx_tmp4 = false;
            		}
HXDLIN(1706)		if (_hx_tmp4) {
HXLINE(1706)			_hx_tmp3 = (this->_hx___scaleY != 0);
            		}
            		else {
HXLINE(1706)			_hx_tmp3 = false;
            		}
HXDLIN(1706)		if (_hx_tmp3) {
HXLINE(1706)			_hx_tmp2 = !(this->_hx___isMask);
            		}
            		else {
HXLINE(1706)			_hx_tmp2 = false;
            		}
HXDLIN(1706)		if (_hx_tmp2) {
HXLINE(1706)			if (::hx::IsNotNull( renderParent )) {
HXLINE(1706)				_hx_tmp1 = !(renderParent->_hx___isMask);
            			}
            			else {
HXLINE(1706)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(1706)			_hx_tmp1 = false;
            		}
HXDLIN(1706)		this->_hx___renderable = _hx_tmp1;
HXLINE(1707)		this->_hx___updateTransforms(null());
HXLINE(1711)		this->_hx___transformDirty = false;
HXLINE(1715)		this->_hx___worldTransformInvalid = false;
HXLINE(1717)		if (!(transformOnly)) {
HXLINE(1733)			if (::hx::IsNotNull( renderParent )) {
HXLINE(1747)				Float _hx_tmp = this->get_alpha();
HXDLIN(1747)				this->_hx___worldAlpha = (_hx_tmp * renderParent->_hx___worldAlpha);
HXLINE(1750)				if (::hx::IsNotNull( this->_hx___objectTransform )) {
HXLINE(1752)					this->_hx___worldColorTransform->_hx___copyFrom(this->_hx___objectTransform->_hx___colorTransform);
HXLINE(1753)					this->_hx___worldColorTransform->_hx___combine(renderParent->_hx___worldColorTransform);
            				}
            				else {
HXLINE(1757)					this->_hx___worldColorTransform->_hx___copyFrom(renderParent->_hx___worldColorTransform);
            				}
HXLINE(1760)				bool _hx_tmp1;
HXDLIN(1760)				if (::hx::IsNotNull( this->_hx___blendMode )) {
HXLINE(1760)					_hx_tmp1 = ::hx::IsEq( this->_hx___blendMode,10 );
            				}
            				else {
HXLINE(1760)					_hx_tmp1 = true;
            				}
HXDLIN(1760)				if (_hx_tmp1) {
HXLINE(1763)					this->_hx___worldBlendMode = renderParent->_hx___worldBlendMode;
            				}
            				else {
HXLINE(1767)					this->_hx___worldBlendMode = this->_hx___blendMode;
            				}
HXLINE(1770)				if (::hx::IsNull( this->_hx___shader )) {
HXLINE(1772)					this->_hx___worldShader = renderParent->_hx___shader;
            				}
            				else {
HXLINE(1776)					this->_hx___worldShader = this->_hx___shader;
            				}
HXLINE(1779)				if (::hx::IsNull( this->_hx___scale9Grid )) {
HXLINE(1781)					this->_hx___worldScale9Grid = renderParent->_hx___scale9Grid;
            				}
            				else {
HXLINE(1785)					this->_hx___worldScale9Grid = this->_hx___scale9Grid;
            				}
            			}
            			else {
HXLINE(1790)				this->_hx___worldAlpha = this->get_alpha();
HXLINE(1800)				if (::hx::IsNotNull( this->_hx___objectTransform )) {
HXLINE(1802)					this->_hx___worldColorTransform->_hx___copyFrom(this->_hx___objectTransform->_hx___colorTransform);
            				}
            				else {
HXLINE(1806)					this->_hx___worldColorTransform->_hx___identity();
            				}
HXLINE(1809)				this->_hx___worldBlendMode = this->_hx___blendMode;
HXLINE(1810)				this->_hx___worldShader = this->_hx___shader;
HXLINE(1811)				this->_hx___worldScale9Grid = this->_hx___scale9Grid;
            			}
            		}
HXLINE(1821)		bool _hx_tmp5;
HXDLIN(1821)		if (updateChildren) {
HXLINE(1821)			_hx_tmp5 = ::hx::IsNotNull( this->get_mask() );
            		}
            		else {
HXLINE(1821)			_hx_tmp5 = false;
            		}
HXDLIN(1821)		if (_hx_tmp5) {
HXLINE(1823)			this->get_mask()->_hx___update(transformOnly,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,_hx___update,(void))

void DisplayObject_obj::_hx___updateTransforms( ::openfl::geom::Matrix overrideTransform){
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_1828___updateTransforms)
HXLINE(1829)		bool overrided = ::hx::IsNotNull( overrideTransform );
HXLINE(1830)		 ::openfl::geom::Matrix local;
HXDLIN(1830)		if (overrided) {
HXLINE(1830)			local = overrideTransform;
            		}
            		else {
HXLINE(1830)			local = this->_hx___transform;
            		}
HXLINE(1832)		if (::hx::IsNull( this->_hx___worldTransform )) {
HXLINE(1834)			this->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
HXLINE(1837)		if (::hx::IsNull( this->_hx___renderTransform )) {
HXLINE(1839)			this->_hx___renderTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
HXLINE(1842)		 ::openfl::display::DisplayObject renderParent;
HXDLIN(1842)		if (::hx::IsNotNull( this->_hx___renderParent )) {
HXLINE(1842)			renderParent = this->_hx___renderParent;
            		}
            		else {
HXLINE(1842)			renderParent = this->parent;
            		}
HXLINE(1844)		bool _hx_tmp;
HXDLIN(1844)		if (!(overrided)) {
HXLINE(1844)			_hx_tmp = ::hx::IsNotNull( this->parent );
            		}
            		else {
HXLINE(1844)			_hx_tmp = false;
            		}
HXDLIN(1844)		if (_hx_tmp) {
HXLINE(1846)			 ::openfl::geom::Matrix parentTransform = this->parent->_hx___worldTransform;
HXDLIN(1846)			 ::openfl::geom::Matrix target = this->_hx___worldTransform;
HXDLIN(1846)			target->a = ((local->a * parentTransform->a) + (local->b * parentTransform->c));
HXDLIN(1846)			target->b = ((local->a * parentTransform->b) + (local->b * parentTransform->d));
HXDLIN(1846)			target->c = ((local->c * parentTransform->a) + (local->d * parentTransform->c));
HXDLIN(1846)			target->d = ((local->c * parentTransform->b) + (local->d * parentTransform->d));
HXDLIN(1846)			target->tx = (((local->tx * parentTransform->a) + (local->ty * parentTransform->c)) + parentTransform->tx);
HXDLIN(1846)			target->ty = (((local->tx * parentTransform->b) + (local->ty * parentTransform->d)) + parentTransform->ty);
            		}
            		else {
HXLINE(1850)			this->_hx___worldTransform->copyFrom(local);
            		}
HXLINE(1853)		bool _hx_tmp1;
HXDLIN(1853)		if (!(overrided)) {
HXLINE(1853)			_hx_tmp1 = ::hx::IsNotNull( renderParent );
            		}
            		else {
HXLINE(1853)			_hx_tmp1 = false;
            		}
HXDLIN(1853)		if (_hx_tmp1) {
HXLINE(1855)			 ::openfl::geom::Matrix parentTransform = renderParent->_hx___renderTransform;
HXDLIN(1855)			 ::openfl::geom::Matrix target = this->_hx___renderTransform;
HXDLIN(1855)			target->a = ((local->a * parentTransform->a) + (local->b * parentTransform->c));
HXDLIN(1855)			target->b = ((local->a * parentTransform->b) + (local->b * parentTransform->d));
HXDLIN(1855)			target->c = ((local->c * parentTransform->a) + (local->d * parentTransform->c));
HXDLIN(1855)			target->d = ((local->c * parentTransform->b) + (local->d * parentTransform->d));
HXDLIN(1855)			target->tx = (((local->tx * parentTransform->a) + (local->ty * parentTransform->c)) + parentTransform->tx);
HXDLIN(1855)			target->ty = (((local->tx * parentTransform->b) + (local->ty * parentTransform->d)) + parentTransform->ty);
            		}
            		else {
HXLINE(1859)			this->_hx___renderTransform->copyFrom(local);
            		}
HXLINE(1862)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE(1864)			 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(1864)			Float px = -(this->_hx___scrollRect->x);
HXDLIN(1864)			Float py = -(this->_hx___scrollRect->y);
HXDLIN(1864)			_this->tx = (((px * _this->a) + (py * _this->c)) + _this->tx);
HXDLIN(1864)			_this->ty = (((px * _this->b) + (py * _this->d)) + _this->ty);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_hx___updateTransforms,(void))

Float DisplayObject_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1871_get_alpha)
HXDLIN(1871)		return this->_hx___alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1875_set_alpha)
HXLINE(1876)		if ((value > ((Float)1.0))) {
HXLINE(1876)			value = ((Float)1.0);
            		}
HXLINE(1877)		if ((value < ((Float)0.0))) {
HXLINE(1877)			value = ((Float)0.0);
            		}
HXLINE(1879)		bool _hx_tmp;
HXDLIN(1879)		if ((value != this->_hx___alpha)) {
HXLINE(1879)			_hx_tmp = !(this->get_cacheAsBitmap());
            		}
            		else {
HXLINE(1879)			_hx_tmp = false;
            		}
HXDLIN(1879)		if (_hx_tmp) {
HXLINE(1879)			if (!(this->_hx___renderDirty)) {
HXLINE(1879)				this->_hx___renderDirty = true;
HXDLIN(1879)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(1880)		return (this->_hx___alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

 ::Dynamic DisplayObject_obj::get_blendMode(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1885_get_blendMode)
HXDLIN(1885)		return this->_hx___blendMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_blendMode,return )

 ::Dynamic DisplayObject_obj::set_blendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1889_set_blendMode)
HXLINE(1890)		if (::hx::IsNull( value )) {
HXLINE(1890)			value = 10;
            		}
HXLINE(1892)		if (::hx::IsNotEq( value,this->_hx___blendMode )) {
HXLINE(1892)			if (!(this->_hx___renderDirty)) {
HXLINE(1892)				this->_hx___renderDirty = true;
HXDLIN(1892)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(1893)		return (this->_hx___blendMode = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

bool DisplayObject_obj::get_cacheAsBitmap(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1898_get_cacheAsBitmap)
HXDLIN(1898)		if (::hx::IsNull( this->_hx___filters )) {
HXDLIN(1898)			return this->_hx___cacheAsBitmap;
            		}
            		else {
HXDLIN(1898)			return true;
            		}
HXDLIN(1898)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmap,return )

bool DisplayObject_obj::set_cacheAsBitmap(bool value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1902_set_cacheAsBitmap)
HXLINE(1903)		if ((value != this->_hx___cacheAsBitmap)) {
HXLINE(1905)			if (!(this->_hx___renderDirty)) {
HXLINE(1905)				this->_hx___renderDirty = true;
HXDLIN(1905)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(1908)		return (this->_hx___cacheAsBitmap = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmap,return )

 ::openfl::geom::Matrix DisplayObject_obj::get_cacheAsBitmapMatrix(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1913_get_cacheAsBitmapMatrix)
HXDLIN(1913)		return this->_hx___cacheAsBitmapMatrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmapMatrix,return )

 ::openfl::geom::Matrix DisplayObject_obj::set_cacheAsBitmapMatrix( ::openfl::geom::Matrix value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1917_set_cacheAsBitmapMatrix)
HXLINE(1918)		if (!(this->_hx___renderDirty)) {
HXLINE(1918)			this->_hx___renderDirty = true;
HXDLIN(1918)			this->_hx___setParentRenderDirty();
            		}
HXLINE(1919)		 ::openfl::geom::Matrix _hx_tmp;
HXDLIN(1919)		if (::hx::IsNotNull( value )) {
HXLINE(1919)			_hx_tmp = value->clone();
            		}
            		else {
HXLINE(1919)			_hx_tmp = value;
            		}
HXDLIN(1919)		return (this->_hx___cacheAsBitmapMatrix = _hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmapMatrix,return )

::Array< ::Dynamic> DisplayObject_obj::get_filters(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1924_get_filters)
HXDLIN(1924)		if (::hx::IsNull( this->_hx___filters )) {
HXLINE(1926)			return ::Array_obj< ::Dynamic>::__new();
            		}
            		else {
HXLINE(1930)			return this->_hx___filters->copy();
            		}
HXLINE(1924)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

::Array< ::Dynamic> DisplayObject_obj::set_filters(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1935_set_filters)
HXLINE(1936)		bool _hx_tmp;
HXDLIN(1936)		if (::hx::IsNotNull( value )) {
HXLINE(1936)			_hx_tmp = (value->length > 0);
            		}
            		else {
HXLINE(1936)			_hx_tmp = false;
            		}
HXDLIN(1936)		if (_hx_tmp) {
HXLINE(1938)			::Array< ::Dynamic> clonedFilters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1940)			{
HXLINE(1940)				int _g = 0;
HXDLIN(1940)				while((_g < value->length)){
HXLINE(1940)					 ::openfl::filters::BitmapFilter filter = value->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN(1940)					_g = (_g + 1);
HXLINE(1941)					 ::openfl::filters::BitmapFilter clonedFilter = filter->clone();
HXLINE(1943)					clonedFilter->_hx___renderDirty = true;
HXLINE(1944)					clonedFilters->push(clonedFilter);
            				}
            			}
HXLINE(1947)			this->_hx___filters = clonedFilters;
HXLINE(1949)			if (!(this->_hx___renderDirty)) {
HXLINE(1949)				this->_hx___renderDirty = true;
HXDLIN(1949)				this->_hx___setParentRenderDirty();
            			}
            		}
            		else {
HXLINE(1951)			if (::hx::IsNotNull( this->_hx___filters )) {
HXLINE(1953)				this->_hx___filters = null();
HXLINE(1955)				if (!(this->_hx___renderDirty)) {
HXLINE(1955)					this->_hx___renderDirty = true;
HXDLIN(1955)					this->_hx___setParentRenderDirty();
            				}
            			}
            		}
HXLINE(1958)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Float DisplayObject_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1962_get_height)
HXLINE(1963)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1964)		this->_hx___getLocalBounds(rect);
HXLINE(1965)		Float height = rect->height;
HXLINE(1966)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
HXLINE(1967)		return height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1971_set_height)
HXLINE(1972)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1973)		 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(1974)		matrix->identity();
HXLINE(1976)		this->_hx___getBounds(rect,matrix);
HXLINE(1978)		if ((value != rect->height)) {
HXLINE(1980)			this->set_scaleY((value / rect->height));
            		}
            		else {
HXLINE(1984)			this->set_scaleY(( (Float)(1) ));
            		}
HXLINE(1987)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
HXLINE(1988)		::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE(1990)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

 ::openfl::display::LoaderInfo DisplayObject_obj::get_loaderInfo(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1994_get_loaderInfo)
HXLINE(1995)		if (::hx::IsNotNull( this->stage )) {
HXLINE(1997)			return ::openfl::utils::_internal::Lib_obj::current->_hx___loaderInfo;
            		}
HXLINE(2000)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_loaderInfo,return )

 ::openfl::display::DisplayObject DisplayObject_obj::get_mask(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2005_get_mask)
HXDLIN(2005)		return this->_hx___mask;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mask,return )

 ::openfl::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2009_set_mask)
HXLINE(2010)		if (::hx::IsInstanceEq( value,this->_hx___mask )) {
HXLINE(2012)			return value;
            		}
HXLINE(2015)		if (::hx::IsInstanceNotEq( value,this->_hx___mask )) {
HXLINE(2017)			this->_hx___setTransformDirty();
HXLINE(2018)			if (!(this->_hx___renderDirty)) {
HXLINE(2018)				this->_hx___renderDirty = true;
HXDLIN(2018)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2021)		if (::hx::IsNotNull( this->_hx___mask )) {
HXLINE(2023)			this->_hx___mask->_hx___isMask = false;
HXLINE(2024)			this->_hx___mask->_hx___maskTarget = null();
HXLINE(2025)			this->_hx___mask->_hx___setTransformDirty();
HXLINE(2026)			{
HXLINE(2026)				 ::openfl::display::DisplayObject _this = this->_hx___mask;
HXDLIN(2026)				if (!(_this->_hx___renderDirty)) {
HXLINE(2026)					_this->_hx___renderDirty = true;
HXDLIN(2026)					_this->_hx___setParentRenderDirty();
            				}
            			}
            		}
HXLINE(2029)		if (::hx::IsNotNull( value )) {
HXLINE(2031)			value->_hx___isMask = true;
HXLINE(2032)			value->_hx___maskTarget = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(2033)			value->_hx___setWorldTransformInvalid();
            		}
HXLINE(2036)		bool _hx_tmp;
HXDLIN(2036)		if (::hx::IsNotNull( this->_hx___cacheBitmap )) {
HXLINE(2036)			_hx_tmp = ::hx::IsInstanceNotEq( this->_hx___cacheBitmap->get_mask(),value );
            		}
            		else {
HXLINE(2036)			_hx_tmp = false;
            		}
HXDLIN(2036)		if (_hx_tmp) {
HXLINE(2038)			this->_hx___cacheBitmap->set_mask(value);
            		}
HXLINE(2041)		return (this->_hx___mask = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2045_get_mouseX)
HXLINE(2046)		Float mouseX;
HXDLIN(2046)		if (::hx::IsNotNull( this->stage )) {
HXLINE(2046)			mouseX = this->stage->_hx___mouseX;
            		}
            		else {
HXLINE(2046)			mouseX = ::openfl::utils::_internal::Lib_obj::current->stage->_hx___mouseX;
            		}
HXLINE(2047)		Float mouseY;
HXDLIN(2047)		if (::hx::IsNotNull( this->stage )) {
HXLINE(2047)			mouseY = this->stage->_hx___mouseY;
            		}
            		else {
HXLINE(2047)			mouseY = ::openfl::utils::_internal::Lib_obj::current->stage->_hx___mouseY;
            		}
HXLINE(2049)		 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN(2049)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(2049)		if ((norm == 0)) {
HXLINE(2049)			return -(_this->tx);
            		}
            		else {
HXLINE(2049)			return ((((Float)1.0) / norm) * ((_this->c * (_this->ty - mouseY)) + (_this->d * (mouseX - _this->tx))));
            		}
HXDLIN(2049)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2053_get_mouseY)
HXLINE(2054)		Float mouseX;
HXDLIN(2054)		if (::hx::IsNotNull( this->stage )) {
HXLINE(2054)			mouseX = this->stage->_hx___mouseX;
            		}
            		else {
HXLINE(2054)			mouseX = ::openfl::utils::_internal::Lib_obj::current->stage->_hx___mouseX;
            		}
HXLINE(2055)		Float mouseY;
HXDLIN(2055)		if (::hx::IsNotNull( this->stage )) {
HXLINE(2055)			mouseY = this->stage->_hx___mouseY;
            		}
            		else {
HXLINE(2055)			mouseY = ::openfl::utils::_internal::Lib_obj::current->stage->_hx___mouseY;
            		}
HXLINE(2057)		 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN(2057)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(2057)		if ((norm == 0)) {
HXLINE(2057)			return -(_this->ty);
            		}
            		else {
HXLINE(2057)			return ((((Float)1.0) / norm) * ((_this->a * (mouseY - _this->ty)) + (_this->b * (_this->tx - mouseX))));
            		}
HXDLIN(2057)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2062_get_name)
HXDLIN(2062)		return this->_hx___name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name(::String value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2067_set_name)
HXDLIN(2067)		return (this->_hx___name = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

 ::openfl::display::DisplayObject DisplayObject_obj::get_root(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2071_get_root)
HXLINE(2072)		if (::hx::IsNotNull( this->stage )) {
HXLINE(2074)			return ::openfl::utils::_internal::Lib_obj::current;
            		}
HXLINE(2077)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2082_get_rotation)
HXDLIN(2082)		return this->_hx___rotation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation(Float value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2086_set_rotation)
HXLINE(2087)		if ((value != this->_hx___rotation)) {
HXLINE(2089)			this->_hx___rotation = value;
HXLINE(2090)			Float radians = (this->_hx___rotation * (::Math_obj::PI / ( (Float)(180) )));
HXLINE(2091)			this->_hx___rotationSine = ::Math_obj::sin(radians);
HXLINE(2092)			this->_hx___rotationCosine = ::Math_obj::cos(radians);
HXLINE(2094)			this->_hx___transform->a = (this->_hx___rotationCosine * this->_hx___scaleX);
HXLINE(2095)			this->_hx___transform->b = (this->_hx___rotationSine * this->_hx___scaleX);
HXLINE(2096)			this->_hx___transform->c = (-(this->_hx___rotationSine) * this->_hx___scaleY);
HXLINE(2097)			this->_hx___transform->d = (this->_hx___rotationCosine * this->_hx___scaleY);
HXLINE(2099)			this->_hx___setTransformDirty();
            		}
HXLINE(2102)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

 ::openfl::geom::Rectangle DisplayObject_obj::get_scale9Grid(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2106_get_scale9Grid)
HXLINE(2107)		if (::hx::IsNull( this->_hx___scale9Grid )) {
HXLINE(2109)			return null();
            		}
HXLINE(2112)		return this->_hx___scale9Grid->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scale9Grid,return )

 ::openfl::geom::Rectangle DisplayObject_obj::set_scale9Grid( ::openfl::geom::Rectangle value){
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_2116_set_scale9Grid)
HXLINE(2117)		bool _hx_tmp;
HXDLIN(2117)		if (::hx::IsNull( value )) {
HXLINE(2117)			_hx_tmp = ::hx::IsNull( this->_hx___scale9Grid );
            		}
            		else {
HXLINE(2117)			_hx_tmp = false;
            		}
HXDLIN(2117)		if (_hx_tmp) {
HXLINE(2117)			return value;
            		}
HXLINE(2118)		bool _hx_tmp1;
HXDLIN(2118)		bool _hx_tmp2;
HXDLIN(2118)		if (::hx::IsNotNull( value )) {
HXLINE(2118)			_hx_tmp2 = ::hx::IsNotNull( this->_hx___scale9Grid );
            		}
            		else {
HXLINE(2118)			_hx_tmp2 = false;
            		}
HXDLIN(2118)		if (_hx_tmp2) {
HXLINE(2118)			_hx_tmp1 = this->_hx___scale9Grid->equals(value);
            		}
            		else {
HXLINE(2118)			_hx_tmp1 = false;
            		}
HXDLIN(2118)		if (_hx_tmp1) {
HXLINE(2118)			return value;
            		}
HXLINE(2120)		if (::hx::IsNotNull( value )) {
HXLINE(2122)			if (::hx::IsNull( this->_hx___scale9Grid )) {
HXLINE(2122)				this->_hx___scale9Grid =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE(2123)			this->_hx___scale9Grid->copyFrom(value);
            		}
            		else {
HXLINE(2127)			this->_hx___scale9Grid = null();
            		}
HXLINE(2130)		if (!(this->_hx___renderDirty)) {
HXLINE(2130)			this->_hx___renderDirty = true;
HXDLIN(2130)			this->_hx___setParentRenderDirty();
            		}
HXLINE(2132)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scale9Grid,return )

Float DisplayObject_obj::get_scaleX(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2137_get_scaleX)
HXDLIN(2137)		return this->_hx___scaleX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2141_set_scaleX)
HXLINE(2142)		if ((value != this->_hx___scaleX)) {
HXLINE(2144)			this->_hx___scaleX = value;
HXLINE(2146)			if ((this->_hx___transform->b == 0)) {
HXLINE(2148)				if ((value != this->_hx___transform->a)) {
HXLINE(2148)					this->_hx___setTransformDirty();
            				}
HXLINE(2149)				this->_hx___transform->a = value;
            			}
            			else {
HXLINE(2153)				Float a = (this->_hx___rotationCosine * value);
HXLINE(2154)				Float b = (this->_hx___rotationSine * value);
HXLINE(2156)				bool _hx_tmp;
HXDLIN(2156)				if ((this->_hx___transform->a == a)) {
HXLINE(2156)					_hx_tmp = (this->_hx___transform->b != b);
            				}
            				else {
HXLINE(2156)					_hx_tmp = true;
            				}
HXDLIN(2156)				if (_hx_tmp) {
HXLINE(2158)					this->_hx___setTransformDirty();
            				}
HXLINE(2161)				this->_hx___transform->a = a;
HXLINE(2162)				this->_hx___transform->b = b;
            			}
            		}
HXLINE(2166)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2171_get_scaleY)
HXDLIN(2171)		return this->_hx___scaleY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2175_set_scaleY)
HXLINE(2176)		if ((value != this->_hx___scaleY)) {
HXLINE(2178)			this->_hx___scaleY = value;
HXLINE(2180)			if ((this->_hx___transform->c == 0)) {
HXLINE(2182)				if ((value != this->_hx___transform->d)) {
HXLINE(2182)					this->_hx___setTransformDirty();
            				}
HXLINE(2183)				this->_hx___transform->d = value;
            			}
            			else {
HXLINE(2187)				Float c = (-(this->_hx___rotationSine) * value);
HXLINE(2188)				Float d = (this->_hx___rotationCosine * value);
HXLINE(2190)				bool _hx_tmp;
HXDLIN(2190)				if ((this->_hx___transform->d == d)) {
HXLINE(2190)					_hx_tmp = (this->_hx___transform->c != c);
            				}
            				else {
HXLINE(2190)					_hx_tmp = true;
            				}
HXDLIN(2190)				if (_hx_tmp) {
HXLINE(2192)					this->_hx___setTransformDirty();
            				}
HXLINE(2195)				this->_hx___transform->c = c;
HXLINE(2196)				this->_hx___transform->d = d;
            			}
            		}
HXLINE(2200)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

 ::openfl::geom::Rectangle DisplayObject_obj::get_scrollRect(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2204_get_scrollRect)
HXLINE(2205)		if (::hx::IsNull( this->_hx___scrollRect )) {
HXLINE(2207)			return null();
            		}
HXLINE(2210)		return this->_hx___scrollRect->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

 ::openfl::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::geom::Rectangle value){
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_2214_set_scrollRect)
HXLINE(2215)		bool _hx_tmp;
HXDLIN(2215)		if (::hx::IsNull( value )) {
HXLINE(2215)			_hx_tmp = ::hx::IsNull( this->_hx___scrollRect );
            		}
            		else {
HXLINE(2215)			_hx_tmp = false;
            		}
HXDLIN(2215)		if (_hx_tmp) {
HXLINE(2215)			return value;
            		}
HXLINE(2216)		bool _hx_tmp1;
HXDLIN(2216)		bool _hx_tmp2;
HXDLIN(2216)		if (::hx::IsNotNull( value )) {
HXLINE(2216)			_hx_tmp2 = ::hx::IsNotNull( this->_hx___scrollRect );
            		}
            		else {
HXLINE(2216)			_hx_tmp2 = false;
            		}
HXDLIN(2216)		if (_hx_tmp2) {
HXLINE(2216)			_hx_tmp1 = this->_hx___scrollRect->equals(value);
            		}
            		else {
HXLINE(2216)			_hx_tmp1 = false;
            		}
HXDLIN(2216)		if (_hx_tmp1) {
HXLINE(2216)			return value;
            		}
HXLINE(2218)		if (::hx::IsNotNull( value )) {
HXLINE(2220)			if (::hx::IsNull( this->_hx___scrollRect )) {
HXLINE(2220)				this->_hx___scrollRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE(2221)			this->_hx___scrollRect->copyFrom(value);
            		}
            		else {
HXLINE(2225)			this->_hx___scrollRect = null();
            		}
HXLINE(2228)		this->_hx___setTransformDirty();
HXLINE(2235)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

 ::openfl::display::Shader DisplayObject_obj::get_shader(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2240_get_shader)
HXDLIN(2240)		return this->_hx___shader;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_shader,return )

 ::openfl::display::Shader DisplayObject_obj::set_shader( ::openfl::display::Shader value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2244_set_shader)
HXLINE(2245)		this->_hx___shader = value;
HXLINE(2246)		if (!(this->_hx___renderDirty)) {
HXLINE(2246)			this->_hx___renderDirty = true;
HXDLIN(2246)			this->_hx___setParentRenderDirty();
            		}
HXLINE(2247)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_shader,return )

 ::openfl::geom::Transform DisplayObject_obj::get_transform(){
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_2251_get_transform)
HXLINE(2252)		if (::hx::IsNull( this->_hx___objectTransform )) {
HXLINE(2254)			this->_hx___objectTransform =  ::openfl::geom::Transform_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(2257)		return this->_hx___objectTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

 ::openfl::geom::Transform DisplayObject_obj::set_transform( ::openfl::geom::Transform value){
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_2261_set_transform)
HXLINE(2262)		if (::hx::IsNull( value )) {
HXLINE(2264)			HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Parameter transform must be non-null.",56,12,fe,6e)));
            		}
HXLINE(2267)		if (::hx::IsNull( this->_hx___objectTransform )) {
HXLINE(2269)			this->_hx___objectTransform =  ::openfl::geom::Transform_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(2272)		this->_hx___setTransformDirty();
HXLINE(2273)		 ::openfl::geom::Transform _hx_tmp = this->_hx___objectTransform;
HXDLIN(2273)		_hx_tmp->set_matrix(value->get_matrix());
HXLINE(2275)		bool _hx_tmp1;
HXDLIN(2275)		if (this->_hx___objectTransform->_hx___colorTransform->_hx___equals(value->_hx___colorTransform,true)) {
HXLINE(2276)			if (!(this->get_cacheAsBitmap())) {
HXLINE(2275)				_hx_tmp1 = (this->_hx___objectTransform->_hx___colorTransform->alphaMultiplier != value->_hx___colorTransform->alphaMultiplier);
            			}
            			else {
HXLINE(2275)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE(2275)			_hx_tmp1 = true;
            		}
HXDLIN(2275)		if (_hx_tmp1) {
HXLINE(2278)			 ::openfl::geom::ColorTransform _hx_tmp = this->_hx___objectTransform->_hx___colorTransform;
HXDLIN(2278)			_hx_tmp->_hx___copyFrom(value->get_colorTransform());
HXLINE(2279)			if (!(this->_hx___renderDirty)) {
HXLINE(2279)				this->_hx___renderDirty = true;
HXDLIN(2279)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2282)		return this->_hx___objectTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2287_get_visible)
HXDLIN(2287)		return this->_hx___visible;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible(bool value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2291_set_visible)
HXLINE(2292)		if ((value != this->_hx___visible)) {
HXLINE(2292)			if (!(this->_hx___renderDirty)) {
HXLINE(2292)				this->_hx___renderDirty = true;
HXDLIN(2292)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2293)		return (this->_hx___visible = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2297_get_width)
HXLINE(2298)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(2299)		this->_hx___getLocalBounds(rect);
HXLINE(2300)		Float width = rect->width;
HXLINE(2301)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
HXLINE(2302)		return width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2306_set_width)
HXLINE(2307)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(2308)		 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(2309)		matrix->identity();
HXLINE(2311)		this->_hx___getBounds(rect,matrix);
HXLINE(2313)		if ((value != rect->width)) {
HXLINE(2315)			this->set_scaleX((value / rect->width));
            		}
            		else {
HXLINE(2319)			this->set_scaleX(( (Float)(1) ));
            		}
HXLINE(2322)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
HXLINE(2323)		::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE(2325)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2330_get_x)
HXDLIN(2330)		return this->_hx___transform->tx;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2334_set_x)
HXLINE(2335)		if ((value != this->_hx___transform->tx)) {
HXLINE(2335)			this->_hx___setTransformDirty();
            		}
HXLINE(2336)		return (this->_hx___transform->tx = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2341_get_y)
HXDLIN(2341)		return this->_hx___transform->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_2345_set_y)
HXLINE(2346)		if ((value != this->_hx___transform->ty)) {
HXLINE(2346)			this->_hx___setTransformDirty();
            		}
HXLINE(2347)		return (this->_hx___transform->ty = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

 ::haxe::ds::StringMap DisplayObject_obj::_hx___broadcastEvents;

 ::openfl::display::Stage DisplayObject_obj::_hx___initStage;

int DisplayObject_obj::_hx___instanceCount;

bool DisplayObject_obj::_hx___supportDOM;

 ::lime::utils::ObjectPool DisplayObject_obj::_hx___tempStack;

void DisplayObject_obj::_hx___calculateAbsoluteTransform( ::openfl::geom::Matrix local, ::openfl::geom::Matrix parentTransform, ::openfl::geom::Matrix target){
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_1359___calculateAbsoluteTransform)
HXLINE(1360)		target->a = ((local->a * parentTransform->a) + (local->b * parentTransform->c));
HXLINE(1361)		target->b = ((local->a * parentTransform->b) + (local->b * parentTransform->d));
HXLINE(1362)		target->c = ((local->c * parentTransform->a) + (local->d * parentTransform->c));
HXLINE(1363)		target->d = ((local->c * parentTransform->b) + (local->d * parentTransform->d));
HXLINE(1364)		target->tx = (((local->tx * parentTransform->a) + (local->ty * parentTransform->c)) + parentTransform->tx);
HXLINE(1365)		target->ty = (((local->tx * parentTransform->b) + (local->ty * parentTransform->d)) + parentTransform->ty);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,_hx___calculateAbsoluteTransform,(void))


::hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new() {
	::hx::ObjectPtr< DisplayObject_obj > __this = new DisplayObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DisplayObject_obj *__this = (DisplayObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObject_obj), true, "openfl.display.DisplayObject"));
	*(void **)__this = DisplayObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_MARK_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(_hx___cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(_hx___cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_MARK_MEMBER_NAME(_hx___cacheBitmap,"__cacheBitmap");
	HX_MARK_MEMBER_NAME(_hx___cacheBitmapBackground,"__cacheBitmapBackground");
	HX_MARK_MEMBER_NAME(_hx___cacheBitmapColorTransform,"__cacheBitmapColorTransform");
	HX_MARK_MEMBER_NAME(_hx___cacheBitmapData,"__cacheBitmapData");
	HX_MARK_MEMBER_NAME(_hx___cacheBitmapData2,"__cacheBitmapData2");
	HX_MARK_MEMBER_NAME(_hx___cacheBitmapData3,"__cacheBitmapData3");
	HX_MARK_MEMBER_NAME(_hx___cacheBitmapMatrix,"__cacheBitmapMatrix");
	HX_MARK_MEMBER_NAME(_hx___cacheBitmapRenderer,"__cacheBitmapRenderer");
	HX_MARK_MEMBER_NAME(_hx___cairo,"__cairo");
	HX_MARK_MEMBER_NAME(_hx___children,"__children");
	HX_MARK_MEMBER_NAME(_hx___customRenderClear,"__customRenderClear");
	HX_MARK_MEMBER_NAME(_hx___customRenderEvent,"__customRenderEvent");
	HX_MARK_MEMBER_NAME(_hx___drawableType,"__drawableType");
	HX_MARK_MEMBER_NAME(_hx___filters,"__filters");
	HX_MARK_MEMBER_NAME(_hx___graphics,"__graphics");
	HX_MARK_MEMBER_NAME(_hx___interactive,"__interactive");
	HX_MARK_MEMBER_NAME(_hx___isCacheBitmapRender,"__isCacheBitmapRender");
	HX_MARK_MEMBER_NAME(_hx___isMask,"__isMask");
	HX_MARK_MEMBER_NAME(_hx___loaderInfo,"__loaderInfo");
	HX_MARK_MEMBER_NAME(_hx___mask,"__mask");
	HX_MARK_MEMBER_NAME(_hx___maskTarget,"__maskTarget");
	HX_MARK_MEMBER_NAME(_hx___name,"__name");
	HX_MARK_MEMBER_NAME(_hx___objectTransform,"__objectTransform");
	HX_MARK_MEMBER_NAME(_hx___renderable,"__renderable");
	HX_MARK_MEMBER_NAME(_hx___renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(_hx___renderParent,"__renderParent");
	HX_MARK_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(_hx___renderTransformCache,"__renderTransformCache");
	HX_MARK_MEMBER_NAME(_hx___renderTransformChanged,"__renderTransformChanged");
	HX_MARK_MEMBER_NAME(_hx___rotation,"__rotation");
	HX_MARK_MEMBER_NAME(_hx___rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(_hx___rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(_hx___scale9Grid,"__scale9Grid");
	HX_MARK_MEMBER_NAME(_hx___scaleX,"__scaleX");
	HX_MARK_MEMBER_NAME(_hx___scaleY,"__scaleY");
	HX_MARK_MEMBER_NAME(_hx___scrollRect,"__scrollRect");
	HX_MARK_MEMBER_NAME(_hx___shader,"__shader");
	HX_MARK_MEMBER_NAME(_hx___tempPoint,"__tempPoint");
	HX_MARK_MEMBER_NAME(_hx___transform,"__transform");
	HX_MARK_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(_hx___visible,"__visible");
	HX_MARK_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(_hx___worldAlphaChanged,"__worldAlphaChanged");
	HX_MARK_MEMBER_NAME(_hx___worldBlendMode,"__worldBlendMode");
	HX_MARK_MEMBER_NAME(_hx___worldClip,"__worldClip");
	HX_MARK_MEMBER_NAME(_hx___worldClipChanged,"__worldClipChanged");
	HX_MARK_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(_hx___worldShader,"__worldShader");
	HX_MARK_MEMBER_NAME(_hx___worldScale9Grid,"__worldScale9Grid");
	HX_MARK_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(_hx___worldVisible,"__worldVisible");
	HX_MARK_MEMBER_NAME(_hx___worldVisibleChanged,"__worldVisibleChanged");
	HX_MARK_MEMBER_NAME(_hx___worldTransformInvalid,"__worldTransformInvalid");
	HX_MARK_MEMBER_NAME(_hx___worldZ,"__worldZ");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(_hx___cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(_hx___cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_VISIT_MEMBER_NAME(_hx___cacheBitmap,"__cacheBitmap");
	HX_VISIT_MEMBER_NAME(_hx___cacheBitmapBackground,"__cacheBitmapBackground");
	HX_VISIT_MEMBER_NAME(_hx___cacheBitmapColorTransform,"__cacheBitmapColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___cacheBitmapData,"__cacheBitmapData");
	HX_VISIT_MEMBER_NAME(_hx___cacheBitmapData2,"__cacheBitmapData2");
	HX_VISIT_MEMBER_NAME(_hx___cacheBitmapData3,"__cacheBitmapData3");
	HX_VISIT_MEMBER_NAME(_hx___cacheBitmapMatrix,"__cacheBitmapMatrix");
	HX_VISIT_MEMBER_NAME(_hx___cacheBitmapRenderer,"__cacheBitmapRenderer");
	HX_VISIT_MEMBER_NAME(_hx___cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(_hx___children,"__children");
	HX_VISIT_MEMBER_NAME(_hx___customRenderClear,"__customRenderClear");
	HX_VISIT_MEMBER_NAME(_hx___customRenderEvent,"__customRenderEvent");
	HX_VISIT_MEMBER_NAME(_hx___drawableType,"__drawableType");
	HX_VISIT_MEMBER_NAME(_hx___filters,"__filters");
	HX_VISIT_MEMBER_NAME(_hx___graphics,"__graphics");
	HX_VISIT_MEMBER_NAME(_hx___interactive,"__interactive");
	HX_VISIT_MEMBER_NAME(_hx___isCacheBitmapRender,"__isCacheBitmapRender");
	HX_VISIT_MEMBER_NAME(_hx___isMask,"__isMask");
	HX_VISIT_MEMBER_NAME(_hx___loaderInfo,"__loaderInfo");
	HX_VISIT_MEMBER_NAME(_hx___mask,"__mask");
	HX_VISIT_MEMBER_NAME(_hx___maskTarget,"__maskTarget");
	HX_VISIT_MEMBER_NAME(_hx___name,"__name");
	HX_VISIT_MEMBER_NAME(_hx___objectTransform,"__objectTransform");
	HX_VISIT_MEMBER_NAME(_hx___renderable,"__renderable");
	HX_VISIT_MEMBER_NAME(_hx___renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(_hx___renderParent,"__renderParent");
	HX_VISIT_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(_hx___renderTransformCache,"__renderTransformCache");
	HX_VISIT_MEMBER_NAME(_hx___renderTransformChanged,"__renderTransformChanged");
	HX_VISIT_MEMBER_NAME(_hx___rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(_hx___rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(_hx___rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(_hx___scale9Grid,"__scale9Grid");
	HX_VISIT_MEMBER_NAME(_hx___scaleX,"__scaleX");
	HX_VISIT_MEMBER_NAME(_hx___scaleY,"__scaleY");
	HX_VISIT_MEMBER_NAME(_hx___scrollRect,"__scrollRect");
	HX_VISIT_MEMBER_NAME(_hx___shader,"__shader");
	HX_VISIT_MEMBER_NAME(_hx___tempPoint,"__tempPoint");
	HX_VISIT_MEMBER_NAME(_hx___transform,"__transform");
	HX_VISIT_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(_hx___visible,"__visible");
	HX_VISIT_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(_hx___worldAlphaChanged,"__worldAlphaChanged");
	HX_VISIT_MEMBER_NAME(_hx___worldBlendMode,"__worldBlendMode");
	HX_VISIT_MEMBER_NAME(_hx___worldClip,"__worldClip");
	HX_VISIT_MEMBER_NAME(_hx___worldClipChanged,"__worldClipChanged");
	HX_VISIT_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___worldShader,"__worldShader");
	HX_VISIT_MEMBER_NAME(_hx___worldScale9Grid,"__worldScale9Grid");
	HX_VISIT_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(_hx___worldVisible,"__worldVisible");
	HX_VISIT_MEMBER_NAME(_hx___worldVisibleChanged,"__worldVisibleChanged");
	HX_VISIT_MEMBER_NAME(_hx___worldTransformInvalid,"__worldTransformInvalid");
	HX_VISIT_MEMBER_NAME(_hx___worldZ,"__worldZ");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mask() ); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_root() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"stage") ) { return ::hx::Val( stage ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseX() ); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseY() ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleX() ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleY() ); }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shader() ); }
		if (HX_FIELD_EQ(inName,"__mask") ) { return ::hx::Val( _hx___mask ); }
		if (HX_FIELD_EQ(inName,"__name") ) { return ::hx::Val( _hx___name ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filters() ); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visible() ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return ::hx::Val( _hx___cairo ); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return ::hx::Val( getRect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rotation() ); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { return ::hx::Val( _hx___isMask ); }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { return ::hx::Val( _hx___scaleX ); }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { return ::hx::Val( _hx___scaleY ); }
		if (HX_FIELD_EQ(inName,"__shader") ) { return ::hx::Val( _hx___shader ); }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { return ::hx::Val( _hx___worldZ ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return ::hx::Val( get_mask_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return ::hx::Val( set_mask_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return ::hx::Val( set_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return ::hx::Val( get_root_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blendMode() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_transform() ); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return ::hx::Val( _hx___filters ); }
		if (HX_FIELD_EQ(inName,"__visible") ) { return ::hx::Val( _hx___visible ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return ::hx::Val( _hx___cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_loaderInfo() ); }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scale9Grid() ); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollRect() ); }
		if (HX_FIELD_EQ(inName,"__children") ) { return ::hx::Val( _hx___children ); }
		if (HX_FIELD_EQ(inName,"__graphics") ) { return ::hx::Val( _hx___graphics ); }
		if (HX_FIELD_EQ(inName,"__rotation") ) { return ::hx::Val( _hx___rotation ); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return ::hx::Val( invalidate_dyn() ); }
		if (HX_FIELD_EQ(inName,"__dispatch") ) { return ::hx::Val( _hx___dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return ::hx::Val( get_mouseX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return ::hx::Val( get_mouseY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return ::hx::Val( get_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return ::hx::Val( get_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shader") ) { return ::hx::Val( get_shader_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return ::hx::Val( set_shader_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return ::hx::Val( _hx___blendMode ); }
		if (HX_FIELD_EQ(inName,"__tempPoint") ) { return ::hx::Val( _hx___tempPoint ); }
		if (HX_FIELD_EQ(inName,"__transform") ) { return ::hx::Val( _hx___transform ); }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { return ::hx::Val( _hx___worldClip ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return ::hx::Val( _hx___getCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return ::hx::Val( get_filters_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return ::hx::Val( set_filters_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return ::hx::Val( get_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__loaderInfo") ) { return ::hx::Val( _hx___loaderInfo ); }
		if (HX_FIELD_EQ(inName,"__maskTarget") ) { return ::hx::Val( _hx___maskTarget ); }
		if (HX_FIELD_EQ(inName,"__renderable") ) { return ::hx::Val( _hx___renderable ); }
		if (HX_FIELD_EQ(inName,"__scale9Grid") ) { return ::hx::Val( _hx___scale9Grid ); }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return ::hx::Val( _hx___scrollRect ); }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return ::hx::Val( _hx___worldAlpha ); }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return ::hx::Val( hitTestPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return ::hx::Val( get_rotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return ::hx::Val( set_rotation_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cacheAsBitmap() ); }
		if (HX_FIELD_EQ(inName,"__cacheBitmap") ) { return ::hx::Val( _hx___cacheBitmap ); }
		if (HX_FIELD_EQ(inName,"__interactive") ) { return ::hx::Val( _hx___interactive ); }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return ::hx::Val( _hx___renderDirty ); }
		if (HX_FIELD_EQ(inName,"__worldShader") ) { return ::hx::Val( _hx___worldShader ); }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return ::hx::Val( dispatchEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return ::hx::Val( globalToLocal_dyn() ); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return ::hx::Val( hitTestObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return ::hx::Val( localToGlobal_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return ::hx::Val( get_blendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return ::hx::Val( set_blendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return ::hx::Val( get_transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return ::hx::Val( set_transform_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__drawableType") ) { return ::hx::Val( _hx___drawableType ); }
		if (HX_FIELD_EQ(inName,"__renderParent") ) { return ::hx::Val( _hx___renderParent ); }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return ::hx::Val( _hx___rotationSine ); }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { return ::hx::Val( _hx___worldVisible ); }
		if (HX_FIELD_EQ(inName,"get_loaderInfo") ) { return ::hx::Val( get_loaderInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scale9Grid") ) { return ::hx::Val( get_scale9Grid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scale9Grid") ) { return ::hx::Val( set_scale9Grid_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return ::hx::Val( get_scrollRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return ::hx::Val( set_scrollRect_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return ::hx::Val( _hx___cacheAsBitmap ); }
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return ::hx::Val( _hx___dispatchEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"__globalToLocal") ) { return ::hx::Val( _hx___globalToLocal_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return ::hx::Val( opaqueBackground ); }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return ::hx::Val( _hx___rotationCosine ); }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return ::hx::Val( _hx___transformDirty ); }
		if (HX_FIELD_EQ(inName,"__worldBlendMode") ) { return ::hx::Val( _hx___worldBlendMode ); }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return ::hx::Val( _hx___worldTransform ); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return ::hx::Val( _hx___getInteractive_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getLocalBounds") ) { return ::hx::Val( _hx___getLocalBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return ::hx::Val( _hx___setRenderDirty_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__cacheBitmapData") ) { return ::hx::Val( _hx___cacheBitmapData ); }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { return ::hx::Val( _hx___objectTransform ); }
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return ::hx::Val( _hx___renderTransform ); }
		if (HX_FIELD_EQ(inName,"__worldScale9Grid") ) { return ::hx::Val( _hx___worldScale9Grid ); }
		if (HX_FIELD_EQ(inName,"__getFilterBounds") ) { return ::hx::Val( _hx___getFilterBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return ::hx::Val( _hx___getRenderBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmap") ) { return ::hx::Val( get_cacheAsBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmap") ) { return ::hx::Val( set_cacheAsBitmap_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__cacheBitmapData2") ) { return ::hx::Val( _hx___cacheBitmapData2 ); }
		if (HX_FIELD_EQ(inName,"__cacheBitmapData3") ) { return ::hx::Val( _hx___cacheBitmapData3 ); }
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { return ::hx::Val( _hx___worldClipChanged ); }
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return ::hx::Val( _hx___dispatchChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return ::hx::Val( _hx___readGraphicsData_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return ::hx::Val( _hx___updateTransforms_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cacheAsBitmapMatrix() ); }
		if (HX_FIELD_EQ(inName,"__cacheBitmapMatrix") ) { return ::hx::Val( _hx___cacheBitmapMatrix ); }
		if (HX_FIELD_EQ(inName,"__customRenderClear") ) { return ::hx::Val( _hx___customRenderClear ); }
		if (HX_FIELD_EQ(inName,"__customRenderEvent") ) { return ::hx::Val( _hx___customRenderEvent ); }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { return ::hx::Val( _hx___worldAlphaChanged ); }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getWorldTransform") ) { return ::hx::Val( _hx___getWorldTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return ::hx::Val( _hx___setStageReference_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return ::hx::Val( _hx___setTransformDirty_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return ::hx::Val( _hx___stopAllMovieClips_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__getRenderTransform") ) { return ::hx::Val( _hx___getRenderTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { return ::hx::Val( _hx___cacheAsBitmapMatrix ); }
		if (HX_FIELD_EQ(inName,"__cacheBitmapRenderer") ) { return ::hx::Val( _hx___cacheBitmapRenderer ); }
		if (HX_FIELD_EQ(inName,"__isCacheBitmapRender") ) { return ::hx::Val( _hx___isCacheBitmapRender ); }
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return ::hx::Val( _hx___worldColorTransform ); }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { return ::hx::Val( _hx___worldVisibleChanged ); }
		if (HX_FIELD_EQ(inName,"__dispatchWithCapture") ) { return ::hx::Val( _hx___dispatchWithCapture_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__renderTransformCache") ) { return ::hx::Val( _hx___renderTransformCache ); }
		if (HX_FIELD_EQ(inName,"__setParentRenderDirty") ) { return ::hx::Val( _hx___setParentRenderDirty_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__cacheBitmapBackground") ) { return ::hx::Val( _hx___cacheBitmapBackground ); }
		if (HX_FIELD_EQ(inName,"__worldTransformInvalid") ) { return ::hx::Val( _hx___worldTransformInvalid ); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmapMatrix") ) { return ::hx::Val( get_cacheAsBitmapMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmapMatrix") ) { return ::hx::Val( set_cacheAsBitmapMatrix_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__renderTransformChanged") ) { return ::hx::Val( _hx___renderTransformChanged ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__setWorldTransformInvalid") ) { return ::hx::Val( _hx___setWorldTransformInvalid_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__cacheBitmapColorTransform") ) { return ::hx::Val( _hx___cacheBitmapColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__initStage") ) { outValue = ( _hx___initStage ); return true; }
		if (HX_FIELD_EQ(inName,"__tempStack") ) { outValue = ( _hx___tempStack ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { outValue = ( _hx___instanceCount ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__broadcastEvents") ) { outValue = ( _hx___broadcastEvents ); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__calculateAbsoluteTransform") ) { outValue = _hx___calculateAbsoluteTransform_dyn(); return true; }
	}
	return false;
}

::hx::Val DisplayObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mask(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_name(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shader(inValue.Cast<  ::openfl::display::Shader >()) ); }
		if (HX_FIELD_EQ(inName,"__mask") ) { _hx___mask=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { _hx___name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filters(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { _hx___cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rotation(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { _hx___isMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { _hx___scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { _hx___scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shader") ) { _hx___shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { _hx___worldZ=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendMode(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_transform(inValue.Cast<  ::openfl::geom::Transform >()) ); }
		if (HX_FIELD_EQ(inName,"__filters") ) { _hx___filters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { _hx___visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scale9Grid(inValue.Cast<  ::openfl::geom::Rectangle >()) ); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollRect(inValue.Cast<  ::openfl::geom::Rectangle >()) ); }
		if (HX_FIELD_EQ(inName,"__children") ) { _hx___children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { _hx___graphics=inValue.Cast<  ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { _hx___rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { _hx___blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tempPoint") ) { _hx___tempPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transform") ) { _hx___transform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { _hx___worldClip=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__loaderInfo") ) { _hx___loaderInfo=inValue.Cast<  ::openfl::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__maskTarget") ) { _hx___maskTarget=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { _hx___renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scale9Grid") ) { _hx___scale9Grid=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { _hx___scrollRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { _hx___worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cacheAsBitmap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__cacheBitmap") ) { _hx___cacheBitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { _hx___interactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { _hx___renderDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldShader") ) { _hx___worldShader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__drawableType") ) { _hx___drawableType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderParent") ) { _hx___renderParent=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { _hx___rotationSine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { _hx___worldVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { _hx___cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { _hx___rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { _hx___transformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldBlendMode") ) { _hx___worldBlendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { _hx___worldTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__cacheBitmapData") ) { _hx___cacheBitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { _hx___objectTransform=inValue.Cast<  ::openfl::geom::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { _hx___renderTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldScale9Grid") ) { _hx___worldScale9Grid=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__cacheBitmapData2") ) { _hx___cacheBitmapData2=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheBitmapData3") ) { _hx___cacheBitmapData3=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { _hx___worldClipChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cacheAsBitmapMatrix(inValue.Cast<  ::openfl::geom::Matrix >()) ); }
		if (HX_FIELD_EQ(inName,"__cacheBitmapMatrix") ) { _hx___cacheBitmapMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__customRenderClear") ) { _hx___customRenderClear=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__customRenderEvent") ) { _hx___customRenderEvent=inValue.Cast<  ::openfl::events::RenderEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { _hx___worldAlphaChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { _hx___cacheAsBitmapMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheBitmapRenderer") ) { _hx___cacheBitmapRenderer=inValue.Cast<  ::openfl::display::DisplayObjectRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isCacheBitmapRender") ) { _hx___isCacheBitmapRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { _hx___worldColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { _hx___worldVisibleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__renderTransformCache") ) { _hx___renderTransformCache=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__cacheBitmapBackground") ) { _hx___cacheBitmapBackground=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransformInvalid") ) { _hx___worldTransformInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__renderTransformChanged") ) { _hx___renderTransformChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__cacheBitmapColorTransform") ) { _hx___cacheBitmapColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__initStage") ) { _hx___initStage=ioValue.Cast<  ::openfl::display::Stage >(); return true; }
		if (HX_FIELD_EQ(inName,"__tempStack") ) { _hx___tempStack=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { _hx___instanceCount=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__broadcastEvents") ) { _hx___broadcastEvents=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("blendMode",54,e4,37,0c));
	outFields->push(HX_("cacheAsBitmap",e3,82,0f,6a));
	outFields->push(HX_("cacheAsBitmapMatrix",84,f9,81,95));
	outFields->push(HX_("filters",bb,a1,46,09));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("loaderInfo",21,b2,e4,b6));
	outFields->push(HX_("mask",ec,40,56,48));
	outFields->push(HX_("mouseX",93,4a,0e,cc));
	outFields->push(HX_("mouseY",94,4a,0e,cc));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("opaqueBackground",2f,b8,a7,1a));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("rotation",3e,3d,86,08));
	outFields->push(HX_("scale9Grid",d5,50,22,8f));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("scrollRect",d1,db,66,09));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("stage",be,6a,0b,84));
	outFields->push(HX_("transform",6c,2d,93,45));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__blendMode",34,2d,64,3a));
	outFields->push(HX_("__cacheAsBitmap",c3,bb,c1,f1));
	outFields->push(HX_("__cacheAsBitmapMatrix",64,1a,76,03));
	outFields->push(HX_("__cacheBitmap",b1,7c,25,58));
	outFields->push(HX_("__cacheBitmapBackground",ff,3b,ef,ca));
	outFields->push(HX_("__cacheBitmapColorTransform",1a,5c,d5,a9));
	outFields->push(HX_("__cacheBitmapData",7b,ab,bc,95));
	outFields->push(HX_("__cacheBitmapData2",57,60,59,6f));
	outFields->push(HX_("__cacheBitmapData3",58,60,59,6f));
	outFields->push(HX_("__cacheBitmapMatrix",d2,41,1e,98));
	outFields->push(HX_("__cacheBitmapRenderer",14,97,78,d9));
	outFields->push(HX_("__cairo",68,89,77,ab));
	outFields->push(HX_("__children",5f,8c,a2,13));
	outFields->push(HX_("__customRenderClear",06,03,07,b9));
	outFields->push(HX_("__customRenderEvent",93,59,70,e6));
	outFields->push(HX_("__drawableType",98,b4,3c,42));
	outFields->push(HX_("__filters",9b,f2,94,8a));
	outFields->push(HX_("__graphics",eb,6b,a0,b5));
	outFields->push(HX_("__interactive",c2,7e,d1,84));
	outFields->push(HX_("__isCacheBitmapRender",9d,cb,4a,93));
	outFields->push(HX_("__isMask",16,71,ec,0d));
	outFields->push(HX_("__loaderInfo",41,2d,78,ef));
	outFields->push(HX_("__mask",0c,a4,4e,f7));
	outFields->push(HX_("__maskTarget",7d,9c,64,d4));
	outFields->push(HX_("__name",6b,d5,f7,f7));
	outFields->push(HX_("__objectTransform",8d,6f,30,54));
	outFields->push(HX_("__renderable",10,b7,2c,2b));
	outFields->push(HX_("__renderDirty",bc,bd,f9,ed));
	outFields->push(HX_("__renderParent",40,8c,94,7d));
	outFields->push(HX_("__renderTransform",16,b8,95,b1));
	outFields->push(HX_("__renderTransformCache",4c,42,cb,bc));
	outFields->push(HX_("__renderTransformChanged",7e,ef,84,a1));
	outFields->push(HX_("__rotation",5e,b0,be,ab));
	outFields->push(HX_("__rotationCosine",f7,71,7b,14));
	outFields->push(HX_("__rotationSine",cb,f9,ad,3f));
	outFields->push(HX_("__scale9Grid",f5,cb,b5,c7));
	outFields->push(HX_("__scaleX",ae,55,55,e4));
	outFields->push(HX_("__scaleY",af,55,55,e4));
	outFields->push(HX_("__scrollRect",f1,56,fa,41));
	outFields->push(HX_("__shader",45,2a,50,c5));
	outFields->push(HX_("__tempPoint",7c,01,d0,2a));
	outFields->push(HX_("__transform",4c,76,bf,73));
	outFields->push(HX_("__transformDirty",26,f6,91,84));
	outFields->push(HX_("__visible",52,c9,72,24));
	outFields->push(HX_("__worldAlpha",cc,d2,d6,c5));
	outFields->push(HX_("__worldAlphaChanged",88,37,d8,d0));
	outFields->push(HX_("__worldBlendMode",c2,5e,7d,61));
	outFields->push(HX_("__worldClip",22,0b,0b,7d));
	outFields->push(HX_("__worldClipChanged",f2,55,0d,68));
	outFields->push(HX_("__worldColorTransform",5b,ce,21,a3));
	outFields->push(HX_("__worldShader",f7,93,06,31));
	outFields->push(HX_("__worldScale9Grid",a7,f6,a7,d6));
	outFields->push(HX_("__worldTransform",da,a7,d8,9a));
	outFields->push(HX_("__worldVisible",60,db,58,f8));
	outFields->push(HX_("__worldVisibleChanged",74,29,51,77));
	outFields->push(HX_("__worldTransformInvalid",3d,6a,28,96));
	outFields->push(HX_("__worldZ",e8,5c,ce,71));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObject_obj,opaqueBackground),HX_("opaqueBackground",2f,b8,a7,1a)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(DisplayObject_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(DisplayObject_obj,stage),HX_("stage",be,6a,0b,84)},
	{::hx::fsFloat,(int)offsetof(DisplayObject_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObject_obj,_hx___blendMode),HX_("__blendMode",34,2d,64,3a)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___cacheAsBitmap),HX_("__cacheAsBitmap",c3,bb,c1,f1)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObject_obj,_hx___cacheAsBitmapMatrix),HX_("__cacheAsBitmapMatrix",64,1a,76,03)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(DisplayObject_obj,_hx___cacheBitmap),HX_("__cacheBitmap",b1,7c,25,58)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObject_obj,_hx___cacheBitmapBackground),HX_("__cacheBitmapBackground",ff,3b,ef,ca)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(DisplayObject_obj,_hx___cacheBitmapColorTransform),HX_("__cacheBitmapColorTransform",1a,5c,d5,a9)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(DisplayObject_obj,_hx___cacheBitmapData),HX_("__cacheBitmapData",7b,ab,bc,95)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(DisplayObject_obj,_hx___cacheBitmapData2),HX_("__cacheBitmapData2",57,60,59,6f)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(DisplayObject_obj,_hx___cacheBitmapData3),HX_("__cacheBitmapData3",58,60,59,6f)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObject_obj,_hx___cacheBitmapMatrix),HX_("__cacheBitmapMatrix",d2,41,1e,98)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectRenderer */ ,(int)offsetof(DisplayObject_obj,_hx___cacheBitmapRenderer),HX_("__cacheBitmapRenderer",14,97,78,d9)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(int)offsetof(DisplayObject_obj,_hx___cairo),HX_("__cairo",68,89,77,ab)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DisplayObject_obj,_hx___children),HX_("__children",5f,8c,a2,13)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___customRenderClear),HX_("__customRenderClear",06,03,07,b9)},
	{::hx::fsObject /*  ::openfl::events::RenderEvent */ ,(int)offsetof(DisplayObject_obj,_hx___customRenderEvent),HX_("__customRenderEvent",93,59,70,e6)},
	{::hx::fsInt,(int)offsetof(DisplayObject_obj,_hx___drawableType),HX_("__drawableType",98,b4,3c,42)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DisplayObject_obj,_hx___filters),HX_("__filters",9b,f2,94,8a)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(int)offsetof(DisplayObject_obj,_hx___graphics),HX_("__graphics",eb,6b,a0,b5)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___interactive),HX_("__interactive",c2,7e,d1,84)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___isCacheBitmapRender),HX_("__isCacheBitmapRender",9d,cb,4a,93)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___isMask),HX_("__isMask",16,71,ec,0d)},
	{::hx::fsObject /*  ::openfl::display::LoaderInfo */ ,(int)offsetof(DisplayObject_obj,_hx___loaderInfo),HX_("__loaderInfo",41,2d,78,ef)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(DisplayObject_obj,_hx___mask),HX_("__mask",0c,a4,4e,f7)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(DisplayObject_obj,_hx___maskTarget),HX_("__maskTarget",7d,9c,64,d4)},
	{::hx::fsString,(int)offsetof(DisplayObject_obj,_hx___name),HX_("__name",6b,d5,f7,f7)},
	{::hx::fsObject /*  ::openfl::geom::Transform */ ,(int)offsetof(DisplayObject_obj,_hx___objectTransform),HX_("__objectTransform",8d,6f,30,54)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___renderable),HX_("__renderable",10,b7,2c,2b)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___renderDirty),HX_("__renderDirty",bc,bd,f9,ed)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(DisplayObject_obj,_hx___renderParent),HX_("__renderParent",40,8c,94,7d)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObject_obj,_hx___renderTransform),HX_("__renderTransform",16,b8,95,b1)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObject_obj,_hx___renderTransformCache),HX_("__renderTransformCache",4c,42,cb,bc)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___renderTransformChanged),HX_("__renderTransformChanged",7e,ef,84,a1)},
	{::hx::fsFloat,(int)offsetof(DisplayObject_obj,_hx___rotation),HX_("__rotation",5e,b0,be,ab)},
	{::hx::fsFloat,(int)offsetof(DisplayObject_obj,_hx___rotationCosine),HX_("__rotationCosine",f7,71,7b,14)},
	{::hx::fsFloat,(int)offsetof(DisplayObject_obj,_hx___rotationSine),HX_("__rotationSine",cb,f9,ad,3f)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(DisplayObject_obj,_hx___scale9Grid),HX_("__scale9Grid",f5,cb,b5,c7)},
	{::hx::fsFloat,(int)offsetof(DisplayObject_obj,_hx___scaleX),HX_("__scaleX",ae,55,55,e4)},
	{::hx::fsFloat,(int)offsetof(DisplayObject_obj,_hx___scaleY),HX_("__scaleY",af,55,55,e4)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(DisplayObject_obj,_hx___scrollRect),HX_("__scrollRect",f1,56,fa,41)},
	{::hx::fsObject /*  ::openfl::display::Shader */ ,(int)offsetof(DisplayObject_obj,_hx___shader),HX_("__shader",45,2a,50,c5)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(DisplayObject_obj,_hx___tempPoint),HX_("__tempPoint",7c,01,d0,2a)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObject_obj,_hx___transform),HX_("__transform",4c,76,bf,73)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___transformDirty),HX_("__transformDirty",26,f6,91,84)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___visible),HX_("__visible",52,c9,72,24)},
	{::hx::fsFloat,(int)offsetof(DisplayObject_obj,_hx___worldAlpha),HX_("__worldAlpha",cc,d2,d6,c5)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___worldAlphaChanged),HX_("__worldAlphaChanged",88,37,d8,d0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObject_obj,_hx___worldBlendMode),HX_("__worldBlendMode",c2,5e,7d,61)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(DisplayObject_obj,_hx___worldClip),HX_("__worldClip",22,0b,0b,7d)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___worldClipChanged),HX_("__worldClipChanged",f2,55,0d,68)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(DisplayObject_obj,_hx___worldColorTransform),HX_("__worldColorTransform",5b,ce,21,a3)},
	{::hx::fsObject /*  ::openfl::display::Shader */ ,(int)offsetof(DisplayObject_obj,_hx___worldShader),HX_("__worldShader",f7,93,06,31)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(DisplayObject_obj,_hx___worldScale9Grid),HX_("__worldScale9Grid",a7,f6,a7,d6)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObject_obj,_hx___worldTransform),HX_("__worldTransform",da,a7,d8,9a)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___worldVisible),HX_("__worldVisible",60,db,58,f8)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___worldVisibleChanged),HX_("__worldVisibleChanged",74,29,51,77)},
	{::hx::fsBool,(int)offsetof(DisplayObject_obj,_hx___worldTransformInvalid),HX_("__worldTransformInvalid",3d,6a,28,96)},
	{::hx::fsInt,(int)offsetof(DisplayObject_obj,_hx___worldZ),HX_("__worldZ",e8,5c,ce,71)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DisplayObject_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &DisplayObject_obj::_hx___broadcastEvents,HX_("__broadcastEvents",da,4d,64,5a)},
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(void *) &DisplayObject_obj::_hx___initStage,HX_("__initStage",6e,ce,c9,cd)},
	{::hx::fsInt,(void *) &DisplayObject_obj::_hx___instanceCount,HX_("__instanceCount",da,31,1e,3f)},
	{::hx::fsBool,(void *) &DisplayObject_obj::_hx___supportDOM,HX_("__supportDOM",d3,00,fe,8b)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &DisplayObject_obj::_hx___tempStack,HX_("__tempStack",74,b4,4b,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DisplayObject_obj_sMemberFields[] = {
	HX_("opaqueBackground",2f,b8,a7,1a),
	HX_("parent",2a,05,7e,ed),
	HX_("stage",be,6a,0b,84),
	HX_("__alpha",3e,00,f5,8b),
	HX_("__blendMode",34,2d,64,3a),
	HX_("__cacheAsBitmap",c3,bb,c1,f1),
	HX_("__cacheAsBitmapMatrix",64,1a,76,03),
	HX_("__cacheBitmap",b1,7c,25,58),
	HX_("__cacheBitmapBackground",ff,3b,ef,ca),
	HX_("__cacheBitmapColorTransform",1a,5c,d5,a9),
	HX_("__cacheBitmapData",7b,ab,bc,95),
	HX_("__cacheBitmapData2",57,60,59,6f),
	HX_("__cacheBitmapData3",58,60,59,6f),
	HX_("__cacheBitmapMatrix",d2,41,1e,98),
	HX_("__cacheBitmapRenderer",14,97,78,d9),
	HX_("__cairo",68,89,77,ab),
	HX_("__children",5f,8c,a2,13),
	HX_("__customRenderClear",06,03,07,b9),
	HX_("__customRenderEvent",93,59,70,e6),
	HX_("__drawableType",98,b4,3c,42),
	HX_("__filters",9b,f2,94,8a),
	HX_("__graphics",eb,6b,a0,b5),
	HX_("__interactive",c2,7e,d1,84),
	HX_("__isCacheBitmapRender",9d,cb,4a,93),
	HX_("__isMask",16,71,ec,0d),
	HX_("__loaderInfo",41,2d,78,ef),
	HX_("__mask",0c,a4,4e,f7),
	HX_("__maskTarget",7d,9c,64,d4),
	HX_("__name",6b,d5,f7,f7),
	HX_("__objectTransform",8d,6f,30,54),
	HX_("__renderable",10,b7,2c,2b),
	HX_("__renderDirty",bc,bd,f9,ed),
	HX_("__renderParent",40,8c,94,7d),
	HX_("__renderTransform",16,b8,95,b1),
	HX_("__renderTransformCache",4c,42,cb,bc),
	HX_("__renderTransformChanged",7e,ef,84,a1),
	HX_("__rotation",5e,b0,be,ab),
	HX_("__rotationCosine",f7,71,7b,14),
	HX_("__rotationSine",cb,f9,ad,3f),
	HX_("__scale9Grid",f5,cb,b5,c7),
	HX_("__scaleX",ae,55,55,e4),
	HX_("__scaleY",af,55,55,e4),
	HX_("__scrollRect",f1,56,fa,41),
	HX_("__shader",45,2a,50,c5),
	HX_("__tempPoint",7c,01,d0,2a),
	HX_("__transform",4c,76,bf,73),
	HX_("__transformDirty",26,f6,91,84),
	HX_("__visible",52,c9,72,24),
	HX_("__worldAlpha",cc,d2,d6,c5),
	HX_("__worldAlphaChanged",88,37,d8,d0),
	HX_("__worldBlendMode",c2,5e,7d,61),
	HX_("__worldClip",22,0b,0b,7d),
	HX_("__worldClipChanged",f2,55,0d,68),
	HX_("__worldColorTransform",5b,ce,21,a3),
	HX_("__worldShader",f7,93,06,31),
	HX_("__worldScale9Grid",a7,f6,a7,d6),
	HX_("__worldTransform",da,a7,d8,9a),
	HX_("__worldVisible",60,db,58,f8),
	HX_("__worldVisibleChanged",74,29,51,77),
	HX_("__worldTransformInvalid",3d,6a,28,96),
	HX_("__worldZ",e8,5c,ce,71),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getRect",da,fc,29,1e),
	HX_("globalToLocal",cd,4e,ae,6b),
	HX_("hitTestObject",e4,54,64,d7),
	HX_("hitTestPoint",cb,a9,21,e4),
	HX_("invalidate",7b,19,2a,87),
	HX_("localToGlobal",c9,41,eb,47),
	HX_("removeEventListener",ca,87,75,55),
	HX_("__cleanup",04,5d,90,2c),
	HX_("__dispatch",da,41,9c,c1),
	HX_("__dispatchChildren",39,81,f4,f4),
	HX_("__dispatchEvent",e0,ff,16,4e),
	HX_("__dispatchWithCapture",66,3f,63,34),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getCursor",ec,60,6b,e9),
	HX_("__getFilterBounds",e3,3a,ba,18),
	HX_("__getInteractive",0c,1c,37,f8),
	HX_("__getLocalBounds",6a,04,36,df),
	HX_("__getRenderBounds",01,11,b8,7b),
	HX_("__getRenderTransform",60,c2,34,c0),
	HX_("__getWorldTransform",d0,f4,fc,8b),
	HX_("__globalToLocal",ad,87,60,f3),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__readGraphicsData",2b,10,91,f2),
	HX_("__setParentRenderDirty",f0,bc,57,f3),
	HX_("__setRenderDirty",7a,43,7f,81),
	HX_("__setStageReference",4f,e5,e5,f4),
	HX_("__setTransformDirty",28,1b,24,99),
	HX_("__setWorldTransformInvalid",7b,c9,b9,d4),
	HX_("__stopAllMovieClips",d2,89,e8,53),
	HX_("__update",29,f1,34,2f),
	HX_("__updateTransforms",10,f4,b0,50),
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_blendMode",2b,b8,9b,cd),
	HX_("set_blendMode",37,9a,a1,12),
	HX_("get_cacheAsBitmap",3a,8e,7f,70),
	HX_("set_cacheAsBitmap",46,66,ed,93),
	HX_("get_cacheAsBitmapMatrix",1b,a0,d7,9d),
	HX_("set_cacheAsBitmapMatrix",27,09,39,a0),
	HX_("get_filters",d2,01,41,8f),
	HX_("set_filters",de,08,ae,99),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_loaderInfo",6a,3a,da,2c),
	HX_("get_mask",75,fc,10,c8),
	HX_("set_mask",e9,55,6e,76),
	HX_("get_mouseX",5c,ba,95,bc),
	HX_("get_mouseY",5d,ba,95,bc),
	HX_("get_name",d4,2d,ba,c8),
	HX_("set_name",48,87,17,77),
	HX_("get_root",ab,a9,69,cb),
	HX_("get_rotation",47,f1,9f,bd),
	HX_("set_rotation",bb,14,99,d2),
	HX_("get_scale9Grid",1e,d9,17,05),
	HX_("set_scale9Grid",92,c1,37,25),
	HX_("get_scaleX",57,5a,ad,2c),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("get_scaleY",58,5a,ad,2c),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("get_scrollRect",1a,64,5c,7f),
	HX_("set_scrollRect",8e,4c,7c,9f),
	HX_("get_shader",ee,2e,a8,0d),
	HX_("set_shader",62,cd,25,11),
	HX_("get_transform",43,01,f7,06),
	HX_("set_transform",4f,e3,fc,4b),
	HX_("get_visible",89,d8,1e,29),
	HX_("set_visible",95,df,8b,33),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	::String(null()) };

static void DisplayObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::_hx___broadcastEvents,"__broadcastEvents");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::_hx___initStage,"__initStage");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::_hx___instanceCount,"__instanceCount");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::_hx___supportDOM,"__supportDOM");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::_hx___tempStack,"__tempStack");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DisplayObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::_hx___broadcastEvents,"__broadcastEvents");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::_hx___initStage,"__initStage");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::_hx___instanceCount,"__instanceCount");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::_hx___supportDOM,"__supportDOM");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::_hx___tempStack,"__tempStack");
};

#endif

::hx::Class DisplayObject_obj::__mClass;

static ::String DisplayObject_obj_sStaticFields[] = {
	HX_("__broadcastEvents",da,4d,64,5a),
	HX_("__initStage",6e,ce,c9,cd),
	HX_("__instanceCount",da,31,1e,3f),
	HX_("__supportDOM",d3,00,fe,8b),
	HX_("__tempStack",74,b4,4b,e8),
	HX_("__calculateAbsoluteTransform",cf,aa,ec,8d),
	::String(null())
};

void DisplayObject_obj::__register()
{
	DisplayObject_obj _hx_dummy;
	DisplayObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObject",f7,4b,6f,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = DisplayObject_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DisplayObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DisplayObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DisplayObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_182_boot)
HXDLIN( 182)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("__cairo",68,89,77,ab), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("addEventListener",cd,0b,64,f1), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(2,HX_("removeEventListener",ca,87,75,55), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_184_boot)
HXDLIN( 184)		_hx___broadcastEvents =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_186_boot)
HXDLIN( 186)		_hx___instanceCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_26400284d5456c16_189_boot)
HXDLIN( 189)		_hx___supportDOM = false;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::ObjectVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_191_boot)
HXLINE( 192)			int length = null();
HXDLIN( 192)			bool fixed = null();
HXDLIN( 192)			::Array< ::Dynamic> array = null();
HXDLIN( 192)			return  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::_Vector::ObjectVector stack){
            			HX_STACKFRAME(&_hx_pos_26400284d5456c16_192_boot)
HXLINE( 192)			stack->set_length(0);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_26400284d5456c16_191_boot)
HXDLIN( 191)		_hx___tempStack =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace display