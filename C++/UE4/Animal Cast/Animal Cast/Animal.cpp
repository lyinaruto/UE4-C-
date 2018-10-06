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
	cout << "ÍôÍô" << endl;
}

void Dog::Escape()
{
	cout << "GOGOGO" << endl;
}

void Duck::Say()
{
	cout << "¸Â¸Â" << endl;
}

void Duck::Escape()
{
	cout << "Fly" << endl;
}
