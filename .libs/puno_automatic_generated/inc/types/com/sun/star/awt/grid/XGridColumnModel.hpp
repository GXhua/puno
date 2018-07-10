#ifndef INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDCOLUMNMODEL_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDCOLUMNMODEL_HPP

#include "sal/config.h"

#include "com/sun/star/awt/grid/XGridColumnModel.hdl"

#include "com/sun/star/awt/grid/XGridColumn.hpp"
#include "com/sun/star/container/XContainer.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/util/XCloneable.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::awt::grid::XGridColumnModel const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[3];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::css::uno::Reference< ::css::container::XContainer > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::css::uno::Reference< ::css::util::XCloneable > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.awt.grid.XGridColumnModel", 3, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::awt::grid::XGridColumnModel > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::awt::grid::XGridColumnModel > >::get();
}

::css::uno::Type const & ::css::awt::grid::XGridColumnModel::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::awt::grid::XGridColumnModel >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDCOLUMNMODEL_HPP
