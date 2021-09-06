#include "Circle.h"
#include<iostream>

using namespace std;

int main() {
	float x, y, radius;

	cout << "Insert an x-cordinate, y-cordinate, and radius for circle 1" << endl;
	cin >> x >> y >> radius;
	Circle c1(x, y, radius);

	cout << "Insert an x-cordinate, y-cordinate, and radius for circle 2" << endl;
	cin >> x >> y >> radius;
	Circle c2(x, y, radius);

	c1 * 7;

	c1.getCircle();
	c2.getCircle();

	cout << "Circle 1 and Circle 2 are the same circle: " << boolalpha << (c1 == c2) << endl;

	system("pause");
	return 0;
}