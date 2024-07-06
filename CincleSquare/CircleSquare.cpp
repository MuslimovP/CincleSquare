#include "CircleSquare.h"
#include<iostream>
using namespace std;

void CircleSquare::Print() const
{
	if (a > b * 2) 
	{
		cout << "Circle fits into a square!";
	}
	else 
	{
		cout << "The circle doesn't fit into the square!";
	}
}

void CircleSquare::SetÑ(double x, double z)
{
	a = x; 
	b = z;
}
