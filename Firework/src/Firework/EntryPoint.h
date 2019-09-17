#pragma once

#ifdef FWK_PLATFORM_WINDOWS

extern Firework::Application* Firework::CreateApplication();

int main(int argc, char** argv) {

	Firework::Log::Init();
	FWK_CORE_WARN("Initialized Log!");
	int a = 5;
	FWK_CLIENT_INFO("Hello Var={0}", a);

	auto app = Firework::CreateApplication();
	app->Run();
	delete app;

}

#endif