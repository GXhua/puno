#ifndef INCLUDED_COM_SUN_STAR_DRAWING_SLIDESORTER_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_SLIDESORTER_HPP

#include "sal/config.h"

#include <cassert>

#include "com/sun/star/awt/XWindow.hpp"
#include "com/sun/star/drawing/XSlideSorterBase.hpp"
#include "com/sun/star/drawing/framework/XResourceId.hpp"
#include "com/sun/star/frame/XController.hpp"
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

#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_drawing_dot_SlideSorter && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_drawing_dot_SlideSorter) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_drawing_dot_SlideSorter
extern "C" ::css::uno::XInterface * SAL_CALL LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_drawing_dot_SlideSorter(::css::uno::XComponentContext *, ::css::uno::Sequence< ::css::uno::Any > const &);
#endif

namespace com { namespace sun { namespace star { namespace drawing {

class SlideSorter {
public:
    static ::css::uno::Reference< ::css::drawing::XSlideSorterBase > create(::css::uno::Reference< ::css::uno::XComponentContext > const & the_context, const ::css::uno::Reference< ::css::drawing::framework::XResourceId >& xViewId, const ::css::uno::Reference< ::css::frame::XController >& xController, const ::css::uno::Reference< ::css::awt::XWindow >& xParentWindow) {
        assert(the_context.is());
        ::css::uno::Sequence< ::css::uno::Any > the_arguments(3);
        the_arguments[0] <<= xViewId;
        the_arguments[1] <<= xController;
        the_arguments[2] <<= xParentWindow;
        ::css::uno::Reference< ::css::drawing::XSlideSorterBase > the_instance;
        try {
#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_drawing_dot_SlideSorter && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_drawing_dot_SlideSorter) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_drawing_dot_SlideSorter
            the_instance = ::css::uno::Reference< ::css::drawing::XSlideSorterBase >(::css::uno::Reference< ::css::uno::XInterface >(static_cast< ::css::uno::XInterface * >((*LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_drawing_dot_SlideSorter)(the_context.get(), the_arguments)), ::SAL_NO_ACQUIRE), ::css::uno::UNO_QUERY);
            ::css::uno::Reference< ::css::lang::XInitialization > init(the_instance, ::css::uno::UNO_QUERY);
            if (init.is()) {
                init->initialize(the_arguments);
            }
#else
            the_instance = ::css::uno::Reference< ::css::drawing::XSlideSorterBase >(the_context->getServiceManager()->createInstanceWithArgumentsAndContext( "com.sun.star.drawing.SlideSorter", the_arguments, the_context), ::css::uno::UNO_QUERY);
#endif
        } catch (const ::css::uno::RuntimeException &) {
            throw;
        } catch (const ::css::uno::Exception & the_exception) {
            throw ::css::uno::DeploymentException(::rtl::OUString("component context fails to supply service ") + "com.sun.star.drawing.SlideSorter" + " of type " + "com.sun.star.drawing.XSlideSorterBase" + ": " + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::css::uno::DeploymentException(::rtl::OUString("component context fails to supply service ") + "com.sun.star.drawing.SlideSorter" + " of type " + "com.sun.star.drawing.XSlideSorterBase", the_context);
        }
        return the_instance;
    }

private:
    SlideSorter(); // not implemented
    SlideSorter(SlideSorter &); // not implemented
    ~SlideSorter(); // not implemented
    void operator =(SlideSorter); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_DRAWING_SLIDESORTER_HPP
