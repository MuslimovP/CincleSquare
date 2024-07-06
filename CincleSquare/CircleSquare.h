#pragma once
#include "Circle.h" 
#include "Square.h" 

class CircleSquare :public Square, public Circle
{
public:
	CircleSquare() = default;
	CircleSquare(double a, double b) :Square(a), Circle(b){}
	void Print()const;
	void Set—(double x, double z);  
};

