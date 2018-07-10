#ifndef INCLUDED_COM_SUN_STAR_XML_DOM_XSAXDOCUMENTBUILDER2_HPP
#define INCLUDED_COM_SUN_STAR_XML_DOM_XSAXDOCUMENTBUILDER2_HPP

#include "sal/config.h"

#include "com/sun/star/xml/dom/XSAXDocumentBuilder2.hdl"

#include "com/sun/star/xml/dom/XSAXDocumentBuilder.hpp"
#include "com/sun/star/xml/sax/XDocumentHandler.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace dom {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::xml::dom::XSAXDocumentBuilder2 const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::xml::dom::XSAXDocumentBuilder > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::css::uno::Reference< ::css::xml::sax::XDocumentHandler > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.xml.dom.XSAXDocumentBuilder2", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::xml::dom::XSAXDocumentBuilder2 > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::xml::dom::XSAXDocumentBuilder2 > >::get();
}

::css::uno::Type const & ::css::xml::dom::XSAXDocumentBuilder2::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::xml::dom::XSAXDocumentBuilder2 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_DOM_XSAXDOCUMENTBUILDER2_HPP
