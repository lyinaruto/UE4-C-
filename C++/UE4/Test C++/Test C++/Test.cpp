#include "stdafx.h"
#include "Test.h"
using namespace std;



//2.���һ�������ռ��û������������䣬Ȼ���ṩ��ѯ���ܿ��Բ�ѯ��Ӧ���û���Ϣ�������������룬��ѯ���ֵ���Ա��Ϣ�����������г�����������ˡ�
enum ESQL
{
	ES_Add = 1,
	ES_Search,
	ES_Exit,
};


void Menu()
{
	cout << "��ӭ������Ϣ��ѯϵͳ" << endl;
	cout << "===================" << endl;
	cout << "1.�����Ϣ" << endl;
	cout << "2.��ѯ��Ϣ" << endl;
	cout << "3.�˳�" << endl;
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
	cout << "����������������" << endl;
	cin >> Name0;
	Per[Na]->SetName(Name0);
	cout << "�������������䣺" << endl;
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
