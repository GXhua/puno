#ifndef INCLUDED_COM_SUN_STAR_I18N_XEXTENDEDCALENDAR_HPP
#define INCLUDED_COM_SUN_STAR_I18N_XEXTENDEDCALENDAR_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/XExtendedCalendar.hdl"

#include "com/sun/star/i18n/XCalendar.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::i18n::XExtendedCalendar const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::i18n::XCalendar > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.i18n.XExtendedCalendar", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::i18n::XExtendedCalendar > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::i18n::XExtendedCalendar > >::get();
}

::css::uno::Type const & ::css::i18n::XExtendedCalendar::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::i18n::XExtendedCalendar >::get();
}

#endif // INCLUDED_COM_SUN_STAR_I18N_XEXTENDEDCALENDAR_HPP
