#pragma once

class Animal
{
public:
	virtual void Swim();
};

class Fish:public Animal
{
public:

};

class Tor :public Animal
{
public:

};

class Awan :public Animal
{
public:

};

class Cat :public Animal
{
public:
	void Swim() override;
};