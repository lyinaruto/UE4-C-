#pragma once
// 2.ֲ�ﶼ�߱����������������������ò���������Ϊ2����������ò�����������1.
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