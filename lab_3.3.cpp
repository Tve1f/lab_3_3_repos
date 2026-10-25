// lab_3.3.cpp 
// Лабораторна робота № 3.3 
// Кузьмич Максим
// Розгалуження, задане графіком функції. 
// Варіант 27


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double R;
	double x;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -R) {
		y = R;
	}
	else if (-R < x && x <= R) {
		y = R - sqrt(pow(R, 2) - pow(x, 2));
	}
	else if (R < x && x <= 6) {
		y = R + ((-3 - R) / (6 - R)) * (x - R);
	}
	else {
		y = x - 9;
	}
	cout << "y = " << y;
}
