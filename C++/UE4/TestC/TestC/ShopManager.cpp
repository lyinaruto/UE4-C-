#include "stdafx.h"
#include "ShopManager.h"
#include "Shop.h"
#include "PropItem.h"
#include "GameMode.h"

using namespace std;

EShopState State = ES_ShopList;//菜单状态初始化 （0是商店列表；1是商店商品列表）
int CurrentShop = 0;//目前商店编号

ShopManager::ShopManager()
{
	
}

ShopManager::~ShopManager()
{

}

void ShopManager::Install()
{
	Size = 3;
	Shops = new Shop*[Size];
	//初始化商店数据
	{

		Shop* shop = new Shop();
		shop->Name = "冷兵器乐园";
		shop->Size = 4;
		shop->Item = new PropItem*[shop->Size];

		shop->Item[0] = new PropItem("刀", 21);
		shop->Item[1] = new PropItem("剑", 35);
		shop->Item[2] = new PropItem("棍", 15);
		shop->Item[3] = new PropItem("棒", 12);

		Shops[0] = shop;
	}
	{
		Shop* shop = new Shop();
		shop->Name = "火器营";
		shop->Size = 3;
		shop->Item = new PropItem*[shop->Size];

		shop->Item[0] = new PropItem("手枪", 210);
		shop->Item[1] = new PropItem("突击步枪", 350);
		shop->Item[2] = new PropItem("狙击枪", 1500);

		Shops[1] = shop;
	}
	{
		Shop* shop = new Shop();
		shop->Name = "米奇妙妙屋";
		shop->Size = 2;
		shop->Item = new PropItem*[shop->Size];

		shop->Item[0] = new PropItem("原子弹", 21000);
		shop->Item[1] = new PropItem("核弹", 35000);

		Shops[2] = shop;
	}
}

void ShopManager::Logic()
{
	switch (State)
	{
	case ES_ShopList:
		ShopListLogic();
		break;
	case ES_Shop:
		Shops[CurrentShop]->ShopLogic();
		break;
	default:
		break;
	}


/*
	//菜单切换
	bool bCMD = true;
	while (bCMD)
	{
		
		switch (State)
		{
		case EL_Menu:
		{
			system("CLS");
			cout << "我们目前开业的商店有：" << endl;
			for (int i=0;i<Size;i++)
			{
				cout << i << ". " << Shops[i]->Name << endl;
			}
			cout << "====================" << endl;
			int CMD = 0;
			cin >> CMD;
			if (CMD>=Size)
			{
				cout << "输入错误！！！" << endl;
			} 
			else
			{
				cout << "欢迎光临" << Shops[CMD]->Name << "，回车进入商店页面" << endl;
				CurrentShop = CMD;
				State = 1;
			}
			getchar();
			break;
		}
		case EL_ScMenu:
			system("CLS");
			cout << Shops[CurrentShop]->Name << endl;
			cout << "====================" << endl;
			for (int i = 0; i < Shops[CurrentShop]->Size; i++)
			{
				cout << i << ". " << Shops[CurrentShop]->Item[i]->Name;
				cout << "  价格：" << Shops[CurrentShop]->Item[i]->GetPrice()<<"元" << endl;
			}
			cout << "====================" << endl;
			cout << "请选择您想要购买的商品：" << endl;
			int CMD;
			cin >> CMD;
*/

/*         
            cout << "是否返回商店选择页面（Y/N）" << endl;
			cout << "====================" << endl;
			char CMD;
			cin >> CMD;
			if (CMD=='Y'|| CMD == 'y')
			{
				State = 0;
			} 
			else
			{
				bCMD = 0;
				GameMode::GetGM()->SetState();
				break;
			}

			break;
		}
	}
*/
}

void ShopManager::ShopListLogic()
{
	system("CLS");
	cout << "我们目前开业的商店有：" << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << i << ". " << Shops[i]->Name << endl;
	}
	cout << "====================" << endl;
	int CMD = 0;
	cin >> CMD;
	if (CMD >= Size)
	{
		cout << "输入错误！！！" << endl;
	}
	else
	{
		cout << "欢迎光临" << Shops[CMD]->Name << "，回车进入商店页面" << endl;
		CurrentShop = CMD;
		State= ES_Shop;
		cin.ignore();
		getchar();
	}
}

void ShopManager::Reset()
{
	State = ES_ShopList;//菜单状态初始化 （0是商店列表；1是商店商品列表）
}

