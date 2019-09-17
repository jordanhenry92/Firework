#pragma once

#ifdef FWK_PLATFORM_WINDOWS

extern Firework::Application* Firework::CreateApplication();

int main(int argc, char** argv) {

	auto app = Firework::CreateApplication();
	app->Run();
	delete app;

}

#endif