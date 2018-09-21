// Fri.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <sstream> 


int main()
{
	using namespace std;

	//1.打印100以内所有质数；
	cout << " 1.打印100以内所有质数:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	int i,j;
	for (i = 2;i<=100;i++)
	{
		for (j=2;j<=i;j++)
		{
			if ((i%j==0)&&(i==j))
			{
				cout << "素数："<<i << " \t";
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

	//2.输出500-1000之间的，所有能被6整除的数的和
	cout << " 2.输出500-1000之间的，所有能被6整除的数的和:" << endl;
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
	cout << "能被6整除的数的和为："<<sum << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;

	//3.取出531220每一位上的数值并打印
	cout << " 3.取出531220每一位上的数值并打印:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;

	cout << "第一种" << endl;
	int a, b, c, d, e, f;
	a = 531220 / 100000;
	b = 531220 % 100000 / 10000;
	c = 531220 % 10000 / 1000;
	d = 531220 % 1000 / 100;
	e = 531220 % 100 / 10;
	f = 531220 % 10;
	cout << "第一位:" << a << "  第二位:" << b << "  第三位:" << c << "  第四位:" << d << "  第五位:" << e << "  第六位:" << f << endl;
	cout << endl;

	cout << "第二种" << endl;
	int num022 = 531220;
	int inum = 1;
	for (int i022=1;i022<=100000;i022*=10)
	{
		cout << "第" <<inum<< "位:"<< num022 / i022 % 10 << "  ";
		inum++;
	}
	cout << endl;

	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;

	//4.九九乘法表；
	cout << " 4.九九乘法表:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	cout << "第一种" << endl;
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

	cout << "第二种" << endl;
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

	cout << "第三种" << endl;
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

	cout << "第四种" << endl;
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

	cout << "第“四”种" << endl;
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

	//5.豆豆唱歌
	cout << " 5.豆豆唱歌:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	string teacher;
	cout << "老师说：“豆豆再把明天演出的歌曲唱一遍。”" << endl;
	while (true)
	{
		cout << "老师满意吗？（y/n）" << endl;
		cin >> teacher;
		if (teacher=="n")
		{
			cout << "再唱一遍" << endl;
		}
		else
		{
			cout << "可以了，就这样吧！！！" << endl;
			break;
		}
	}
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;
	
	//6.要求用户输入用户名和密码，只要不是admin、888888就一直提示用户名或密码，请重新输入。
	cout << " 6.要求用户输入用户名和密码，只要不是admin、888888就一直提示用户名或密码，请重新输入。:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	string admin;
	string password;
	cout << "请输入用户名和密码。" << endl;
	while (true)
	{
		cout << "请输入用户名：" ;
		cin >> admin;
		cout << endl;
		cout << "请输入密码：";
		cin >> password;
		cout << endl;
		if (admin == "admin"&&password== "888888")
		{
			cout << "欢迎回来，admin！！！！！！！！" << endl;
			break;
		}
		else
		{
			cout << "您输入的用户名和密码错误，请重新输入！！！！”" << endl;
		}
	}
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;
	
	//7.不断提示请输入你的姓名，输入q结束。
	cout << " 7.不断提示请输入你的姓名，输入q结束:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	string name;
	while (true)
	{
		cout << "请输入您的姓名(输入q结束)：";
		cin >> name;
		cout << endl;
		if (name=="q")
		{
			cout << "再见！！！"<<endl;
			break;
		}
	}
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;

	//8.编写一个简单的加减乘除计算器，用户输入Q跳出计算器
	cout << " 8.编写一个简单的加减乘除计算器，用户输入Q跳出计算器:" << endl;
	cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
	cout << endl;
	double num1;
	double num2;
	string symbol;
	string exit;
	while (true)
	{
		cout << "请输入第一个数字：";
		cin >> num1;
		cout << endl;
		cout << "请输入一个运算符（+ - * /）：";
		cin >> symbol;
		cout << endl;
		cout << "请输入第二个数字：";
		cin >> num2;
		cout << endl;
		cout << "输入q键退出(输入任意键并回车继续):";
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
			cout << "您输入的运算符属于非法！！！！" << endl;
		}
		if (exit == "q")
		{
			cout << "欢迎您再来！！！！" << endl;
			break;
		}
	}
	
cout << endl;
cout << "----------------------------------------------------------------------------" << endl;
cout << endl;

//9.设计一个程序，用户每次输入都累加输入值，并打印计算结果，当输入0时结束输入内容。
cout << " 9.设计一个程序，用户每次输入都累加输入值，并打印计算结果，当输入0时结束输入内容:" << endl;
cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
cout << endl;
    double num3;
	double sum9=0;
	while (true)
	{
		cout << "请输入一个数字：";
			cin >> num3;
			cout << endl;
		sum9 = sum9 + num3;
		cout << sum9 << endl;
		if (num3==0)
		{
			cout << "欢迎您下次使用！！！！" << endl;
			break;
		}
	}
	
cout << endl;
cout << "----------------------------------------------------------------------------" << endl;
cout << endl;

//10.编写一个程序，要求用户输入两个数，如果第一个数大于第二数，则提示用户输入非法，否则计算输入的AB两个数之间的和
cout << " 10.编写一个程序，要求用户输入两个数，如果第一个数大于第二数，则提示用户输入非法，否则计算输入的AB两个数之间的和:" << endl;
cout << ".  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  ." << endl;
cout << endl;
    double num4;
	double num5;
	cout << "请输入第一个数字：";
	cin >> num4;
	cout << endl;
	cout << "请输入第二个数字：";
	cin >> num5;
	cout << endl;
	if (num4>num5)
	{
		cout << "您的输入非法。"<<endl;
	} 
	else
	{
		cout << num4+num5 << endl;
	}

cout << endl;
cout << "----------------------------------------------------------------------------" << endl;
cout << endl;

//11.编写图形
cout << " 11.编写一个程序输出如下图形:" << endl;
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

//12.编写图形
cout << " 12.编写一个程序输出如下图形:" << endl;
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

//13.使用while，continue实现1到100（包含）之间除了能被7整除之外所有整数的和。（必须用while和continue）
cout << " 13.使用while，continue实现1到100（包含）之间除了能被7整除之外所有整数的和。（必须用while和continue）:" << endl;
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
	cout << "完成"<<endl;

	system("Pause");
    return 0;
}

