#include "stdafx.h"
#include "Person.h"
using namespace std;



//2.���һ�������ռ��û������������䣬Ȼ���ṩ��ѯ���ܿ��Բ�ѯ��Ӧ���û���Ϣ�������������룬��ѯ���ֵ���Ա��Ϣ�����������г�����������ˡ�
enum ESQL
{
	ES_Add = 1,
	ES_Search,
	ES_Exit,
};

enum ESearchSelect
{
	ESS_Name,
	ESS_Age,
};


void Menu()
{
	cout << "��ӭ������Ϣ��ѯϵͳ" << endl;
	cout << "===================" << endl;
	cout << "1.�����Ϣ" << endl;
	cout << "2.��ѯ��Ϣ" << endl;
	cout << "3.�˳�" << endl;
	int i=0;
	while (i!=3)
	{
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
		system("CLS");
	}
}

Person Per[20];

void Add()
{
	Person PP;
	cout << "����������������" << endl;
	cin >> PP.Name;
	cout << "�������������䣺" << endl;
	cin >> PP.Age;
	cout << "==============" << endl;
	cout << "�Ƿ�洢����(y/n����" << endl;
	char Cmd;
	cin >> Cmd;
	if (Cmd == 'n')
	{
		Menu();
		return;
	}
	else if (Cmd == 'y')
	{
		AddPerInfo(PP);
	}
	cout << "¼��ɹ�,���س����������˵���" << endl;
	cin.get();
	system("CLS");
	Menu();
}

void Search()
{
	cout << "��ӭ������Ϣ��ѯϵͳ" << endl;
	cout << "===================" << endl;
	cout << "1.�����ֲ�ѯ" << endl;
	cout << "2.�������ѯ" << endl;
	int i;
	cin >> i;

	while (i > 0 && i <= 2)
	{
		if (i == 1)
		{
			Person PP;
			cin.ignore();
			system("CLS");
			cout << "========================" << endl;
			cout << "ֱ���������ּ���" << endl;
			cout << "========================" << endl;
			cout << "�����룺" << endl;
			cin >> PP.Name;
			bool bPer = false;
			for (int i = 0; i < 20; i++)
			{
				if (Per[i].Name == PP.Name)
				{
					bPer = true;
					cout << "������" << Per[i].Name << "�����䣺" << Per[i].Age << "�ꡣ" << endl;
					break;
				}
			}
			if (!bPer)
			{
				cout << "���ݿ���û����������˵���Ϣ��" << endl;
				system("Pause");
				Menu();
				break;
			}
		}
		else if (i == 2)
		{
			int Agee;
			cin.ignore();
			system("CLS");
			cout << "========================" << endl;
			cout << "ֱ���������伴��" << endl;
			cout << "========================" << endl;
			cin >> Agee;
			bool bPer = false;
			for (int i = 0; i < 20; i++)
			{
				if (Per[i].Age == Agee)
				{
					bPer = true;
					cout << "������" << Per[i].Name << "�����䣺" << Per[i].Age << "�ꡣ" << endl;
				}
			}
			if (bPer == false)
			{
				cout << "���ݿ���û����������˵���Ϣ��" << endl;
				system("Pause");
				Menu();
				break;
			}
		}
		else
		{
			Menu();
			break;
		}
		system("Pause");
	}
}

void AddPerInfo(Person PP)
{
	for (int i = 0; i < 20; i++)
	{
		if (Per[i].Name == PP.Name)
		{
			Per[i].Age += PP.Age;
		}
		else if (Per[i].Age == 0)
		{
			Per[i] = PP;
			break;
		}
	}
	return;
}
/*
Reporter::Reporter()
{
	this->Name = "����";
	this->Sex = ES_Man;
	this->Age = 34;
	this->Hobby = "͵��";
}

Driver::Driver()
{
	this->Name = "����";
	this->Sex = ES_Man;
	this->Age = 43;
	this->Hobby = "������";
}

Programmer::Programmer()
{
	this->Name = "����";
	this->Sex = ES_Man;
	this->Age = 23;
	this->Hobby = "����Ӱ";
}
Person2::Person2()
{
	cout << "���ǻ���" << endl;
}

*/