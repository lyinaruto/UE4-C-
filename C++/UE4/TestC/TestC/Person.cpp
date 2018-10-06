#include "stdafx.h"
#include "Person.h"
using namespace std;



//2.设计一个程序，收集用户的姓名，年龄，然后提供查询功能可以查询响应的用户信息，例如名字输入，查询名字的人员信息，输入年龄列出所有年龄的人。
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
	cout << "欢迎进入信息查询系统" << endl;
	cout << "===================" << endl;
	cout << "1.添加信息" << endl;
	cout << "2.查询信息" << endl;
	cout << "3.退出" << endl;
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
	cout << "请输入您的姓名：" << endl;
	cin >> PP.Name;
	cout << "请输入您的年龄：" << endl;
	cin >> PP.Age;
	cout << "==============" << endl;
	cout << "是否存储数据(y/n）：" << endl;
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
	cout << "录入成功,按回车键返回主菜单。" << endl;
	cin.get();
	system("CLS");
	Menu();
}

void Search()
{
	cout << "欢迎进入信息查询系统" << endl;
	cout << "===================" << endl;
	cout << "1.按名字查询" << endl;
	cout << "2.按年龄查询" << endl;
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
			cout << "直接输入名字即可" << endl;
			cout << "========================" << endl;
			cout << "请输入：" << endl;
			cin >> PP.Name;
			bool bPer = false;
			for (int i = 0; i < 20; i++)
			{
				if (Per[i].Name == PP.Name)
				{
					bPer = true;
					cout << "姓名：" << Per[i].Name << "，年龄：" << Per[i].Age << "岁。" << endl;
					break;
				}
			}
			if (!bPer)
			{
				cout << "数据库中没有您输入的人的信息。" << endl;
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
			cout << "直接输入年龄即可" << endl;
			cout << "========================" << endl;
			cin >> Agee;
			bool bPer = false;
			for (int i = 0; i < 20; i++)
			{
				if (Per[i].Age == Agee)
				{
					bPer = true;
					cout << "姓名：" << Per[i].Name << "，年龄：" << Per[i].Age << "岁。" << endl;
				}
			}
			if (bPer == false)
			{
				cout << "数据库中没有您输入的人的信息。" << endl;
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
	this->Name = "狗仔";
	this->Sex = ES_Man;
	this->Age = 34;
	this->Hobby = "偷拍";
}

Driver::Driver()
{
	this->Name = "张三";
	this->Sex = ES_Man;
	this->Age = 43;
	this->Hobby = "打篮球";
}

Programmer::Programmer()
{
	this->Name = "李四";
	this->Sex = ES_Man;
	this->Age = 23;
	this->Hobby = "看电影";
}
Person2::Person2()
{
	cout << "我是基类" << endl;
}

*/