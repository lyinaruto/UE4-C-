#include "stdafx.h"
#include "Area.h"


float Shape::Area()
{
	return -1;
}

float Shape::Perimeter()
{
	return -1;
}

Rectangle::Rectangle(int L, int W):Length(L),Width(W)
{

}

float Rectangle::Area()
{
	return Length*Width;
}

float Rectangle::Perimeter()
{
	return (Length + Width) * 2;
}

Rotundity::Rotundity(int rad):Rad(rad)
{

}

float Rotundity::Area()
{
	return 3.14f * Rad * Rad;
}

float Rotundity::Perimeter()
{
	return 3.14f * 2 * Rad;
}
