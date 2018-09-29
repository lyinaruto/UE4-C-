#pragma once
using namespace std;

namespace ab
{
	extern int abs;
}

static void Vtest()
{
	cout << "Vtest" << endl;
	return;
}


class MyInt
{
public:
	static int Age;

	static void INN();
};


static int i=35;

class SingleCase
{
public:
	static SingleCase* Build();
	int a;
private:
	SingleCase();
};