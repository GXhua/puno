#ifndef INCLUDED_COM_SUN_STAR_CHART2_SYMBOLSTYLE_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_SYMBOLSTYLE_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/SymbolStyle.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::chart2::SymbolStyle const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.chart2.SymbolStyle",
                                       ::css::chart2::SymbolStyle_NONE );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::chart2::SymbolStyle const *) {
    return ::cppu::UnoType< ::css::chart2::SymbolStyle >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_SYMBOLSTYLE_HPP
