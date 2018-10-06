#include "stdafx.h"
#include "Sequence.h"

//交换
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

//1.写一个方法，可以将字符串数组反转，如：将字符串数组｛“中国”、“美国”、“英国”、“巴西”、“澳大利亚”、“加拿大”｝中的内容反转。（调换位置）
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