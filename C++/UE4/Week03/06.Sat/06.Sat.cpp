// 06.Sat.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

void Hi(int a,...)
{
	int * Pa = &a;
	int i = 0;
	while (Pa[i]!=0)
	{
		cout << Pa[i] << endl;
		i++;
	}
	cout << "==================" << endl;
	return;
}
#define PINT int*
#define PPP MAX

#define MAX(A,B) (A>B?A:B)

#define SPWAN(X,Y,Z) X##Y##Z

#define SPW(X) #X
#define SPWA(X) #@X

#define UN 11

/*
void Hi2(int* b, ...)
{
	int* Pp = b;
	int i = 0;
	while (Pp[i])
	{
		cout << Pp[i] << endl;
		i++;
	}
	return;
}
*/




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
	cout << "请输入数组长度：";
	cin >> num;
	int**ArrayD = new int*[num];

	for (int i=0;i<num;i++)
	{
		int pri;
		cout << "请输入一个数：";
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

/*	
    int Array[] = { 11,22,33,44,55,66 };
	int(*ArrayS)[6] = &Array;
	cout << *ArrayS[2] << endl;
	cout << ArrayS[2] << endl;

	for (int i=0;i<6;i++)
	{
		cout << (*ArrayS)[i] << endl;
	}
*/

	Hi(1, 2, 3, 4, 5, 6, 7);
	cout << endl;

//	Hi2(new int(12), new int(22), new int(32), new int(42), new int(52), new int(62), new int(72));

	PINT pointer = new int(12);
	cout << pointer << endl;
	cout << *pointer << endl;
	cout << "====================" << endl;

	int A = MAX(10, 12);
	cout << A << endl;
	cout << MAX(12, 55) << endl;

	cout << PPP(120,55) << endl;

	PINT arr[] = { 0 };


//	cout << SPWAN("Hello ",A,"!!!!!")<<endl;


#if UN>100
	cout << SPW(Hello) << endl;
	cout << SPWA(W) << endl;

#error Over
#endif



	system("Pause");
    return 0;
}

