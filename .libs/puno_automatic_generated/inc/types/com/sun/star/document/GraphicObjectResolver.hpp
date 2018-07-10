#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_GRAPHICOBJECTRESOLVER_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_GRAPHICOBJECTRESOLVER_HPP

#include "sal/config.h"

#include <cassert>

#include "com/sun/star/document/XGraphicObjectResolver.hpp"
#include "com/sun/star/embed/XStorage.hpp"
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

#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_document_dot_GraphicObjectResolver && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_document_dot_GraphicObjectResolver) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_document_dot_GraphicObjectResolver
extern "C" ::css::uno::XInterface * SAL_CALL LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_document_dot_GraphicObjectResolver(::css::uno::XComponentContext *, ::css::uno::Sequence< ::css::uno::Any > const &);
#endif

namespace com { namespace sun { namespace star { namespace document {

class GraphicObjectResolver {
public:
    static ::css::uno::Reference< ::css::document::XGraphicObjectResolver > createWithStorage(::css::uno::Reference< ::css::uno::XComponentContext > const & the_context, const ::css::uno::Reference< ::css::embed::XStorage >& Storage) {
        assert(the_context.is());
        ::css::uno::Sequence< ::css::uno::Any > the_arguments(1);
        the_arguments[0] <<= Storage;
        ::css::uno::Reference< ::css::document::XGraphicObjectResolver > the_instance;
        try {
#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_document_dot_GraphicObjectResolver && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_document_dot_GraphicObjectResolver) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_document_dot_GraphicObjectResolver
            the_instance = ::css::uno::Reference< ::css::document::XGraphicObjectResolver >(::css::uno::Reference< ::css::uno::XInterface >(static_cast< ::css::uno::XInterface * >((*LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_document_dot_GraphicObjectResolver)(the_context.get(), the_arguments)), ::SAL_NO_ACQUIRE), ::css::uno::UNO_QUERY);
            ::css::uno::Reference< ::css::lang::XInitialization > init(the_instance, ::css::uno::UNO_QUERY);
            if (init.is()) {
                init->initialize(the_arguments);
            }
#else
            the_instance = ::css::uno::Reference< ::css::document::XGraphicObjectResolver >(the_context->getServiceManager()->createInstanceWithArgumentsAndContext( "com.sun.star.document.GraphicObjectResolver", the_arguments, the_context), ::css::uno::UNO_QUERY);
#endif
        } catch (const ::css::uno::RuntimeException &) {
            throw;
        } catch (const ::css::uno::Exception & the_exception) {
            throw ::css::uno::DeploymentException(::rtl::OUString("component context fails to supply service ") + "com.sun.star.document.GraphicObjectResolver" + " of type " + "com.sun.star.document.XGraphicObjectResolver" + ": " + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::css::uno::DeploymentException(::rtl::OUString("component context fails to supply service ") + "com.sun.star.document.GraphicObjectResolver" + " of type " + "com.sun.star.document.XGraphicObjectResolver", the_context);
        }
        return the_instance;
    }

private:
    GraphicObjectResolver(); // not implemented
    GraphicObjectResolver(GraphicObjectResolver &); // not implemented
    ~GraphicObjectResolver(); // not implemented
    void operator =(GraphicObjectResolver); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_GRAPHICOBJECTRESOLVER_HPP
