#include <raylib.h>
#include "windowsInterface.h"
#include "Ball.h"

WindowsInterface windowsInterface;
Ball ball;


int main()
{
	windowsInterface.SetWindowsInterface();
	ball.InitBall();

	while (!WindowShouldClose())
	{
		BeginDrawing();

	
		ball.UpdateBall();
		








		EndDrawing();
	}


	return 0;
}