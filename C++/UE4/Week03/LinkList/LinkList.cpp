// LinkList.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "LinkL.h"

using namespace std;

int main()
{
	LinkList* N1 = LinkList::CreateLink(101);
	LinkList* N2 = LinkList::CreateLink(102);
	LinkList* N3 = LinkList::CreateLink(103);
	LinkList* N4 = LinkList::CreateLink(104);

	N1->Next = N2;
	N2->Next = N3;
	N3->Next = N4;

	LinkList* Current = N1;

//	SearchCurrent(Current);

	//打印下一个对象ID；
	SearchCurrent(Current->Next,N1);

	cout << "===================================" << endl;
	int Num;
	cout << "请输入想要删除的数据:" ;
	cin >> Num;

	Delete(Current,Num);

	SearchCurrent(Current->Next,N1);
	
	cout << "===================================" << endl;
	cout << "请输入想要插入的数据:";
	cin >> Num;
	LinkList* New=LinkList::CreateLink(Num);
	cout << "请输入想要插入的位置（在什么的后面）:";
	cin >> Num;
	Insert(Current, Num, New);

	SearchCurrent(Current, N1);

	cout << "===================================" << endl;
	Inversion(Current, N1);

	SearchCurrent(Current, N4);


/*  
    int Num;
	cout << "请输入LinkList长度：" << endl;
	cin >> Num;
	LinkList* *Li = new LinkList*[Num];
	cout << "请依次输入Link数据：" << endl;

	Input(Li[Num]);

	TraverseNext(Li);
*/

	system("Pause");
    return 0;
}
