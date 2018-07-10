#ifndef INCLUDED_COM_SUN_STAR_MEDIA_XMANAGER_HPP
#define INCLUDED_COM_SUN_STAR_MEDIA_XMANAGER_HPP

#include "sal/config.h"

#include "com/sun/star/media/XManager.hdl"

#include "com/sun/star/media/XPlayer.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace media {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::media::XManager const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.media.XManager", 0, 0 );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::media::XManager > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::media::XManager > >::get();
}

::css::uno::Type const & ::css::media::XManager::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::media::XManager >::get();
}

#endif // INCLUDED_COM_SUN_STAR_MEDIA_XMANAGER_HPP
