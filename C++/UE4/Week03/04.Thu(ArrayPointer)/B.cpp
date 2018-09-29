#include "stdafx.h"
#include "B.h"
using namespace std;

void B::Walk()
{
	cout << "父亲走" << endl;
}

void B1::Walk()
{
	cout << "B1走" << endl;
}

void B1::Say()
{
	cout << "B1叫！！！！！！" << endl;
}

void B2::Walk()
{
	cout << "B2走" << endl;
}

void B2::Say()
{
	cout << "B2叫！！！！！！" << endl;
}

void B3::Walk()
{
	cout << "B3走" << endl;
}

void B3::Say()
{
	cout << "B3叫！！！！！！" << endl;
}
