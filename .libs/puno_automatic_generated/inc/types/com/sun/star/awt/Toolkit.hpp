#ifndef INCLUDED_COM_SUN_STAR_AWT_TOOLKIT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_TOOLKIT_HPP

#include "sal/config.h"

#include <cassert>

#include "com/sun/star/awt/XToolkit2.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

#if defined ANDROID || defined IOS //TODO
#include <com/sun/star/lang/XInitialization.hpp>
#include <osl/detail/component-defines.h>
#endif

#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_awt_dot_Toolkit && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_awt_dot_Toolkit) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_awt_dot_Toolkit
extern "C" ::css::uno::XInterface * SAL_CALL LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_awt_dot_Toolkit(::css::uno::XComponentContext *, ::css::uno::Sequence< ::css::uno::Any > const &);
#endif

namespace com { namespace sun { namespace star { namespace awt {

class Toolkit {
public:
    static ::css::uno::Reference< ::css::awt::XToolkit2 > create(::css::uno::Reference< ::css::uno::XComponentContext > const & the_context) {
        assert(the_context.is());
        ::css::uno::Reference< ::css::awt::XToolkit2 > the_instance;
        try {
#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_awt_dot_Toolkit && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_awt_dot_Toolkit) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_awt_dot_Toolkit
            the_instance = ::css::uno::Reference< ::css::awt::XToolkit2 >(::css::uno::Reference< ::css::uno::XInterface >(static_cast< ::css::uno::XInterface * >((*LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_awt_dot_Toolkit)(the_context.get(), ::css::uno::Sequence< ::css::uno::Any >())), ::SAL_NO_ACQUIRE), ::css::uno::UNO_QUERY);
#else
            the_instance = ::css::uno::Reference< ::css::awt::XToolkit2 >(the_context->getServiceManager()->createInstanceWithContext( "com.sun.star.awt.Toolkit", the_context), ::css::uno::UNO_QUERY);
#endif
        } catch (const ::css::uno::RuntimeException &) {
            throw;
        } catch (const ::css::uno::Exception & the_exception) {
            throw ::css::uno::DeploymentException(::rtl::OUString("component context fails to supply service ") + "com.sun.star.awt.Toolkit" + " of type " + "com.sun.star.awt.XToolkit2" + ": " + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::css::uno::DeploymentException(::rtl::OUString("component context fails to supply service ") + "com.sun.star.awt.Toolkit" + " of type " + "com.sun.star.awt.XToolkit2", the_context);
        }
        return the_instance;
    }

private:
    Toolkit(); // not implemented
    Toolkit(Toolkit &); // not implemented
    ~Toolkit(); // not implemented
    void operator =(Toolkit); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_AWT_TOOLKIT_HPP
