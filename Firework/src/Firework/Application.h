#pragma once

#include "Core.h"

namespace Firework {

	class FIREWORK_API Application {

	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in client
	Application* CreateApplication();

}