#pragma once
//1.����������࣬���ﶼ�߱���������������������è�̳��Զ����࣬���������У�è��������

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
