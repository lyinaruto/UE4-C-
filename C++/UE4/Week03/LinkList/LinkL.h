#pragma once
class LinkList
{
public:
	LinkList();

	static LinkList* CreateLink(int ID); //工厂方法

public:
	int ID;
	
	LinkList *Next;
	LinkList *Last;

};

void TraverseNext(LinkList* a[]);

void Traverse(LinkList* a[]);

void Input(LinkList*, int Num);

void SearchCurrent(LinkList* Current, LinkList* Curr);

void Delete(LinkList*Current,int Num);