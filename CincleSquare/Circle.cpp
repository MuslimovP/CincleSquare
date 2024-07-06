#include "Circle.h" 
#include<iostream>
using namespace std;

void Circle::Print() const
{
	cout << "circle radius = " << b << endl;  
}

void Circle::SetB(double x)  
{
	b = x;
}

void Circle::Circl() const
{
	double B = b * b;
	cout << "Ñircle diameter = " << B << endl;
}
