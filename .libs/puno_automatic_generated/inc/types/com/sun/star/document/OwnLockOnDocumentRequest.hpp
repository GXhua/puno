#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_OWNLOCKONDOCUMENTREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_OWNLOCKONDOCUMENTREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/document/OwnLockOnDocumentRequest.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace document {

inline OwnLockOnDocumentRequest::OwnLockOnDocumentRequest()
    : ::css::uno::Exception()
    , DocumentURL()
    , TimeInfo()
    , IsStoring(false)
{ }

inline OwnLockOnDocumentRequest::OwnLockOnDocumentRequest(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_, const ::rtl::OUString& DocumentURL_, const ::rtl::OUString& TimeInfo_, const ::sal_Bool& IsStoring_)
    : ::css::uno::Exception(Message_, Context_)
    , DocumentURL(DocumentURL_)
    , TimeInfo(TimeInfo_)
    , IsStoring(IsStoring_)
{ }

#if !defined LIBO_INTERNAL_ONLY
OwnLockOnDocumentRequest::OwnLockOnDocumentRequest(OwnLockOnDocumentRequest const & the_other): ::css::uno::Exception(the_other), DocumentURL(the_other.DocumentURL), TimeInfo(the_other.TimeInfo), IsStoring(the_other.IsStoring) {}

OwnLockOnDocumentRequest::~OwnLockOnDocumentRequest() {}

OwnLockOnDocumentRequest & OwnLockOnDocumentRequest::operator =(OwnLockOnDocumentRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::uno::Exception::operator =(the_other);
    DocumentURL = the_other.DocumentURL;
    TimeInfo = the_other.TimeInfo;
    IsStoring = the_other.IsStoring;
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::document::OwnLockOnDocumentRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::css::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        const ::css::uno::Type& rMemberType_boolean = ::cppu::UnoType< ::sal_Bool >::get();
        aMemberRefs[2] = rMemberType_boolean.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.OwnLockOnDocumentRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::document::OwnLockOnDocumentRequest const *) {
    return ::cppu::UnoType< ::css::document::OwnLockOnDocumentRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_OWNLOCKONDOCUMENTREQUEST_HPP
