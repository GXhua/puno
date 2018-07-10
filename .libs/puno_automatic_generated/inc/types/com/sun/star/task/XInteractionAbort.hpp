#ifndef INCLUDED_COM_SUN_STAR_TASK_XINTERACTIONABORT_HPP
#define INCLUDED_COM_SUN_STAR_TASK_XINTERACTIONABORT_HPP

#include "sal/config.h"

#include "com/sun/star/task/XInteractionAbort.hdl"

#include "com/sun/star/task/XInteractionContinuation.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace task {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::task::XInteractionAbort const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::task::XInteractionContinuation > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.task.XInteractionAbort", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::task::XInteractionAbort > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::task::XInteractionAbort > >::get();
}

::css::uno::Type const & ::css::task::XInteractionAbort::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::task::XInteractionAbort >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_XINTERACTIONABORT_HPP
