#pragma once
// 2.植物都具备光合作用能力，树光合作用产生的氧气为2，花光合作用产生的氧气是1.
class Plant
{
public:
	virtual void O2()=0;
};

class Tree:public Plant
{
public:
	void O2();

};

class Flower :public Plant
{
public:
	void O2();

};