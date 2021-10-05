#include "Engine.h"
#include <iostream>

void Engine::Initialize()
{
}

//1Frame 생성 1/144s
void Engine::Run()
{
	while (true)
	{
		Input();
		Process();
		Render();
	}
}

void Engine::Terminalize()
{
}

void Engine::Input()
{
	std::cout << "입력받는다." << std::endl;
}

void Engine::Process()
{
	std::cout << "처리한다." << std::endl;
}

void Engine::Render()
{
//	system("cls");
	std::cout << "렌더링한다." << std::endl;
}
