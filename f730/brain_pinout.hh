#pragma once
#include "drivers/adc_builtin_conf.hh"
#include "drivers/pin.hh"
#include "drivers/tim_pwm.hh"

namespace Brain
{
namespace Pin
{
using PinDef = mdrivlib::PinDef;
using GPIO = mdrivlib::GPIO;
using PinNum = mdrivlib::PinNum;
using PinAF = mdrivlib::PinAF;
using AdcChanNum = mdrivlib::AdcChanNum;
using TimChannelNum = mdrivlib::TimChannelNum;

constexpr inline PinDef A0{GPIO::A, PinNum::_6};
constexpr inline PinDef A1{GPIO::A, PinNum::_2};
constexpr inline PinDef A2{GPIO::A, PinNum::_5};
constexpr inline PinDef A3{GPIO::C, PinNum::_0};
constexpr inline PinDef A4{GPIO::A, PinNum::_7};
constexpr inline PinDef A5{GPIO::A, PinNum::_1};
constexpr inline PinDef A6{GPIO::A, PinNum::_4}; // digital in inf-osc smd p3
constexpr inline PinDef A7{GPIO::C, PinNum::_1};
constexpr inline PinDef A8{GPIO::A, PinNum::_3};
constexpr inline PinDef A9{GPIO::A, PinNum::_0};

constexpr inline AdcChanNum A0AdcChan{AdcChanNum::_6};
constexpr inline AdcChanNum A1AdcChan{AdcChanNum::_2};
constexpr inline AdcChanNum A2AdcChan{AdcChanNum::_5};
constexpr inline AdcChanNum A3AdcChan{AdcChanNum::_10};
constexpr inline AdcChanNum A4AdcChan{AdcChanNum::_7};
constexpr inline AdcChanNum A5AdcChan{AdcChanNum::_1}; // not used inf-osc smd p3
constexpr inline AdcChanNum A6AdcChan{AdcChanNum::_4};
constexpr inline AdcChanNum A7AdcChan{AdcChanNum::_11};
constexpr inline AdcChanNum A8AdcChan{AdcChanNum::_3};
constexpr inline AdcChanNum A9AdcChan{AdcChanNum::_0};

constexpr inline PinDef D0{GPIO::E, PinNum::_8};
constexpr inline PinDef D2{GPIO::B, PinNum::_15};
constexpr inline PinDef D3{GPIO::E, PinNum::_7};

constexpr inline PinDef D8{GPIO::C, PinNum::_13};
constexpr inline PinDef D12{GPIO::A, PinNum::_10};
constexpr inline PinDef D19{GPIO::B, PinNum::_0};

constexpr inline PinDef D5{GPIO::B, PinNum::_8};
constexpr inline PinDef D6{GPIO::I, PinNum::_7};
constexpr inline PinDef D10{GPIO::A, PinNum::_11};

constexpr inline mdrivlib::TimChanConf D5PwmConf{
	.pin = {D5.gpio, D5.pin, PinAF::AltFunc2},
	.TIM = TIM4_BASE,
	.channum = TimChannelNum::_3,
};

constexpr inline mdrivlib::TimChanConf D6PwmConf{
	.pin = {D6.gpio, D6.pin, PinAF::AltFunc3},
	.TIM = TIM8_BASE,
	.channum = TimChannelNum::_3,
};

constexpr inline mdrivlib::TimChanConf D10PwmConf{
	.pin = {D10.gpio, D10.pin, PinAF::AltFunc1},
	.TIM = TIM1_BASE,
	.channum = TimChannelNum::_4,
};

constexpr inline PinDef Debug0{GPIO::E, PinNum::_1};
constexpr inline PinDef Debug1{GPIO::E, PinNum::_3};
constexpr inline PinDef Debug2{GPIO::E, PinNum::_1};
constexpr inline PinDef Debug3{GPIO::E, PinNum::_3};

constexpr inline PinDef ConsoleUartTX{GPIO::C, PinNum::_12, PinAF::AltFunc8};
constexpr inline PinDef ConsoleUartRX{GPIO::D, PinNum::_2, PinAF::AltFunc8};

// TODO: do we put SAI, Codec I2C, Codec Reset here?

} // namespace Pin
} // namespace Brain
