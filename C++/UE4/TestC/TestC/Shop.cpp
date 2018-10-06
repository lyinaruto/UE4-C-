#include "stdafx.h"
#include "Shop.h"
#include "GameMode.h"
#include "Role.h"

using namespace std;

Shop::Shop()
{

}

Shop::~Shop()
{
	for (int i=0;i<Size;i++)
	{
		delete Item[i];
	}
}

void Shop::ShowShop()
{
	system("CLS");
	cout << this->Name << endl;
	cout << "====================" << endl;	
    for (int i = 0; i <  Size; i++)
	{
		cout << i << ". " << Item[i]->Name;
		cout << "  价格：" <<Item[i]->GetPrice() << "元" << endl;
	}
}

void Shop::ShopLogic()
{
	ShowShop();
	cout << "====================" << endl;
	cout << "您的钱包："<<GameMode::GetGM()->GetPlayer()->Money << endl;
	cout << "=  =  =  =  =  =  =" << endl;
	cout << "输入你希望购买的道具编号，99则返回主界面" << endl;
	int CMD;
	cin >> CMD;

	if (CMD==99)
	{
		GameMode::GetGM()->ResetShop();
		GameMode::GetGM()->SetState();
	}
	else if (CMD<0||CMD>=Size)
	{
		cout << "非法输入！！！" << endl;
	}
	else
	{
		//两次检查，第一检查是否货币是否够
		if (GameMode::GetGM()->GetPlayer()->Money<Item[CMD]->GetPrice())
		{
			cout << "您带的钱不够啊" << endl;
			cin.ignore();
			getchar();
			return;
		}
		//第二次检查包裹是否已满
		if (!GameMode::GetGM()->GetPlayer()->AddItem(Item[CMD]))
		{
			cout << "您的背包空间不足！！" << endl;
			cin.ignore();
			getchar();
			return;
		}
			cout << "您已成功购买【" << Item[CMD]->Name << "】" << endl;
			GameMode::GetGM()->GetPlayer()->AddItem(Item[CMD]);
			GameMode::GetGM()->GetPlayer()->Money -= Item[CMD]->GetPrice();
			cin.ignore();
			getchar();
	}
}
