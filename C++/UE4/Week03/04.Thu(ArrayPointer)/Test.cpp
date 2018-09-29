#include "stdafx.h"
#include "Test.h"

using namespace std;

void Test::SetHP(int hp)
{
	if (hp<=0)
	{
		return;
	}
	this->HP=hp;
}

void Test::Say()
{
	cout << "Private" << endl;
}
