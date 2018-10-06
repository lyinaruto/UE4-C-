#pragma once
class Role
{
public:
	Role();
	~Role();
	bool AddItem(const class PropItem*);

public:
	int Money;
	int PackageSize;
	class PropItem** Package;
};

