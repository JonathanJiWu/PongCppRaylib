#include "Ball.h"
#include "windowsInterface.h"
#include <raylib.h>

void Ball::InitBall()
{
	initialPosX = GetScreenWidth() / 2;
	initialPosY = 20;

	velocityX = 1;
	velocityY = 0.5;
	//[TODO] add randomness
}

void Ball::UpdateBall()
{
	DrawRectangle(initialPosX + velocityX++, initialPosY + velocityY++, 10, 10, WHITE);
	ClearBackground(BLACK);
}
