#ifndef INCLUDED_COM_SUN_STAR_EMBED_NEEDSRUNNINGSTATEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_NEEDSRUNNINGSTATEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/embed/NeedsRunningStateException.hdl"

#include "com/sun/star/embed/WrongStateException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace embed {

inline NeedsRunningStateException::NeedsRunningStateException()
    : ::css::embed::WrongStateException()
{ }

inline NeedsRunningStateException::NeedsRunningStateException(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_)
    : ::css::embed::WrongStateException(Message_, Context_)
{ }

#if !defined LIBO_INTERNAL_ONLY
NeedsRunningStateException::NeedsRunningStateException(NeedsRunningStateException const & the_other): ::css::embed::WrongStateException(the_other) {}

NeedsRunningStateException::~NeedsRunningStateException() {}

NeedsRunningStateException & NeedsRunningStateException::operator =(NeedsRunningStateException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::embed::WrongStateException::operator =(the_other);
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::embed::NeedsRunningStateException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::css::uno::Type& rBaseType = ::cppu::UnoType< const ::css::embed::WrongStateException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.embed.NeedsRunningStateException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::embed::NeedsRunningStateException const *) {
    return ::cppu::UnoType< ::css::embed::NeedsRunningStateException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_NEEDSRUNNINGSTATEEXCEPTION_HPP