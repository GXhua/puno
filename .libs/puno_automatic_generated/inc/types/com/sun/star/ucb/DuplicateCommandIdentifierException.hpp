#ifndef INCLUDED_COM_SUN_STAR_UCB_DUPLICATECOMMANDIDENTIFIEREXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_DUPLICATECOMMANDIDENTIFIEREXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/DuplicateCommandIdentifierException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline DuplicateCommandIdentifierException::DuplicateCommandIdentifierException()
    : ::css::uno::Exception()
{ }

inline DuplicateCommandIdentifierException::DuplicateCommandIdentifierException(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_)
    : ::css::uno::Exception(Message_, Context_)
{ }

#if !defined LIBO_INTERNAL_ONLY
DuplicateCommandIdentifierException::DuplicateCommandIdentifierException(DuplicateCommandIdentifierException const & the_other): ::css::uno::Exception(the_other) {}

DuplicateCommandIdentifierException::~DuplicateCommandIdentifierException() {}

DuplicateCommandIdentifierException & DuplicateCommandIdentifierException::operator =(DuplicateCommandIdentifierException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::uno::Exception::operator =(the_other);
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::ucb::DuplicateCommandIdentifierException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.DuplicateCommandIdentifierException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 0,  0 );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::ucb::DuplicateCommandIdentifierException const *) {
    return ::cppu::UnoType< ::css::ucb::DuplicateCommandIdentifierException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_DUPLICATECOMMANDIDENTIFIEREXCEPTION_HPP
