// Fri.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <sstream> 


int main()
{
	using namespace std;

	//1.��ӡ100��������������
	cout << " 1.��ӡ100������������:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	int i,j;
	for (i = 2;i<=100;i++)
	{
		for (j=2;j<=i;j++)
		{
			if ((i%j==0)&&(i==j))
			{
				cout << "������"<<i << " \t";
			}
			if ((i%j==0)&&(i!=j))
			{
				break;
			}
		}
	}
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;

	//2.���500-1000֮��ģ������ܱ�6���������ĺ�
	cout << " 2.���500-1000֮��ģ������ܱ�6���������ĺ�:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;

	int sum = 0;
	for (int l = 500;l<=1000;l++)
	{
		if (l%6==0)
		{
			sum+=l;
		}
	}
	cout << "�ܱ�6���������ĺ�Ϊ��"<<sum << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;

	//3.ȡ��531220ÿһλ�ϵ���ֵ����ӡ
	cout << " 3.ȡ��531220ÿһλ�ϵ���ֵ����ӡ:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;

	cout << "��һ��" << endl;
	int a, b, c, d, e, f;
	a = 531220 / 100000;
	b = 531220 % 100000 / 10000;
	c = 531220 % 10000 / 1000;
	d = 531220 % 1000 / 100;
	e = 531220 % 100 / 10;
	f = 531220 % 10;
	cout << "��һλ:" << a << "  �ڶ�λ:" << b << "  ����λ:" << c << "  ����λ:" << d << "  ����λ:" << e << "  ����λ:" << f << endl;
	cout << endl;

	cout << "�ڶ���" << endl;
	int num022 = 531220;
	int inum = 1;
	for (int i022=1;i022<=100000;i022*=10)
	{
		cout << "��" <<inum<< "λ:"<< num022 / i022 % 10 << "  ";
		inum++;
	}
	cout << endl;

	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;

	//4.�žų˷���
	cout << " 4.�žų˷���:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	cout << "��һ��" << endl;
	int l = 1;
	int m = 1;
	while (l <=9)
	{
		while (m<=9)
		{
			cout << m << "*" << l <<" ";
			m++;
		}
		l++;
		m = 1;
		cout << endl;
	}
	cout << endl;

	cout << "�ڶ���" << endl;
	int l2 = 1;
	int m2 = 1;
	while (l2 <= 9)
	{
		while (m2 <= l2)
		{
			cout << m2 << "*" << l2 << " ";
			m2++;
		}
		l2++;
		m2 = 1;
		cout << endl;
	}
	cout << endl;

	cout << "������" << endl;
	int l3 = 9;
	int m3 = 1;
	while (l3 > 0)
	{
		while (m3 < l3)
		{
			cout << " " << " " << " " << " ";
			m3++;
		}
		while (m3 >= l3&&m3<=9)
		{
			cout << l3 << "*" << m3 << " ";
			m3++;
		}
		l3--;
		m3 = 1;
		cout << endl;
	}

	cout << "������" << endl;
	int l4 = 1;
	int m4 = 1;
	while (l4 <= 9)
	{
		while (m4 < (10-l4))
		{
			cout << " " << " " << " " << " ";
			m4++;
		}
		m4 = 1;
		while (m4 <= l4)
		{
			cout << m4 << "*" << l4 << " ";
			cout << " " << " " << " " << " ";
			m4++;
		}
		l4++;
		m4 = 1;
		cout << endl;
	}

	cout << "�ڡ��ġ���" << endl;
	int l40 = 9;
	int m40 = 1;
	while (l40 >= 1)
	{
		while (m40 < l40)
		{
			cout << " " << " " << " " << " ";
			m40++;
		}
		m40 = l40;
		while (m40 >= l40&&m40<= 9)
		{
			cout << l40 << "*" << m40 << " ";
			cout << " " << " " << " " << " ";
			m40++;
		}
		l40--;
		m40 =1;
		cout << endl;
	}
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;

	//5.��������
	cout << " 5.��������:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	string teacher;
	cout << "��ʦ˵���������ٰ������ݳ��ĸ�����һ�顣��" << endl;
	while (true)
	{
		cout << "��ʦ�����𣿣�y/n��" << endl;
		cin >> teacher;
		if (teacher=="n")
		{
			cout << "�ٳ�һ��" << endl;
		}
		else
		{
			cout << "�����ˣ��������ɣ�����" << endl;
			break;
		}
	}
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;
	
	//6.Ҫ���û������û��������룬ֻҪ����admin��888888��һֱ��ʾ�û��������룬���������롣
	cout << " 6.Ҫ���û������û��������룬ֻҪ����admin��888888��һֱ��ʾ�û��������룬���������롣:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	string admin;
	string password;
	cout << "�������û��������롣" << endl;
	while (true)
	{
		cout << "�������û�����" ;
		cin >> admin;
		cout << endl;
		cout << "���������룺";
		cin >> password;
		cout << endl;
		if (admin == "admin"&&password== "888888")
		{
			cout << "��ӭ������admin����������������" << endl;
			break;
		}
		else
		{
			cout << "��������û���������������������룡��������" << endl;
		}
	}
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;
	
	//7.������ʾ�������������������q������
	cout << " 7.������ʾ�������������������q����:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	string name;
	while (true)
	{
		cout << "��������������(����q����)��";
		cin >> name;
		cout << endl;
		if (name=="q")
		{
			cout << "�ټ�������"<<endl;
			break;
		}
	}
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;

	//8.��дһ���򵥵ļӼ��˳����������û�����Q����������
	cout << " 8.��дһ���򵥵ļӼ��˳����������û�����Q����������:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	double num1;
	double num2;
	string symbol;
	string exit;
	while (true)
	{
		cout << "�������һ�����֣�";
		cin >> num1;
		cout << endl;
		cout << "������һ���������+ - * /����";
		cin >> symbol;
		cout << endl;
		cout << "������ڶ������֣�";
		cin >> num2;
		cout << endl;
		cout << "����q���˳�(������������س�����):";
		cin >> exit;
		cout << endl;
		if (symbol == "+")
		{
			cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		}
		else if (symbol == "-")
		{
			cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
		}
		else if (symbol == "*")
		{
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
		}
		else if(symbol == "/")
		{
			cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		}
		else
		{
			cout << "���������������ڷǷ���������" << endl;
		}
		if (exit == "q")
		{
			cout << "��ӭ��������������" << endl;
			break;
		}
	}
	
cout << endl;
cout << "----------------------------------------------------------------------------" << endl;
cout << endl;

//9.���һ�������û�ÿ�����붼�ۼ�����ֵ������ӡ��������������0ʱ�����������ݡ�
cout << " 9.���һ�������û�ÿ�����붼�ۼ�����ֵ������ӡ��������������0ʱ������������:" << endl;
cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
cout << endl;
    double num3;
	double sum9=0;
	while (true)
	{
		cout << "������һ�����֣�";
			cin >> num3;
			cout << endl;
		sum9 = sum9 + num3;
		cout << sum9 << endl;
		if (num3==0)
		{
			cout << "��ӭ���´�ʹ�ã�������" << endl;
			break;
		}
	}
	
cout << endl;
cout << "----------------------------------------------------------------------------" << endl;
cout << endl;

//10.��дһ������Ҫ���û������������������һ�������ڵڶ���������ʾ�û�����Ƿ���������������AB������֮��ĺ�
cout << " 10.��дһ������Ҫ���û������������������һ�������ڵڶ���������ʾ�û�����Ƿ���������������AB������֮��ĺ�:" << endl;
cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
cout << endl;
    double num4;
	double num5;
	cout << "�������һ�����֣�";
	cin >> num4;
	cout << endl;
	cout << "������ڶ������֣�";
	cin >> num5;
	cout << endl;
	if (num4>num5)
	{
		cout << "��������Ƿ���"<<endl;
	} 
	else
	{
		cout << num4+num5 << endl;
	}

cout << endl;
cout << "----------------------------------------------------------------------------" << endl;
cout << endl;

//11.��дͼ��
cout << " 11.��дһ�������������ͼ��:" << endl;
cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
cout << endl;
    for (int index = 0; index < 6; index++)
    {
		if (index==0||index==5)
		{
			for (int index1 = 0; index1 < 6; index1++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			for (int index2 = 0; index2 < 6; index2++)
			{
				if (index2==0||index2==5)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}

    
cout << endl;
cout << "----------------------------------------------------------------------------" << endl;
cout << endl;

//12.��дͼ��
cout << " 12.��дһ�������������ͼ��:" << endl;
cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
cout << endl;
for (int index3 = 0; index3 < 5; index3++)
{
		for (int index4 = 0; index4 <= index3; index4++)
		{
			cout << "*";
		}
		cout << endl;
}


cout << endl;
cout << "----------------------------------------------------------------------------" << endl;
cout << endl;

//13.ʹ��while��continueʵ��1��100��������֮������ܱ�7����֮�����������ĺ͡���������while��continue��
cout << " 13.ʹ��while��continueʵ��1��100��������֮������ܱ�7����֮�����������ĺ͡���������while��continue��:" << endl;
cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
cout << endl;
    int num13=0;
    int sum13=0;
    while (true)
    {
		num13++;
		if (num13%7==0)
       {
		   continue;
       }
	   else
	   {
		   sum13 = sum13 + num13;
	   }
	   if (num13==100)
	   {
		   break;
	   }
    }
	cout << sum13 << endl;
	cout << "���"<<endl;

	system("Pause");
    return 0;
}

