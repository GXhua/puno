#ifndef INCLUDED_COM_SUN_STAR_MAIL_NOMAILTRANSPORTPROVIDEREXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_MAIL_NOMAILTRANSPORTPROVIDEREXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/mail/NoMailTransportProviderException.hdl"

#include "com/sun/star/mail/MailException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace mail {

inline NoMailTransportProviderException::NoMailTransportProviderException()
    : ::css::mail::MailException()
{ }

inline NoMailTransportProviderException::NoMailTransportProviderException(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_)
    : ::css::mail::MailException(Message_, Context_)
{ }

#if !defined LIBO_INTERNAL_ONLY
NoMailTransportProviderException::NoMailTransportProviderException(NoMailTransportProviderException const & the_other): ::css::mail::MailException(the_other) {}

NoMailTransportProviderException::~NoMailTransportProviderException() {}

NoMailTransportProviderException & NoMailTransportProviderException::operator =(NoMailTransportProviderException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::mail::MailException::operator =(the_other);
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace mail {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::mail::NoMailTransportProviderException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::css::uno::Type& rBaseType = ::cppu::UnoType< const ::css::mail::MailException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.mail.NoMailTransportProviderException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::mail::NoMailTransportProviderException const *) {
    return ::cppu::UnoType< ::css::mail::NoMailTransportProviderException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_MAIL_NOMAILTRANSPORTPROVIDEREXCEPTION_HPP
