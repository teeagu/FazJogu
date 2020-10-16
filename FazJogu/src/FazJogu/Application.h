#pragma once

#include "Core.h"

namespace FazJogu
{
	class FAZJOGU_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}