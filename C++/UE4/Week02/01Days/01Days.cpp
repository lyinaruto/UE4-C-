// 01Days.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>

int main()
{
	using namespace std;
	for (int i=2;i<=100;i++)
	{
		bool bRight = true;
		for (int j=2;j<i;j++)
		{
			if (i%j==0)
			{
				bRight = false;
				break;
			}
		}
		if (bRight)
		{
			cout << "������" << i << endl;
		}
	}
	cin.get();
    return 0;
}

