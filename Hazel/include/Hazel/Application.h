#pragma once

namespace Hazel {

	class Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// Must be defined by the Client
	Application* CreateApplication();
}
