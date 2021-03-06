#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_INTERRUPTENGINEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_INTERRUPTENGINEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/script/InterruptEngineEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/script/InterruptReason.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline InterruptEngineEvent::InterruptEngineEvent()
    : ::css::lang::EventObject()
    , Name()
    , SourceCode()
    , StartLine(0)
    , StartColumn(0)
    , EndLine(0)
    , EndColumn(0)
    , ErrorMessage()
    , Reason(::css::script::InterruptReason_Cancel)
{
}

inline InterruptEngineEvent::InterruptEngineEvent(const ::css::uno::Reference< ::css::uno::XInterface >& Source_, const ::rtl::OUString& Name_, const ::rtl::OUString& SourceCode_, const ::sal_Int32& StartLine_, const ::sal_Int32& StartColumn_, const ::sal_Int32& EndLine_, const ::sal_Int32& EndColumn_, const ::rtl::OUString& ErrorMessage_, const ::css::script::InterruptReason& Reason_)
    : ::css::lang::EventObject(Source_)
    , Name(Name_)
    , SourceCode(SourceCode_)
    , StartLine(StartLine_)
    , StartColumn(StartColumn_)
    , EndLine(EndLine_)
    , EndColumn(EndColumn_)
    , ErrorMessage(ErrorMessage_)
    , Reason(Reason_)
{
}


inline bool operator==(const InterruptEngineEvent& the_lhs, const InterruptEngineEvent& the_rhs)
{
    return operator==( static_cast< ::css::lang::EventObject>(the_lhs), static_cast< ::css::lang::EventObject>(the_rhs) )

        && the_lhs.Name == the_rhs.Name
        && the_lhs.SourceCode == the_rhs.SourceCode
        && the_lhs.StartLine == the_rhs.StartLine
        && the_lhs.StartColumn == the_rhs.StartColumn
        && the_lhs.EndLine == the_rhs.EndLine
        && the_lhs.EndColumn == the_rhs.EndColumn
        && the_lhs.ErrorMessage == the_rhs.ErrorMessage
        && the_lhs.Reason == the_rhs.Reason;
}

inline bool operator!=(const InterruptEngineEvent& the_lhs, const InterruptEngineEvent& the_rhs)
{
return !operator==(the_lhs, the_rhs);
}
} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::script::InterruptEngineEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::css::script::InterruptReason >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.InterruptEngineEvent", ::cppu::UnoType< ::css::lang::EventObject >::get().getTypeLibType(), 8, the_members, 0);
    }
    return *reinterpret_cast< ::css::uno::Type * >(&the_type);
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::script::InterruptEngineEvent const *) {
    return ::cppu::UnoType< ::css::script::InterruptEngineEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_INTERRUPTENGINEEVENT_HPP
