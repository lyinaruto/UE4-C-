// 01.Mon.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

class Rectangle
{
public:
	int length;
	int wight;

	int S();
	int D();
};

int Rectangle::S()
{
	return length*wight;
}

int Rectangle::D()
{
	return (length + wight) * 2;
}

class People
{
private:
	string name;
	int age=100;

public:
	int GetAge();
};

int People::GetAge()
{
	return this->age;
}

class Student : public People
{
public:
	string Hobby;

	void study();
};

void Student::study()
{

}

class Teacher : public People
{
public:
	int Salary;

	void Teach();
};

void Teacher::Teach()
{

}

class Vehicle
{
public:
	int Speed;
	int OilMass;
};

class Car:public Vehicle
{
public:
	int Person;
	int MaxPeople = 4;
	int MaxSpeed = 130;

	void UpCar();
	void DownCar();
	void UpSpeed();
	void DownSpeed();
};

void Car::UpCar()
{
	Person++;
	if (Person>=MaxPeople)
	{
		cout << "人数已满！！！！" << endl;
	}
}

void Car::DownCar()
{
	Person--;
	if (Person >= MaxPeople)
	{
		cout << "车内的人均已下车" << endl;
	}
}

void Car::UpSpeed()
{
	Speed++;
	if (Speed>=MaxSpeed)
	{
		cout << "已达到极速！！！！" << endl;
		Speed = MaxSpeed;
	}
}

void Car::DownSpeed()
{
	Speed--;
	if (Speed <= 0)
	{
		cout << "车已停止" << endl;
		Speed = 0;
	}
}

class Bus:public Vehicle
{
public:
	int Person;
	int MaxPeople = 40;
	int MaxSpeed = 80;

	void UpBus();
	void DownBus();
	void UpSpeed();
	void DownSpeed();
};

void Bus::UpBus()
{
	Person++;
	if (Person >= MaxPeople)
	{
		cout << "人数已满！！！！" << endl;
	}
}

void Bus::DownBus()
{
	Person--;
	if (Person >= MaxPeople)
	{
		cout << "车内的人均已下车" << endl;
	}
}

void Bus::UpSpeed()
{
	Speed++;
	if (Speed >= MaxSpeed)
	{
		cout << "已达到极速！！！！" << endl;
		Speed = MaxSpeed;
	}
}

void Bus::DownSpeed()
{
	Speed--;
	if (Speed <= 0)
	{
		cout << "车已停止" << endl;
		Speed = 0;
	}
}

class Light
{
public:
	int Lumin;


};


Rectangle *Rec = new Rectangle;
People *Snd = new People;
int main()
{
	cout << "输入长宽 计算周长/面积" << endl;
	cin >> Rec->length;
	cin >> Rec->wight;
	cout << Rec->D() << endl;
	cout << Rec->S() << endl;

	cout << "返回年龄" << endl;
	cout << Snd->GetAge() << endl;




/*
	int a = 10;
	int *Pa = new int(100);

	int *Pb = new int;


	// Pb = &a;
	// *Pb = 10;

	cout << a << endl;
	cout << Pa << endl;
	cout << *Pa << endl;
	cout << Pb << endl;
	cout << *Pb << endl;
*/



	system("Pause");
    return 0;
}

