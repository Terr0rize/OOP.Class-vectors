#include "pch.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
#include "vektors.h"
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
void vektors::sl(double x1, double y1, double x2, double y2)
{
	double x, y;
	x = x1 + x2;
	y = y1 + y2;
	cout << "Результат сложения: С(" << x << "," << y << ",)\n";
};
void vektors::vich(double x1, double y1, double x2, double y2)
{
	double x, y;
	x = x1 - x2;
	y = y1 - y2;
	cout << "Результат вычитания: С(" << x << "," << y << ")\n";
};
void vektors::proiz(double x1, double y1, double x2, double y2)
{
	double ps, pvx, pvy;
	ps = x1 * x2 + y1 * y2;
	cout << "Скалярное произведение=" << ps << "\n";
	pvx = y1 * x2 - x1 * y2;
	pvy = x1 * y2 - y1 * x2;
	cout << "Векторное произведение: С(" << pvx << "," << pvy << ",)\n";
};
void vektors::dlin(double x1, double y1, double x2, double y2)
{
	double dla, dlb;
	dla = sqrt(pow(x1, 2) + pow(y1, 2));
	dlb = sqrt(pow(x2, 2) + pow(y2, 2));
	//dla = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2)); 
	//dlb = sqrt(pow(x2, 2) + pow(y2, 2) + pow(z2, 2)); 
	cout << "Длина вектора А=" << setprecision(4) << dla << '\n';
	cout << "Длина вектора B=" << setprecision(4) << dlb << '\n';
};
void vektors::cosin(double x1, double y1, double x2, double y2)
{
	double c, u;
	c = (x1*x2 + y1 * y2) / (sqrt(pow(x1, 2) + pow(y2, 2)*sqrt(pow(x2, 2) + pow(y2, 2))));
	u = acos(c);
	cout << "Cos a=" << setprecision(5) << c << '\n';
};
