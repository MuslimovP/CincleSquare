#include "Square.h"
#include<iostream>
using namespace std;

void Square::Print() const
{
	cout << "square side = " << a << endl;
}

void Square::SetA(double x)
{
	a = x;
}
