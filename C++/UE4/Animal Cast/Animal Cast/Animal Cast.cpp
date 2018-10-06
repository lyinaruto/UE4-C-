// Animal Cast.cpp : 定义控制台应用程序的入口点。
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
	cout << "换台了" << endl;
}

void Change(TV* tv)
{
	cout << "函数：";
	tv->ChangeChannel();
}

void Contral::Change(TV* tv)
{
	cout << "类：";
	tv->ChangeChannel();
}

int main()
{
	//友元函数
	//单一函数
	TV* tv = new TV();
	Change(tv);

	//单一类
	Contral* con = new Contral();
	con->Change(tv);

	cout << "****************************" << endl;

	Dog* d = new Dog();
	Duck* du = new Duck();
	cout << "打狗" << endl;
	AttackAnimal(dynamic_cast<Animal*>(d));
	cout << "===========" << endl;
	cout << "打猫" << endl;
	AttackAnimal(dynamic_cast<Animal*>(du));


	cout << "===========" << endl;
	int* i = new int(10);
	cout << *i << endl;
	const int* j=const_cast<const int*>(i);
	*i = 100;
	cout << *i << endl;

	//2.枪械（gun）基类有开火的能力。衍生类有掷弹筒和狙击枪。
	//人类调用枪械开枪时，如果是掷弹筒，则减少炮弹数量。
	//如果是狙击枪则减少狙击枪子弹数量。弹药属性在人身上。



	//套用内联函数（内联：可降低内存损耗，提升运行效率）
	int a=10, b=12;
	cout << Max(a, b) << endl;

	


	system("Pause");
    return 0;
}

int Max(int a, int b)
{
	return a > b ? a : b;
}

