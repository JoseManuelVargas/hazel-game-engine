#pragma once

#ifdef HZ_PLATFORM_WINDOWS

#include <Hazel.h>

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized log!");
	HZ_CLIENT_INFO("Initialized log!");

	auto* application = Hazel::CreateApplication();
	application->Run();
	delete application;
	return 0;
}

#endif