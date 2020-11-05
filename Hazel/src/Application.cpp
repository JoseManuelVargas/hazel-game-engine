#include "Application.h"
#include <chrono>
#include <thread>

Hazel::Application::Application()
{
}

Hazel::Application::~Application()
{
}

void Hazel::Application::Run()
{
	auto sleepDuration = std::chrono::seconds(5);
	while (true)
	{
		std::this_thread::sleep_for(sleepDuration);
	}
}
