// Animal Cast.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Animal.h"
#include "AnimalManager.h"

using namespace std;

inline int Max(int, int);

class TV;
class Contral
{
public:
	void Change(TV* tv);

};

class TV
{
private:
	void ChangeChannel();

//	friend void	Contral::Change(TV* tv);

	friend void Change(TV* tv);

	friend class Contral;

};

void TV::ChangeChannel()
{
	cout << "��̨��" << endl;
}

void Change(TV* tv)
{
	cout << "������";
	tv->ChangeChannel();
}

void Contral::Change(TV* tv)
{
	cout << "�ࣺ";
	tv->ChangeChannel();
}

int main()
{
	//��Ԫ����
	//��һ����
	TV* tv = new TV();
	Change(tv);

	//��һ��
	Contral* con = new Contral();
	con->Change(tv);

	cout << "****************************" << endl;

	Dog* d = new Dog();
	Duck* du = new Duck();
	cout << "��" << endl;
	AttackAnimal(dynamic_cast<Animal*>(d));
	cout << "===========" << endl;
	cout << "��è" << endl;
	AttackAnimal(dynamic_cast<Animal*>(du));


	cout << "===========" << endl;
	int* i = new int(10);
	cout << *i << endl;
	const int* j=const_cast<const int*>(i);
	*i = 100;
	cout << *i << endl;

	//2.ǹе��gun�������п����������������������Ͳ�;ѻ�ǹ��
	//�������ǹе��ǹʱ�����������Ͳ��������ڵ�������
	//����Ǿѻ�ǹ����پѻ�ǹ�ӵ���������ҩ�����������ϡ�



	//���������������������ɽ����ڴ���ģ���������Ч�ʣ�
	int a=10, b=12;
	cout << Max(a, b) << endl;

	


	system("Pause");
    return 0;
}

int Max(int a, int b)
{
	return a > b ? a : b;
}

