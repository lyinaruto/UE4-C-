// 04.Thu(ArrayPointer).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "B.h"
#include "animal.h"
#include "Plant.h"
#include "Carrier.h"
#include "Test.h"
using namespace std;

void DoFile(int a,int b = 12);


void DoFile(int a , int b )
{
	cout << "a:" << a << "\t" << "b:" << b << endl;
}

class MyClass
{
public:
	const int a=10;
	void ioi(int b=1) const;
	void iii()const;
	void oooi();

};

void MyClass::ioi(int b) const
{
	cout << b<<endl;
}


void MyClass::iii() const
{
	ioi();
//	oooi();
}

void MyClass::oooi()
{
	ioi();
}

int main()
{
	using namespace ZZ;
	cout << za << endl;

	cout << "==============================" << endl;
	const MyClass* clb = new MyClass;
	clb->ioi();
	clb->iii();
//	clb->oooi();

	cout << "==============================" << endl;
	MyClass* cla = new MyClass;
	cla->ioi();
	cla->oooi();

	cout << "==============================" << endl;
	const int con = 9;
    int const icon=1;
	cout << con << endl;
	cout << endl;

	cout << "==============================" << endl;
	int const *incon1 = new int(1);
	const int* incon2 = new int(10);
	int* const incon3 = new int(100);

// 	*incon1 = 1;
// 	*incon2 = 2;
	*incon3 = 3;

	incon1 = new int(100);
	incon2 = new int(10);
//	incon3 = new int(1);

	cout << *incon1 << endl;
	cout << *incon2 << endl;
	cout << *incon3 << endl;

	DoFile(3);
	DoFile(3, 2);
	cout << endl;

	cout << "纯虚函数 练习：" << endl;
	cout << "==============================" << endl;
	//1.构建动物基类，动物都具备发出声音的能力。狗和猫继承自动物类，狗是旺旺叫，猫是喵喵叫
	Cat* cat = new Cat;
	Dog* dog = new Dog;

	animal* cc = cat;
	cc->Say();
	*cc = *dog;
	dog->Say();
	cout << "==============================" << endl;
	// 2.植物都具备光合作用能力，树光合作用产生的氧气为2，花光合作用产生的氧气是1.
	Tree* tree = new Tree;
	Flower* flower = new Flower;

	Plant* PL = tree;
	tree->O2();

	*PL = *flower;
	flower->O2();

	cout <<"=============================="<< endl;
	//3.汽车都具备载人的能力，公交车可以载人40，小客车可以载人4
	Car* car = new Car;
	Bus* bus = new Bus;

	Carrier* ca = car;
	car->Humen();
	*ca = *bus;
	bus->Humen();

	cout << "==============================" << endl;
	//1.重写；


	cout << "==============================" << endl;
	B1* b1 = new B1;
	B2* b2 = new B2;
	B3* b3 = new B3;

	B* person[]{ b1,b2,b3 };

	for (int i=0;i<3;i++)
	{
		person[i]->Walk();
		person[i]->Say();
	}


	system("Pause");
    return 0;
}