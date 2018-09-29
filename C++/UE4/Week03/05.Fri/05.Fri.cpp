// 05.Fri.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "NameSpace.h"

using namespace std;

/*
void aaa();

void aaa()
{
	using namespace AA;
	a = 10;
}

void bbb();

void bbb()
{
	using namespace AA;
	b = 10;
}
*/

int main()
{
/*
	MyInt* MI = new MyInt;

	MI->Age=100;

	cout << MI->Age << endl;

	Vtest();

	cout << i << endl;
	i=30;
	cout << i << endl;

	SingleCase::Build();
*/
	int along;
	cin >> along;

	int* Data = new int[along]{};
	Data[0]=11;

	for (i=0;i<along+5;i++)
	{
		cout << Data[i] << endl;
	}
	delete[]Data;
	/*cout << A::E::ace << endl;
	cout << A::B::ab << endl;
	cout << A::acd << endl;*/
	system("Pause");
    return 0;
}

