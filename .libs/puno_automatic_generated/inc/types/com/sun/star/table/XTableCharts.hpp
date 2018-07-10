#ifndef INCLUDED_COM_SUN_STAR_TABLE_XTABLECHARTS_HPP
#define INCLUDED_COM_SUN_STAR_TABLE_XTABLECHARTS_HPP

#include "sal/config.h"

#include "com/sun/star/table/XTableCharts.hdl"

#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/container/XNameAccess.hpp"
#include "com/sun/star/table/CellRangeAddress.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace table {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::table::XTableCharts const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::container::XNameAccess > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.table.XTableCharts", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::table::XTableCharts > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::table::XTableCharts > >::get();
}

::css::uno::Type const & ::css::table::XTableCharts::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::table::XTableCharts >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TABLE_XTABLECHARTS_HPP
