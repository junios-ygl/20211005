#include <iostream>
#include <string>

#include "Player.h"
#include "Engine.h"

using namespace std;


int main()
{
	Engine engine;

	engine.Initialize();
	engine.Run();
	engine.Terminalize();

	//while (true)
	//{
	//	Input();
	//	Process();
	//	Render();
	//}

	return 0;
}