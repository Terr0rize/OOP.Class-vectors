#include "pch.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
#include "vektors.h"
using namespace std;
struct koord { double x, y; };
int main()
{
	setlocale(LC_ALL, "Russian");
	koord v, v1;
	cout << "Заполните данные о векторах, после чего будет вызов меню." << endl;
	cout << "Координаты A: \nx ";
	cin >> v.x;
	cout << "y "; cin >> v.y;
	cout << "\nКоординаты B: \nx ";
	cin >> v1.x;
	cout << "y ";
	cin >> v1.y;
	cout << '\n';
	vektors perem;
	int e;
	do {
		system("pause");
		system("cls");
		cout << "Введите номер выбора: " << endl;
		cout << "1)Найти сумму.  " << endl;
		cout << "2)Найти разность.  " << endl;
		cout << "3)Найти длину." << endl;
		cout << "4)Найти косинус. " << endl;
		cout << "5)Найти произведение(Скалярное и Векторное). " << endl;
		cout << "6)Заполнить данные о векторах заного и вывести меню для выбора операции." << endl;
		cout << "7)Выйти из программы.  " << endl;
		cin >> e;
		switch (e)
		{
		case 1:
		{
			perem.sl(v.x, v.y, v1.x, v1.y);
			cout << '\n';
		}; break;
		case 2: {
			perem.vich(v.x, v.y, v1.x, v1.y);
			cout << '\n';
		}; break;
		case 3: {
			perem.dlin(v.x, v.y, v1.x, v1.y);
			cout << '\n';
		}; break;
		case 4: {
			perem.cosin(v.x, v.y, v1.x, v1.y);
			cout << '\n';
		}; break;
		case 5: {
			perem.proiz(v.x, v.y, v1.x, v1.y);
			cout << '\n';
		}; break;
		case 6: {
			cout << "Координаты A: \nx ";
			cin >> v.x;
			cout << "y "; cin >> v.y;
			cout << "\nКоординаты B: \nx ";
			cin >> v1.x;
			cout << "y ";
			cin >> v1.y;
			cout << '\n';
		}; break;
		case 7: {
			return 0;

		}; break;
			break;
		}
	}
	while (e != 7);
	//perem.sl(v.x, v.y, v1.x, v1.y);
	//perem.vich(v.x, v.y, v1.x, v1.y);
	//perem.dlin(v.x, v.y, v1.x, v1.y);
	//perem.cosin(v.x, v.y, v1.x, v1.y);
	//perem.proiz(v.x, v.y, v1.x, v1.y);
	_getch();
	return 0;
}
