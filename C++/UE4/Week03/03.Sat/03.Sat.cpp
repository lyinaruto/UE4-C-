// 03.Sat.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Pro.h"
#include "DuoTai.h"
#include "Area.h"
#include "DogCat.h"
using namespace std;

int main()
{
	srand(unsigned(time(0)));

	Rectangle* rec = new Rectangle(12,10);
	Rotundity* Rot = new Rotundity(20);

	cout << rec->Area() << endl;
	cout << rec->Perimeter() << endl;

	cout << Rot->Area() << endl;
	cout << Rot->Perimeter() << endl;

    cout << "============================" << endl;

	Fish* fish = new Fish;
	Cat* cat = new Cat;
	Awan* awan = new Awan;
	Tor* tor = new Tor;
	
	Animal* ani = cat;
	ani->Swim();

	ani = fish;
	ani->Swim();

	ani = awan;
	ani->Swim();

	ani = tor;
	ani->Swim();

	cout << "============================" << endl;
	//3.��ѧ������ʦ��У�����г�����˵��࣬ѧ������ʦ��������ҵ�ķ���������У����������ҵ��



	cout << "============================" << endl;
	Son *son = new Son;
	son->Say();

	DuoTai *dt = son;
	dt->Say();



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

