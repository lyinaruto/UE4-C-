#pragma once
#include <iostream>
#include <string.h>
#include "PropItem.h"

using namespace std;

class Shop
{

public:
	Shop();
	~Shop();

public:
	string Name;
	class PropItem** Item;
	int Size;

	void ShowShop();
	void ShopLogic();

};
