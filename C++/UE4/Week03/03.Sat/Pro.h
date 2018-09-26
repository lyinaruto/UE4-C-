#pragma once

using namespace std;
//1.����Ӣ�ۣ����ˡ�Ӣ�ۺ͵��˴�һ�����ࣨ���ࣩ����������߱��������ԣ�����ֵ������������Ӫ����������
//��Ϊ������Ϊ���ֱ𹹽�����͵��ˣ����ж�ս������һ����ʾ������
class Actor
{
protected:
	int HP;
	int ATK;
	int DEF;
	string Camp;

public:
	Actor(int hp, int atk, int def, string camp);
	int SetHP(int Hurt);
	int GetHP();
	int GetATK();
	int GetDEF();
	string GetCamp();
};

int Hurt(int atk);

int RandomRange(int start, int End);


//2.���������˻���Ϣ�����ʺţ�������Ϣ���û����ƣ�����˻���Ϊ���֣������˻���saving account����
//  �����ÿ��˻���credit card���������˻�����������deposit�������ÿ��˻���������͸֧��overdraft����

class BankAccount
{
public:
	BankAccount(string account, int password, string name);
	string GetAccount();
	int GetPassword();
	string GetName();
protected:
	string Account;
	int Password;
	string Name;
};

class SavingAccount
{
public:
	void SetDeposit(int Save);
private:
	int Deposit;
};

class CreditCard
{
public:
	void SetOverdraft(int Over);
private:
	int Overdraft;
};
