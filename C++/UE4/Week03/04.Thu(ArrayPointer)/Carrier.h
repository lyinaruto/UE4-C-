#pragma once
class Carrier
{
public:
	virtual void Humen()=0;
};

class Car:public Carrier
{
public:
	void Humen();
};

class Bus :public Carrier
{
public:
	void Humen();
};