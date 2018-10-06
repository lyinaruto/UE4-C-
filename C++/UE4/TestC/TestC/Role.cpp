#include "stdafx.h"
#include "Role.h"
#include "PropItem.h"


Role::Role()
{
	Money = 8000;//设置角色货币
	PackageSize = 20;//设置背包尺寸
	Package = new PropItem*[PackageSize] {};//初始化角色背包
}


Role::~Role()
{
}

bool Role::AddItem(const PropItem* Item)
{
	for (int i=0;i<PackageSize;i++)
	{
		if (Package[i]==nullptr)
		{
			Package[i] = new PropItem(Item->Name,Item->GetPrice()); //常量指针 只能调用常函数
			return true;
		}
	}
	return false;
}
