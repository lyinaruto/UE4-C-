#pragma once
//1.构建动物基类，动物都具备发出声音的能力。狗和猫继承自动物类，狗是旺旺叫，猫是喵喵叫

class animal
{
public:
	virtual void Say()=0;
};

class Cat:public animal
{
public:
	void Say();
};

class Dog :public animal
{
public:
	void Say();
};
