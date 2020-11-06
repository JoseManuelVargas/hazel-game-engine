#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// Must be defined by the Client
	Application* CreateApplication();
}
