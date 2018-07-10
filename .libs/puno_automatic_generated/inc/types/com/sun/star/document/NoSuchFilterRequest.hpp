#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_NOSUCHFILTERREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_NOSUCHFILTERREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/document/NoSuchFilterRequest.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline NoSuchFilterRequest::NoSuchFilterRequest()
    : ::css::uno::Exception()
    , URL()
{ }

inline NoSuchFilterRequest::NoSuchFilterRequest(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_, const ::rtl::OUString& URL_)
    : ::css::uno::Exception(Message_, Context_)
    , URL(URL_)
{ }

#if !defined LIBO_INTERNAL_ONLY
NoSuchFilterRequest::NoSuchFilterRequest(NoSuchFilterRequest const & the_other): ::css::uno::Exception(the_other), URL(the_other.URL) {}

NoSuchFilterRequest::~NoSuchFilterRequest() {}

NoSuchFilterRequest & NoSuchFilterRequest::operator =(NoSuchFilterRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::uno::Exception::operator =(the_other);
    URL = the_other.URL;
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::document::NoSuchFilterRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::css::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.NoSuchFilterRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::document::NoSuchFilterRequest const *) {
    return ::cppu::UnoType< ::css::document::NoSuchFilterRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_NOSUCHFILTERREQUEST_HPP
