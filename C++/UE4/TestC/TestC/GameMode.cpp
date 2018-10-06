#include "stdafx.h"
#include "GameMode.h"
#include "ShopManager.h"
#include "Role.h"
#include "PropItem.h"

using namespace std;

GameMode::GameMode()
{
}


GameMode* GameMode::GetGM() //��������
{
	static GameMode* Instance = new GameMode;
	return Instance;
}

GameMode::~GameMode()
{
}

Role* GameMode::GetPlayer()
{
	return Player;
}

EGM_State GameMode::SetState()
{
	return State= EGM_Menu;
}

void GameMode::ResetShop()
{
	ShopMgs->Reset();
}

void GameMode::Install()
{
	ShopMgs = new ShopManager();
	ShopMgs->Install();
	State = EGM_Menu;

	Player = new Role();
}

void GameMode::Logic()
{
	while (true)
	{
		switch (State)
		{
		case EGM_Menu:
			MenuLogic();
			break;
		case EGM_Shop:
			ShopMgs->Logic();
			break;
		case EGM_Role:
			RoleLogic();
			break;
		default:
			break;
		}
	}
}

bool GameMode::IsRuning()
{
	return bRun;
}

void GameMode::MenuLogic()
{
	system("CLS");
	cout << "��ӭ�����̵����ϵͳ" << endl;
	cout << "1.�����̵�" << endl;
	cout << "2.�����ɫ����" << endl;

	int CMD = 0;
	cin >> CMD;
	if (CMD==1)
	{
		State = EGM_Shop;
	} 
	else if (CMD==2)
	{
		State = EGM_Role;
	}
	else
	{
		cout << "����������󣡣���������" << endl;
		cout << "����������" << endl;
		getchar();
		State = EGM_Menu;
	}
}

void GameMode::RoleLogic()
{
	system("CLS");
	cout << "���İ���" << endl;
	cout << "============" << endl;
	cout << "���ң�"<<Player->Money<<endl;
	cout << "============" << endl;
	for (int i = 0; i < Player->PackageSize; i++)
	{
		cout <<i+1<<". "<< (Player->Package[i] == nullptr ? "��" : Player->Package[i]->Name) << "\t";
		if ((i+1)%4==0)
		{
			cout << endl;
		}
	}
	cout << endl;
	cin.ignore();
	cout << "��������������˵�" << endl;
	getchar();
	State = EGM_Menu;

}
