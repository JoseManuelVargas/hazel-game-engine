#pragma once

#ifdef HZ_PLATFORM_WINDOWS

#include <Hazel.h>

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto* application = Hazel::CreateApplication();
	application->Run();
	delete application;
	return 0;
}

#endif