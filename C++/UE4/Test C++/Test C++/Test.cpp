#include "stdafx.h"
#include "Test.h"
using namespace std;



//2.设计一个程序，收集用户的姓名，年龄，然后提供查询功能可以查询响应的用户信息，例如名字输入，查询名字的人员信息，输入年龄列出所有年龄的人。
enum ESQL
{
	ES_Add = 1,
	ES_Search,
	ES_Exit,
};


void Menu()
{
	cout << "欢迎进入信息查询系统" << endl;
	cout << "===================" << endl;
	cout << "1.添加信息" << endl;
	cout << "2.查询信息" << endl;
	cout << "3.退出" << endl;
	int i;
	cin >> i;
	switch (i)
	{
	case ES_Add:
		Add();
		break;
	case ES_Search:
		Search();
		break;
	case ES_Exit:
		break;
	default:
		break;
	}
}

Person* *Per = new Person*[20];
int Na = 0;
void Add()
{  
	string Name0;
	int Age0;
	cout << "请输入您的姓名：" << endl;
	cin >> Name0;
	Per[Na]->SetName(Name0);
	cout << "请输入您的年龄：" << endl;
	cin >> Age0;
	Per[Na]->SetAge(Age0);
	Na++;
	cout << "==============" << endl;
}

void Search()
{

}

void Person::GetName()
{
	cout << Name << "\t";
}

void Person::GetAge()
{
	cout << Age << endl;
}

void Person::SetName(string n)
{
	Name = n;
}

void Person::SetAge(int n)
{
	Age = n;
}
