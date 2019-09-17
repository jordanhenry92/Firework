#include <Firework.h>

class Sandbox : public Firework::Application {

public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Firework::Application* Firework::CreateApplication() {

	return new Sandbox();

}