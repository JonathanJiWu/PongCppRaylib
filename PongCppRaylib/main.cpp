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

		DrawCircle(100, 100, 10, WHITE);







		EndDrawing();
	}


	return 0;
}