#ifndef INCLUDED_COM_SUN_STAR_UCB_ALREADYINITIALIZEDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_ALREADYINITIALIZEDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/AlreadyInitializedException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline AlreadyInitializedException::AlreadyInitializedException()
    : ::css::uno::Exception()
{ }

inline AlreadyInitializedException::AlreadyInitializedException(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_)
    : ::css::uno::Exception(Message_, Context_)
{ }

#if !defined LIBO_INTERNAL_ONLY
AlreadyInitializedException::AlreadyInitializedException(AlreadyInitializedException const & the_other): ::css::uno::Exception(the_other) {}

AlreadyInitializedException::~AlreadyInitializedException() {}

AlreadyInitializedException & AlreadyInitializedException::operator =(AlreadyInitializedException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::uno::Exception::operator =(the_other);
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::ucb::AlreadyInitializedException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.AlreadyInitializedException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 0,  0 );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::ucb::AlreadyInitializedException const *) {
    return ::cppu::UnoType< ::css::ucb::AlreadyInitializedException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_ALREADYINITIALIZEDEXCEPTION_HPP
