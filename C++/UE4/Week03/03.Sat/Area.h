#pragma once

using namespace std;

//1.��̬ʵ�������(area)���ܳ�(perimeter) ? �����Σ�rectangle����ͼ�Σ�shape����Բ�Σ�rotundity����ͼ�Σ�
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

