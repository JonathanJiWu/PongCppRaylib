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
		if (static_cast<int>(GetTime())% 5 == 0)
		{
			ball.PounceBall();
		}
			








		EndDrawing();
	}


	return 0;
}