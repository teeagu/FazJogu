#pragma once

#ifdef FJ_PLATFORM_WINDOWS

extern FazJogu::Application* FazJogu::CreateApplication();

int main(int argc, char** argv)
{
	auto app = FazJogu::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error FazJogu only support Windows!
#endif