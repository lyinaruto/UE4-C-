#pragma once

//1.动物基类有叫的行为，衍生类有鸭子和狗。在管理器中构建函数。
//攻击动物。当攻击动物时，他们都会叫。
//鸭子会使用飞行函数进行逃跑，狗会使用奔跑函数进行逃跑。
class Animal
{
public:
	Animal();
	~Animal();

	virtual void Say()=0;
	virtual void Escape() = 0;

};

class Dog:public Animal
{
public:
	void Say() override;
	void Escape() override;
};

class Duck :public Animal
{
public:
	void Say() override;
	void Escape() override;
};

