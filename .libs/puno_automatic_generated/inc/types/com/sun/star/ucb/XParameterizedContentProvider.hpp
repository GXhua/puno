#ifndef INCLUDED_COM_SUN_STAR_UCB_XPARAMETERIZEDCONTENTPROVIDER_HPP
#define INCLUDED_COM_SUN_STAR_UCB_XPARAMETERIZEDCONTENTPROVIDER_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/XParameterizedContentProvider.hdl"

#include "com/sun/star/ucb/XContentProvider.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::ucb::XParameterizedContentProvider const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.ucb.XParameterizedContentProvider", 0, 0 );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::ucb::XParameterizedContentProvider > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::ucb::XParameterizedContentProvider > >::get();
}

::css::uno::Type const & ::css::ucb::XParameterizedContentProvider::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::ucb::XParameterizedContentProvider >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_XPARAMETERIZEDCONTENTPROVIDER_HPP
