#include "stdafx.h"
#include "LinkL.h"
#include <iostream>

using namespace std;


void TraverseNext(LinkList* a)
{
	int i = 0;
	while (a[i].Next->ID != 0)
	{
		cout << a[i].Next->ID << endl;
		i++;
	}
}

void Traverse(LinkList* a)
{
	int i = 0;
	while (a[i].Next->ID != 0)
	{
		cout << a[i].ID << endl;
		i++;
	}
}

void Input(LinkList* a[])
{
	int i = 0;
	while (a[i]->Next->ID != 0)
	{
		int NumIn;
		cin >> NumIn;
		a[i]->ID = NumIn;
		i++;
	}
}

void SearchCurrent(LinkList* Current,LinkList* Curr)
{
	Current = Curr;
	while (Current)
	{
		cout << Current->ID << endl;
		Current = Current->Next;
	}
}

LinkList::LinkList()
{
	this->Next = nullptr;
	this->Last = nullptr;
}

LinkList* LinkList::CreateLink(int ID /*= 007*/)
{
	LinkList* CreateLink = new LinkList();
	CreateLink->ID = ID;
	return CreateLink;
}

void Delete(LinkList*Current,int Num)
{
	while (Current)
	{
		if (Current->Next&&Current->Next->ID==Num)
		{
			LinkList* del = Current->Next;
			Current->Next = Current->Next->Next;
			delete del;
			break;
		}
		else
		{
			LinkList* del = Current->Next;
			Current->Next = Current->Next->Next;
			delete del;
			break;
		}
		Current = Current->Next;

	}
}