#pragma once

using namespace std;
//1.构建英雄，敌人。英雄和敌人从一个基类（人类）衍生。基类具备基本属性，生命值，防御力，阵营，攻击力。
//行为攻击行为。分别构建人类和敌人，进行对战。死亡一方提示死亡。
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


//2.构建银行账户信息，有帐号，密码信息，用户名称，存款账户分为两种，储蓄账户（saving account），
//  和信用卡账户（credit card）。储蓄账户可以用来存款（deposit），信用卡账户可以用来透支（overdraft）。

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
