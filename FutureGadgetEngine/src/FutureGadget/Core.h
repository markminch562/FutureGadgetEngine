#pragma once

#ifdef FG_PLATFORM_WINDOWS
	#ifdef FG_BUILD_DLL
		#define FUTURE_GADGET_API _declspec(dllexport)
	#else
		#define FUTURE_GADGET_API _declspec(dllimport)
	#endif 
#else
	#error Future Gadget Currently is Windows Only

#endif 