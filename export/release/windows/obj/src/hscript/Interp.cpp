#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_ErrorDef
#include <hscript/ErrorDef.h>
#endif
#ifndef INCLUDED_hscript_ExprDef
#include <hscript/ExprDef.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript__Interp_Stop
#include <hscript/_Interp/Stop.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f37559d470356c9e_54_new,"hscript.Interp","new",0xf7e71101,"hscript.Interp.new","hscript/Interp.hx",54,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_65_resetVariables,"hscript.Interp","resetVariables",0x6cebf7e7,"hscript.Interp.resetVariables","hscript/Interp.hx",65,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_75_resetVariables,"hscript.Interp","resetVariables",0x6cebf7e7,"hscript.Interp.resetVariables","hscript/Interp.hx",75,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_83_posInfos,"hscript.Interp","posInfos",0x444859d0,"hscript.Interp.posInfos","hscript/Interp.hx",83,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_98_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",98,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_99_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",99,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_100_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",100,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_101_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",101,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_102_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",102,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_103_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",103,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_104_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",104,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_105_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",105,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_106_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",106,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_107_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",107,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_108_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",108,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_109_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",109,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_110_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",110,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_111_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",111,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_112_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",112,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_113_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",113,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_114_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",114,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_115_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",115,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_116_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",116,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_118_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",118,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_119_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",119,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_120_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",120,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_121_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",121,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_122_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",122,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_123_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",123,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_124_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",124,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_125_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",125,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_126_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",126,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_127_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",127,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_128_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",128,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_129_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",129,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_91_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",91,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_133_setVar,"hscript.Interp","setVar",0xedd18664,"hscript.Interp.setVar","hscript/Interp.hx",133,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_136_assign,"hscript.Interp","assign",0xca66602e,"hscript.Interp.assign","hscript/Interp.hx",136,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_165_assignOp,"hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",165,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_163_assignOp,"hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",163,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_168_evalAssignOp,"hscript.Interp","evalAssignOp",0xa46efc2b,"hscript.Interp.evalAssignOp","hscript/Interp.hx",168,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_199_increment,"hscript.Interp","increment",0x1e81f590,"hscript.Interp.increment","hscript/Interp.hx",199,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_251_execute,"hscript.Interp","execute",0xe1c3af56,"hscript.Interp.execute","hscript/Interp.hx",251,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_263_exprReturn,"hscript.Interp","exprReturn",0x8cfbf144,"hscript.Interp.exprReturn","hscript/Interp.hx",263,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_278_duplicate,"hscript.Interp","duplicate",0x8d9a10ec,"hscript.Interp.duplicate","hscript/Interp.hx",278,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_290_restore,"hscript.Interp","restore",0x80670c6f,"hscript.Interp.restore","hscript/Interp.hx",290,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_296_error,"hscript.Interp","error",0xe68736a9,"hscript.Interp.error","hscript/Interp.hx",296,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_306_rethrow,"hscript.Interp","rethrow",0x0be155b4,"hscript.Interp.rethrow","hscript/Interp.hx",306,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_310_resolve,"hscript.Interp","resolve",0x7d16b80d,"hscript.Interp.resolve","hscript/Interp.hx",310,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_320_expr,"hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",320,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_415_expr,"hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",415,0xf078416e)
static const int _hx_array_data_9af07c8f_66[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_590_doWhileLoop,"hscript.Interp","doWhileLoop",0x813d4b4b,"hscript.Interp.doWhileLoop","hscript/Interp.hx",590,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_607_whileLoop,"hscript.Interp","whileLoop",0xce1b3216,"hscript.Interp.whileLoop","hscript/Interp.hx",607,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_623_makeIterator,"hscript.Interp","makeIterator",0x634d013b,"hscript.Interp.makeIterator","hscript/Interp.hx",623,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_633_forLoop,"hscript.Interp","forLoop",0xdf1ff72e,"hscript.Interp.forLoop","hscript/Interp.hx",633,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_653_isMap,"hscript.Interp","isMap",0x34ae9fb3,"hscript.Interp.isMap","hscript/Interp.hx",653,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_657_getMapValue,"hscript.Interp","getMapValue",0x1594fb8c,"hscript.Interp.getMapValue","hscript/Interp.hx",657,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_661_setMapValue,"hscript.Interp","setMapValue",0x20020298,"hscript.Interp.setMapValue","hscript/Interp.hx",661,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_664_get,"hscript.Interp","get",0xf7e1c137,"hscript.Interp.get","hscript/Interp.hx",664,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_680_set,"hscript.Interp","set",0xf7eadc43,"hscript.Interp.set","hscript/Interp.hx",680,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_687_fcall,"hscript.Interp","fcall",0x6ff6aee5,"hscript.Interp.fcall","hscript/Interp.hx",687,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_691_call,"hscript.Interp","call",0xeaff64dd,"hscript.Interp.call","hscript/Interp.hx",691,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_694_cnew,"hscript.Interp","cnew",0xeb093c1c,"hscript.Interp.cnew","hscript/Interp.hx",694,0xf078416e)
namespace hscript{

void Interp_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_54_new)
HXLINE(  56)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  60)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE(  61)		this->resetVariables();
HXLINE(  62)		this->initOps();
            	}

Dynamic Interp_obj::__CreateEmpty() { return new Interp_obj; }

void *Interp_obj::_hx_vtable = 0;

Dynamic Interp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Interp_obj > _hx_result = new Interp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Interp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a95eb9f;
}

void Interp_obj::resetVariables(){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_65_resetVariables)
HXDLIN(  65)		 ::hscript::Interp _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  67)		this->variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  72)		{
HXLINE(  72)			 ::Dynamic value = null();
HXDLIN(  72)			this->variables->set(HX_("null",87,9e,0e,49),value);
            		}
HXLINE(  73)		this->variables->set(HX_("true",4e,a7,03,4d),true);
HXLINE(  74)		this->variables->set(HX_("false",a3,35,4f,fb),false);
HXLINE(  75)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscript::Interp,_gthis) HXARGC(1)
            			void _hx_run(::cpp::VirtualArray el){
            				HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_75_resetVariables)
HXLINE(  76)				 ::Dynamic inf = _gthis->posInfos();
HXLINE(  77)				 ::Dynamic v = el->shift();
HXLINE(  78)				if ((el->get_length() > 0)) {
HXLINE(  78)					inf->__SetField(HX_("customParams",d7,51,18,ed),el,::hx::paccDynamic);
            				}
HXLINE(  79)				 ::Dynamic value = ::haxe::Log_obj::trace;
HXDLIN(  79)				value(::Std_obj::string(v),inf);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  75)			::Dynamic this1 = this->variables;
HXDLIN(  75)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("trace",85,8e,1f,16),::Reflect_obj::makeVarArgs( ::Dynamic(new _hx_Closure_0(_gthis))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,resetVariables,(void))

 ::Dynamic Interp_obj::posInfos(){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_83_posInfos)
HXLINE(  85)		if (::hx::IsNotNull( this->curExpr )) {
HXLINE(  86)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("fileName",e7,5a,43,62), ::Dynamic(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)))
            				->setFixed(1,HX_("lineNumber",dd,81,22,76), ::Dynamic(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic))));
            		}
HXLINE(  88)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fileName",e7,5a,43,62),HX_("hscript",73,8c,18,2c))
            			->setFixed(1,HX_("lineNumber",dd,81,22,76),0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,posInfos,return )

void Interp_obj::initOps(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscript::Interp,me) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_98_initOps)
HXLINE(  98)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  98)			return (_hx_tmp + me->expr(e2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_99_initOps)
HXLINE(  99)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  99)			return (( (Float)(_hx_tmp) ) - ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_100_initOps)
HXLINE( 100)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 100)			return (( (Float)(_hx_tmp) ) * ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_101_initOps)
HXLINE( 101)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 101)			return (( (Float)(_hx_tmp) ) / ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_102_initOps)
HXLINE( 102)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 102)			return ::hx::Mod(_hx_tmp,me->expr(e2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_103_initOps)
HXLINE( 103)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 103)			return (( (int)(_hx_tmp) ) & ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_104_initOps)
HXLINE( 104)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 104)			return (( (int)(_hx_tmp) ) | ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_7, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_105_initOps)
HXLINE( 105)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 105)			return (( (int)(_hx_tmp) ) ^ ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_106_initOps)
HXLINE( 106)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 106)			return (( (int)(_hx_tmp) ) << ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_9, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_107_initOps)
HXLINE( 107)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 107)			return (( (int)(_hx_tmp) ) >> ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_10, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_108_initOps)
HXLINE( 108)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 108)			return ::hx::UShr(( (int)(_hx_tmp) ),( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_11, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_109_initOps)
HXLINE( 109)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 109)			return ::hx::IsEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_12, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_110_initOps)
HXLINE( 110)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 110)			return ::hx::IsNotEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_13, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_111_initOps)
HXLINE( 111)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 111)			return ::hx::IsGreaterEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_14, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_112_initOps)
HXLINE( 112)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 112)			return ::hx::IsLessEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_15, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_113_initOps)
HXLINE( 113)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 113)			return ::hx::IsGreater( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_16, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_114_initOps)
HXLINE( 114)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 114)			return ::hx::IsLess( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_17, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_115_initOps)
HXLINE( 115)			if (::hx::IsNotEq( me->expr(e1),true )) {
HXLINE( 115)				return ::hx::IsEq( me->expr(e2),true );
            			}
            			else {
HXLINE( 115)				return true;
            			}
HXDLIN( 115)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_18, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_116_initOps)
HXLINE( 116)			if (::hx::IsEq( me->expr(e1),true )) {
HXLINE( 116)				return ::hx::IsEq( me->expr(e2),true );
            			}
            			else {
HXLINE( 116)				return false;
            			}
HXDLIN( 116)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_19, ::hscript::Interp,me) HXARGC(2)
            		 ::IntIterator _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_118_initOps)
HXLINE( 118)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN( 118)			return  ::IntIterator_obj::__alloc( HX_CTX ,( (int)(_hx_tmp) ),( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_20) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic v1, ::Dynamic v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_119_initOps)
HXLINE( 119)			return (v1 + v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_21) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_120_initOps)
HXLINE( 120)			return (v1 - v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_22) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_121_initOps)
HXLINE( 121)			return (v1 * v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_23) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_122_initOps)
HXLINE( 122)			return (v1 / v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_24) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_123_initOps)
HXLINE( 123)			return ::hx::Mod(v1,v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_25) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_124_initOps)
HXLINE( 124)			return (v1 & v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_26) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_125_initOps)
HXLINE( 125)			return (v1 | v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_27) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_126_initOps)
HXLINE( 126)			return (v1 ^ v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_28) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_127_initOps)
HXLINE( 127)			return (v1 << v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_29) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_128_initOps)
HXLINE( 128)			return (v1 >> v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_30) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_129_initOps)
HXLINE( 129)			return ::hx::UShr(v1,v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_91_initOps)
HXLINE(  92)		 ::hscript::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  94)		this->binops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  98)		this->binops->set(HX_("+",2b,00,00,00), ::Dynamic(new _hx_Closure_0(me)));
HXLINE(  99)		this->binops->set(HX_("-",2d,00,00,00), ::Dynamic(new _hx_Closure_1(me)));
HXLINE( 100)		this->binops->set(HX_("*",2a,00,00,00), ::Dynamic(new _hx_Closure_2(me)));
HXLINE( 101)		this->binops->set(HX_("/",2f,00,00,00), ::Dynamic(new _hx_Closure_3(me)));
HXLINE( 102)		this->binops->set(HX_("%",25,00,00,00), ::Dynamic(new _hx_Closure_4(me)));
HXLINE( 103)		this->binops->set(HX_("&",26,00,00,00), ::Dynamic(new _hx_Closure_5(me)));
HXLINE( 104)		this->binops->set(HX_("|",7c,00,00,00), ::Dynamic(new _hx_Closure_6(me)));
HXLINE( 105)		this->binops->set(HX_("^",5e,00,00,00), ::Dynamic(new _hx_Closure_7(me)));
HXLINE( 106)		this->binops->set(HX_("<<",80,34,00,00), ::Dynamic(new _hx_Closure_8(me)));
HXLINE( 107)		this->binops->set(HX_(">>",40,36,00,00), ::Dynamic(new _hx_Closure_9(me)));
HXLINE( 108)		this->binops->set(HX_(">>>",fe,41,2f,00), ::Dynamic(new _hx_Closure_10(me)));
HXLINE( 109)		this->binops->set(HX_("==",60,35,00,00), ::Dynamic(new _hx_Closure_11(me)));
HXLINE( 110)		this->binops->set(HX_("!=",fc,1c,00,00), ::Dynamic(new _hx_Closure_12(me)));
HXLINE( 111)		this->binops->set(HX_(">=",3f,36,00,00), ::Dynamic(new _hx_Closure_13(me)));
HXLINE( 112)		this->binops->set(HX_("<=",81,34,00,00), ::Dynamic(new _hx_Closure_14(me)));
HXLINE( 113)		this->binops->set(HX_(">",3e,00,00,00), ::Dynamic(new _hx_Closure_15(me)));
HXLINE( 114)		this->binops->set(HX_("<",3c,00,00,00), ::Dynamic(new _hx_Closure_16(me)));
HXLINE( 115)		this->binops->set(HX_("||",80,6c,00,00), ::Dynamic(new _hx_Closure_17(me)));
HXLINE( 116)		this->binops->set(HX_("&&",40,21,00,00), ::Dynamic(new _hx_Closure_18(me)));
HXLINE( 117)		this->binops->set(HX_("=",3d,00,00,00),this->assign_dyn());
HXLINE( 118)		this->binops->set(HX_("...",ee,0f,23,00), ::Dynamic(new _hx_Closure_19(me)));
HXLINE( 119)		this->assignOp(HX_("+=",b2,25,00,00), ::Dynamic(new _hx_Closure_20()));
HXLINE( 120)		this->assignOp(HX_("-=",70,27,00,00), ::Dynamic(new _hx_Closure_21()));
HXLINE( 121)		this->assignOp(HX_("*=",d3,24,00,00), ::Dynamic(new _hx_Closure_22()));
HXLINE( 122)		this->assignOp(HX_("/=",2e,29,00,00), ::Dynamic(new _hx_Closure_23()));
HXLINE( 123)		this->assignOp(HX_("%=",78,20,00,00), ::Dynamic(new _hx_Closure_24()));
HXLINE( 124)		this->assignOp(HX_("&=",57,21,00,00), ::Dynamic(new _hx_Closure_25()));
HXLINE( 125)		this->assignOp(HX_("|=",41,6c,00,00), ::Dynamic(new _hx_Closure_26()));
HXLINE( 126)		this->assignOp(HX_("^=",1f,52,00,00), ::Dynamic(new _hx_Closure_27()));
HXLINE( 127)		this->assignOp(HX_("<<=",bd,bb,2d,00), ::Dynamic(new _hx_Closure_28()));
HXLINE( 128)		this->assignOp(HX_(">>=",fd,41,2f,00), ::Dynamic(new _hx_Closure_29()));
HXLINE( 129)		this->assignOp(HX_(">>>=",7f,7c,2a,29), ::Dynamic(new _hx_Closure_30()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,initOps,(void))

void Interp_obj::setVar(::String name, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_133_setVar)
HXDLIN( 133)		this->variables->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,setVar,(void))

 ::Dynamic Interp_obj::assign( ::Dynamic e1, ::Dynamic e2){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_136_assign)
HXLINE( 137)		 ::Dynamic v = this->expr(e2);
HXLINE( 138)		{
HXLINE( 138)			 ::hscript::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 138)			switch((int)(_g->_hx_getIndex())){
            				case (int)1: {
HXLINE( 139)					::String id = _g->_hx_getString(0);
HXDLIN( 139)					{
HXLINE( 140)						 ::Dynamic l = this->locals->get(id);
HXLINE( 141)						if (::hx::IsNull( l )) {
HXLINE( 142)							this->setVar(id,v);
            						}
            						else {
HXLINE( 144)							l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 145)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 145)					::String f = _g->_hx_getString(1);
HXLINE( 146)					v = this->set(this->expr(e),f,v);
            				}
            				break;
            				case (int)16: {
HXLINE( 147)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 147)					 ::Dynamic index = _g->_hx_getObject(1);
HXDLIN( 147)					{
HXLINE( 148)						 ::Dynamic arr = this->expr(e);
HXLINE( 149)						 ::Dynamic index1 = this->expr(index);
HXLINE( 150)						if (::Std_obj::isOfType(arr,::hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 151)							::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            						}
            						else {
HXLINE( 154)							arr->__SetItem(( (int)(index1) ),v);
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 158)					 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidOp(HX_("=",3d,00,00,00)),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 158)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            			}
            		}
HXLINE( 160)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assign,return )

void Interp_obj::assignOp(::String op, ::Dynamic fop){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,op, ::hscript::Interp,me, ::Dynamic,fop) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_STACKFRAME(&_hx_pos_f37559d470356c9e_165_assignOp)
HXLINE( 165)			return me->evalAssignOp(op,fop,e1,e2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_163_assignOp)
HXLINE( 164)		 ::hscript::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 165)		this->binops->set(op, ::Dynamic(new _hx_Closure_0(op,me,fop)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assignOp,(void))

 ::Dynamic Interp_obj::evalAssignOp(::String op, ::Dynamic fop, ::Dynamic e1, ::Dynamic e2){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_168_evalAssignOp)
HXLINE( 169)		 ::Dynamic v;
HXLINE( 170)		{
HXLINE( 170)			 ::hscript::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 170)			switch((int)(_g->_hx_getIndex())){
            				case (int)1: {
HXLINE( 171)					::String id = _g->_hx_getString(0);
HXDLIN( 171)					{
HXLINE( 172)						 ::Dynamic l = this->locals->get(id);
HXLINE( 173)						 ::Dynamic v1 = this->expr(e1);
HXDLIN( 173)						v = fop(v1,this->expr(e2));
HXLINE( 174)						if (::hx::IsNull( l )) {
HXLINE( 175)							this->setVar(id,v);
            						}
            						else {
HXLINE( 177)							l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 178)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 178)					::String f = _g->_hx_getString(1);
HXDLIN( 178)					{
HXLINE( 179)						 ::Dynamic obj = this->expr(e);
HXLINE( 180)						 ::Dynamic v1 = this->get(obj,f);
HXDLIN( 180)						v = fop(v1,this->expr(e2));
HXLINE( 181)						v = this->set(obj,f,v);
            					}
            				}
            				break;
            				case (int)16: {
HXLINE( 182)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 182)					 ::Dynamic index = _g->_hx_getObject(1);
HXDLIN( 182)					{
HXLINE( 183)						 ::Dynamic arr = this->expr(e);
HXLINE( 184)						 ::Dynamic index1 = this->expr(index);
HXLINE( 185)						if (::Std_obj::isOfType(arr,::hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 186)							 ::Dynamic v1 = ::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1);
HXDLIN( 186)							v = fop(v1,this->expr(e2));
HXLINE( 187)							::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            						}
            						else {
HXLINE( 190)							 ::Dynamic arr1 = arr->__GetItem(( (int)(index1) ));
HXDLIN( 190)							v = fop(arr1,this->expr(e2));
HXLINE( 191)							arr->__SetItem(( (int)(index1) ),v);
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 194)					 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidOp(op),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 194)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            			}
            		}
HXLINE( 196)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,evalAssignOp,return )

 ::Dynamic Interp_obj::increment( ::Dynamic e,bool prefix,int delta){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_199_increment)
HXLINE( 201)		this->curExpr = e;
HXLINE( 202)		 ::hscript::ExprDef e1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXLINE( 204)		switch((int)(e1->_hx_getIndex())){
            			case (int)1: {
HXLINE( 205)				::String id = e1->_hx_getString(0);
HXLINE( 206)				 ::Dynamic l = this->locals->get(id);
HXLINE( 207)				 ::Dynamic v;
HXDLIN( 207)				if (::hx::IsNull( l )) {
HXLINE( 207)					v = this->resolve(id);
            				}
            				else {
HXLINE( 207)					v =  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            				}
HXLINE( 208)				if (prefix) {
HXLINE( 209)					v = (v + delta);
HXLINE( 210)					if (::hx::IsNull( l )) {
HXLINE( 210)						this->setVar(id,v);
            					}
            					else {
HXLINE( 210)						l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            					}
            				}
            				else {
HXLINE( 212)					if (::hx::IsNull( l )) {
HXLINE( 212)						this->setVar(id,(v + delta));
            					}
            					else {
HXLINE( 212)						l->__SetField(HX_("r",72,00,00,00),(v + delta),::hx::paccDynamic);
            					}
            				}
HXLINE( 213)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 214)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 214)				::String f = e1->_hx_getString(1);
HXLINE( 215)				 ::Dynamic obj = this->expr(e);
HXLINE( 216)				 ::Dynamic v = this->get(obj,f);
HXLINE( 217)				if (prefix) {
HXLINE( 218)					v = (v + delta);
HXLINE( 219)					this->set(obj,f,v);
            				}
            				else {
HXLINE( 221)					this->set(obj,f,(v + delta));
            				}
HXLINE( 222)				return v;
            			}
            			break;
            			case (int)16: {
HXLINE( 223)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 223)				 ::Dynamic index = e1->_hx_getObject(1);
HXLINE( 224)				 ::Dynamic arr = this->expr(e);
HXLINE( 225)				 ::Dynamic index1 = this->expr(index);
HXLINE( 226)				if (::Std_obj::isOfType(arr,::hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 227)					int v = ( (int)(::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1)) );
HXLINE( 228)					if (prefix) {
HXLINE( 229)						v = (v + delta);
HXLINE( 230)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            					}
            					else {
HXLINE( 233)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,(v + delta));
            					}
HXLINE( 235)					return v;
            				}
            				else {
HXLINE( 238)					int v = ( (int)(arr->__GetItem(( (int)(index1) ))) );
HXLINE( 239)					if (prefix) {
HXLINE( 240)						v = (v + delta);
HXLINE( 241)						arr->__SetItem(( (int)(index1) ),v);
            					}
            					else {
HXLINE( 243)						arr->__SetItem(( (int)(index1) ),(v + delta));
            					}
HXLINE( 244)					return v;
            				}
            			}
            			break;
            			default:{
HXLINE( 247)				::String e;
HXDLIN( 247)				if ((delta > 0)) {
HXLINE( 247)					e = HX_("++",a0,25,00,00);
            				}
            				else {
HXLINE( 247)					e = HX_("--",60,27,00,00);
            				}
HXDLIN( 247)				 ::hscript::Error e1 =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidOp(e),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 247)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e1));
            			}
            		}
HXLINE( 204)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,increment,return )

 ::Dynamic Interp_obj::execute( ::Dynamic expr){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_251_execute)
HXLINE( 252)		this->depth = 0;
HXLINE( 254)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 258)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE( 259)		return this->exprReturn(expr);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,execute,return )

 ::Dynamic Interp_obj::exprReturn( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_263_exprReturn)
HXDLIN( 263)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 264)			return this->expr(e);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 265)				{
HXLINE( 265)					null();
            				}
HXDLIN( 265)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 263)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 265)					 ::hscript::_Interp::Stop e = _g1;
HXLINE( 266)					switch((int)(e->_hx_getIndex())){
            						case (int)0: {
HXLINE( 267)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid break",b6,ee,24,9d)));
            						}
            						break;
            						case (int)1: {
HXLINE( 268)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid continue",d0,6a,b7,3f)));
            						}
            						break;
            						case (int)2: {
HXLINE( 270)							 ::Dynamic v = this->returnValue;
HXLINE( 271)							this->returnValue = null();
HXLINE( 272)							return v;
            						}
            						break;
            					}
            				}
            				else {
HXDLIN( 263)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN( 263)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,exprReturn,return )

 ::haxe::ds::StringMap Interp_obj::duplicate( ::haxe::ds::StringMap h){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_278_duplicate)
HXLINE( 280)		 ::haxe::ds::StringMap h2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 284)		{
HXLINE( 284)			 ::Dynamic k = h->keys();
HXDLIN( 284)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 284)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 285)				h2->set(k1,h->get(k1));
            			}
            		}
HXLINE( 286)		return h2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,duplicate,return )

void Interp_obj::restore(int old){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_290_restore)
HXDLIN( 290)		while((this->declared->length > old)){
HXLINE( 291)			 ::Dynamic d = this->declared->pop();
HXLINE( 292)			this->locals->set(( (::String)(d->__Field(HX_("n",6e,00,00,00),::hx::paccDynamic)) ), ::Dynamic(d->__Field(HX_("old",a7,98,54,00),::hx::paccDynamic)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,restore,(void))

 ::Dynamic Interp_obj::error( ::hscript::ErrorDef e,::hx::Null< bool >  __o_rethrow){
            		bool rethrow = __o_rethrow.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_296_error)
HXLINE( 297)		 ::hscript::Error e1 =  ::hscript::Error_obj::__alloc( HX_CTX ,e,( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXLINE( 298)		if (rethrow) {
HXLINE( 298)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e1));
            		}
            		else {
HXLINE( 298)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e1));
            		}
HXDLIN( 298)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,error,return )

void Interp_obj::rethrow( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_306_rethrow)
HXDLIN( 306)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,rethrow,(void))

 ::Dynamic Interp_obj::resolve(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_310_resolve)
HXLINE( 311)		 ::Dynamic l = this->locals->get(id);
HXLINE( 312)		if (::hx::IsNotNull( l )) {
HXLINE( 313)			return  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            		}
HXLINE( 314)		 ::Dynamic v = this->variables->get(id);
HXLINE( 315)		bool _hx_tmp;
HXDLIN( 315)		if (::hx::IsNull( v )) {
HXLINE( 315)			_hx_tmp = !(this->variables->exists(id));
            		}
            		else {
HXLINE( 315)			_hx_tmp = false;
            		}
HXDLIN( 315)		if (_hx_tmp) {
HXLINE( 316)			 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EUnknownVariable(id),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 316)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 317)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,resolve,return )

 ::Dynamic Interp_obj::expr( ::Dynamic e){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_320_expr)
HXDLIN( 320)		 ::hscript::Interp _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 322)		this->curExpr = e;
HXLINE( 323)		 ::hscript::ExprDef e1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXLINE( 325)		switch((int)(e1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 326)				 ::hscript::Const c = e1->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 327)				switch((int)(c->_hx_getIndex())){
            					case (int)0: {
HXLINE( 328)						int v = c->_hx_getInt(0);
HXDLIN( 328)						return v;
            					}
            					break;
            					case (int)1: {
HXLINE( 329)						Float f = c->_hx_getFloat(0);
HXDLIN( 329)						return f;
            					}
            					break;
            					case (int)2: {
HXLINE( 330)						::String s = c->_hx_getString(0);
HXDLIN( 330)						return s;
            					}
            					break;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 335)				::String id = e1->_hx_getString(0);
HXLINE( 336)				return this->resolve(id);
            			}
            			break;
            			case (int)2: {
HXLINE( 337)				 ::hscript::CType _g = e1->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN( 337)				::String n = e1->_hx_getString(0);
HXDLIN( 337)				 ::Dynamic e = e1->_hx_getObject(2);
HXLINE( 338)				::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 338)				_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("n",6e,00,00,00),n)
            					->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 339)				{
HXLINE( 339)					::Dynamic this1 = this->locals;
HXDLIN( 339)					 ::Dynamic value;
HXDLIN( 339)					if (::hx::IsNull( e )) {
HXLINE( 339)						value = null();
            					}
            					else {
HXLINE( 339)						value = this->expr(e);
            					}
HXDLIN( 339)					( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("r",72,00,00,00),value)));
            				}
HXLINE( 340)				return null();
            			}
            			break;
            			case (int)3: {
HXLINE( 341)				 ::Dynamic e = e1->_hx_getObject(0);
HXLINE( 342)				return this->expr(e);
            			}
            			break;
            			case (int)4: {
HXLINE( 343)				::Array< ::Dynamic> exprs = e1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 344)				int old = this->declared->length;
HXLINE( 345)				 ::Dynamic v = null();
HXLINE( 346)				{
HXLINE( 346)					int _g = 0;
HXDLIN( 346)					while((_g < exprs->length)){
HXLINE( 346)						 ::Dynamic e = exprs->__get(_g);
HXDLIN( 346)						_g = (_g + 1);
HXLINE( 347)						v = this->expr(e);
            					}
            				}
HXLINE( 348)				this->restore(old);
HXLINE( 349)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 350)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 350)				::String f = e1->_hx_getString(1);
HXLINE( 351)				return this->get(this->expr(e),f);
            			}
            			break;
            			case (int)6: {
HXLINE( 352)				::String op = e1->_hx_getString(0);
HXDLIN( 352)				 ::Dynamic e11 = e1->_hx_getObject(1);
HXDLIN( 352)				 ::Dynamic e2 = e1->_hx_getObject(2);
HXLINE( 353)				 ::Dynamic fop = this->binops->get(op);
HXLINE( 354)				if (::hx::IsNull( fop )) {
HXLINE( 354)					 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidOp(op),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 354)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
HXLINE( 355)				return fop(e11,e2);
            			}
            			break;
            			case (int)7: {
HXLINE( 356)				::String op = e1->_hx_getString(0);
HXDLIN( 356)				bool prefix = e1->_hx_getBool(1);
HXDLIN( 356)				 ::Dynamic e = e1->_hx_getObject(2);
HXLINE( 357)				::String _hx_switch_0 = op;
            				if (  (_hx_switch_0==HX_("!",21,00,00,00)) ){
HXLINE( 359)					return ::hx::IsNotEq( this->expr(e),true );
HXDLIN( 359)					goto _hx_goto_52;
            				}
            				if (  (_hx_switch_0==HX_("++",a0,25,00,00)) ){
HXLINE( 363)					return this->increment(e,prefix,1);
HXDLIN( 363)					goto _hx_goto_52;
            				}
            				if (  (_hx_switch_0==HX_("-",2d,00,00,00)) ){
HXLINE( 361)					return -(this->expr(e));
HXDLIN( 361)					goto _hx_goto_52;
            				}
            				if (  (_hx_switch_0==HX_("--",60,27,00,00)) ){
HXLINE( 365)					return this->increment(e,prefix,-1);
HXDLIN( 365)					goto _hx_goto_52;
            				}
            				if (  (_hx_switch_0==HX_("~",7e,00,00,00)) ){
HXLINE( 370)					return ~(( (int)(this->expr(e)) ));
HXDLIN( 370)					goto _hx_goto_52;
            				}
            				/* default */{
HXLINE( 373)					 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidOp(op),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 373)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            				_hx_goto_52:;
            			}
            			break;
            			case (int)8: {
HXLINE( 375)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 375)				::Array< ::Dynamic> params = e1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 376)				::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new();
HXLINE( 377)				{
HXLINE( 377)					int _g = 0;
HXDLIN( 377)					while((_g < params->length)){
HXLINE( 377)						 ::Dynamic p = params->__get(_g);
HXDLIN( 377)						_g = (_g + 1);
HXLINE( 378)						args->push(this->expr(p));
            					}
            				}
HXLINE( 380)				 ::hscript::ExprDef _g1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 380)				if ((_g1->_hx_getIndex() == 5)) {
HXLINE( 381)					 ::Dynamic e = _g1->_hx_getObject(0);
HXDLIN( 381)					::String f = _g1->_hx_getString(1);
HXLINE( 382)					 ::Dynamic obj = this->expr(e);
HXLINE( 383)					if (::hx::IsNull( obj )) {
HXLINE( 383)						 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidAccess(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 383)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
HXLINE( 384)					return this->fcall(obj,f,args);
            				}
            				else {
HXLINE( 386)					return this->call(null(),this->expr(e),args);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 388)				 ::Dynamic econd = e1->_hx_getObject(0);
HXDLIN( 388)				 ::Dynamic e11 = e1->_hx_getObject(1);
HXDLIN( 388)				 ::Dynamic e2 = e1->_hx_getObject(2);
HXLINE( 389)				if (::hx::IsEq( this->expr(econd),true )) {
HXLINE( 389)					return this->expr(e11);
            				}
            				else {
HXLINE( 389)					if (::hx::IsNull( e2 )) {
HXLINE( 389)						return null();
            					}
            					else {
HXLINE( 389)						return this->expr(e2);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 390)				 ::Dynamic econd = e1->_hx_getObject(0);
HXDLIN( 390)				 ::Dynamic e = e1->_hx_getObject(1);
HXLINE( 391)				this->whileLoop(econd,e);
HXLINE( 392)				return null();
            			}
            			break;
            			case (int)11: {
HXLINE( 396)				::String v = e1->_hx_getString(0);
HXDLIN( 396)				 ::Dynamic it = e1->_hx_getObject(1);
HXDLIN( 396)				 ::Dynamic e = e1->_hx_getObject(2);
HXLINE( 397)				this->forLoop(v,it,e);
HXLINE( 398)				return null();
            			}
            			break;
            			case (int)12: {
HXLINE( 400)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::_Interp::Stop_obj::SBreak_dyn()));
            			}
            			break;
            			case (int)13: {
HXLINE( 402)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::_Interp::Stop_obj::SContinue_dyn()));
            			}
            			break;
            			case (int)14: {
            				HX_BEGIN_LOCAL_FUNC_S7(::hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,fexpr, ::hscript::Interp,_gthis,::Array< int >,minParams, ::hscript::Interp,me,::Array< ::Dynamic>,params, ::haxe::ds::StringMap,capturedLocals) HXARGC(1)
            				 ::Dynamic _hx_run(::cpp::VirtualArray args){
            					HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_415_expr)
HXLINE( 416)					int f;
HXDLIN( 416)					if (::hx::IsNull( args )) {
HXLINE( 416)						f = 0;
            					}
            					else {
HXLINE( 416)						f = args->get_length();
            					}
HXDLIN( 416)					if ((f != params->length)) {
HXLINE( 417)						if ((args->get_length() < minParams->__get(0))) {
HXLINE( 418)							::String str = (((HX_("Invalid number of parameters. Got ",cb,2b,d9,b1) + args->get_length()) + HX_(", required ",ed,0c,66,93)) + minParams->__get(0));
HXLINE( 419)							if (::hx::IsNotNull( name )) {
HXLINE( 419)								str = (str + ((HX_(" for function '",f6,90,ab,a0) + name) + HX_("'",27,00,00,00)));
            							}
HXLINE( 420)							 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::ECustom(str),( (int)(_gthis->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(_gthis->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(_gthis->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(_gthis->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 420)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
HXLINE( 423)						::cpp::VirtualArray args2 = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 424)						int extraParams = (args->get_length() - minParams->__get(0));
HXLINE( 425)						int pos = 0;
HXLINE( 426)						{
HXLINE( 426)							int _g = 0;
HXDLIN( 426)							while((_g < params->length)){
HXLINE( 426)								 ::Dynamic p = params->__get(_g);
HXDLIN( 426)								_g = (_g + 1);
HXLINE( 427)								if (( (bool)(p->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 428)									if ((extraParams > 0)) {
HXLINE( 429)										pos = (pos + 1);
HXDLIN( 429)										args2->push(args->__get((pos - 1)));
HXLINE( 430)										extraParams = (extraParams - 1);
            									}
            									else {
HXLINE( 432)										args2->push(null());
            									}
            								}
            								else {
HXLINE( 434)									pos = (pos + 1);
HXDLIN( 434)									args2->push(args->__get((pos - 1)));
            								}
            							}
            						}
HXLINE( 435)						args = args2;
            					}
HXLINE( 437)					 ::haxe::ds::StringMap old = me->locals;
HXDLIN( 437)					int depth = me->depth;
HXLINE( 438)					me->depth++;
HXLINE( 439)					me->locals = me->duplicate(capturedLocals);
HXLINE( 440)					{
HXLINE( 440)						int _g = 0;
HXDLIN( 440)						int _g1 = params->length;
HXDLIN( 440)						while((_g < _g1)){
HXLINE( 440)							_g = (_g + 1);
HXDLIN( 440)							int i = (_g - 1);
HXLINE( 441)							me->locals->set(( (::String)(params->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),args->__get(i))));
            						}
            					}
HXLINE( 442)					 ::Dynamic r = null();
HXLINE( 443)					int oldDecl = _gthis->declared->length;
HXLINE( 444)					if (_gthis->inTry) {
HXLINE( 445)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 446)							r = me->exprReturn(fexpr);
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 447)								{
HXLINE( 447)									null();
            								}
HXDLIN( 447)								 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 448)								me->locals = old;
HXLINE( 449)								me->depth = depth;
HXLINE( 453)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					else {
HXLINE( 457)						r = me->exprReturn(fexpr);
            					}
HXLINE( 458)					_gthis->restore(oldDecl);
HXLINE( 459)					me->locals = old;
HXLINE( 460)					me->depth = depth;
HXLINE( 461)					return r;
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 406)				 ::hscript::CType _g = e1->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXDLIN( 406)				::Array< ::Dynamic> params = e1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 406)				 ::Dynamic fexpr = e1->_hx_getObject(1);
HXDLIN( 406)				::String name = e1->_hx_getString(2);
HXLINE( 407)				 ::haxe::ds::StringMap capturedLocals = this->duplicate(this->locals);
HXLINE( 408)				 ::hscript::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 409)				bool hasOpt = false;
HXDLIN( 409)				::Array< int > minParams = ::Array_obj< int >::fromData( _hx_array_data_9af07c8f_66,1);
HXLINE( 410)				{
HXLINE( 410)					int _g1 = 0;
HXDLIN( 410)					while((_g1 < params->length)){
HXLINE( 410)						 ::Dynamic p = params->__get(_g1);
HXDLIN( 410)						_g1 = (_g1 + 1);
HXLINE( 411)						if (( (bool)(p->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 412)							hasOpt = true;
            						}
            						else {
HXLINE( 414)							minParams[0]++;
            						}
            					}
            				}
HXLINE( 415)				 ::Dynamic f =  ::Dynamic(new _hx_Closure_0(name,fexpr,_gthis,minParams,me,params,capturedLocals));
HXLINE( 463)				 ::Dynamic f1 = ::Reflect_obj::makeVarArgs(f);
HXLINE( 464)				if (::hx::IsNotNull( name )) {
HXLINE( 465)					if ((this->depth == 0)) {
HXLINE( 467)						this->variables->set(name,f1);
            					}
            					else {
HXLINE( 470)						::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 470)						::String name1 = name;
HXDLIN( 470)						_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("n",6e,00,00,00),name1)
            							->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(name))));
HXLINE( 471)						 ::Dynamic ref =  ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("r",72,00,00,00),f1));
HXLINE( 472)						this->locals->set(name,ref);
HXLINE( 473)						capturedLocals->set(name,ref);
            					}
            				}
HXLINE( 476)				return f1;
            			}
            			break;
            			case (int)15: {
HXLINE( 403)				 ::Dynamic e = e1->_hx_getObject(0);
HXLINE( 404)				 ::Dynamic _hx_tmp;
HXDLIN( 404)				if (::hx::IsNull( e )) {
HXLINE( 404)					_hx_tmp = null();
            				}
            				else {
HXLINE( 404)					_hx_tmp = this->expr(e);
            				}
HXDLIN( 404)				this->returnValue = _hx_tmp;
HXLINE( 405)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::_Interp::Stop_obj::SReturn_dyn()));
            			}
            			break;
            			case (int)16: {
HXLINE( 519)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 519)				 ::Dynamic index = e1->_hx_getObject(1);
HXLINE( 520)				 ::Dynamic arr = this->expr(e);
HXLINE( 521)				 ::Dynamic index1 = this->expr(index);
HXLINE( 522)				if (::Std_obj::isOfType(arr,::hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 523)					return ::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1);
            				}
            				else {
HXLINE( 526)					return arr->__GetItem(( (int)(index1) ));
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 477)				::Array< ::Dynamic> arr = e1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 478)				bool _hx_tmp;
HXDLIN( 478)				if ((arr->length > 0)) {
HXLINE( 478)					 ::hscript::ExprDef _g = arr->__get(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 478)					if ((_g->_hx_getIndex() == 6)) {
HXLINE( 478)						 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 478)						 ::Dynamic _g2 = _g->_hx_getObject(2);
HXDLIN( 478)						if ((_g->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 478)							_hx_tmp = true;
            						}
            						else {
HXLINE( 478)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 478)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 478)					_hx_tmp = false;
            				}
HXDLIN( 478)				if (_hx_tmp) {
HXLINE( 479)					bool isAllString = true;
HXLINE( 480)					bool isAllInt = true;
HXLINE( 481)					bool isAllObject = true;
HXLINE( 482)					bool isAllEnum = true;
HXLINE( 483)					::cpp::VirtualArray keys = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 484)					::cpp::VirtualArray values = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 485)					{
HXLINE( 485)						int _g = 0;
HXDLIN( 485)						while((_g < arr->length)){
HXLINE( 485)							 ::Dynamic e = arr->__get(_g);
HXDLIN( 485)							_g = (_g + 1);
HXLINE( 486)							{
HXLINE( 486)								 ::hscript::ExprDef _g1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 486)								if ((_g1->_hx_getIndex() == 6)) {
HXLINE( 487)									if ((_g1->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 487)										 ::Dynamic eKey = _g1->_hx_getObject(1);
HXDLIN( 487)										 ::Dynamic eValue = _g1->_hx_getObject(2);
HXDLIN( 487)										{
HXLINE( 488)											 ::Dynamic key = this->expr(eKey);
HXLINE( 489)											 ::Dynamic value = this->expr(eValue);
HXLINE( 490)											if (isAllString) {
HXLINE( 490)												isAllString = ::Std_obj::isOfType(key,::hx::ClassOf< ::String >());
            											}
            											else {
HXLINE( 490)												isAllString = false;
            											}
HXLINE( 491)											if (isAllInt) {
HXLINE( 491)												isAllInt = ::Std_obj::isOfType(key,::hx::ClassOf< int >());
            											}
            											else {
HXLINE( 491)												isAllInt = false;
            											}
HXLINE( 492)											if (isAllObject) {
HXLINE( 492)												isAllObject = ::Reflect_obj::isObject(key);
            											}
            											else {
HXLINE( 492)												isAllObject = false;
            											}
HXLINE( 493)											if (isAllEnum) {
HXLINE( 493)												isAllEnum = ::Reflect_obj::isEnumValue(key);
            											}
            											else {
HXLINE( 493)												isAllEnum = false;
            											}
HXLINE( 494)											keys->push(key);
HXLINE( 495)											values->push(value);
            										}
            									}
            									else {
HXLINE( 497)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("=> expected",17,e5,65,e5)));
            									}
            								}
            								else {
HXLINE( 497)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("=> expected",17,e5,65,e5)));
            								}
            							}
            						}
            					}
HXLINE( 500)					 ::Dynamic map;
HXLINE( 501)					if (isAllInt) {
HXLINE( 500)						map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE( 502)						if (isAllString) {
HXLINE( 500)							map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            						}
            						else {
HXLINE( 503)							if (isAllEnum) {
HXLINE( 500)								map =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            							}
            							else {
HXLINE( 504)								if (isAllObject) {
HXLINE( 500)									map =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            								}
            								else {
HXLINE( 505)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Inconsistent key types",af,4f,50,a9)));
            								}
            							}
            						}
            					}
HXLINE( 507)					{
HXLINE( 507)						int _g1 = 0;
HXDLIN( 507)						int _g2 = keys->get_length();
HXDLIN( 507)						while((_g1 < _g2)){
HXLINE( 507)							_g1 = (_g1 + 1);
HXDLIN( 507)							int n = (_g1 - 1);
HXLINE( 508)							::haxe::IMap_obj::set( ::hx::interface_check(map,0x09c2bd39),keys->__get(n),values->__get(n));
            						}
            					}
HXLINE( 510)					return map;
            				}
            				else {
HXLINE( 513)					::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 514)					{
HXLINE( 514)						int _g = 0;
HXDLIN( 514)						while((_g < arr->length)){
HXLINE( 514)							 ::Dynamic e = arr->__get(_g);
HXDLIN( 514)							_g = (_g + 1);
HXLINE( 515)							a->push(this->expr(e));
            						}
            					}
HXLINE( 517)					return a;
            				}
            			}
            			break;
            			case (int)18: {
HXLINE( 528)				::String cl = e1->_hx_getString(0);
HXDLIN( 528)				::Array< ::Dynamic> params = e1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 529)				::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 530)				{
HXLINE( 530)					int _g = 0;
HXDLIN( 530)					while((_g < params->length)){
HXLINE( 530)						 ::Dynamic e = params->__get(_g);
HXDLIN( 530)						_g = (_g + 1);
HXLINE( 531)						a->push(this->expr(e));
            					}
            				}
HXLINE( 532)				return this->cnew(cl,a);
            			}
            			break;
            			case (int)19: {
HXLINE( 533)				 ::Dynamic e = e1->_hx_getObject(0);
HXLINE( 534)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(this->expr(e)));
            			}
            			break;
            			case (int)20: {
HXLINE( 535)				 ::hscript::CType _g = e1->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN( 535)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 535)				::String n = e1->_hx_getString(1);
HXDLIN( 535)				 ::Dynamic ecatch = e1->_hx_getObject(3);
HXLINE( 536)				int old = this->declared->length;
HXLINE( 537)				bool oldTry = this->inTry;
HXLINE( 538)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 539)					this->inTry = true;
HXLINE( 540)					 ::Dynamic v = this->expr(e);
HXLINE( 541)					this->restore(old);
HXLINE( 542)					this->inTry = oldTry;
HXLINE( 543)					return v;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 544)						{
HXLINE( 544)							null();
            						}
HXDLIN( 544)						 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 538)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 544)							 ::hscript::_Interp::Stop err = _g1;
HXLINE( 545)							this->inTry = oldTry;
HXLINE( 546)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            						}
            						else {
HXLINE( 547)							 ::Dynamic err = _g1;
HXLINE( 549)							this->restore(old);
HXLINE( 550)							this->inTry = oldTry;
HXLINE( 552)							::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 552)							_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("n",6e,00,00,00),n)
            								->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 553)							this->locals->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),err)));
HXLINE( 554)							 ::Dynamic v = this->expr(ecatch);
HXLINE( 555)							this->restore(old);
HXLINE( 556)							return v;
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE( 558)				::Array< ::Dynamic> fl = e1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 559)				 ::Dynamic o =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 560)				{
HXLINE( 560)					int _g = 0;
HXDLIN( 560)					while((_g < fl->length)){
HXLINE( 560)						 ::Dynamic f = fl->__get(_g);
HXDLIN( 560)						_g = (_g + 1);
HXLINE( 561)						::String f1 = ( (::String)(f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 561)						this->set(o,f1,this->expr(f->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            					}
            				}
HXLINE( 562)				return o;
            			}
            			break;
            			case (int)22: {
HXLINE( 563)				 ::Dynamic econd = e1->_hx_getObject(0);
HXDLIN( 563)				 ::Dynamic e11 = e1->_hx_getObject(1);
HXDLIN( 563)				 ::Dynamic e2 = e1->_hx_getObject(2);
HXLINE( 564)				if (::hx::IsEq( this->expr(econd),true )) {
HXLINE( 564)					return this->expr(e11);
            				}
            				else {
HXLINE( 564)					return this->expr(e2);
            				}
            			}
            			break;
            			case (int)23: {
HXLINE( 565)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 565)				::Array< ::Dynamic> cases = e1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 565)				 ::Dynamic def = e1->_hx_getObject(2);
HXLINE( 566)				 ::Dynamic val = this->expr(e);
HXLINE( 567)				bool match = false;
HXLINE( 568)				{
HXLINE( 568)					int _g = 0;
HXDLIN( 568)					while((_g < cases->length)){
HXLINE( 568)						 ::Dynamic c = cases->__get(_g);
HXDLIN( 568)						_g = (_g + 1);
HXLINE( 569)						{
HXLINE( 569)							int _g1 = 0;
HXDLIN( 569)							::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 569)							while((_g1 < _g2->length)){
HXLINE( 569)								 ::Dynamic v = _g2->__get(_g1);
HXDLIN( 569)								_g1 = (_g1 + 1);
HXLINE( 570)								if (::hx::IsEq( this->expr(v),val )) {
HXLINE( 571)									match = true;
HXLINE( 572)									goto _hx_goto_63;
            								}
            							}
            							_hx_goto_63:;
            						}
HXLINE( 574)						if (match) {
HXLINE( 575)							val = this->expr(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic));
HXLINE( 576)							goto _hx_goto_62;
            						}
            					}
            					_hx_goto_62:;
            				}
HXLINE( 579)				if (!(match)) {
HXLINE( 580)					if (::hx::IsNull( def )) {
HXLINE( 580)						val = null();
            					}
            					else {
HXLINE( 580)						val = this->expr(def);
            					}
            				}
HXLINE( 581)				return val;
            			}
            			break;
            			case (int)24: {
HXLINE( 393)				 ::Dynamic econd = e1->_hx_getObject(0);
HXDLIN( 393)				 ::Dynamic e = e1->_hx_getObject(1);
HXLINE( 394)				this->doWhileLoop(econd,e);
HXLINE( 395)				return null();
            			}
            			break;
            			case (int)25: {
HXLINE( 582)				::String _g = e1->_hx_getString(0);
HXDLIN( 582)				::Array< ::Dynamic> _g1 = e1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 582)				 ::Dynamic e = e1->_hx_getObject(2);
HXLINE( 583)				return this->expr(e);
            			}
            			break;
            			case (int)26: {
HXLINE( 584)				 ::hscript::CType _g = e1->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN( 584)				 ::Dynamic e = e1->_hx_getObject(0);
HXLINE( 585)				return this->expr(e);
            			}
            			break;
            		}
HXLINE( 325)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,expr,return )

void Interp_obj::doWhileLoop( ::Dynamic econd, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_590_doWhileLoop)
HXLINE( 591)		int old = this->declared->length;
HXLINE( 592)		while(true){
HXLINE( 593)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 594)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 595)					{
HXLINE( 595)						null();
            					}
HXDLIN( 595)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 593)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 595)						 ::hscript::_Interp::Stop err = _g1;
HXLINE( 596)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 598)								goto _hx_goto_67;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 599)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 593)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 592)			if (!(::hx::IsEq( this->expr(econd),true ))) {
HXLINE( 592)				goto _hx_goto_67;
            			}
            		}
            		_hx_goto_67:;
HXLINE( 604)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,doWhileLoop,(void))

void Interp_obj::whileLoop( ::Dynamic econd, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_607_whileLoop)
HXLINE( 608)		int old = this->declared->length;
HXLINE( 609)		while(::hx::IsEq( this->expr(econd),true )){
HXLINE( 610)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 611)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 612)					{
HXLINE( 612)						null();
            					}
HXDLIN( 612)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 610)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 612)						 ::hscript::_Interp::Stop err = _g1;
HXLINE( 613)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 615)								goto _hx_goto_69;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 616)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 610)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_69:;
HXLINE( 620)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,whileLoop,(void))

 ::Dynamic Interp_obj::makeIterator( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_623_makeIterator)
HXLINE( 627)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 627)			v = v->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 627)				{
HXLINE( 627)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 629)		bool _hx_tmp;
HXDLIN( 629)		if (::hx::IsNotNull( v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic) )) {
HXLINE( 629)			_hx_tmp = ::hx::IsNull( v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 629)			_hx_tmp = true;
            		}
HXDLIN( 629)		if (_hx_tmp) {
HXLINE( 629)			 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidIterator(v),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 629)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 630)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,makeIterator,return )

void Interp_obj::forLoop(::String n, ::Dynamic it, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_633_forLoop)
HXLINE( 634)		int old = this->declared->length;
HXLINE( 635)		::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 635)		_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("n",6e,00,00,00),n)
            			->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 636)		 ::Dynamic it1 = this->makeIterator(this->expr(it));
HXLINE( 637)		while(( (bool)(it1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 638)			{
HXLINE( 638)				::Dynamic this1 = this->locals;
HXDLIN( 638)				( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),it1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)())));
            			}
HXLINE( 639)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 640)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 641)					{
HXLINE( 641)						null();
            					}
HXDLIN( 641)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 639)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscript::_Interp::Stop >())) {
HXLINE( 641)						 ::hscript::_Interp::Stop err = _g1;
HXLINE( 642)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 644)								goto _hx_goto_72;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 645)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 639)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_72:;
HXLINE( 649)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,forLoop,(void))

bool Interp_obj::isMap( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_653_isMap)
HXDLIN( 653)		return ::Std_obj::isOfType(o,::hx::ClassOf< ::haxe::IMap >());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,isMap,return )

 ::Dynamic Interp_obj::getMapValue( ::Dynamic map, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_657_getMapValue)
HXDLIN( 657)		return ::haxe::IMap_obj::get( ::hx::interface_check(map,0x09c2bd39),key);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,getMapValue,return )

void Interp_obj::setMapValue( ::Dynamic map, ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_661_setMapValue)
HXDLIN( 661)		::haxe::IMap_obj::set( ::hx::interface_check(map,0x09c2bd39),key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,setMapValue,(void))

 ::Dynamic Interp_obj::get( ::Dynamic o,::String f){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_664_get)
HXLINE( 665)		if (::hx::IsNull( o )) {
HXLINE( 665)			 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidAccess(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 665)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 666)		return ::Reflect_obj::getProperty(o,f);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,get,return )

 ::Dynamic Interp_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_680_set)
HXLINE( 681)		if (::hx::IsNull( o )) {
HXLINE( 681)			 ::hscript::Error e =  ::hscript::Error_obj::__alloc( HX_CTX ,::hscript::ErrorDef_obj::EInvalidAccess(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 681)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 682)		::Reflect_obj::setProperty(o,f,v);
HXLINE( 683)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,set,return )

 ::Dynamic Interp_obj::fcall( ::Dynamic o,::String f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_687_fcall)
HXDLIN( 687)		return this->call(o,this->get(o,f),args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,fcall,return )

 ::Dynamic Interp_obj::call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_691_call)
HXDLIN( 691)		return ::Reflect_obj::callMethod(o,f,args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,call,return )

 ::Dynamic Interp_obj::cnew(::String cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_694_cnew)
HXLINE( 695)		::hx::Class c = ::Type_obj::resolveClass(cl);
HXLINE( 696)		if (::hx::IsNull( c )) {
HXLINE( 696)			c = this->resolve(cl);
            		}
HXLINE( 697)		return ::Type_obj::createInstance(c,args);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,cnew,return )


::hx::ObjectPtr< Interp_obj > Interp_obj::__new() {
	::hx::ObjectPtr< Interp_obj > __this = new Interp_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Interp_obj > Interp_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Interp_obj *__this = (Interp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Interp_obj), true, "hscript.Interp"));
	*(void **)__this = Interp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Interp_obj::Interp_obj()
{
}

void Interp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interp);
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(binops,"binops");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(inTry,"inTry");
	HX_MARK_MEMBER_NAME(declared,"declared");
	HX_MARK_MEMBER_NAME(returnValue,"returnValue");
	HX_MARK_MEMBER_NAME(curExpr,"curExpr");
	HX_MARK_END_CLASS();
}

void Interp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(binops,"binops");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(inTry,"inTry");
	HX_VISIT_MEMBER_NAME(declared,"declared");
	HX_VISIT_MEMBER_NAME(returnValue,"returnValue");
	HX_VISIT_MEMBER_NAME(curExpr,"curExpr");
}

::hx::Val Interp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"cnew") ) { return ::hx::Val( cnew_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		if (HX_FIELD_EQ(inName,"inTry") ) { return ::hx::Val( inTry ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"isMap") ) { return ::hx::Val( isMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"fcall") ) { return ::hx::Val( fcall_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { return ::hx::Val( locals ); }
		if (HX_FIELD_EQ(inName,"binops") ) { return ::hx::Val( binops ); }
		if (HX_FIELD_EQ(inName,"setVar") ) { return ::hx::Val( setVar_dyn() ); }
		if (HX_FIELD_EQ(inName,"assign") ) { return ::hx::Val( assign_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curExpr") ) { return ::hx::Val( curExpr ); }
		if (HX_FIELD_EQ(inName,"initOps") ) { return ::hx::Val( initOps_dyn() ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"restore") ) { return ::hx::Val( restore_dyn() ); }
		if (HX_FIELD_EQ(inName,"rethrow") ) { return ::hx::Val( rethrow_dyn() ); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		if (HX_FIELD_EQ(inName,"forLoop") ) { return ::hx::Val( forLoop_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { return ::hx::Val( declared ); }
		if (HX_FIELD_EQ(inName,"posInfos") ) { return ::hx::Val( posInfos_dyn() ); }
		if (HX_FIELD_EQ(inName,"assignOp") ) { return ::hx::Val( assignOp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return ::hx::Val( variables ); }
		if (HX_FIELD_EQ(inName,"increment") ) { return ::hx::Val( increment_dyn() ); }
		if (HX_FIELD_EQ(inName,"duplicate") ) { return ::hx::Val( duplicate_dyn() ); }
		if (HX_FIELD_EQ(inName,"whileLoop") ) { return ::hx::Val( whileLoop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprReturn") ) { return ::hx::Val( exprReturn_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { return ::hx::Val( returnValue ); }
		if (HX_FIELD_EQ(inName,"doWhileLoop") ) { return ::hx::Val( doWhileLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMapValue") ) { return ::hx::Val( getMapValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMapValue") ) { return ::hx::Val( setMapValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"evalAssignOp") ) { return ::hx::Val( evalAssignOp_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeIterator") ) { return ::hx::Val( makeIterator_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetVariables") ) { return ::hx::Val( resetVariables_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Interp_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inTry") ) { inTry=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binops") ) { binops=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curExpr") ) { curExpr=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { declared=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { returnValue=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("variables",b7,e2,62,82));
	outFields->push(HX_("locals",a8,74,bf,59));
	outFields->push(HX_("binops",cb,59,16,ed));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("inTry",56,82,08,be));
	outFields->push(HX_("declared",fa,58,bc,c4));
	outFields->push(HX_("returnValue",a1,4c,95,3e));
	outFields->push(HX_("curExpr",d5,6e,33,ae));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Interp_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,variables),HX_("variables",b7,e2,62,82)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,locals),HX_("locals",a8,74,bf,59)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,binops),HX_("binops",cb,59,16,ed)},
	{::hx::fsInt,(int)offsetof(Interp_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsBool,(int)offsetof(Interp_obj,inTry),HX_("inTry",56,82,08,be)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Interp_obj,declared),HX_("declared",fa,58,bc,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interp_obj,returnValue),HX_("returnValue",a1,4c,95,3e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interp_obj,curExpr),HX_("curExpr",d5,6e,33,ae)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Interp_obj_sStaticStorageInfo = 0;
#endif

static ::String Interp_obj_sMemberFields[] = {
	HX_("variables",b7,e2,62,82),
	HX_("locals",a8,74,bf,59),
	HX_("binops",cb,59,16,ed),
	HX_("depth",03,f1,29,d7),
	HX_("inTry",56,82,08,be),
	HX_("declared",fa,58,bc,c4),
	HX_("returnValue",a1,4c,95,3e),
	HX_("curExpr",d5,6e,33,ae),
	HX_("resetVariables",e8,46,d3,dc),
	HX_("posInfos",11,82,2e,5a),
	HX_("initOps",02,63,8b,cb),
	HX_("setVar",65,6c,71,6f),
	HX_("assign",2f,46,06,4c),
	HX_("assignOp",30,b5,c7,0e),
	HX_("evalAssignOp",ec,d8,94,19),
	HX_("increment",2f,06,ff,31),
	HX_("execute",35,0a,0d,cc),
	HX_("exprReturn",c5,6b,ed,86),
	HX_("duplicate",8b,21,17,a1),
	HX_("restore",4e,67,b0,6a),
	HX_("error",c8,cb,29,73),
	HX_("rethrow",93,b0,2a,f6),
	HX_("resolve",ec,12,60,67),
	HX_("expr",35,fd,1d,43),
	HX_("doWhileLoop",aa,01,97,3a),
	HX_("whileLoop",b5,42,98,e1),
	HX_("makeIterator",fc,dd,72,d8),
	HX_("forLoop",0d,52,69,c9),
	HX_("isMap",d2,34,51,c1),
	HX_("getMapValue",eb,b1,ee,ce),
	HX_("setMapValue",f7,b8,5b,d9),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("fcall",04,44,99,fc),
	HX_("call",9e,18,ba,41),
	HX_("cnew",dd,ef,c3,41),
	::String(null()) };

::hx::Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	Interp_obj _hx_dummy;
	Interp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscript.Interp",8f,7c,f0,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Interp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Interp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Interp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Interp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
