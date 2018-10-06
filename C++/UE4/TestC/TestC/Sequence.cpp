#include "stdafx.h"
#include "Sequence.h"

//����
void ChangeI(int a[],int i)
{
	a[i] = a[i] + a[i - 1];
	a[i - 1] = a[i] - a[i - 1];
	a[i] = a[i] - a[i - 1];
}

void Traversal(int a[],int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

void Up(int a[], int size)
{
	for (int i=1;i<size;i++) 
	{
		for (int j=i;j>0;j--)
		{
			if (a[j] < a[j - 1])
			{
				ChangeI(a, j);
			}
		}
	}
}

void Down(int a[], int size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j >0; j--)
		{
			if (a[j] > a[j - 1])
			{
				ChangeI(a, j);
			}
		}
	}
}

//1.дһ�����������Խ��ַ������鷴ת���磺���ַ�����������й�����������������Ӣ�������������������Ĵ����ǡ��������ô󡱣��е����ݷ�ת��������λ�ã�
string Change(string* Nation, int Size)
{
	for (int i = 0; i < Size/2; i++)
	{
		string Change;
		Change = Nation[i];
		Nation[i] = Nation[Size - i-1];
		Nation[Size - i-1] = Change;
	}
	return*Nation;
}

void Array(string* N, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		cout << N[i] << "\t";
	}
	cout << endl;
}