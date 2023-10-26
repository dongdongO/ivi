/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v1/commonapi/InstrumentClusterSomeIPStubAdapter.hpp>
#include <v1/commonapi/InstrumentCluster.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createInstrumentClusterSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared< InstrumentClusterSomeIPStubAdapter<::v1::commonapi::InstrumentClusterStub>>(_address, _connection, _stub);
}

void initializeInstrumentClusterSomeIPStubAdapter() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:commonapi.InstrumentCluster:v1_0:InstrumentCluster",
         0x3ec, 0x2714, 1, 0);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        "commonapi.InstrumentCluster:v1_0",
        &createInstrumentClusterSomeIPStubAdapter);
}

INITIALIZER(registerInstrumentClusterSomeIPStubAdapter) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeInstrumentClusterSomeIPStubAdapter);
}

} // namespace commonapi
} // namespace v1
