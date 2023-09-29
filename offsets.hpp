#pragma once
#include <fstream>
#include "json.hpp"

namespace config {

	inline std::ptrdiff_t localPlayerController = 0x17DB0F8;
	inline std::ptrdiff_t entityList = 0x178C878;
	inline std::ptrdiff_t viewMatrix = 0x187A6D0;

	inline std::ptrdiff_t m_iPawnHealth = 0x808;
	inline std::ptrdiff_t m_hPlayerPawn = 0x7FC;
	inline std::ptrdiff_t m_sSanitizedPlayerName = 0x720;
	inline std::ptrdiff_t m_iTeamNum = 0x3BF;
	inline std::ptrdiff_t m_vOldOrigin = 0x1214;

}
