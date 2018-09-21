// 05 Fri.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

class Person
{
public:

	Person(int b)
	{
		a = b;
	}
public:
	string Name;
	int a;
};

class B : public Person
{
public:
	B():Person(10)
	{

	}

};

int * p2(int *a, int *b);

int * p3(int *a, int *b);

string World(int a);

char World(string a);

string World(int a)
{
	cout << a << endl;
	return 0;
}

char World(string a)
{
	cout << a << endl;
	return 0;
}

class MyA
{
public:
	int Num;

	void Add();
};

void MyA::Add()
{

}

int main()
{
	Person AA(1);

	World("a");
	
	B b;
	cout << b.a << endl;

	new int(11);
	int * PI = new int(999);

	* PI;//*单独存在时 变为解地址符 目的：由指针中存储的地址中取出数据；

	cout << * PI << endl;
/*
    1.在控制台接受两个浮点型数据，将数据存储到堆中，计算两个浮点值的大小，并输出最大的值。
	float *A = new float;
	float *B = new float;

	cin >> *A;
	cin >> *B;

	cout << (*A > *B ? *A : *B)<<endl;

	
	//2.构建函数，比较两个整形int的大小，参数使用指针进行传递。将较大的值使用指针的方式进行返回。
	int a, ba;

	cin >> a;
	cin >> ba;

	cout << *p2(&a, &ba) << endl;

	//3.
	int num1 = 123, num2 = 456;

	*p3(&num1, &num2);
	cout << num1 << endl;
	cout << num2 << endl;
*/

	//4.

	MyA *pN = new MyA;
	(*pN).Add();
	pN->Add();
	pN->Num = 12;

	cout << pN->Num << endl;



	system("Pause");
    return 0;
}

int* p2(int *a, int *b)
{
	return *a > *b ? a : b;
}

int * p3(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return 0;
}

