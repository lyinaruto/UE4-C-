// 06.Sat.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;

int main()
{
 int* ArrayZ[5] = {};

//	*ArrayZ[0] = 12;
/* 	for (int i= 0; i < 5; i++)
	{

		cout << *ArrayZ[i] << endl;
		cout << ArrayZ[i] << endl;
	}
*/
//	cout << ArrayZ[0] << endl;

/*
	int num;
	cout << "���������鳤�ȣ�";
	cin >> num;
	int**ArrayD = new int*[num];

	for (int i=0;i<num;i++)
	{
		int pri;
		cout << "������һ������";
		cin >> pri;
		ArrayD[i] = new int(pri);
	}

	for (int i = 0; i < num; i++)
	{
		cout << "ArrayD["<<i<<"]:\t";
		cout << *ArrayD[i] <<"\t";
		cout << ArrayD[i] << endl;
	}
*/
//	cout << *ArrayD[0] << endl;

//	cout << *ArrayD[1] << endl;
	cout << "====================" << endl;

	int Array[] = { 11,22,33,44,55,66 };
	int(*ArrayS)[6] = &Array;
	cout << *ArrayS[2] << endl;
	cout << ArrayS[2] << endl;

	for (int i=0;i<6;i++)
	{
		cout << (*ArrayS)[i] << endl;
	}




	system("Pause");
    return 0;
}

