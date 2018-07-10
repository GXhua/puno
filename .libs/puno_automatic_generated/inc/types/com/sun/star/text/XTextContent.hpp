#ifndef INCLUDED_COM_SUN_STAR_TEXT_XTEXTCONTENT_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_XTEXTCONTENT_HPP

#include "sal/config.h"

#include "com/sun/star/text/XTextContent.hdl"

#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/text/XTextRange.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace text {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::text::XTextContent const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::lang::XComponent > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.text.XTextContent", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::text::XTextContent > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::text::XTextContent > >::get();
}

::css::uno::Type const & ::css::text::XTextContent::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::text::XTextContent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_XTEXTCONTENT_HPP