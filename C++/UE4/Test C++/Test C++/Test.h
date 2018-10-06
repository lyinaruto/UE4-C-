#pragma once
class Person
{
public:
	void GetName();
	void GetAge();
	void SetName(string n);
	void SetAge(int n);

private:
	string Name;
	int Age;
};


void Menu();

void Add();

void Search();