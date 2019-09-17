#pragma once

#ifdef FWK_PLATFORM_WINDOWS
	#ifdef FWK_BUILD_DLL
		#define FIREWORK_API __declspec(dllexport)
	#else
		#define FIREWORK_API __declspec(dllimport)
	#endif
#else
	#error Firework only supports Windows!
#endif



