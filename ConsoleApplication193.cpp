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
 koord v,v1;
 cout<<"Координаты A: \nx ";
 cin>>v.x;
 cout<<"y "; cin>>v.y;
 cout<<"\nКоординаты B: \nx ";
 cin>>v1.x;
 cout<<"y ";
 cin>>v1.y;
 cout<<'\n';
 vektors perem;
 perem.sl(v.x,v.y,v1.x,v1.y); 
 perem.vich(v.x,v.y,v1.x,v1.y); 
 perem.dlin(v.x,v.y,v1.x,v1.y); 
 perem.cosin(v.x,v.y,v1.x,v1.y); 
 perem.proiz(v.x,v.y,v1.x,v1.y); 
 _getch();
 return 0;
 }