// 05 Fri.cpp : �������̨Ӧ�ó������ڵ㡣
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

	* PI;//*��������ʱ ��Ϊ���ַ�� Ŀ�ģ���ָ���д洢�ĵ�ַ��ȡ�����ݣ�

	cout << * PI << endl;
/*
    1.�ڿ���̨�����������������ݣ������ݴ洢�����У�������������ֵ�Ĵ�С�����������ֵ��
	float *A = new float;
	float *B = new float;

	cin >> *A;
	cin >> *B;

	cout << (*A > *B ? *A : *B)<<endl;

	
	//2.�����������Ƚ���������int�Ĵ�С������ʹ��ָ����д��ݡ����ϴ��ֵʹ��ָ��ķ�ʽ���з��ء�
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

