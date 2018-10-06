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
		cout << "  �۸�" <<Item[i]->GetPrice() << "Ԫ" << endl;
	}
}

void Shop::ShopLogic()
{
	ShowShop();
	cout << "====================" << endl;
	cout << "����Ǯ����"<<GameMode::GetGM()->GetPlayer()->Money << endl;
	cout << "=  =  =  =  =  =  =" << endl;
	cout << "������ϣ������ĵ��߱�ţ�99�򷵻�������" << endl;
	int CMD;
	cin >> CMD;

	if (CMD==99)
	{
		GameMode::GetGM()->ResetShop();
		GameMode::GetGM()->SetState();
	}
	else if (CMD<0||CMD>=Size)
	{
		cout << "�Ƿ����룡����" << endl;
	}
	else
	{
		//���μ�飬��һ����Ƿ�����Ƿ�
		if (GameMode::GetGM()->GetPlayer()->Money<Item[CMD]->GetPrice())
		{
			cout << "������Ǯ������" << endl;
			cin.ignore();
			getchar();
			return;
		}
		//�ڶ��μ������Ƿ�����
		if (!GameMode::GetGM()->GetPlayer()->AddItem(Item[CMD]))
		{
			cout << "���ı����ռ䲻�㣡��" << endl;
			cin.ignore();
			getchar();
			return;
		}
			cout << "���ѳɹ�����" << Item[CMD]->Name << "��" << endl;
			GameMode::GetGM()->GetPlayer()->AddItem(Item[CMD]);
			GameMode::GetGM()->GetPlayer()->Money -= Item[CMD]->GetPrice();
			cin.ignore();
			getchar();
	}
}
