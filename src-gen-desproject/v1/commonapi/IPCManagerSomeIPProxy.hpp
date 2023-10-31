/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_COMMONAPI_IPC_MANAGER_SOMEIP_PROXY_HPP_
#define V1_COMMONAPI_IPC_MANAGER_SOMEIP_PROXY_HPP_

#include <v1/commonapi/IPCManagerProxyBase.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Proxy.hpp>
#include <CommonAPI/SomeIP/Types.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <string>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v1 {
namespace commonapi {

class IPCManagerSomeIPProxy
    : virtual public IPCManagerProxyBase,
      virtual public CommonAPI::SomeIP::Proxy {
public:
    IPCManagerSomeIPProxy(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection);

    virtual ~IPCManagerSomeIPProxy();

    virtual void setSensorRpm(uint16_t _SensorRpm, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> setSensorRpmAsync(const uint16_t &_SensorRpm, SetSensorRpmAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void setBatteryLevel(uint16_t _BatteryLevel, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> setBatteryLevelAsync(const uint16_t &_BatteryLevel, SetBatteryLevelAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void setGearMode(uint16_t _GearMode, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> setGearModeAsync(const uint16_t &_GearMode, SetGearModeAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void setDirection(uint16_t _Direction, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> setDirectionAsync(const uint16_t &_Direction, SetDirectionAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void setLight(std::string _Light, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> setLightAsync(const std::string &_Light, SetLightAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void setThrottle(double _Throttle, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> setThrottleAsync(const double &_Throttle, SetThrottleAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void setSteering(double _Steering, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> setSteeringAsync(const double &_Steering, SetSteeringAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void getGearMode(std::string _message1, CommonAPI::CallStatus &_internalCallStatus, std::string &_message2, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> getGearModeAsync(const std::string &_message1, GetGearModeAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void getDirection(std::string _message1, CommonAPI::CallStatus &_internalCallStatus, std::string &_message2, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> getDirectionAsync(const std::string &_message1, GetDirectionAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void getLight(std::string _message1, CommonAPI::CallStatus &_internalCallStatus, std::string &_message2, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> getLightAsync(const std::string &_message1, GetLightAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void getOwnVersion(uint16_t &_major, uint16_t &_minor) const;

    virtual std::future<void> getCompletionFuture();

private:

    std::promise<void> completed_;
};

} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_IPC_Manager_SOMEIP_PROXY_HPP_
