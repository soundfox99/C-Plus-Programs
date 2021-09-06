#pragma once

class Circle
{
private:
	float x_cord;
	float y_cord;
	float radius;
public:
	Circle();
	Circle(float x_cord, float y_cord, float radius);
	void getCircle();
	void operator * (float num);
	bool operator == (const Circle& circle2);
};

