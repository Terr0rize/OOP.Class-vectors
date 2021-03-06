#include "pch.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
#include "vektors.h"
using namespace std;
void vektors::sl(double x1, double y1, double x2, double y2)
{
	cout << "==========[Теория]==========" << endl;
	cout << "Для того, чтобы произвести сложение двух векторов, необходимо соответствующие элементы двух векторов А и Б сложить. Пример: А(2,2) и Б(2,2). Вектор С = (4,4). Формула: C=A+B" << endl;
	double x, y;
	x = x1 + x2;
	y = y1 + y2;
	cout << "Результат сложения: С(" << x << "," << y << ")\n";
};
void vektors::vich(double x1, double y1, double x2, double y2)
{
	cout << "==========[Теория]==========" << endl;
	cout << "Для того, чтобы произвести вычитание двух векторов, необходимо соответствующие элементы двух векторов А и Б вычесть. Пример: А(2,2) и Б(2,2). Вектор С = (0,0). Формула: C=A-B" << endl;
	double x, y;
	x = x1 - x2;
	y = y1 - y2;
	cout << "Результат вычитания: С(" << x << "," << y << ")\n";
};
void vektors::proiz(double x1, double y1, double x2, double y2)
{
	double ps, pvx, pvy;
	cout << "==========[Теория]==========" << endl;
	cout << "Скалярным произведением двух векторов a и b будет скалярная величина, равная произведению модулей этих векторов умноженного на косинус угла между ними. Формула: a · b = |a| · |b| * cos α" << endl;
	ps = x1 * x2 + y1 * y2;
	cout << "Скалярное произведение А=" << ps << "\n";
	pvx = y1 * x2 - x1 * y2;
	pvy = x1 * y2 - y1 * x2;
	cout << "Скалярное произведение C= (" << pvx << "," << pvy << ")\n";
};
void vektors::dlin(double x1, double y1, double x2, double y2)
{
	cout << "==========[Теория]==========" << endl;
	cout << "Корень а^2х+2y" << endl;
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
	cout << "==========[Теория]==========" << endl;
	cout << "Косинус угла между векторами находят из их скалярного произведения. Формула:  cos(U) = (x1*x2 + y1*y2)/(|a|*|b|)" << endl;
	double c, u;
	c = (x1 * x2 + y1 * y2) / (sqrt(pow(x1, 2) + pow(y2, 2) * sqrt(pow(x2, 2) + pow(y2, 2))));
	u = acos(c);
	cout << "Cos a=" << setprecision(5) << c << '\n';
};
