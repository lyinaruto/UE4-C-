#pragma once

using namespace std;

//1.多态实现求面积(area)和周长(perimeter) ? （矩形（rectangle）：图形（shape）和圆形（rotundity）：图形）
class Shape
{
public:
	virtual float Area();
	virtual float Perimeter();
};

class Rectangle:public Shape
{
public:
	Rectangle(int L, int W);
	float Area() override;
	float Perimeter() override;
private:
	int Length;
	int Width;
};

class Rotundity:public Shape
{
public:
	Rotundity(int rad);
	float Area() override;
	float Perimeter() override;

private:
	int Rad;
};

