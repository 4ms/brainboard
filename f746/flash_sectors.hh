#pragma once
#include <cstdint>

constexpr uint32_t NumFlashSectors = 6;

constexpr uint32_t get_sector_addr(uint32_t sector_num) {
	constexpr uint32_t F74xxxE_SECTORS[] = {
		0x08000000, // Sector 0: 32k
		0x08008000, // Sector 1: 32k
		0x08010000, // Sector 2: 32k
		0x08018000, // Sector 3: 32k
		0x08020000, // Sector 4: 128k
		0x08040000, // Sector 5: 256k
		0x08080000, // end
	};
	return (sector_num <= NumFlashSectors) ? F74xxxE_SECTORS[sector_num] : 0;
}
