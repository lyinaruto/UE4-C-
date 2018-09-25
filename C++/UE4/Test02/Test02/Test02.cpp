// Test02.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

enum ERPG_State
{
	ER_Login,
	ER_Select,
	ER_Menu,
	ER_SelectLevel,
	ER_Fight,
	ER_FightEnd,
	ER_LevelUp,
	ER_Exit,
};

ERPG_State EState =ER_Login;

enum EProfession
{
	EP_FS,
	EP_Tank,
	EP_MS,
};

enum EMenu
{
	EM_Fight,
	EM_Message,
	EM_Select,
	EM_Exit,
};

enum EGameMenu
{
	EG_Attack,
	EG_Message,
	EG_Return,
	EG_Exit,
};

class Actor
{
protected:
	int ATK;
	int DEF;
	int INT;
	int RES;
	int SPD;
	int Exp;
	int NextEXP=20;
	float HIT;

};

class Magic:public Actor
{
public:
	Magic();
	string name;
public:
	void LUp();
	void GetMessage();
};


Magic::Magic()
{
	ATK = 3;
	DEF = 1;
	INT = 10;
	RES = 12;
	SPD = 4;
	HIT = 0.95;
}

void Magic::LUp()
{
	ATK += 2;
	DEF += 1;
	INT += 5;
	RES += 5;
	SPD += 2;
}

void Magic::GetMessage()
{
	cout << "角色：" << name << endl;
	cout << "================" << endl;
	cout << "物理攻击：" << ATK << endl;
	cout << "物理防御：" << DEF << endl;
	cout << "魔法攻击：" << INT << endl;
	cout << "魔法防御：" << RES << endl;
	cout << "行动速度：" << SPD << endl;
	cout << "  命中率：" << HIT << endl;
	cout << "目前经验值：" << Exp << endl;
	cout << "下一级所需经验值：" << NextEXP << endl;
}

Magic *FS=new Magic;

class Tank :private Actor
{

public:
	Tank();
	string name;
public:
	void LUp();
	void GetMessage();
};

Tank::Tank()
{
	ATK = 10;
	DEF = 12;
	INT = 2;
	RES = 5;
	SPD = 8;
	HIT = 0.75;
}

void Tank::LUp()
{
	ATK += 5;
	DEF += 5;
	INT += 1;
	RES += 1;
	SPD += 3;
}

void Tank::GetMessage()
{
	cout << "角色：" << name << endl;
	cout << "================" << endl;
	cout << "物理攻击：" << ATK << endl;
	cout << "物理防御：" << DEF << endl;
	cout << "魔法攻击：" << INT << endl;
	cout << "魔法防御：" << RES << endl;
	cout << "行动速度：" << SPD << endl;
	cout << "  命中率：" << HIT << endl;
	cout << "目前经验值：" << Exp << endl;
	cout << "下一级所需经验值：" << NextEXP << endl;
}

Tank *TK=new Tank;

class Prisst :private Actor
{
public:
	Prisst();
	string name;
public:
	void LUp();
	void GetMessage();
};

Prisst::Prisst()
{
	ATK = 2;
	DEF = 4;
	INT = 12;
	RES = 15;
	SPD = 5;
	HIT = 0.9;
}

void Prisst::LUp()
{
	ATK += 1;
	DEF += 1;
	INT += 4;
	RES += 7;
	SPD += 3;
}

void Prisst::GetMessage()
{
	cout << "角色：" << name << endl;
	cout << "================" << endl;
	cout << "物理攻击：" << ATK << endl;
	cout << "物理防御：" << DEF << endl;
	cout << "魔法攻击：" << INT << endl;
	cout << "魔法防御：" << RES << endl;
	cout << "行动速度：" << SPD << endl;
	cout << "  命中率：" << HIT << endl;
	cout << "目前经验值：" << Exp << endl;
	cout << "下一级所需经验值：" << NextEXP << endl;
}

Prisst *MS=new Prisst;

struct Account
{
	string Admin="admin";
	string Password="123456";
};

Account accout[10];

void Login();
void Select();
void Menu();

int main()
{   
	while (EState!=ER_Exit)
	{
		switch (EState)
		{
		case ER_Login:
			Login();
			break;
		case ER_Select:
			Select();
			break;
		case ER_Menu:
			Menu();
			break;
		case ER_SelectLevel:
			break;
		case ER_Fight:
			break;
		case ER_FightEnd:
			break;
		case ER_LevelUp:
			break;
		case ER_Exit:
			break;
		default:
			break;
		}
	}

	system("Pause");
    return 0;
}

void Login()
{
	Account User;
	for (int i=0;i<5;i++)
	{
		cout << "用户登录界面 " << endl;
		cout << "========================" << endl;
		cout << "请输入您的用户名： ";
		getline(cin,User.Admin);
		cout << endl;
		cout << "请输入您的密码： ";
		cin >> User.Password;
		cout << endl;
		cout << "========================" << endl;
		bool bLogin=false;
		for (int j = 0; j < 10; j++)
		{
			if (User.Admin==accout[j].Admin&&User.Password==accout[j].Password)
			{
				bLogin = true;
				cout << "欢迎您："<<User.Admin<<endl;
				cin.ignore();
				cout << "输入回车键，进入下一个页面。" << endl;
				cin.get();
				system("CLS");
				EState = ER_Select;
				break;
				/*cout << "accout["<<j<<"]"<<accout[j].Admin;*/
			} 
		}
		if (!bLogin)
		{
			cin.ignore();
			cout << "您的用户名或密码输入错误，请重新输入（您还有" << 5 - (i + 1) << "次机会）" << endl;
			system("Pause");
			system("CLS");
		}		
		else
		{
			break;
		}
	}
	if (EState!=ER_Select)
	{
		cout << "由于您输入错误的次数过多，系统将自动退出。" << endl;
		EState = ER_Exit;
	}
}

int *NN = new int(NULL);

void Select()
{
	if (*NN == NULL)
	{   
		cout << "角色选择与创建界面 " << endl;
		cout << "========================" << endl;
		cout << "选择您的职业：" << endl;
		cout << "0.法师" << endl;
		cout << "1.战士" << endl;
		cout << "2.牧师" << endl;
		cout << "========================" << endl;
		cin >> *NN;

		switch (*NN)
		{
		case EP_FS:
			*
			string FName;
			cin>>
			break;
		case EP_Tank:
			string TName;
			
			break;
		case EP_MS:
			string MName;
			
			break;
		default:
			cout << "您的输入有误，请重新输入！" << endl;
			*NN = NULL;
			system("Pause");
			break;
		}
	} 
	else
	{
		cout << "已有账号！！！！即将进入游戏！！！！" << endl;
		system("Pause");
	}
	system("CLS");
	if (*NN!= NULL&&(*NN>=0&&*NN<=2))
	{
		EState = ER_Menu;
	} 	
}

void Menu()
{
	cout << "游戏操作主菜单 " << endl;
	cout << "========================" << endl;
	cout << "0.进入战斗" << endl;
	cout << "1.查看角色信息" << endl;
	cout << "2.返回角色选择" << endl;
	cout << "3.退出游戏" << endl;
	cout << "========================" << endl;
	int i;
	cin >> i;
	switch (i)
	{
	case EG_Attack:
		
		break;
	case EG_Message:
		system("CLS");
		cout << "角色信息 " << endl;
		cout << "========================" << endl;
		switch (*NN)
		{
		case EP_FS:
			FS.GetMessage();
			break;
		case EP_Tank:
			TK.GetMessage();
			break;
		case EP_MS:
			MS.GetMessage();
			break;
		default:
			break;
		}
		system("Pause");
		break;
	case EG_Return:
		EState = ER_Select;
		break;
	case EG_Exit:
		EState = ER_Exit;
		break;
	default:
		break;
	}

}


