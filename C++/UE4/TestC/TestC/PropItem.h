#pragma once
#include <iostream>
#include <string>

using namespace std;

class PropItem
{
	int Price;

public:
	PropItem(string,int);
	int GetPrice() const;
	~PropItem();

public:
	string Name;

};

