#include "stdafx.h"

using namespace std;

enum ECarState
{
	EC_Menu,
	EC_Input,
	EC_Search,
	EC_Exit,
};

ECarState ECarSystems = EC_Menu;

struct CarType
{
	string Name;
	int Num;
};

CarType CarInput[20];

void LogicMenu();
void LogicInput();
void AddCarInfo(CarType CarIn);
void LogicSearch();

int main()
{
	while (ECarSystems!=EC_Exit)
	{
		switch (ECarSystems)
		{
		case EC_Menu:
			LogicMenu();
			break;
		case EC_Input:
			LogicInput();
			break;
		case EC_Search:
			LogicSearch();
			break;
		case EC_Exit:
			break;
		default:
			break;
		}
		system("CLS");
	}
	system("Pause");
	return 0;
}



void LogicMenu()
{
	cout << "欢迎进入汽车管理系统！！！" << endl;
	cout << "========================" << endl;
	cout << "0.录入" << endl;
	cout << "1.查询" << endl;
	cout << "2.退出系统" << endl;
	cout << "========================" << endl;
	cout << "请输入：" << endl;
	
	int Cmd;
	cin >> Cmd;

	system("CLS");
	while (Cmd>=0&&Cmd<=2)
	{
		if (Cmd == 0)
		{
			ECarSystems = ECarState::EC_Input;
			break;
		}
		else if (Cmd == 1)
		{
			ECarSystems = ECarState::EC_Search;
			break;
		}
		else
		{
			cout << "谢谢您的使用，再见！！！！";
			break;
		}
	}
	return;
}


void LogicInput()
{
	CarType CarIn;
	char Cmd;
	cin.ignore();
	cout << "录入系统" << endl;
	cout << "========================" << endl;
	cout << "直接输入即可完成输入" << endl;
	cout << "========================" << endl;
	cout << "请依次输入汽车型号（回车键结束）：" << endl;
	getline(cin, CarIn.Name);
	cout << "请输入该型号的数量（回车键结束）：" << endl;
	cin >> CarIn.Num;
	cout << "是否存储数据(y/n）：" << endl;
	cin >> Cmd;
	if (Cmd=='n')
	{
		ECarSystems = ECarState::EC_Menu;
		return;
	}
	else if (Cmd=='y')
	{
		AddCarInfo(CarIn);
	}
	cout << "录入成功,按回车键返回主菜单。" << endl;
	cin.get();
	ECarSystems = ECarState::EC_Menu;
	
}


void AddCarInfo(CarType CarIn)
{
	for (int i = 0;i<20;i++)
	{
		if (CarInput[i].Name==CarIn.Name)
		{
			CarInput[i].Num += CarIn.Num;
		}
		else if (CarInput[i].Num == 0)
		{
			CarInput[i]= CarIn;
			break;
		}
	}
	return;
}

void LogicSearch()
{
	cout << "欢迎进入汽车管理系统！！！" << endl;
	cout << "========================" << endl;
	cout << "0.按名称查找" << endl;
	cout << "1.按数量查找" << endl;
	cout << "2.返回主菜单" << endl;
	cout << "========================" << endl;
	cout << "请输入：" << endl;

	int Cmd;
	cin >> Cmd;

	while (Cmd >= 0 && Cmd <= 2)
	{
		if (Cmd==0)
		{
			CarType CarIn;
			cin.ignore();
			system("CLS");
			cout << "========================" << endl;
			cout << "直接输入型号即可" << endl;
			cout << "========================" << endl;
			cout << "请输入：" << endl;
			getline(cin, CarIn.Name);
			bool bCar = false;
			for (int i=0 ; i<20;i++)
			{
				if (CarInput[i].Name== CarIn.Name)
				{
					bCar = true;
					cout << "型号为【" << CarInput[i].Name << "】的车，共有" << CarInput[i].Num << "辆。" << endl;
					break;
				}
			}
	      	if (!bCar)
		     { 
		     	cout << "车库中没有您输入的型号" << endl;
		     	break;
		     }
		}
		else if (Cmd==1)
		{
			int max,min;
			cin.ignore();
			system("CLS");
			cout << "========================" << endl;
			cout << "直接输入数量即可" << endl;
			cout << "========================" << endl;
			cout << "请输入最大数量：" << endl;
			cin >> max;
			cout << "请输入最小数量：" << endl;
			cin >> min;
			bool bCar = false;
			for (int i = 0; i < 20; i++)
			{
				if (CarInput[i].Num <= max&&CarInput[i].Num>=min)
				{
					bCar = true;
					cout << "型号为【" << CarInput[i].Name << "】的车，共有" << CarInput[i].Num << "辆。" << endl;
				}
			}
		    if (bCar==false)
		    {
		    	cout << "车库中没有您输入的数量的车" << endl;
			    break;
		    }
		}
		else
		{
			ECarSystems = ECarState::EC_Menu;
			break;
		}
		system("Pause");
	}
	system("Pause");
	ECarSystems = ECarState::EC_Menu;
	system("CLS");
	return;
}

