#include "stdafx.h"
#include "Role.h"
#include "PropItem.h"


Role::Role()
{
	Money = 8000;//���ý�ɫ����
	PackageSize = 20;//���ñ����ߴ�
	Package = new PropItem*[PackageSize] {};//��ʼ����ɫ����
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
			Package[i] = new PropItem(Item->Name,Item->GetPrice()); //����ָ�� ֻ�ܵ��ó�����
			return true;
		}
	}
	return false;
}
