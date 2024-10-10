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
	if (static_cast<int>(GetFrameTime()) % 5 == 0 )
	{
		DrawRectangle(initialPosX + velocityX++, initialPosY + velocityY++, 10, 10, WHITE);//this is causing bug; velocity is getting huge

	}
	ClearBackground(BLACK);
}

//void Ball::PounceBall(double x, double y)
void Ball::PounceBall()
{//what does the new velocity based on? => just reverse both x and y?
	velocityX = - velocityX;
	velocityY = - velocityY;
}
