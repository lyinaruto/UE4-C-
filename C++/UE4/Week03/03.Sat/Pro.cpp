#include "stdafx.h"
#include "Pro.h"

using namespace std;

Actor::Actor(int hp, int atk, int def, string camp) :HP(hp), ATK(atk), DEF(def), Camp(camp)
{

}

int Actor::SetHP(int Hurt)
{
	return HP -= Hurt;
}

int Actor::GetHP()
{
	return HP;
}

int Actor::GetATK()
{
	return ATK;
}

int Actor::GetDEF()
{
	return DEF;
}

string Actor::GetCamp()
{
	return Camp;
}


int RandomRange(int start, int End)
{
	return start + rand() % (End - start);
}

int Hurt(int atk)
{
	return atk + RandomRange(-3, 3);
}

//2.0

BankAccount::BankAccount(string account, int password, string name)
	:Account(account),Password(password),Name(name)
{}

std::string BankAccount::GetAccount()
{
	return Account;
}

int BankAccount::GetPassword()
{
	return Password;
}

std::string BankAccount::GetName()
{
	return Name;
}

void SavingAccount::SetDeposit(int Save) 
{
	this->Deposit = Save;
}

void CreditCard::SetOverdraft(int Over)
{
	this->Overdraft = Over;
}
