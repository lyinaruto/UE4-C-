#pragma once

//1.��������не���Ϊ����������Ѽ�Ӻ͹����ڹ������й���������
//�����������������ʱ�����Ƕ���С�
//Ѽ�ӻ�ʹ�÷��к����������ܣ�����ʹ�ñ��ܺ����������ܡ�
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

