#include <FutureGadget.h>

class Sandbox : public FutureGadget::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

FutureGadget::Application* FutureGadget::createApplication() {
	return new Sandbox();
}
