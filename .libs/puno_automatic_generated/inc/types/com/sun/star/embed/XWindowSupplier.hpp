#ifndef INCLUDED_COM_SUN_STAR_EMBED_XWINDOWSUPPLIER_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_XWINDOWSUPPLIER_HPP

#include "sal/config.h"

#include "com/sun/star/embed/XWindowSupplier.hdl"

#include "com/sun/star/awt/XWindow.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace embed {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::embed::XWindowSupplier const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.embed.XWindowSupplier", 0, 0 );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::embed::XWindowSupplier > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::embed::XWindowSupplier > >::get();
}

::css::uno::Type const & ::css::embed::XWindowSupplier::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::embed::XWindowSupplier >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_XWINDOWSUPPLIER_HPP
