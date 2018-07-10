#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_XXMLOASISBASICIMPORTER_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_XXMLOASISBASICIMPORTER_HPP

#include "sal/config.h"

#include "com/sun/star/document/XXMLOasisBasicImporter.hdl"

#include "com/sun/star/document/XImporter.hpp"
#include "com/sun/star/xml/sax/XDocumentHandler.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::document::XXMLOasisBasicImporter const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::document::XImporter > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::css::uno::Reference< ::css::xml::sax::XDocumentHandler > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.document.XXMLOasisBasicImporter", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::document::XXMLOasisBasicImporter > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::document::XXMLOasisBasicImporter > >::get();
}

::css::uno::Type const & ::css::document::XXMLOasisBasicImporter::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::document::XXMLOasisBasicImporter >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_XXMLOASISBASICIMPORTER_HPP
