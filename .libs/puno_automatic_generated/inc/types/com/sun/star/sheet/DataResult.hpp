#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATARESULT_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATARESULT_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataResult.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataResult::DataResult()
    : Flags(0)
    , Value(0)
{
}

inline DataResult::DataResult(const ::sal_Int32& Flags_, const double& Value_)
    : Flags(Flags_)
    , Value(Value_)
{
}


inline bool operator==(const DataResult& the_lhs, const DataResult& the_rhs)
{
    return the_lhs.Flags == the_rhs.Flags
        && the_lhs.Value == the_rhs.Value;
}

inline bool operator!=(const DataResult& the_lhs, const DataResult& the_rhs)
{
return !operator==(the_lhs, the_rhs);
}
} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::sheet::DataResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataResult", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::css::uno::Type * >(&the_type);
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::sheet::DataResult const *) {
    return ::cppu::UnoType< ::css::sheet::DataResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATARESULT_HPP
