#include <raylib.h>
#include "windowsInterface.h"

WindowsInterface windowsInterface;


int main()
{
	windowsInterface.SetWindowsInterface();

	while (!WindowShouldClose())
	{
		BeginDrawing();

		DrawRectangle(150, 150, 10, 10, WHITE); //DrawCircle(300, 300, 10, WHITE); watching the origial video the pong is a square

		//1. add physics to the ball








		EndDrawing();
	}


	return 0;
}