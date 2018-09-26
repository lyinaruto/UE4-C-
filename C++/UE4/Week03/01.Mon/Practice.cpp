#include "stdafx.h"

using namespace std;

class Animal
{
private:

};

class Cat
{
public:
	void Miao();

};

void Cat::Miao()
{
	cout << "Miaooooooooo!!!!" << endl;
}

class Dog
{
public:
	void Wang();

};

void Dog::Wang()
{
	cout << "Wangnnnnnnnnn!!!!" << endl;
}

class My
{
public:
	int a = 0;

};

void Mod(My * a);



int main()
{

	cout << "第一题：" << endl;
	Dog *Wa = new Dog;

	Wa->Wang();

	Cat *Mi = new Cat;
	Mi->Miao();

		
	cout << "第二题：" << endl;
	My *aa = new My;
	Mod(aa);
	cout << aa->a << endl;

	system("Pause");
	return 0;
}

void Mod(My * a)
{
	a->a = 1235;
}



