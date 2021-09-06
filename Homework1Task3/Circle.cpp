#include "Circle.h"
#include<iostream>

using namespace std;

Circle::Circle() : x_cord(0), y_cord(0), radius(0) {}
Circle::Circle(float x_cord, float y_cord, float radius) : x_cord(x_cord), y_cord(y_cord), radius(radius) {}

void Circle::getCircle() { 
	cout << "The circle is centered at (" << x_cord << ", " << y_cord << ")\nThe radius is		" << radius << endl; 
}

void Circle::operator * (float num) { radius = radius * num; }

bool Circle::operator == (const Circle& circle2) {
	return ((x_cord == circle2.x_cord)&&(y_cord == circle2.y_cord)&&(radius == circle2.radius));
}
