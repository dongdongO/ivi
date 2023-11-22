/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v1/commonapi/RemoteSpeakerSomeIPProxy.hpp>

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

std::shared_ptr<CommonAPI::SomeIP::Proxy> createRemoteSpeakerSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection) {
    return std::make_shared< RemoteSpeakerSomeIPProxy>(_address, _connection);
}

void initializeRemoteSpeakerSomeIPProxy() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:commonapi.RemoteSpeaker:v1_0:RemoteSpeaker",
        0x2328, 0x15f90, 1, 0);
    CommonAPI::SomeIP::Factory::get()->registerProxyCreateMethod(
        "commonapi.RemoteSpeaker:v1_0",
        &createRemoteSpeakerSomeIPProxy);
}

INITIALIZER(registerRemoteSpeakerSomeIPProxy) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeRemoteSpeakerSomeIPProxy);
}

RemoteSpeakerSomeIPProxy::RemoteSpeakerSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection)
        : CommonAPI::SomeIP::Proxy(_address, _connection)
{
}

RemoteSpeakerSomeIPProxy::~RemoteSpeakerSomeIPProxy() {
    completed_.set_value();
}



void RemoteSpeakerSomeIPProxy::setGear(uint16_t _Gear, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< uint16_t, CommonAPI::SomeIP::IntegerDeployment<uint16_t>> deploy_Gear(_Gear, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint16_t,
                CommonAPI::SomeIP::IntegerDeployment<uint16_t>
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x384),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_Gear,
        _internalCallStatus,
        deploy_message);
    _message = deploy_message.getValue();
}

std::future<CommonAPI::CallStatus> RemoteSpeakerSomeIPProxy::setGearAsync(const uint16_t &_Gear, SetGearAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< uint16_t, CommonAPI::SomeIP::IntegerDeployment<uint16_t>> deploy_Gear(_Gear, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint16_t,
                CommonAPI::SomeIP::IntegerDeployment<uint16_t>
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x384),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_Gear,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > _message) {
            if (_callback)
                _callback(_internalCallStatus, _message.getValue());
        },
        std::make_tuple(deploy_message));
}

void RemoteSpeakerSomeIPProxy::setDistance(uint16_t _Distance, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< uint16_t, CommonAPI::SomeIP::IntegerDeployment<uint16_t>> deploy_Distance(_Distance, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint16_t,
                CommonAPI::SomeIP::IntegerDeployment<uint16_t>
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x385),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_Distance,
        _internalCallStatus,
        deploy_message);
    _message = deploy_message.getValue();
}

std::future<CommonAPI::CallStatus> RemoteSpeakerSomeIPProxy::setDistanceAsync(const uint16_t &_Distance, SetDistanceAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< uint16_t, CommonAPI::SomeIP::IntegerDeployment<uint16_t>> deploy_Distance(_Distance, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint16_t,
                CommonAPI::SomeIP::IntegerDeployment<uint16_t>
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x385),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_Distance,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > _message) {
            if (_callback)
                _callback(_internalCallStatus, _message.getValue());
        },
        std::make_tuple(deploy_message));
}

void RemoteSpeakerSomeIPProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

std::future<void> RemoteSpeakerSomeIPProxy::getCompletionFuture() {
    return completed_.get_future();
}

} // namespace commonapi
} // namespace v1
