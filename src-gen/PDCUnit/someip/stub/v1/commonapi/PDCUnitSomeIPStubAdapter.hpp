/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_COMMONAPI_PDC_UNIT_SOMEIP_STUB_ADAPTER_HPP_
#define V1_COMMONAPI_PDC_UNIT_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/commonapi/PDCUnitStub.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename _Stub = ::v1::commonapi::PDCUnitStub, typename... _Stubs>
class PDCUnitSomeIPStubAdapterInternal
    : public virtual PDCUnitStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< PDCUnitSomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> PDCUnitSomeIPStubAdapterHelper;

    ~PDCUnitSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        PDCUnitSomeIPStubAdapterHelper::deinit();
    }

    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::PDCUnitStub,
        CommonAPI::Version
    > getPDCUnitInterfaceVersionStubDispatcher;

    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::PDCUnitStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setDistanceStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::PDCUnitStub,
        std::tuple< double>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::EmptyDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setSteeringStubDispatcher;
    
    PDCUnitSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        PDCUnitSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< PDCUnitStub>(_stub)),
        getPDCUnitInterfaceVersionStubDispatcher(&PDCUnitStub::lockInterfaceVersionAttribute, &PDCUnitStub::getInterfaceVersion, false, true),
        setDistanceStubDispatcher(
            &PDCUnitStub::setDistance,
            false,
            _stub->hasElement(0),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setSteeringStubDispatcher(
            &PDCUnitStub::setSteering,
            false,
            _stub->hasElement(1),
            std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
    {
        PDCUnitSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x2bc) }, &setDistanceStubDispatcher );
        PDCUnitSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x2bd) }, &setSteeringStubDispatcher );
        // Provided events/fields
    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};


template <typename _Stub, typename... _Stubs>
void PDCUnitSomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void PDCUnitSomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v1::commonapi::PDCUnitStub, typename... _Stubs>
class PDCUnitSomeIPStubAdapter
    : public PDCUnitSomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    PDCUnitSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          PDCUnitSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_PDC_Unit_SOMEIP_STUB_ADAPTER_HPP_
