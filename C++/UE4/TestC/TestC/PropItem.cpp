#include "stdafx.h"
#include "PropItem.h"


PropItem::PropItem(string Name, int Price)
{
	this->Name = Name;
	this->Price = Price;
}

int PropItem::GetPrice() const
{
	return Price;
}

PropItem::~PropItem()
{
}
