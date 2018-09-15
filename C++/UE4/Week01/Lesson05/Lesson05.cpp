// Lesson05.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>


int main()
{
	using namespace std;
	
	/*float t;
	while (true)
	{
		cout << "请输入您的体温：";
		cin >> t;
		if (t < 36.5f)
		{
			cout << "您没发烧";
		}
		else if (t > 50.0f)
		{
			cout << "您去火葬场吧";
		}
		else
		{
			cout << "您发烧了";
		}
		cout << endl;
		system("Pause");
	}*/

	/*//65岁免票，18～65全价，12～18七折，12岁以下免票。
	int age;
	while (true)
	{
		cout << "请输入您的年龄：";
		cin >> age;
		if (age > 65)
		{
			cout << "Free";
		}
		else if (age > 18)
		{
			cout << "原价";
		}
		else if (age > 12)
		{
			cout << "-25%";
		}
		else
		{
			cout << "Free";
		}
		cout << endl;*/

		/*//1.	从以下4个数中找出最大数 50 1 22 90 20
	int i = 0;
	for (int j=0;j<5;j++)
	{
		if (i < 50)
		{
			i = 50;
		}
		else if (i < 1)
		{
			i = 1;
		}
		else if (i < 22)
		{
			i = 22;
		}
		else if (i < 90)
		{
			i = 90;
		}
		else
		{
			i = 20;
		}
	}
	cout << i;*/
	
	/*//2.制作密码校验系统，要求用户从控台输入密码，如果密码不等于123456则打印密码错误，如果正确，则打印正确
	int PW;
	cout << "请输入密码：";
	cin >> PW;
	int PassWord = 123456;
	if (PW == PassWord)
	{
		cout << "密码正确";
	}
	else
	{
		cout << "密码错误";
	}*/

	//3.提示用户输入密码，如果密码不等于“a123456”，则提示用户错误，并要求用户再次输入，如果再次输入正确则提示正确，如果错误则提示用户无权再次操作
	for(int i=0;i<3;i++)
	{
		string password;
		cout << "请输入密码：";
		cin >> password;
		string PW = "a123456";
		if (PW==password)
		{
			cout << "密码正确" << endl;
			break;
		} 
		else if(i==2)
		{
			cout << "密码错误，您的次数已用尽，无权再次输入！"<<endl;
		}
		else
		{
			cout << "密码错误，请重新输入！"<<endl;
		}
	}

	    /*//4.遍历0 - 100中的整数，并且求出所有能被4整除的数的和
        int sum = 0;
        for (int i=0;i<=100;i++)
        {
			if (i % 4 == 0)
			{
				sum = sum + i;
			}
        }
		cout << sum;*/

/*
       //5.	一只青蛙爬井，白天爬3米，晚上掉1米，井深10米，请问青蛙几天可以爬上来？（起始从白天算起） welldepth 
        int day=0;
		int i;
		for (i = 0; i < 10; i=i+3)
		{
			i = i - 1;
			day=day+1;
		}
		cout << day;*/

       /* //6.找出100-999之间的水仙花数，例如153 = 1*1*1 + 5*5*5+3*3*3
        int i;
		int sum=0;
		for (i = 100; i < 1000; i++)
		{
			if ((i/100)*(i / 100)*(i / 100)+((i-(i/100)*100)/10)*((i - (i / 100) * 100) / 10)*((i - (i / 100) * 100) / 10)+(i%10)*(i % 10)*(i % 10)==i)
			{
				sum = sum + i;
			}
		}
		cout << sum << endl;*/

        /*//7.输入一个整数，如果这个数是偶数，则打印“Your input is even”，否则打印“Your input is odd”。
        int i;
		cout << "请输入一个整数" << endl;
		cin >> i;
		if (i%2==0)
		{
			cout << "Your input is even" << endl;
		} 
		else
		{
			cout << "Your input is odd" << endl;
		}*/

        /*//8.输入年龄，如果年龄在10-18或者25-30范围内，输出“可以访问”，否则，输出“拒绝访问”。
        int i;
		cout << "请输入年龄" << endl;
		cin >> i;
		if ((i>10&&i<18)||(i>25&&i<30))
		{
			cout << "可以访问";
		} 
		else
		{
			cout << "拒绝访问";
		}*/

		/*//9.编写一个程序接受用户输入的字符。如果输入的字符是0-9数字中的一个，则显示“您输入了一个数字”，否则显示这不是一个数字”
        int i;
        cout << "请输入一个数字" << endl;
        cin >> i;
		if (i>=0&&i<=9)
		{
			cout << "您输入了一个数字" << endl;
		} 
		else
		{
			cout << "这不是一个数字" << endl;
		}*/
		
        
        /*10.	如果你的 （chinese math english） 成绩满足以下任意一个条件，则输出“非常棒，继续加油！”。
            语文成绩大于70 并且 数学成绩大于80 并且英语成绩大于90
            语文成绩等于100或者数学成绩等于100或者英语成绩等于100
            语文成绩大于90 并且 其他两门中有1门成绩大于70* /
            int Eng;
            int Math;
            int Cn;
			cout << "请输入语文 数学 英语成绩(可以用空格分隔，回车结束)" << endl;
			cin >> Cn;
			cin >> Math;
			cin >> Eng;
			if ((Cn>70&&Math>80&&Eng>90)||(Cn==100||Eng==100||Math==100)||(Cn>90&&(Math>70||Eng>70)))
			{
				cout << "非常棒，继续加油！" << endl;
			}*/

        

        /*int sum=0;
        int i=0;
        while (true)
        {
			sum = sum + i;
			i++;
			if (sum>500)
			{
				break;
			}
        }
		cout << sum << endl;
		cout << i << endl;*/

        //能被13整除的数｛5621， 4564 ， 54545 169 2514 124 458 13｝
        int i[] = {5621,4564,54545,169,2514,124,458,13};
		int j = 0;
		while (true)
		{
			j++;
			if (i[j] % 13 == 0)
			{
				break;
			}
		}
		cout << i[j];


     /*   //计算1～100 所有能被7的整除的数的和（必须用continue）
		int sum;
		for (int i = 0;i<=100;i++)
		{
			if (i%100==0)
			{
				sum = sum + i;
			}
		}
		cout<<

		system("Pause");
        return 0;
		*/
}


