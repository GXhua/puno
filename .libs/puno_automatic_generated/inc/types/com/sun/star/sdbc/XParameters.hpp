#ifndef INCLUDED_COM_SUN_STAR_SDBC_XPARAMETERS_HPP
#define INCLUDED_COM_SUN_STAR_SDBC_XPARAMETERS_HPP

#include "sal/config.h"

#include "com/sun/star/sdbc/XParameters.hdl"

#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/sdbc/XArray.hpp"
#include "com/sun/star/sdbc/XBlob.hpp"
#include "com/sun/star/sdbc/XClob.hpp"
#include "com/sun/star/sdbc/XRef.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/util/Date.hpp"
#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/util/Time.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace sdbc {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::sdbc::XParameters const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.sdbc.XParameters", 0, 0 );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::sdbc::XParameters > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::sdbc::XParameters > >::get();
}

::css::uno::Type const & ::css::sdbc::XParameters::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::sdbc::XParameters >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDBC_XPARAMETERS_HPP
