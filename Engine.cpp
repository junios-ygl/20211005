#include "Engine.h"
#include <iostream>

void Engine::Initialize()
{
}

//1Frame ���� 1/144s
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
	std::cout << "�Է¹޴´�." << std::endl;
}

void Engine::Process()
{
	std::cout << "ó���Ѵ�." << std::endl;
}

void Engine::Render()
{
//	system("cls");
	std::cout << "�������Ѵ�." << std::endl;
}
