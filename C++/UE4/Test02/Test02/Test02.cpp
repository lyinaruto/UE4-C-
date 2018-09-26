// Test02.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;
//���������
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

//��Ҫ���ܲ˵���
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
//ְҵѡ��
enum EProfession
{
	EP_FS=1,
	EP_Tank,
	EP_MS,
};
//��Ϸ�����˵�
enum EGameMenu
{
	EG_Fight,
	EG_Message,
	EG_Return,
	EG_Exit,
};
//�Ѷ�ѡ��
enum EDegree
{
	ED_Easy,
	ED_Nomal,
	ED_Hard,
	ED_VeryHard
};
//��Ա������
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

//�˺�
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


//��ʦ����/����
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
	cout << "��ɫ��" << name << endl;
	cout << "================" << endl;
	cout << "��������" << ATK << endl;
	cout << "���������" << DEF << endl;
	cout << "ħ��������" << INT << endl;
	cout << "ħ��������" << RES << endl;
	cout << "�ж��ٶȣ�" << SPD << endl;
	cout << "  �����ʣ�" << HIT << endl;
	cout << "Ŀǰ����ֵ��" << Exp << endl;
	cout << "��һ�����辭��ֵ��" << NextEXP << endl;
}

Magic *FS=new Magic;
//սʿ����/����
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
	cout << "��ɫ��" << name << endl;
	cout << "================" << endl;
	cout << "��������" << ATK << endl;
	cout << "���������" << DEF << endl;
	cout << "ħ��������" << INT << endl;
	cout << "ħ��������" << RES << endl;
	cout << "�ж��ٶȣ�" << SPD << endl;
	cout << "  �����ʣ�" << HIT << endl;
	cout << "Ŀǰ����ֵ��" << Exp << endl;
	cout << "��һ�����辭��ֵ��" << NextEXP << endl;
}

Tank *TK=new Tank;
//��ʦ����/����
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
	cout << "��ɫ��" << name << endl;
	cout << "================" << endl;
	cout << "��������" << ATK << endl;
	cout << "���������" << DEF << endl;
	cout << "ħ��������" << INT << endl;
	cout << "ħ��������" << RES << endl;
	cout << "�ж��ٶȣ�" << SPD << endl;
	cout << "  �����ʣ�" << HIT << endl;
	cout << "Ŀǰ����ֵ��" << Exp << endl;
	cout << "��һ�����辭��ֵ��" << NextEXP << endl;
}

Prisst *MS=new Prisst;
//������
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
//�˺�
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

//�˺�/����
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
//��¼����
void Login()
{
	Account User;
	for (int i=0;i<5;i++)
	{
		cout << "�û���¼���� " << endl;
		cout << "========================" << endl;
		cout << "�����������û����� ";
		getline(cin,User.Admin);
		cout << endl;
		cout << "�������������룺 ";
		cin >> User.Password;
		cout << endl;
		cout << "========================" << endl;
		bool bLogin=false;
		for (int j = 0; j < 3; j++)
		{
			if (User.Admin==accout[j].Admin&&User.Password==accout[j].Password)
			{
				bLogin = true;
				cout << "��ӭ����"<<User.Admin<<endl;
				cin.ignore();
				cout << "����س�����������һ��ҳ�档" << endl;
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
			cout << "�����û�������������������������루������" << 5 - (i + 1) << "�λ��ᣩ" << endl;
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
		cout << "�������������Ĵ������࣬ϵͳ���Զ��˳���" << endl;
		EState = ER_Exit;
	}
}

int *NN = new int(NULL);

//���ﴴ��/ѡ����
void Select()
{
	if (*NN == NULL)
	{   
		string FTMName;
		cout << "��ɫѡ���봴������ " << endl;
		cout << "========================" << endl;
		cout << "ѡ������ְҵ��" << endl;
		cout << "1.��ʦ" << endl;
		cout << "2.սʿ" << endl;
		cout << "3.��ʦ" << endl;
		cout << "========================" << endl;
		cin >> *NN;
		switch (*NN)
		{
		case EP_FS:
			cout << "�����뷨ʦ�����֣�" << endl;
			cin >> FTMName;
			FS->name=FTMName;
			break;
		case EP_Tank:
			cout << "������սʿ�����֣�" << endl;
			cin >> FTMName;
			TK->name = FTMName;
			break;
		case EP_MS:
			cout << "��������ʦ�����֣�" << endl;
			cin >> FTMName;
			MS->name = FTMName;
			break;
		default:
			cout << "���������������������룡" << endl;
			*NN = NULL;
			system("Pause");
			break;
		}
	} 
	else
	{
		cout << "�����˺ţ�����������������Ϸ��������" << endl;
		system("Pause");
	}
	system("CLS");
	if (*NN!= NULL&&(*NN>=0&&*NN<=2))
	{
		EState = ER_Menu;
	} 	
}
//��Ϸ��������
void Menu()
{
	system("CLS");

	cout << "��Ϸ�������˵� " << endl;
	cout << "========================" << endl;
	cout << "0.����ս��" << endl;
	cout << "1.�鿴��ɫ��Ϣ" << endl;
	cout << "2.���ؽ�ɫѡ��" << endl;
	cout << "3.�˳���Ϸ" << endl;
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
		cout << "��ɫ��Ϣ " << endl;
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
	cout << "ս���Ѷ�ѡ�� " << endl;
	cout << "========================" << endl;
	cout << "0.���������Ǳ�" << endl;
	cout << "1.��������" << endl;
	cout << "2.��ħ��Ԩ" << endl;
	cout << "3.�ֻ�ʥ��" << endl;
	cout << "========================" << endl;
	cin >> Ede;
	switch (Ede)
	{
	case ED_Easy:
		Mons->Deg = 0.5;
		cout << "��ѡ����Ѷ��ǣ���������" << endl;
		system("Pause");
		EState = ER_Fight;
		break;
	case ED_Nomal:
		Mons->Deg = 1;
		cout << "��ѡ����Ѷ��ǣ���������" << endl;
		system("Pause");
		EState = ER_Fight;
		break;
	case ED_Hard:
		Mons->Deg = 1.75;
		cout << "��ѡ����Ѷ��ǣ���ħ��Ԩ" << endl;
		system("Pause");
		EState = ER_Fight;
		break;
	case ED_VeryHard:
		Mons->Deg = 2.5;
		cout << "��ѡ����Ѷ��ǣ��ֻ�ʥ��" << endl;
		system("Pause");
		EState = ER_Fight;
		break;
	default:
		cout << "������������������" << endl;
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
		cout << "���Թ������" << Hurt(Mag.GetATK(), Mag.GetHIT()) << "���˺�" << endl;
		if (mons.GetHP() <= 0)
		{
			system("CLS");
			Fi = false;
			cout << "�������ַ�������þ���ֵ��" << mons.GetEXP() << endl;
			Mag.SetEXP(mons.GetEXP());
			EState = ER_Menu;
		}
		break;
	case EP_Tank:
		mons.SetHP(Hurt(tk.GetATK(), tk.GetHIT()));
		cout << "���Թ������" << Hurt(tk.GetATK(), tk.GetHIT()) << "���˺�" << endl;
		if (mons.GetHP() <= 0)
		{
			system("CLS");
			Fi = false;
			cout << "�������ַ�������þ���ֵ��" << mons.GetEXP() << endl;
			tk.SetEXP(mons.GetEXP());
			EState = ER_Menu;
		}
		break;
	case EP_MS:
		mons.SetHP(Hurt(pri.GetATK(), pri.GetHIT()));
		cout << "���Թ������" << Hurt(pri.GetATK(), pri.GetHIT()) << "���˺�" << endl;
		if (mons.GetHP() <= 0)
		{
			system("CLS");
			Fi = false;
			cout << "�������ַ�������þ���ֵ��" << mons.GetEXP() << endl;
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
			cout << "����������" << mons.GetATK() << "���˺�" << endl;
			if (Mag.GetHP() <= 0)
			{
				system("CLS");
				Fi = false;
				cout << "ʤ���˱��ҳ��£�����������������������" << endl;
				EState = ER_Menu;
			}
			break;
		case EP_Tank:
			tk.SetHP(mons.GetATK());
			cout << "����������" << mons.GetATK() << "���˺�" << endl;
			if (tk.GetHP() <= 0)
			{
				system("CLS");
				Fi = false;
				cout << "ʤ���˱��ҳ��£�����������������������" << endl;
				EState = ER_Menu;
			}
			break;
		case EP_MS:
			pri.SetHP(mons.GetATK());
			cout << "����������" << mons.GetATK() << "���˺�" << endl;
			if (pri.GetHP() <= 0)
			{
				system("CLS");
				Fi = false;
				cout << "ʤ���˱��ҳ��£�����������������������" << endl;
				EState = ER_Menu;
			}
			break;
		}
	}

	system("Pause");
	cout << "========================" << endl;
	}
}



