#ifndef INCLUDED_COM_SUN_STAR_TEXT_XTEXTFRAME_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_XTEXTFRAME_HPP

#include "sal/config.h"

#include "com/sun/star/text/XTextFrame.hdl"

#include "com/sun/star/text/XText.hpp"
#include "com/sun/star/text/XTextContent.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace text {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::text::XTextFrame const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::text::XTextContent > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.text.XTextFrame", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::text::XTextFrame > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::text::XTextFrame > >::get();
}

::css::uno::Type const & ::css::text::XTextFrame::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::text::XTextFrame >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_XTEXTFRAME_HPP
