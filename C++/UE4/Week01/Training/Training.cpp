// Training.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	using namespace std;
	/*//丑数逻辑01
	int num,num0;
	cout << "请输入一个整数：";
	cin >> num0;
	cout << endl;

	bool i;
	int Pos = 0;
	num = 0;
		for (int j = 0; j >= 0; j++)
		{
			num = j;
			if (num==0)
			{
				i = false;
			}
			else
			{
				if (num == 1)
				{
					i = true;
				}
				else
				{
					while (num % 2 == 0)
					{
						num = num / 2;
					}
					while (num % 3 == 0)
					{
						num = num / 3;
					}
					while (num % 5 == 0)
					{
						num = num / 5;
					}
					if (num == 1)
					{
						i = true;
					}
					else
					{
						i = false;
					}
				}
				if (i == true)
				{
					Pos++;
				}
			}
			
			if (j==num0)
			{
				break;
			}
		}
	if (i == true)
	{
		cout << "您输入的是丑数;\n该数是第" << Pos << "个丑数。";
	}
	else
	{
		cout << "您输入的不是丑数。";
	}*/


	//丑数逻辑02
	int num,n;
	cout << "请输入一个整数：";
	cin >> n;
	cout << endl;

	bool i;
	int Pos = 0;
	num = 0;
	int j;
	for (j = 0; j >= 0; j++)
	{
		num = j;
		if (num == 0)
		{
			i = false;
		}
		else
		{
			if (num == 1)
			{
				i = true;
			}
			else
			{
				while (num % 2 == 0)
				{
					num = num / 2;
				}
				while (num % 3 == 0)
				{
					num = num / 3;
				}
				while (num % 5 == 0)
				{
					num = num / 5;
				}
				if (num == 1)
				{
					i = true;
				}
				else
				{
					i = false;
				}
			}
			if (i == true)
			{
				Pos++;
			}
		}

		if (Pos == n)
		{
			break;
		}
	}
	if (i == true)
	{
		cout << "您输入的第" << Pos << "个丑数是："<<j;
	}

	/*不使用数学运算符 进行+运算。
	int i;
	int j;
	cout << "请输入两个数，以空格分隔，回车结束输入。" << endl;
	cin >> i;
	cin >> j;

	cin.

	cout << i << "+" << j <<"="<<i-(-j)<< endl;*/



	system("pause");
	return 0;
}

