#pragma once
#include "drivers/i2c_config_struct.hh"
#include "drivers/sai_config_struct.hh"
#include <cstdint>

namespace Brain
{

using mdrivlib::GPIO;
using mdrivlib::I2CConfig;
using mdrivlib::PinAF;
using mdrivlib::PinNum;
using mdrivlib::SaiConfig;

const I2CConfig codec_i2c_conf = {
	.I2Cx = I2C2,
	.SCL = {GPIO::B, PinNum::_10, PinAF::AltFunc4},
	.SDA = {GPIO::B, PinNum::_11, PinAF::AltFunc4},
	.timing =
		{
			.PRESC = 0x20,
			.SCLDEL_SDADEL = 0x40,
			.SCLH = 0x47,
			.SCLL = 0x68,
		},
	.priority1 = 0,
	.priority2 = 1,
};

template<uint32_t SampleRate = 48000, uint32_t SampleBits = 24>
const SaiConfig sai_conf = {
	.sai = SAI2,
	.tx_block = SAI2_Block_A,
	.rx_block = SAI2_Block_B,
	.mode = SaiConfig::TXMaster,
	.dma_init_tx =
		{
			.DMAx = DMA2,
			.stream = DMA2_Stream1,
			.channel = DMA_CHANNEL_0,
			.IRQn = DMA2_Stream1_IRQn,
			.pri = 2,
			.subpri = 2,
		},
	.dma_init_rx =
		{
			.DMAx = DMA2,
			.stream = DMA2_Stream5,
			.channel = DMA_CHANNEL_0,
			.IRQn = DMA2_Stream5_IRQn,
			.pri = 2,
			.subpri = 2,
		},

	.datasize = SampleBits == 24 ? SAI_DATASIZE_24 :
				SampleBits == 16 ? SAI_DATASIZE_16 :
								   SAI_DATASIZE_32,
	.framesize = 32,
	.samplerate = SampleRate,

	.MCLK = {GPIO::E, PinNum::_14, PinAF::AltFunc10},
	.SCLK = {GPIO::E, PinNum::_12, PinAF::AltFunc10},
	.LRCLK = {GPIO::E, PinNum::_13, PinAF::AltFunc10},
	.SD_DAC = {GPIO::D, PinNum::_11, PinAF::AltFunc10},
	.SD_ADC = {GPIO::E, PinNum::_11, PinAF::AltFunc10},
	.reset_pin = {GPIO::F, PinNum::_11},

	.bus_address = 0,

	.num_tdm_ins = 2,
	.num_tdm_outs = 2,

	.sync_send = SaiConfig::NoSendSync,
	.sync_receive_from = SaiConfig::NoReceiveSync,
}; // namespace Brain

} // namespace Brain
