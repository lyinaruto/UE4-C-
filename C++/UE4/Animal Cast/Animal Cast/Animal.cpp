#include "stdafx.h"
#include "Animal.h"

using namespace std;

Animal::Animal()
{
}


Animal::~Animal()
{
}

void Dog::Say()
{
	cout << "����" << endl;
}

void Dog::Escape()
{
	cout << "GOGOGO" << endl;
}

void Duck::Say()
{
	cout << "�¸�" << endl;
}

void Duck::Escape()
{
	cout << "Fly" << endl;
}
