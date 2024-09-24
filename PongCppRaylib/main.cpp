#include <raylib.h>


int main()
{
	int screenWidth { 1920 };
	int screenHeight{ 1080 };
	InitWindow(screenWidth, screenHeight, "pong");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		DrawRectangle(150, 150, 10, 10, WHITE); //DrawCircle(300, 300, 10, WHITE); watching the origial video the pong is a square

		//1. add physics to the ball








		EndDrawing();
	}


	return 0;
}