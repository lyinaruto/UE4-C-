#pragma once

using namespace std;

struct Person
{
	string Name;
	int Age;
}; 

void Menu();

void Add();

void Search();

void AddPerInfo(Person PP);

/*
//3.
enum ESex
{
	ES_Man,
	ES_Woman,
};

class Person2
{
public:
	Person2();	

	virtual void Hobby()=0;
	virtual void Self()=0;

protected:
	string Name;
	ESex Sex;
	int Age;
	string  Hobby;
};

class Reporter:protected Person2
{
public:
	Reporter();
	void Hobby() override;
	void Self() override;
	
};

class  Driver :protected Person2
{
public:
	Driver();
	void Hobby() override;
	void Self() override;

};

class Programmer :protected Person2
{
public:
	Programmer();
	void Hobby() override;
	void Self() override;

};
*/
