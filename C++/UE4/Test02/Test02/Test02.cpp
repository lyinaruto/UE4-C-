// Test02.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
//随机数生成
int RandomRange(int Start, int End);

int RandomRange(int Start, int End)
{
	srand(unsigned(time(0)));
	return Start + rand() % (Start - End);
}

int Hurt(int Start, int End);


int Hurt(int ATK,int hit)
{
	srand(unsigned(time(0)));
	return ATK+(RandomRange(0,100)<=hit?ATK:RandomRange(-3,3));
}

//主要功能菜单。
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
//职业选择
enum EProfession
{
	EP_FS=1,
	EP_Tank,
	EP_MS,
};
//游戏内主菜单
enum EGameMenu
{
	EG_Fight,
	EG_Message,
	EG_Return,
	EG_Exit,
};
//难度选单
enum EDegree
{
	ED_Easy,
	ED_Nomal,
	ED_Hard,
	ED_VeryHard
};
//成员主属性
class Actor
{
public:
	int GetNextEXP();
	int GetSPD();
	int GetRES();
	int GetINT();
	int GetDEF();
	int GetATK();
	int GetHP();
	int GetHIT();
	void SetHP(int Hurt);
	void SetEXP(int EXP);

protected:
	int HP = 100;
	int MP = 80*0.1*INT;
	int ATK;
	int DEF;
	int INT;
	int RES;
	int SPD;
	int Exp=0;
	int NextEXP=20;
	int HIT=20;

};

int Actor::GetNextEXP()
{
	return NextEXP;
}

int Actor::GetSPD()
{
	return SPD;
}

int Actor::GetRES()
{
	return RES;
}

int Actor::GetINT()
{
	return INT;
}

int Actor::GetDEF()
{
	return DEF;
}

int Actor::GetATK()
{
	return ATK;
}

int Actor::GetHP()
{
	return HP;
}

int Actor::GetHIT()
{
	return HIT;
}

//伤害
void Actor::SetHP(int Hurt)
{
	if (this->HP > 0)
	{
		this->HP -= Hurt;
	}
	else
	{
		this->HP = 0;
	}
}

void Actor::SetEXP(int EXP)
{
	if (Exp<NextEXP)
	{
		Exp += EXP;
	} 
	else
	{
		Exp = 0;
	}
}


//法师属性/函数
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
//战士属性/函数
class Tank :public Actor
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
//牧师属性/函数
class Prisst :public Actor
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
//怪物类
class Monster
{

public:
	int Deg = 1;

	int GetEXP();
	int GetSPD();
	int GetDEF();
	int GetATK();
	int GetHP();
	int GetHIT();
	void SetHP(int Hurt);
private:
	int HP = 75 * Deg;
	int ATK = 5 * Deg;
	int DEF = 5 * Deg;
	int SPD = 5 * Deg;
	int EXP = 5;
	int HIT = 15;
};

int Monster::GetEXP()
{
	return EXP;
}

int Monster::GetSPD()
{
	return SPD;
}

int Monster::GetDEF()
{
	return DEF;
}

int Monster::GetATK()
{
	return ATK;
}

int Monster::GetHP()
{
	return HP;
}

int Monster::GetHIT()
{
	return HIT;
}

Monster* Mons = new Monster;
//伤害
void Monster::SetHP(int Hurt)
{
	if (this->HP>0)
	{
		this->HP-=Hurt;
	} 
	else
	{
		this->HP=0;
	}
}

//账号/密码
struct Account
{
	string Admin="admin";
	string Password="123456";
};
Account accout[3];
void Login();
void Select();
void Menu();
void Degree();
void Fight();

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
			Degree();
			break;
		case ER_Fight:
			Fight();
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
//登录函数
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
		for (int j = 0; j < 3; j++)
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

//人物创建/选择函数
void Select()
{
	if (*NN == NULL)
	{   
		string FTMName;
		cout << "角色选择与创建界面 " << endl;
		cout << "========================" << endl;
		cout << "选择您的职业：" << endl;
		cout << "1.法师" << endl;
		cout << "2.战士" << endl;
		cout << "3.牧师" << endl;
		cout << "========================" << endl;
		cin >> *NN;
		switch (*NN)
		{
		case EP_FS:
			cout << "请输入法师的名字：" << endl;
			cin >> FTMName;
			FS->name=FTMName;
			break;
		case EP_Tank:
			cout << "请输入战士的名字：" << endl;
			cin >> FTMName;
			TK->name = FTMName;
			break;
		case EP_MS:
			cout << "请输入牧师的名字：" << endl;
			cin >> FTMName;
			MS->name = FTMName;
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
//游戏内主界面
void Menu()
{
	system("CLS");

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
	case EG_Fight:
		EState = ER_SelectLevel;
		break;
	case EG_Message:
		system("CLS");
		cout << "角色信息 " << endl;
		cout << "========================" << endl;
		switch (*NN)
		{
		case EP_FS:
			FS->GetMessage();
			break;
		case EP_Tank:
			TK->GetMessage();
			break;
		case EP_MS:
			MS->GetMessage();
			break;
		default:
			break;
		}
		system("Pause");
		system("CLS");
		break;
	case EG_Return:
		system("CLS");
		EState = ER_Select;
		break;
	case EG_Exit:
		EState = ER_Exit;
		break;
	default:
		break;
	}

}

void Degree()
{
	system("CLS");
	cin.ignore();
	int Ede;
	cout << "战斗难度选择 " << endl;
	cout << "========================" << endl;
	cout << "0.新手试炼城堡" << endl;
	cout << "1.炼狱走廊" << endl;
	cout << "2.恶魔深渊" << endl;
	cout << "3.轮回圣地" << endl;
	cout << "========================" << endl;
	cin >> Ede;
	switch (Ede)
	{
	case ED_Easy:
		Mons->Deg = 0.5;
		cout << "您选择的难度是：新手试炼" << endl;
		system("Pause");
		EState = ER_Fight;
		break;
	case ED_Nomal:
		Mons->Deg = 1;
		cout << "您选择的难度是：炼狱走廊" << endl;
		system("Pause");
		EState = ER_Fight;
		break;
	case ED_Hard:
		Mons->Deg = 1.75;
		cout << "您选择的难度是：恶魔深渊" << endl;
		system("Pause");
		EState = ER_Fight;
		break;
	case ED_VeryHard:
		Mons->Deg = 2.5;
		cout << "您选择的难度是：轮回圣地" << endl;
		system("Pause");
		EState = ER_Fight;
		break;
	default:
		cout << "您的输入有误请重试" << endl;
		break;
	}

}

void Fight()
{
	Magic Mag = *FS;
	Tank tk = *TK;
	Prisst pri = *MS;
	Monster mons = *Mons;
	system("CLS");
	bool Fi = true;
	cout << "FIGHTING" << endl;
	while (Fi)
	{
	cout << "========================" << endl;
	switch (*NN)
	{
	case EP_FS:
		mons.SetHP(Hurt(Mag.GetATK(),Mag.GetHIT()));
		cout << "您对怪物造成" << Hurt(Mag.GetATK(), Mag.GetHIT()) << "点伤害" << endl;
		if (mons.GetHP() <= 0)
		{
			system("CLS");
			Fi = false;
			cout << "怪物已讨伐，共获得经验值：" << mons.GetEXP() << endl;
			Mag.SetEXP(mons.GetEXP());
			EState = ER_Menu;
		}
		break;
	case EP_Tank:
		mons.SetHP(Hurt(tk.GetATK(), tk.GetHIT()));
		cout << "您对怪物造成" << Hurt(tk.GetATK(), tk.GetHIT()) << "点伤害" << endl;
		if (mons.GetHP() <= 0)
		{
			system("CLS");
			Fi = false;
			cout << "怪物已讨伐，共获得经验值：" << mons.GetEXP() << endl;
			tk.SetEXP(mons.GetEXP());
			EState = ER_Menu;
		}
		break;
	case EP_MS:
		mons.SetHP(Hurt(pri.GetATK(), pri.GetHIT()));
		cout << "您对怪物造成" << Hurt(pri.GetATK(), pri.GetHIT()) << "点伤害" << endl;
		if (mons.GetHP() <= 0)
		{
			system("CLS");
			Fi = false;
			cout << "怪物已讨伐，共获得经验值：" << mons.GetEXP() << endl;
			pri.SetEXP(mons.GetEXP());
			EState = ER_Menu;
		}
		break;
	}
	system("Pause");
	if (EState == ER_Fight)
	{
		switch (*NN)
		{
		case EP_FS:
			Mag.SetHP(mons.GetATK());
			cout << "怪物对您造成" << mons.GetATK() << "点伤害" << endl;
			if (Mag.GetHP() <= 0)
			{
				system("CLS");
				Fi = false;
				cout << "胜败乃兵家常事，大侠请重新来过！！！！" << endl;
				EState = ER_Menu;
			}
			break;
		case EP_Tank:
			tk.SetHP(mons.GetATK());
			cout << "怪物对您造成" << mons.GetATK() << "点伤害" << endl;
			if (tk.GetHP() <= 0)
			{
				system("CLS");
				Fi = false;
				cout << "胜败乃兵家常事，大侠请重新来过！！！！" << endl;
				EState = ER_Menu;
			}
			break;
		case EP_MS:
			pri.SetHP(mons.GetATK());
			cout << "怪物对您造成" << mons.GetATK() << "点伤害" << endl;
			if (pri.GetHP() <= 0)
			{
				system("CLS");
				Fi = false;
				cout << "胜败乃兵家常事，大侠请重新来过！！！！" << endl;
				EState = ER_Menu;
			}
			break;
		}
	}

	system("Pause");
	cout << "========================" << endl;
	}
}



