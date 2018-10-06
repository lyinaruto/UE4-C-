#pragma once
class LinkList
{
public:
	LinkList();

	static LinkList* CreateLink(int ID); //��������

public:
	int ID;
	
	LinkList *Next;

};
/*
void TraverseNext(LinkList* a[]);

void Traverse(LinkList* a[]);

void Input(LinkList*, int Num);
*/

void SearchCurrent(LinkList* Current, LinkList* Curr);

void Delete(LinkList*Current,int Num);

void Insert(LinkList*Current, int Num, LinkList*New);

void Inversion(LinkList* Current, LinkList* Curr);