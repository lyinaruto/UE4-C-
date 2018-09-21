// WeekTrain.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <math.h>

using namespace std;

bool LeapYear(int year);

int main()
{
/*
	cout << "1.使用for循环向二维数组中填充如下数据" << endl;
	cout << endl;

	int FirstNum=1;
	int ArreyNum[5][4];	
	for (int i=0;i<5;i++)
	{
		for (int j = 0;j<4;j++)
		{
			ArreyNum[i][j] = FirstNum;
			FirstNum++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout<<ArreyNum[i][j]<<" ";
		}
		cout << endl;
	}

	cout << endl;
	cout <<"-----------------------------------------------------------------------------"<< endl;
	cout << endl;
    cout << "2.在控制台输出6524每一位上的数字"<<endl;
	cout << endl;

	int Place = 1;
	for (int i=1000;i>=1;i/=10)
	{
		int num = 6524;
		cout << "第" << Place << "位: " << num / i % 10 << " ";
		Place++;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "3.一个球从100米的高度自由落下，每次落地后反跳回原高度的一半；"
		"再落下，求他在第10次落地时，共经过了多少米？第十次反弹多高？" << endl;
	cout << endl;

	float TotalHight = 0;
	float BallHight=100;
	for (int i = 1 ;i<=10;i++)
	{
		TotalHight += BallHight;
		BallHight /= 2;
		TotalHight += BallHight;
	}
	cout << "第十次落地总高度：" << TotalHight << "m"<<endl;
	cout <<"第十次落地反弹："<< BallHight << "m"<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "4.	接上题，球经历多少次反弹后，反弹高度小于1米？" << endl;
	cout << endl;
	int NumH=0;
	float BallHig = 100;
	while (BallHig>1.0f)
	{
		BallHig /= 2;
		NumH++;
	} 	
	cout << "第"<<NumH<<"次反弹后，高度小于1米。" << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "5.将1000元存入银行，年利率2.5%，如果一年后没有取出，"
		" 则银行将本金和利息一并继续存储，请问，1000元多少年后能变成2000元？" << endl;
	cout << endl;
	int MoneyYears = 0;
	float TotalMoney=1000;
	while (TotalMoney <= 2000)
	{
		TotalMoney *= 1.025;
		MoneyYears++;
	}
	cout <<MoneyYears<< "年后能变成2000元。"<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "6.计算100之内的素数。（素数，只能被1和自身整除的数）" << endl;
	cout << endl;
	for (int i =2;i<100;i++)
	{
		for (int j=2;j<=i;j++)
		{
			if (i%j==0&&i==j)
			{
				cout << "质数：" << i << "  "<<"\t";
			}
			if (i%j==0&&i!=j)
			{
				break;
			}
		}
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "7.	计算1000内的完数。"
		"完数：一个数恰好等于他的真因子之和，则称之为完数。"
		"真因子：除了自身以外的约数（小于自身，自身能整除这个数）" << endl;
	cout << endl;

	cout << "1000以内的完数： ";
	for (int i=2;i<1000;i++)
	{
		int AppNum=0;
		for (int j=1;j<i;j++)
		{
			if (i%j==0)
			{
				AppNum += j;
			}
		}
		if (AppNum == i)
		{
			cout << AppNum << " \t";
		}
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "8.	随意输入4个数，并将4个数按照从大到小排序" << endl;
	cout << endl;

	float RankArr[4];
	cout << "请输入4个数字；以空格分隔，回车结束。" << endl;
	for (int i =0;i<4;i++)
	{
		cin >> RankArr[i];
	}
	for (int i =1 ;i<4;i++)
	{
		int j = i;
		while (j > 0 && RankArr[j] > RankArr[j-1])
		{
			RankArr[j] = RankArr[j] + RankArr[j - 1];
			RankArr[j - 1] = RankArr[j] - RankArr[j - 1];
			RankArr[j] = RankArr[j] - RankArr[j - 1];
			j--;
		}
	}
	cout << "从大到小排序的数组是： ";
	for (int i =0;i<4;i++)
	{
		cout  << RankArr[i] << "\t";
	}
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "9.	将数组[4, 65, 75, 7.7, 8, 44, 55, 33, 54]进行调转"
		"（第一位和最后一位调换，第二位和倒数第二位调换，以此类推）。并输出" << endl;
	cout << endl;

	float RankArr9[] = { 4, 65, 75, 7.7, 8, 44, 55, 33, 54 };
	for (int i = 0; i < (sizeof(RankArr9)/sizeof(float))/2; i++)
	{
		int j= (sizeof(RankArr9) / sizeof(float))-1-i;
			RankArr9[j] = RankArr9[j] + RankArr9[i];
			RankArr9[i] = RankArr9[j] - RankArr9[i];
			RankArr9[j] = RankArr9[j] - RankArr9[i];
	}
	cout << "调换排序后的数组是： "<<endl;
	for (int i = 0; i < sizeof(RankArr9) / sizeof(float); i++)
	{
		cout << RankArr9[i] << "\t";
	}
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "10.打印出如下图图案" << endl;
	cout << endl;

	int k = 11;
	for (int i=0;i<6;i++)
	{
		for (int j=0;j<=i;j++)
		{
			cout << " ";
		}
		for (int j =0;j<k;j++)
		{
			cout << "*";
		}
		cout << endl;
		k -= 2;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "11.将上面的图案进行正向输出。" << endl;
	cout << endl;

	int k2 = 0;
	for (int i = 6; i >=0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < k; j++)
		{
			cout << "*";
		}
		cout << endl;
		k += 2;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "12.控制台输入一个数（不多于五位），打印出它是几位数，并将每一位上的数进行输出" << endl;
	cout << endl;

	int PlaceNum=0;
	int NumC;
	cin >> NumC;
	for (int i = 1;i>0;i*=10)
	{
		if (NumC%i!=NumC)
		{
			cout << NumC/i%10 << "\t";
		} 
		else
		{
			break;
		}
		PlaceNum++;
	}
	cout << "该数字为 " << PlaceNum << " 位数"<<endl;

*/
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "13.一张纸的厚度是0.0001米，将纸对折，对折多少次后，厚度将是珠峰高度8848米？" << endl;
	cout << endl;
	int NumHill=0;
	for (double i=0.0001;i<8848;i*=2)
	{
		NumHill++;
	}
	cout << "对折" << NumHill << "次后，厚度将是珠峰高度8848米。";

/*
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "14.羽毛球拍15元一个，球3元一个，水2元一瓶。200元购买，"
		"每种商品至少买一个，一共有多少种拼凑可能？" << endl;
	cout << endl;
	int TotalMoney=0;

	int Num=0;
	for (int BadmintonNum = 1; BadmintonNum < (200/15); BadmintonNum++)
	{
		for (int BallNum = 1; BallNum < (200/3); BallNum++)
		{
			for (int WaterNum = 1; WaterNum < (200/2); WaterNum++)
			{
				if (BadmintonNum*15+BallNum*3+WaterNum*2<=200)
				{
					Num++;
				}
			}
		}
	}
	cout << "一共有 " << Num << " 种拼凑可能" << endl;


	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "15.现有货币面值1元，2元，5元，凑够20元，一共有多少种组合方法。" << endl;
	cout << endl;
	
	int NumMey = 0;
	for (int Money01 = 0; Money01 < (20 / 1); Money01++)
	{
		for (int Money02 = 0; Money02 < (20 / 2); Money02++)
		{
			for (int Money05 = 0; Money05 < (20 / 5); Money05++)
			{
				if (Money01 * 1 + Money02 * 2 + Money05 * 5 == 20)
				{
					NumMey++;
				}
			}
		}
	}
	cout << "一共有 " << NumMey << " 种拼凑可能" << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "16.将1-100中的数进行累加，个位数位3的整倍数的不需要加入，打印出最后的结果。" << endl;
	cout << endl;
	int Sum16 = 0;
	for (int i=1;i<=100;i++)
	{
		if (i%10%3!=0||i%10==0)
		{
			Sum16 += i;
		} 
	}
	cout << "结果为： " << Sum16<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "17.九九乘法表（使用for循环）" << endl;
	cout << endl;

	for (int i=1;i<=9;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout << j << "X" << i<<"\t";
		}
		cout << endl;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "18.有一个棋盘，共有64个方格，"
		"在第一个方格里面放入1粒芝麻，重量0.00001kg，第二个放2个，第三个放4个，"
		"依次类推，请问最后棋盘上的芝麻重量。" << endl;
	cout << endl;
	double SumQua=0;
	for (int i=1;i<=64;i++)
	{
		double AnyQua = 0;
		AnyQua = pow(2, i);
		SumQua += (AnyQua*0.00001);
	}
	cout << "最后棋盘上的芝麻重量为： " << SumQua << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "19.有一对幼兔，幼兔一个月后长成小兔，小兔一个月后长成成兔并生下一对幼兔，"
		"问一年后，共有多少兔子，其中幼兔多少，小兔多少，成兔多少。" << endl;
	cout << endl;
	int NumChild = 1, OldChild = 0;
	int NumSmall = 0, OldSmall = 0;
	int NumOld = 0, OldOld = 0;
	for (int Mouth = 2; Mouth <= 12; Mouth++)
	{
		OldChild = NumOld;
		OldSmall = NumChild;
		OldOld = NumSmall;
		NumChild = OldSmall + OldOld;
		NumSmall = OldChild;
		NumOld = OldSmall+OldOld;
	}
	cout << "共有： " << NumChild << "只幼兔；" << NumSmall << "只小兔；" << NumOld << "只成兔。"<<endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "20.判断一个五位数是不是回文数" << endl;
	cout << endl;

	char NumHW[5];
	cin >> NumHW;
	if (NumHW[0] == NumHW[4]&& NumHW[1] == NumHW[3])
	{
		cout << "该数是回文数。";
	}
	else
	{
		cout << "该数不是回文数。";
	}
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "21.遍历一个数组，将数组中最大的数放在第一位，最小的数放在最后一位" << endl;
	cout << endl;

	float NumArre[5];
	cout << "请输入5个数字；以空格分隔，回车结束。" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> NumArre[i];
	}
	float max = NumArre[1], min = NumArre[1];
	for (int i=0;i<5;i++)
	{
		if (NumArre[i]>=max)
		{
			max = NumArre[i];
		}
		if (NumArre[i]<=min)
		{
			min = NumArre[i];
		}
	}
	NumArre[0] = max;
	NumArre[4] = min;
	cout << "{";
	for (int i=0;i<5;i++)
	{
		cout << NumArre[i]<<" ";
	}
	cout << "}"<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "22.输入一个年份，判断是否是闰年（能被4整除，不能被100整除，如果能被400整除则是世纪闰年）" << endl;
	cout << endl;

	int year = 0;
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << "您输入的是闰年！！！" << endl;
	}
	else
	{
		cout << "您输入的不是闰年！！！" << endl;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "23.控制台输入一个数，将其转换为2进制数" << endl;
	cout << endl;
	int NumEr;
	cin >> NumEr;
	
	while (NumEr/2>0)
	{
		cout << NumEr % 2 << ", ";
		NumEr /= 2;
	}
	cout << NumEr % 2 << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "24.控制台输入一个数，将其转换为8进制数" << endl;
	cout << endl;

	int NumEi;
	cin >> NumEi;

	while (NumEi / 8 > 0)
	{
		cout << NumEi % 8 << ", ";
		NumEi /= 8;
	}
	cout << NumEi % 8 << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "25.控制台输入一个数，将其转换为16进制数" << endl;
	cout << endl;

	int NumSixTeen;
	cin >> NumSixTeen;
	int SixTeen=0;
	char SixTeenC=0;
	while (NumSixTeen / 16 > 0)
	{
		SixTeen = NumSixTeen % 16;
		if (SixTeen==10)
		{
			SixTeenC = 'A';
		} 
		else if (SixTeen == 11)
		{
			SixTeenC = 'B';
		} 
		else if (SixTeen == 12)
		{
			SixTeenC = 'C';
		} 
		else if (SixTeen == 13)
		{
			SixTeenC = 'D';
		}
		else if (SixTeen == 14)
		{
			SixTeenC = 'E';
		}
		else if (SixTeen == 15)
		{
			SixTeenC = 'F';
		}
		else
		{
			SixTeenC = (char)SixTeen;
		}
	
		cout << (char)SixTeenC << ", ";
		NumSixTeen /= 16;
	}
	if (NumSixTeen == 10)
	{
		SixTeenC = 'A';
	}
	else if (NumSixTeen == 11)
	{
		SixTeenC = 'B';
	}
	else if (NumSixTeen == 12)
	{
		SixTeenC = 'C';
	}
	else if (NumSixTeen == 13)
	{
		SixTeenC = 'D';
	}
	else if (NumSixTeen == 14)
	{
		SixTeenC = 'E';
	}
	else if (NumSixTeen == 15)
	{
		SixTeenC = 'F';
	}
	else
	{
		SixTeenC = (char)NumSixTeen;
	}
	cout << (char)SixTeenC << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "26.在控制台输入一个五位数（单位秒），将其转换为天，时，分，秒" << endl;
	cout << endl;

	int Time;
	cin >> Time;
	int Sec = Time % 60;
	int Min = Time % (60 * 60) / 60;
	int Hour = (Time / 3600)%24;
	int Days = Time / (3600*24);

	cout << "经计算 您输入的时间换算结果为：" << Days << "天；" << Hour << "小时；" << Min << "分；" << Sec << "秒。";


    cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "27.在控制台输入一段单词，将单词中的字母替换为大写字母。并输出" << endl;
	cout << endl;

	char * Worda=new char;
	cin >> Worda;
	for (int i=0;i<sizeof(Worda)/sizeof(char);i++)
	{
		Worda[i] -= 32;
	}
	
		cout << Worda << endl;

	cout << endl;
*/
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "28.如果使得以下公式成立，括号内只能放入+或-，" << endl;
	cout <<	"应放入哪种运算符使得结果成立？12（）34（）56（）78（）9 = 59" << endl;
	cout << endl;

	int Symbol=0;
	for (int i = 0; i <= 1; i += 1)
	{
		int Num01 = 0, Num02 = 0, Num03 = 0, Num04 = 0;
		if (i==0)
		{
			Num01 = 12 + 34;
		}
		else
		{
			Num01 = 12 - 34;
		}
		for (int j = 0; j <= 1; j += 1)
		{
			if (j == 0)
			{
				Num02 = Num01 + 56;
			}
			else
			{
				Num02 = Num01 - 56;
			}
			for (int k = 0; k <= 1; k += 1)
			{
				if (k == 0)
				{
					Num03 = Num02 + 78;
				}
				else
				{
					Num03 = Num02 - 78;
				}
				for (int l = 0; l <= 1; l += 1)
				{
					if (l == 0)
					{
						Num04 = Num03 + 9;
					}
					else
					{
						Num04 = Num03 - 9;
					}
					if (Num04==59)
					{
						cout << (char)(i * 2 + 43) << (char)(j * 2 + 43) << (char)(k * 2 + 43) << (char)(l * 2 + 43) << endl;
						break;
					}
				}
			}
		}
	}
/*
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "29.循环录入学生五门成绩，计算平均分并打印，"
		"如果分数在90以上，打印A，80-90A-，70-89B，60-69C，其余D" << endl;
	cout << endl;
	int Score[5];
	int TotalScore = 0;
	for (int i=0;i<5;i++)
	{
		cout << "请输入第 " << i + 1 << " 门成绩。"<<endl;
		cin >> Score[i];
		TotalScore += Score[i];
	}
	if ((TotalScore/5)>90)
	{
		cout << "您的成绩为： A 。" << endl;
	} 
	else if ((TotalScore / 5)>=80)
	{
		cout << "您的成绩为： A- 。" << endl;
	} 
	else if ((TotalScore / 5)>=70)
	{
		cout << "您的成绩为： B 。" << endl;
	}
	else if ((TotalScore / 5) >= 60)
	{
		cout << "您的成绩为： C 。" << endl;
	}
	else
	{
		cout << "您的成绩为： D 。" << endl;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "30.输入年月日，判断这一天是一年的第几天（总天数注意闰年）" << endl;
	cout << endl;

	int Year;
	cout << "请输入年月日（以空格分隔，回车键结束）： "<<endl;
	cin >> Year;
	int Mouth;
	cin >> Mouth;
	if (Mouth>12||Mouth<1)
	{
		cout << "非法输入！！！！！" << endl;
	}
	int Day;
	cin >> Day;
	if (Day > 31 || Day < 1)
	{
		cout << "非法输入！！！！！" << endl;
	}
	int TotalDays=0;
	for (int i=0;i<Mouth-1;i++)
	{
		int MDays[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
			if (LeapYear(Year))
			{
				MDays[1] = 29;
			}
			else
			{
				MDays[1] = 28;
			}
			TotalDays += MDays[i];
	}
	cout << "这是" << Year << "年的第 " <<TotalDays+Day << " 天。";
*/
	system("Pause");
    return 0;
}

bool LeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		//二月29天；
		return true;
	}
	else
	{
		//二月28天；
		return false;
	}
}
