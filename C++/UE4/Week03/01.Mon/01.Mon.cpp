// 01.Mon.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "����������������" << endl;
	}
}

void Car::DownCar()
{
	Person--;
	if (Person >= MaxPeople)
	{
		cout << "���ڵ��˾����³�" << endl;
	}
}

void Car::UpSpeed()
{
	Speed++;
	if (Speed>=MaxSpeed)
	{
		cout << "�Ѵﵽ���٣�������" << endl;
		Speed = MaxSpeed;
	}
}

void Car::DownSpeed()
{
	Speed--;
	if (Speed <= 0)
	{
		cout << "����ֹͣ" << endl;
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
		cout << "����������������" << endl;
	}
}

void Bus::DownBus()
{
	Person--;
	if (Person >= MaxPeople)
	{
		cout << "���ڵ��˾����³�" << endl;
	}
}

void Bus::UpSpeed()
{
	Speed++;
	if (Speed >= MaxSpeed)
	{
		cout << "�Ѵﵽ���٣�������" << endl;
		Speed = MaxSpeed;
	}
}

void Bus::DownSpeed()
{
	Speed--;
	if (Speed <= 0)
	{
		cout << "����ֹͣ" << endl;
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
	cout << "���볤�� �����ܳ�/���" << endl;
	cin >> Rec->length;
	cin >> Rec->wight;
	cout << Rec->D() << endl;
	cout << Rec->S() << endl;

	cout << "��������" << endl;
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

