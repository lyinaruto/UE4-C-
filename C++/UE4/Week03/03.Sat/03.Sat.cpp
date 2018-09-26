// 03.Sat.cpp : 定义控制台应用程序的入口点。
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
	Actor* Hero = new Actor(100,10,12,"联盟");
	Actor* Enemy = new Actor(80,12,10,"部落");

	while (Hero->GetHP()>0||Enemy->GetHP()>0)
	{
		Hero->SetHP(Hurt(Enemy->GetATK()));
		Enemy->SetHP(Hurt(Hero->GetATK()));
	}
	if (Hero->GetHP()<0)
	{
		cout << "对不起，您已经阵亡！！！！" << endl;
	} 
	else
	{
		cout << "敌人已回归尘土！！！" << endl;
	}


//2.0
	BankAccount *Acc = new BankAccount("admin", 123, "Hello!!");
	while (true)
	{
		string acn;
		int pass;
		cin.ignore();
		cout << "请输入账号：";
		getline(cin, acn);
		cout << "请输入密码：";
		cin >> pass;
		if ((acn==Acc->GetAccount())&&(pass==Acc->GetPassword()))
		{
			cout << "欢迎您，" << Acc->GetName() << endl;
			break;
		}
	}

	system("Pause");
    return 0;
}

