#pragma once

#include <cstdint>
#include "keybind.hpp"

namespace settings {
	int width = GetSystemMetrics(SM_CXSCREEN);
	int height = GetSystemMetrics(SM_CYSCREEN);

	namespace caching {
		uintptr_t base_address = 0;
	}

	inline int tab = 0;

	namespace aimbot
	{
		inline bool enable = false;
		inline bool show_fov = false;

		inline float fov = 50;
		inline float smoothness_x = 1.55;
		inline float smoothness_y = 1.55;

		inline bool dynamic_prediction = false;
		inline bool enable_smoothness = false;
		inline bool closest_part = false;
		inline bool disable_outside_fov = false;

		inline CKeybind aimbotkey{ "Aimkey" };

		inline int aimbot_type = 0;
		static const char* aimbot_types[2] = { "Mouse", "Camera" };

		inline int aimbot_part = 0;
		static const char* aimbot_parts[3] = { "Head", "Neck", "Stomach" };
	}

	namespace triggerbot {
		inline bool enable_triggerbot = false;
		inline int triggerbot_delay = 1;
		inline int triggerbot_distance = 20;
	}

	namespace visuals
	{
		inline bool enable = true;

		inline bool box = false;
		inline int box_type = 0;
		static const char* box_types[5] = { "2D Outlined", "2D Outlined Corner", "2D Box", "2D Corner Box", "2D Filled" };
		inline float boxthickness = 2.0f;

		inline bool line = false;
		inline bool skeleton = false;
		inline float SkeletonThickness = 2.0f;

		inline bool distance = false;
		inline bool username = false;
		inline bool weapon = false;
		inline bool platform = false;
		inline bool rank = false;

		inline bool watermark = true;
		inline bool fpscounter = false;
	}

	namespace checks
	{
		// checks
		inline bool visible_check = false;
		inline bool death_check = false;
		inline bool team_check = false;
	}

	namespace exploits {
		inline bool magic_bullet = false;
		inline bool no_spread = false;
	}

	namespace overlay 
	{

		inline bool show_menu = true;
	}
}