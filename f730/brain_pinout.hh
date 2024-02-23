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

constexpr inline PinDef A0{GPIO::F, PinNum::_7};
constexpr inline PinDef A1{GPIO::A, PinNum::_2};
constexpr inline PinDef A2{GPIO::F, PinNum::_8};
constexpr inline PinDef A3{GPIO::C, PinNum::_0};
constexpr inline PinDef A4{GPIO::F, PinNum::_10};
constexpr inline PinDef A5{GPIO::F, PinNum::_9};
constexpr inline PinDef A6{GPIO::F, PinNum::_6};
constexpr inline PinDef A7{GPIO::A, PinNum::_1};
constexpr inline PinDef A8{GPIO::C, PinNum::_1};
constexpr inline PinDef A9{GPIO::A, PinNum::_3};

// TODO!
constexpr inline AdcChanNum A0AdcChan{AdcChanNum::_4};
constexpr inline AdcChanNum A1AdcChan{AdcChanNum::_5};
constexpr inline AdcChanNum A2AdcChan{AdcChanNum::_12};
constexpr inline AdcChanNum A3AdcChan{AdcChanNum::_13};
constexpr inline AdcChanNum A4AdcChan{AdcChanNum::_0};
constexpr inline AdcChanNum A5AdcChan{AdcChanNum::_1};
constexpr inline AdcChanNum A6AdcChan{AdcChanNum::_14};
constexpr inline AdcChanNum A7AdcChan{AdcChanNum::_10};
constexpr inline AdcChanNum A8AdcChan{AdcChanNum::_11};
constexpr inline AdcChanNum A9AdcChan{AdcChanNum::_6};

constexpr inline PinDef D0{GPIO::A, PinNum::_15};
constexpr inline PinDef D1{GPIO::I, PinNum::_7};
constexpr inline PinDef D2{GPIO::C, PinNum::_7};
constexpr inline PinDef D3{GPIO::A, PinNum::_11};
constexpr inline PinDef D4{GPIO::D, PinNum::_7};
constexpr inline PinDef D5{GPIO::I, PinNum::_0};
constexpr inline PinDef D6{GPIO::A, PinNum::_9};
constexpr inline PinDef D7{GPIO::C, PinNum::_2};
constexpr inline PinDef D8{GPIO::C, PinNum::_3};
constexpr inline PinDef D9{GPIO::D, PinNum::_6};
constexpr inline PinDef D10{GPIO::A, PinNum::_10};
constexpr inline PinDef D11{GPIO::D, PinNum::_13};
constexpr inline PinDef D12{GPIO::B, PinNum::_10};
constexpr inline PinDef D13{GPIO::A, PinNum::_8};
constexpr inline PinDef D14{GPIO::C, PinNum::_6};
constexpr inline PinDef D15{GPIO::C, PinNum::_9};
constexpr inline PinDef D16{GPIO::G, PinNum::_9};
constexpr inline PinDef D17{GPIO::G, PinNum::_10};
constexpr inline PinDef D18{GPIO::B, PinNum::_3};
constexpr inline PinDef D19{GPIO::B, PinNum::_4};

constexpr inline PinDef D16SdmmcDat0AF = {D16.gpio, D16.pin, PinAF::AltFunc12};
constexpr inline PinDef D17SdmmcDat1AF = {D17.gpio, D17.pin, PinAF::AltFunc12};
constexpr inline PinDef D18SdmmcDat2AF = {D18.gpio, D18.pin, PinAF::AltFunc12};
constexpr inline PinDef D19SdmmcDat3AF = {D19.gpio, D19.pin, PinAF::AltFunc12};
constexpr inline PinDef D9SdmmcClkAF = {D9.gpio, D9.pin, PinAF::AltFunc12};
constexpr inline PinDef D4SdmmcCmdAF = {D4.gpio, D4.pin, PinAF::AltFunc12};

constexpr inline mdrivlib::TimChanConf D0PwmConf{
	.pin = {D0.gpio, D0.pin, PinAF::AltFunc3},
	.TIM = TIM8_BASE,
	.channum = TimChannelNum::_3,
};

constexpr inline mdrivlib::TimChanConf D1PwmConf{
	.pin = {D1.gpio, D1.pin, PinAF::AltFunc3},
	.TIM = TIM8_BASE,
	.channum = TimChannelNum::_2,
};

// D2?

constexpr inline mdrivlib::TimChanConf D3PwmConf{
	.pin = {D3.gpio, D3.pin, PinAF::AltFunc2},
	.TIM = TIM4_BASE,
	.channum = TimChannelNum::_3,
};

// D4?

constexpr inline mdrivlib::TimChanConf D5PwmConf{
	.pin = {D5.gpio, D5.pin, PinAF::AltFunc2},
	.TIM = TIM5_BASE,
	.channum = TimChannelNum::_4,
};

// D6?

constexpr inline mdrivlib::TimChanConf D7PwmConf{
	.pin = {D7.gpio, D7.pin, PinAF::AltFunc3},
	.TIM = TIM8_BASE,
	.channum = TimChannelNum::_4,
};

// No D8 Pwm

// D9

constexpr inline mdrivlib::TimChanConf D10PwmConf{
	.pin = {D10.gpio, D10.pin, PinAF::AltFunc1},
	.TIM = TIM2_BASE,
	.channum = TimChannelNum::_1,
};

constexpr inline mdrivlib::TimChanConf D11PwmConf{
	.pin = {D11.gpio, D11.pin, PinAF::AltFunc2},
	.TIM = TIM3_BASE,
	.channum = TimChannelNum::_2,
};

// D12
// D13

constexpr inline mdrivlib::TimChanConf D14PwmConf{
	.pin = {D14.gpio, D14.pin, PinAF::AltFunc1},
	.TIM = TIM2_BASE,
	.channum = TimChannelNum::_3,
};

// D16	TIM3_CH3 (AF2)
constexpr inline mdrivlib::TimChanConf D16PwmConf{
	.pin = {D16.gpio, D16.pin, PinAF::AltFunc2},
	.TIM = TIM3_BASE,
	.channum = TimChannelNum::_3,
};

// D17	TIM3_CH4 (AF2)
constexpr inline mdrivlib::TimChanConf D17PwmConf{
	.pin = {D17.gpio, D17.pin, PinAF::AltFunc2},
	.TIM = TIM3_BASE,
	.channum = TimChannelNum::_4,
};

// D15-D19?

// TODO: Debug0 and Debug1 are not on the schematic.. are there dummy pins or something along those lines?
constexpr inline PinDef Debug0{GPIO::A, PinNum::_12};
constexpr inline PinDef Debug1{GPIO::I, PinNum::_2};

constexpr inline PinDef Debug2{GPIO::A, PinNum::_12};
constexpr inline PinDef Debug3{GPIO::I, PinNum::_2};

// TODO: make sure alt func is correct
constexpr inline PinDef ConsoleUartTX{GPIO::C, PinNum::_10, PinAF::AltFunc8};
constexpr inline PinDef ConsoleUartRX{GPIO::C, PinNum::_11, PinAF::AltFunc8};

// TODO: do we put SAI, Codec I2C, Codec Reset here?

} // namespace Pin
} // namespace Brain
