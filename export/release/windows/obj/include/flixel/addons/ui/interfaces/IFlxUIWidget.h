#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES IFlxUIWidget_obj {
	public:
		typedef  ::flixel::IFlxSprite_obj super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_set_active)(bool value); 
		static inline bool set_active( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_active)(value);
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_visible)(value);
		}
		bool (::hx::Object :: *_hx_set_alive)(bool value); 
		static inline bool set_alive( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_alive)(value);
		}
		bool (::hx::Object :: *_hx_set_exists)(bool value); 
		static inline bool set_exists( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_exists)(value);
		}
		void (::hx::Object :: *_hx_draw)(); 
		static inline void draw( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_draw)();
		}
		void (::hx::Object :: *_hx_update)(Float elapsed); 
		static inline void update( ::Dynamic _hx_,Float elapsed) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_update)(elapsed);
		}
		void (::hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_destroy)();
		}
		void (::hx::Object :: *_hx_kill)(); 
		static inline void kill( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_kill)();
		}
		void (::hx::Object :: *_hx_revive)(); 
		static inline void revive( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_revive)();
		}
		::String (::hx::Object :: *_hx_toString)(); 
		static inline ::String toString( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_toString)();
		}
		Float (::hx::Object :: *_hx_set_x)(Float value); 
		static inline Float set_x( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_x)(value);
		}
		Float (::hx::Object :: *_hx_set_y)(Float value); 
		static inline Float set_y( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_y)(value);
		}
		Float (::hx::Object :: *_hx_set_alpha)(Float value); 
		static inline Float set_alpha( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_alpha)(value);
		}
		Float (::hx::Object :: *_hx_set_angle)(Float value); 
		static inline Float set_angle( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_angle)(value);
		}
		int (::hx::Object :: *_hx_set_facing)(int value); 
		static inline int set_facing( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_facing)(value);
		}
		bool (::hx::Object :: *_hx_set_moves)(bool value); 
		static inline bool set_moves( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_moves)(value);
		}
		bool (::hx::Object :: *_hx_set_immovable)(bool value); 
		static inline bool set_immovable( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_immovable)(value);
		}
		void (::hx::Object :: *_hx_reset)(Float X,Float Y); 
		static inline void reset( ::Dynamic _hx_,Float X,Float Y) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_reset)(X,Y);
		}
		void (::hx::Object :: *_hx_setPosition)(::hx::Null< Float >  X,::hx::Null< Float >  Y); 
		static inline void setPosition( ::Dynamic _hx_,::hx::Null< Float >  X,::hx::Null< Float >  Y) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_setPosition)(X,Y);
		}
		Float (::hx::Object :: *_hx_get_width)(); 
		static inline Float get_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_get_width)();
		}
		Float (::hx::Object :: *_hx_set_width)(Float value); 
		static inline Float set_width( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_width)(value);
		}
		Float (::hx::Object :: *_hx_get_height)(); 
		static inline Float get_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_get_height)();
		}
		Float (::hx::Object :: *_hx_set_height)(Float value); 
		static inline Float set_height( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *>(_hx_.mPtr->_hx_getInterface(0x998525de)))->_hx_set_height)(value);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget */ 