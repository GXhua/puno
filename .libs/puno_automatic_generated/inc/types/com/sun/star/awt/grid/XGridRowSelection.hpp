#ifndef INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDROWSELECTION_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDROWSELECTION_HPP

#include "sal/config.h"

#include "com/sun/star/awt/grid/XGridRowSelection.hdl"

#include "com/sun/star/awt/grid/XGridSelectionListener.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::awt::grid::XGridRowSelection const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.awt.grid.XGridRowSelection", 0, 0 );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::awt::grid::XGridRowSelection > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::awt::grid::XGridRowSelection > >::get();
}

::css::uno::Type const & ::css::awt::grid::XGridRowSelection::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::awt::grid::XGridRowSelection >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDROWSELECTION_HPP