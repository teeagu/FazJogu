#pragma once

#ifdef FJ_PLATFORM_WINDOWS
	#ifdef FJ_BUILD_DLL
		#define FAZJOGU_API __declspec(dllexport)
	#else
		#define FAZJOGU_API __declspec(dllimport)
	#endif
#else
	#error FazJogu only support Windows!
#endif