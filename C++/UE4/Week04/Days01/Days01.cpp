// Days01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;

class A
{
public:
	A()
	{
		cout << "A" << endl;
	}
	~A()
	{
		cout << "~A" << endl;
	}
};

class B:public A
{
public:
	B()
	{
		cout << "B" << endl;
	}
	~B()
	{
		cout << "~B" << endl;
	}
};

void NNew();

int main()
{
	NNew();
	cout << endl;
	B *bbb = new B;
	delete bbb;

	char* str = "asdds";

	system("Pause");
    return 0;
}

void NNew()
{
	B bb;
}

