// Mon.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>

using namespace std;

/*
void Say()
{
	cout << "Hello!!" << endl;
}*/

float Contrast(float A,float B);
float * CircleArray(float Rad);
float * NumArray(float Num[], int size);
bool PriNum(int PNum);
int * Array05(int A05[], int size);
bool isyear(int year);

int main()
{
	//Say();
	/*int cmd = 0;
	cout << "Press a Num" << endl;
	cin >> cmd;
	switch (cmd)
	{
	case 1:
		cout << "Hello!!!! 1!!!!" << endl;
		break;
	case 2:
		cout << "Hello!!!! 2!!!!" << endl;
		break;
	case 3:
		cout << "Hello!!!! 3!!!!" << endl;
		break;
	case 4:
		cout << "Hello!!!! 4!!!!" << endl;
		break;

	default:
		cout << "No No No!!!!!!!" << endl;
		break;
	}*/

	/*enum EColor :char
	{
		EC_White=0,
		EC_Black=1,
		EC_Red=2,
		EC_Blue=3,
		EC_Yellow=4,
	};

	EColor color;

	switch (color)
	{
	case EC_White:
		break;
	case EC_Black:
		break;
	case EC_Red:
		break;
	case EC_Blue:
		break;
	case EC_Yellow:
		break;
	default:
		break;
	}*/

	/*int money = 10;
	enum ECofe
	{
		EC_small,
	    EC_middle,
		EC_big
	};
	int i = 0;
	int type=0;
	ECofe cofe;
	cofe = (ECofe)type;
	cout << "请输入大中小（0/1/2）： ";
	cin >> type;
	switch (cofe)
	{
		
	case EC_small:
		i = 5;
		break;
	case EC_middle:
		i = 7;
		break;
	case EC_big:
		i = 11;
		break;
	default:
		cout << "大哥您到底是来干嘛的"<<endl;
		break;
	}
	if (money-i>=0)
	{
		cout << "您的钱包还剩：" << money - i << "元。" << endl;
	}
	else
	{
		cout << "对不起 您的钱包余额不足！！！" << endl;
	}

	//2.0
	enum ELight
	{
		EL_Red,
		EL_Yellow,
		EL_Blue,
		EL_Green,
		EL_Pink,
		EL_Purple,
		EL_White,
		EL_Orange
	};
	int j = 0;
	ELight light;
	light = (ELight)type;
	cout << "请输入颜色（0～7）： ";
	cin >> type;
	switch (light)
	{
	case EL_Red:
		cout << "红灯亮" << endl;
		break;
	case EL_Yellow:
		cout << "黄灯亮" << endl;
		break;
	case EL_Blue:
		cout << "蓝灯亮" << endl;
		break;
	case EL_Green:
		cout << "绿灯亮" << endl;
		break;
	case EL_Pink:
		cout << "粉灯亮" << endl;
		break;
	case EL_Purple:
		cout << "紫灯亮" << endl;
		break;
	case EL_White:
		cout << "白灯亮" << endl;
		break;
	case EL_Orange:
		cout << "橙灯亮" << endl;
		break;
	default:
		cout << "屁都不亮" << endl;
		break;
	}*/
    cout << "第一题" << endl;
    float A = 33;
    float B = 22;
	float C = Contrast(A,B);
	cout << C << endl;

	cout << endl;
	cout << "第二题" << endl;
	float Rad;
	cin >> Rad;
	float * SD = CircleArray(Rad);
	cout << "周长： " << SD[1]<<endl;
	SD = CircleArray(Rad);
	cout << "面积： " << SD[0]<<endl;

	cout << endl;
	cout << "第三题" << endl;
	float numa[5] = { 0,1,2,3,4 };
	NumArray(numa, 5);

	cout << endl;
	cout << "第四题" << endl;
	int PNum;
	cin >> PNum;
	bool prinum =PriNum(PNum);
	if (prinum)
	{
		cout << "是质数。";
	}
	else
	{
		cout << "不是质数。";
	}

	cout << endl;
	cout << "第五题" << endl;
	int A05[5] = { 6,22,102,23,11 };
	int * bb = Array05(A05,5);
	for (int i=0;i<5;i++)
	{
		cout << bb[i] << ",  ";
	}

	cout << endl;
	cout << "第六题" << endl;
	int year;
	cin >> year;
	bool years = isyear(year);
	if (years)
	{
		cout << "是闰年。" << endl;
	}
	else
	{
		cout << "不是闰年。" << endl;
	}
	system("Pause");
    return 0;
}


float Contrast(float A, float B)
{
	return (A > B ? A : B);
}

float * CircleArray(float Rad)
{
	float Circle[2];
	Circle[0] = Rad*Rad*3.14f;
	Circle[1] = 2 * Rad*3.14f;
	return Circle;
}


float * NumArray(float Num[],int size)
{
	float NumArray[4];
	float sum=0;
	float max=0;
	float min=0;
	float avg=0;
	for (int i=0;i<size;i++)
	{
		sum += Num[i];
		NumArray[0] = sum;
	
		if (Num[i] > max)
		{
			max = Num[i];
		}
		if (Num[i] < min)
		{
			min = Num[i];
		}

		NumArray[1] = max;
		NumArray[2] = min;
		avg = sum / size;
		NumArray[3] = avg;
	}
	cout << "最大值： " << max << "；  最小值： " << min << "；  平均值： " << avg << "；  和值： " << sum<<endl;
	return 0;
}

bool PriNum(int PNum)
{
	bool PriNum=false;
	for (int i=2;i<=PNum;i++)
	{
		if (PNum%i == 0&&PNum==i)
		{
			return PriNum = true;
		} 
		if (PNum %i == 0 && PNum != i)
		{
			return PriNum = false;
		}
	}
	if (PNum==1)
	{
		return PriNum = false;
	}
	
}

int * Array05(int A05[],int size)
{
	for (int i=1;i<size;i++)
	{
		int j = i;
		while (j>0)
		{
			if (A05[j] < A05[j - 1])
			{
				A05[j] = A05[j]+A05[j - 1];
				A05[j - 1] = A05[j]-A05[j - 1];
				A05[j] = A05[j] - A05[j - 1];
			}
			j--;
		}
	}
	return A05;
}

bool isyear (int year)
{
	bool isyear;
	if ((year%4==0&&year%100!=0)||year%400==0)
	{
		isyear = true;
	}
	else
	{
		isyear = false;
	}
	return isyear;
}
