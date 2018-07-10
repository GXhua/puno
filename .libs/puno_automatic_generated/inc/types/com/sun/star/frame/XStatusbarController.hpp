#ifndef INCLUDED_COM_SUN_STAR_FRAME_XSTATUSBARCONTROLLER_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_XSTATUSBARCONTROLLER_HPP

#include "sal/config.h"

#include "com/sun/star/frame/XStatusbarController.hdl"

#include "com/sun/star/awt/MouseEvent.hpp"
#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/awt/XGraphics.hpp"
#include "com/sun/star/frame/XStatusListener.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/lang/XInitialization.hpp"
#include "com/sun/star/util/XUpdatable.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace frame {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::frame::XStatusbarController const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[4];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::css::uno::Reference< ::css::lang::XInitialization > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::css::uno::Reference< ::css::frame::XStatusListener > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::css::uno::Reference< ::css::util::XUpdatable > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.frame.XStatusbarController", 4, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::frame::XStatusbarController > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::frame::XStatusbarController > >::get();
}

::css::uno::Type const & ::css::frame::XStatusbarController::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::frame::XStatusbarController >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_XSTATUSBARCONTROLLER_HPP
