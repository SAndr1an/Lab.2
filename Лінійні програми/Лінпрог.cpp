// Lab_02.cpp
// < Саламага Андріан >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y1; 
	double y2; 
	cout << "x = "; cin >> x;
	y1 = ((sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) + 1 - (2 * sin(2 * x) * sin(2 * x))));
	y2 = (2*sin(x));
	cout << endl;
	cout << "y1 = " << y1 << endl;
	cout << "y2 = " << y2 << endl;
	cin.get();
	return 0;
}
