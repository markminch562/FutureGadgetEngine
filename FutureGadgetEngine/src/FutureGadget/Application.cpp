#include "Application.h"
#include <stdio.h>

namespace FutureGadget {

	Application::Application() {

	}
	Application::~Application() {

	}
	void Application::Run() {
		while (true)
		{
			
		}
	}

}

#ifdef FG_PLATFORM_WINDOWS

extern FutureGadget::Application* FutureGadget::createApplication();

int main(int argc, char** argv) {

	printf("Can You Not See, Stiens Gate has Chosen \n");
	auto app = FutureGadget::createApplication();
	app->Run();
	delete app;
}

#endif // 