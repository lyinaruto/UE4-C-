// Training.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	using namespace std;
	/*//�����߼�01
	int num,num0;
	cout << "������һ��������";
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
		cout << "��������ǳ���;\n�����ǵ�" << Pos << "��������";
	}
	else
	{
		cout << "������Ĳ��ǳ�����";
	}*/


	//�����߼�02
	int num,n;
	cout << "������һ��������";
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
		cout << "������ĵ�" << Pos << "�������ǣ�"<<j;
	}

	/*��ʹ����ѧ����� ����+���㡣
	int i;
	int j;
	cout << "���������������Կո�ָ����س��������롣" << endl;
	cin >> i;
	cin >> j;

	cin.

	cout << i << "+" << j <<"="<<i-(-j)<< endl;*/



	system("pause");
	return 0;
}

