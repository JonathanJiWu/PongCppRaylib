#pragma once

class Ball
{
	double initialPosX{0.0};
	double initialPosY{0.0};
	double velocityX{ 0.0 };
	double velocityY{ 0.0 };

public:

	void InitBall();
	//void GenerateBall();
	void UpdateBall();
	//void PounceBall(double x, double y);//change ball's velocity
	void PounceBall();//change ball's velocity



};

