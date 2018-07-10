#ifndef INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_XDRAGGESTURERECOGNIZER_HPP
#define INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_XDRAGGESTURERECOGNIZER_HPP

#include "sal/config.h"

#include "com/sun/star/datatransfer/dnd/XDragGestureRecognizer.hdl"

#include "com/sun/star/datatransfer/dnd/XDragGestureListener.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::datatransfer::dnd::XDragGestureRecognizer const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.datatransfer.dnd.XDragGestureRecognizer", 0, 0 );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::datatransfer::dnd::XDragGestureRecognizer > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::datatransfer::dnd::XDragGestureRecognizer > >::get();
}

::css::uno::Type const & ::css::datatransfer::dnd::XDragGestureRecognizer::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::datatransfer::dnd::XDragGestureRecognizer >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_XDRAGGESTURERECOGNIZER_HPP
