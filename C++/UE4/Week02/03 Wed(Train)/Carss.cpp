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
	cout << "��ӭ������������ϵͳ������" << endl;
	cout << "========================" << endl;
	cout << "0.¼��" << endl;
	cout << "1.��ѯ" << endl;
	cout << "2.�˳�ϵͳ" << endl;
	cout << "========================" << endl;
	cout << "�����룺" << endl;
	
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
			cout << "лл����ʹ�ã��ټ���������";
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
	cout << "¼��ϵͳ" << endl;
	cout << "========================" << endl;
	cout << "ֱ�����뼴���������" << endl;
	cout << "========================" << endl;
	cout << "���������������ͺţ��س�����������" << endl;
	getline(cin, CarIn.Name);
	cout << "��������ͺŵ��������س�����������" << endl;
	cin >> CarIn.Num;
	cout << "�Ƿ�洢����(y/n����" << endl;
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
	cout << "¼��ɹ�,���س����������˵���" << endl;
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
	cout << "��ӭ������������ϵͳ������" << endl;
	cout << "========================" << endl;
	cout << "0.�����Ʋ���" << endl;
	cout << "1.����������" << endl;
	cout << "2.�������˵�" << endl;
	cout << "========================" << endl;
	cout << "�����룺" << endl;

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
			cout << "ֱ�������ͺż���" << endl;
			cout << "========================" << endl;
			cout << "�����룺" << endl;
			getline(cin, CarIn.Name);
			bool bCar = false;
			for (int i=0 ; i<20;i++)
			{
				if (CarInput[i].Name== CarIn.Name)
				{
					bCar = true;
					cout << "�ͺ�Ϊ��" << CarInput[i].Name << "���ĳ�������" << CarInput[i].Num << "����" << endl;
					break;
				}
			}
	      	if (!bCar)
		     { 
		     	cout << "������û����������ͺ�" << endl;
		     	break;
		     }
		}
		else if (Cmd==1)
		{
			int max,min;
			cin.ignore();
			system("CLS");
			cout << "========================" << endl;
			cout << "ֱ��������������" << endl;
			cout << "========================" << endl;
			cout << "���������������" << endl;
			cin >> max;
			cout << "��������С������" << endl;
			cin >> min;
			bool bCar = false;
			for (int i = 0; i < 20; i++)
			{
				if (CarInput[i].Num <= max&&CarInput[i].Num>=min)
				{
					bCar = true;
					cout << "�ͺ�Ϊ��" << CarInput[i].Name << "���ĳ�������" << CarInput[i].Num << "����" << endl;
				}
			}
		    if (bCar==false)
		    {
		    	cout << "������û��������������ĳ�" << endl;
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

