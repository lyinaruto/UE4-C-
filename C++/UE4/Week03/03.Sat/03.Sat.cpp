// 03.Sat.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Pro.h"

using namespace std;

int main()
{
	srand(unsigned(time(0)));
	for (int i=0;i<5;i++)
	{
		cout << RandomRange(30,50)<<endl;	
	}

	cout << endl;

//1.0
	Actor* Hero = new Actor(100,10,12,"����");
	Actor* Enemy = new Actor(80,12,10,"����");

	while (Hero->GetHP()>0||Enemy->GetHP()>0)
	{
		Hero->SetHP(Hurt(Enemy->GetATK()));
		Enemy->SetHP(Hurt(Hero->GetATK()));
	}
	if (Hero->GetHP()<0)
	{
		cout << "�Բ������Ѿ�������������" << endl;
	} 
	else
	{
		cout << "�����ѻع鳾��������" << endl;
	}


//2.0
	BankAccount *Acc = new BankAccount("admin", 123, "Hello!!");
	while (true)
	{
		string acn;
		int pass;
		cin.ignore();
		cout << "�������˺ţ�";
		getline(cin, acn);
		cout << "���������룺";
		cin >> pass;
		if ((acn==Acc->GetAccount())&&(pass==Acc->GetPassword()))
		{
			cout << "��ӭ����" << Acc->GetName() << endl;
			break;
		}
	}

	system("Pause");
    return 0;
}

