/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_Piracer_Sender_PROXY_HPP_
#define V1_COMMONAPI_Piracer_Sender_PROXY_HPP_

#include <v1/commonapi/PiracerSenderProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif


#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename ... _AttributeExtensions>
class PiracerSenderProxy
    : virtual public PiracerSender,
      virtual public PiracerSenderProxyBase,
      virtual public _AttributeExtensions... {
public:
    PiracerSenderProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~PiracerSenderProxy();

    typedef PiracerSender InterfaceType;


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

    virtual std::future<void> getCompletionFuture();




 private:
    std::shared_ptr< PiracerSenderProxyBase> delegate_;
};

typedef PiracerSenderProxy<> PiracerSenderProxyDefault;


//
// PiracerSenderProxy Implementation
//
template <typename ... _AttributeExtensions>
PiracerSenderProxy<_AttributeExtensions...>::PiracerSenderProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< PiracerSenderProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< PiracerSenderProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
PiracerSenderProxy<_AttributeExtensions...>::~PiracerSenderProxy() {
}


template <typename ... _AttributeExtensions>
const CommonAPI::Address &PiracerSenderProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool PiracerSenderProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool PiracerSenderProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& PiracerSenderProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& PiracerSenderProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


template <typename ... _AttributeExtensions>
std::future<void> PiracerSenderProxy<_AttributeExtensions...>::getCompletionFuture() {
    return delegate_->getCompletionFuture();
}

} // namespace commonapi
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_Piracer_Sender_PROXY_HPP_
