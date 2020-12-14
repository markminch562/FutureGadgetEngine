#pragma once

#include "Core.h"
#include <stdio.h>
namespace FutureGadget {
	class FUTURE_GADGET_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* createApplication();

}

/*
#ifdef FG_PLATFORM_WINDOWS

extern FutureGadget::Application* FutureGadget::createApplication();

int main(int argc, char** argv) {

	printf("Can You Not See, Stiens Gate has Chosen \n");
	auto app = FutureGadget::createApplication();
	app->Run();
	delete app;
}

#endif // 
*/