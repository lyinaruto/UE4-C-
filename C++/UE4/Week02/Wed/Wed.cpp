// Wed.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

struct Box1
{
	float Length;
	float Width;
	float Hight;
};

struct Box2
{
	float Length;
	float Width;
	float Hight;
};


struct Student
{
	char Sex;
	int Age;
	float Score;
	string Name;
};

struct Vector02
{
	float X;
	float Y;
};

struct Vector03
{
	float X;
	float Y;
	float Z;
};

union MyUnion
{
	int b;
	double c;
	char d;
};

class Person
{
public:
	int Age;
	string Name;
private:
};

class BoxCl
{
public:
	float Width;
	float Length;
};

class BoxC2
{
public:
	float Width;
	float Length;
};

class Area:public BoxC2
{
public:
	float Area_S();
	float Area_D();
};

float Area::Area_S()
{
	return Width*Length;
}

float Area::Area_D()
{
	return (Width+Length)*2;
}

float Are(float Width,float Length);

int main()
{
	Area SS;
	SS.Length = 10;
	SS.Width = 45;
	
	cout << SS.Area_D() << endl;
	cout << SS.Area_S() << endl;
	
	BoxCl boxC;
	boxC.Length = 30;
	boxC.Width = 98;

	cout << Are(boxC.Width, boxC.Length)<<endl;

	Person XiaoHong = {16,"Ming"};
	Person XiaoMing;
	XiaoHong.Age = 16;
	XiaoMing.Name = "Ming";
	cout << XiaoMing.Age << endl;

	MyUnion i;
	i.c = 10;

	cout << i.d << endl;

	Box1 box01;

	box01.Hight = 11;
	cout << "Box01（高度）：" << box01.Hight << endl;
	cout << "BoxofSize：" << sizeof(Box1) << endl;
	cout << "BoxofSize：" << sizeof(Box2) << endl;


	system("Pause");
    return 0;
}

float Are(float Width, float Length)
{
	return Width*Length;

}


