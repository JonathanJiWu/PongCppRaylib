#include "windowsInterface.h"
#include <raylib.h>

void WindowsInterface::SetWindowsInterface()
{
	InitWindow(screenWidth, screenHeight, windowsTitle);
	SetTargetFPS(targetFPS);
}
