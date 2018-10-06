#include "stdafx.h"
#include "ShopManager.h"
#include "Shop.h"
#include "PropItem.h"
#include "GameMode.h"

using namespace std;

EShopState State = ES_ShopList;//�˵�״̬��ʼ�� ��0���̵��б�1���̵���Ʒ�б�
int CurrentShop = 0;//Ŀǰ�̵���

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
	//��ʼ���̵�����
	{

		Shop* shop = new Shop();
		shop->Name = "�������԰";
		shop->Size = 4;
		shop->Item = new PropItem*[shop->Size];

		shop->Item[0] = new PropItem("��", 21);
		shop->Item[1] = new PropItem("��", 35);
		shop->Item[2] = new PropItem("��", 15);
		shop->Item[3] = new PropItem("��", 12);

		Shops[0] = shop;
	}
	{
		Shop* shop = new Shop();
		shop->Name = "����Ӫ";
		shop->Size = 3;
		shop->Item = new PropItem*[shop->Size];

		shop->Item[0] = new PropItem("��ǹ", 210);
		shop->Item[1] = new PropItem("ͻ����ǹ", 350);
		shop->Item[2] = new PropItem("�ѻ�ǹ", 1500);

		Shops[1] = shop;
	}
	{
		Shop* shop = new Shop();
		shop->Name = "����������";
		shop->Size = 2;
		shop->Item = new PropItem*[shop->Size];

		shop->Item[0] = new PropItem("ԭ�ӵ�", 21000);
		shop->Item[1] = new PropItem("�˵�", 35000);

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
	//�˵��л�
	bool bCMD = true;
	while (bCMD)
	{
		
		switch (State)
		{
		case EL_Menu:
		{
			system("CLS");
			cout << "����Ŀǰ��ҵ���̵��У�" << endl;
			for (int i=0;i<Size;i++)
			{
				cout << i << ". " << Shops[i]->Name << endl;
			}
			cout << "====================" << endl;
			int CMD = 0;
			cin >> CMD;
			if (CMD>=Size)
			{
				cout << "������󣡣���" << endl;
			} 
			else
			{
				cout << "��ӭ����" << Shops[CMD]->Name << "���س������̵�ҳ��" << endl;
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
				cout << "  �۸�" << Shops[CurrentShop]->Item[i]->GetPrice()<<"Ԫ" << endl;
			}
			cout << "====================" << endl;
			cout << "��ѡ������Ҫ�������Ʒ��" << endl;
			int CMD;
			cin >> CMD;
*/

/*         
            cout << "�Ƿ񷵻��̵�ѡ��ҳ�棨Y/N��" << endl;
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
	cout << "����Ŀǰ��ҵ���̵��У�" << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << i << ". " << Shops[i]->Name << endl;
	}
	cout << "====================" << endl;
	int CMD = 0;
	cin >> CMD;
	if (CMD >= Size)
	{
		cout << "������󣡣���" << endl;
	}
	else
	{
		cout << "��ӭ����" << Shops[CMD]->Name << "���س������̵�ҳ��" << endl;
		CurrentShop = CMD;
		State= ES_Shop;
		cin.ignore();
		getchar();
	}
}

void ShopManager::Reset()
{
	State = ES_ShopList;//�˵�״̬��ʼ�� ��0���̵��б�1���̵���Ʒ�б�
}

