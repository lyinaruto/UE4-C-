#include "stdafx.h"
#include "GameMode.h"
#include "ShopManager.h"
#include "Role.h"
#include "PropItem.h"

using namespace std;

GameMode::GameMode()
{
}


GameMode* GameMode::GetGM() //单例操作
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
	cout << "欢迎进入商店测试系统" << endl;
	cout << "1.进入商店" << endl;
	cout << "2.进入角色包裹" << endl;

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
		cout << "您的输入错误！！！！！！" << endl;
		cout << "请重新输入" << endl;
		getchar();
		State = EGM_Menu;
	}
}

void GameMode::RoleLogic()
{
	system("CLS");
	cout << "您的包裹" << endl;
	cout << "============" << endl;
	cout << "货币："<<Player->Money<<endl;
	cout << "============" << endl;
	for (int i = 0; i < Player->PackageSize; i++)
	{
		cout <<i+1<<". "<< (Player->Package[i] == nullptr ? "空" : Player->Package[i]->Name) << "\t";
		if ((i+1)%4==0)
		{
			cout << endl;
		}
	}
	cout << endl;
	cin.ignore();
	cout << "按任意键返回主菜单" << endl;
	getchar();
	State = EGM_Menu;

}
