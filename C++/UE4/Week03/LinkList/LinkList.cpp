// LinkList.cpp : �������̨Ӧ�ó������ڵ㡣
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

	//��ӡ��һ������ID��
	SearchCurrent(Current->Next,N1);

	cout << "===================================" << endl;
	int Num;
	cout << "��������Ҫɾ��������:" ;
	cin >> Num;

	Delete(Current,Num);

	SearchCurrent(Current->Next,N1);
	
	cout << "===================================" << endl;



/*  
    int Num;
	cout << "������LinkList���ȣ�" << endl;
	cin >> Num;
	LinkList* *Li = new LinkList*[Num];
	cout << "����������Link���ݣ�" << endl;

	Input(Li[Num]);

	TraverseNext(Li);
*/

	system("Pause");
    return 0;
}
