#pragma once

#include "Core.h"

namespace Hazel
{
	class HAZEL_API Application
	//class Application
	//class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

