#ifndef INCLUDED_COM_SUN_STAR_PACKAGES_WRONGPASSWORDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_PACKAGES_WRONGPASSWORDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/packages/WrongPasswordException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace packages {

inline WrongPasswordException::WrongPasswordException()
    : ::css::uno::Exception()
{ }

inline WrongPasswordException::WrongPasswordException(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_)
    : ::css::uno::Exception(Message_, Context_)
{ }

#if !defined LIBO_INTERNAL_ONLY
WrongPasswordException::WrongPasswordException(WrongPasswordException const & the_other): ::css::uno::Exception(the_other) {}

WrongPasswordException::~WrongPasswordException() {}

WrongPasswordException & WrongPasswordException::operator =(WrongPasswordException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::uno::Exception::operator =(the_other);
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace packages {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::packages::WrongPasswordException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.packages.WrongPasswordException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 0,  0 );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::packages::WrongPasswordException const *) {
    return ::cppu::UnoType< ::css::packages::WrongPasswordException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_PACKAGES_WRONGPASSWORDEXCEPTION_HPP
