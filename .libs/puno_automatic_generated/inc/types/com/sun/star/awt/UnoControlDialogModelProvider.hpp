#ifndef INCLUDED_COM_SUN_STAR_AWT_UNOCONTROLDIALOGMODELPROVIDER_HPP
#define INCLUDED_COM_SUN_STAR_AWT_UNOCONTROLDIALOGMODELPROVIDER_HPP

#include "sal/config.h"

#include <cassert>

#include "com/sun/star/container/XNameContainer.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

#if defined ANDROID || defined IOS //TODO
#include <com/sun/star/lang/XInitialization.hpp>
#include <osl/detail/component-defines.h>
#endif

#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_awt_dot_UnoControlDialogModelProvider && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_awt_dot_UnoControlDialogModelProvider) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_awt_dot_UnoControlDialogModelProvider
extern "C" ::css::uno::XInterface * SAL_CALL LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_awt_dot_UnoControlDialogModelProvider(::css::uno::XComponentContext *, ::css::uno::Sequence< ::css::uno::Any > const &);
#endif

namespace com { namespace sun { namespace star { namespace awt {

class UnoControlDialogModelProvider {
public:
    static ::css::uno::Reference< ::css::container::XNameContainer > create(::css::uno::Reference< ::css::uno::XComponentContext > const & the_context, const ::rtl::OUString& URL) {
        assert(the_context.is());
        ::css::uno::Sequence< ::css::uno::Any > the_arguments(1);
        the_arguments[0] <<= URL;
        ::css::uno::Reference< ::css::container::XNameContainer > the_instance;
        try {
#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_awt_dot_UnoControlDialogModelProvider && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_awt_dot_UnoControlDialogModelProvider) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_awt_dot_UnoControlDialogModelProvider
            the_instance = ::css::uno::Reference< ::css::container::XNameContainer >(::css::uno::Reference< ::css::uno::XInterface >(static_cast< ::css::uno::XInterface * >((*LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_awt_dot_UnoControlDialogModelProvider)(the_context.get(), the_arguments)), ::SAL_NO_ACQUIRE), ::css::uno::UNO_QUERY);
            ::css::uno::Reference< ::css::lang::XInitialization > init(the_instance, ::css::uno::UNO_QUERY);
            if (init.is()) {
                init->initialize(the_arguments);
            }
#else
            the_instance = ::css::uno::Reference< ::css::container::XNameContainer >(the_context->getServiceManager()->createInstanceWithArgumentsAndContext( "com.sun.star.awt.UnoControlDialogModelProvider", the_arguments, the_context), ::css::uno::UNO_QUERY);
#endif
        } catch (const ::css::uno::RuntimeException &) {
            throw;
        } catch (const ::css::uno::Exception & the_exception) {
            throw ::css::uno::DeploymentException(::rtl::OUString("component context fails to supply service ") + "com.sun.star.awt.UnoControlDialogModelProvider" + " of type " + "com.sun.star.container.XNameContainer" + ": " + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::css::uno::DeploymentException(::rtl::OUString("component context fails to supply service ") + "com.sun.star.awt.UnoControlDialogModelProvider" + " of type " + "com.sun.star.container.XNameContainer", the_context);
        }
        return the_instance;
    }

private:
    UnoControlDialogModelProvider(); // not implemented
    UnoControlDialogModelProvider(UnoControlDialogModelProvider &); // not implemented
    ~UnoControlDialogModelProvider(); // not implemented
    void operator =(UnoControlDialogModelProvider); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_AWT_UNOCONTROLDIALOGMODELPROVIDER_HPP
