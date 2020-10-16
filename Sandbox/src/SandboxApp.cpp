#include <FazJogu.h>

class Sandbox : public FazJogu::Application
{
public:
	Sandbox()
	{}

	~Sandbox()
	{}

};

FazJogu::Application* FazJogu::CreateApplication()
{
	return new Sandbox();
}