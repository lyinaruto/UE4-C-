// Test02.cpp : �������̨Ӧ�ó������ڵ㡣
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
		for (int j = 0; j < 10; j++)
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

void Select()
{
	if (*NN == NULL)
	{   
		cout << "��ɫѡ���봴������ " << endl;
		cout << "========================" << endl;
		cout << "ѡ������ְҵ��" << endl;
		cout << "0.��ʦ" << endl;
		cout << "1.սʿ" << endl;
		cout << "2.��ʦ" << endl;
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

void Menu()
{
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
	case EG_Attack:
		
		break;
	case EG_Message:
		system("CLS");
		cout << "��ɫ��Ϣ " << endl;
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


