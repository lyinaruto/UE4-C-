// WeekTrain.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <math.h>

using namespace std;

bool LeapYear(int year);

int main()
{
/*
	cout << "1.ʹ��forѭ�����ά�����������������" << endl;
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
    cout << "2.�ڿ���̨���6524ÿһλ�ϵ�����"<<endl;
	cout << endl;

	int Place = 1;
	for (int i=1000;i>=1;i/=10)
	{
		int num = 6524;
		cout << "��" << Place << "λ: " << num / i % 10 << " ";
		Place++;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "3.һ�����100�׵ĸ߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻"
		"�����£������ڵ�10�����ʱ���������˶����ף���ʮ�η�����ߣ�" << endl;
	cout << endl;

	float TotalHight = 0;
	float BallHight=100;
	for (int i = 1 ;i<=10;i++)
	{
		TotalHight += BallHight;
		BallHight /= 2;
		TotalHight += BallHight;
	}
	cout << "��ʮ������ܸ߶ȣ�" << TotalHight << "m"<<endl;
	cout <<"��ʮ����ط�����"<< BallHight << "m"<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "4.	�����⣬�������ٴη����󣬷����߶�С��1�ף�" << endl;
	cout << endl;
	int NumH=0;
	float BallHig = 100;
	while (BallHig>1.0f)
	{
		BallHig /= 2;
		NumH++;
	} 	
	cout << "��"<<NumH<<"�η����󣬸߶�С��1�ס�" << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "5.��1000Ԫ�������У�������2.5%�����һ���û��ȡ����"
		" �����н��������Ϣһ�������洢�����ʣ�1000Ԫ��������ܱ��2000Ԫ��" << endl;
	cout << endl;
	int MoneyYears = 0;
	float TotalMoney=1000;
	while (TotalMoney <= 2000)
	{
		TotalMoney *= 1.025;
		MoneyYears++;
	}
	cout <<MoneyYears<< "����ܱ��2000Ԫ��"<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "6.����100֮�ڵ���������������ֻ�ܱ�1����������������" << endl;
	cout << endl;
	for (int i =2;i<100;i++)
	{
		for (int j=2;j<=i;j++)
		{
			if (i%j==0&&i==j)
			{
				cout << "������" << i << "  "<<"\t";
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
	cout << "7.	����1000�ڵ�������"
		"������һ����ǡ�õ�������������֮�ͣ����֮Ϊ������"
		"�����ӣ��������������Լ����С�����������������������" << endl;
	cout << endl;

	cout << "1000���ڵ������� ";
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
	cout << "8.	��������4����������4�������մӴ�С����" << endl;
	cout << endl;

	float RankArr[4];
	cout << "������4�����֣��Կո�ָ����س�������" << endl;
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
	cout << "�Ӵ�С����������ǣ� ";
	for (int i =0;i<4;i++)
	{
		cout  << RankArr[i] << "\t";
	}
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "9.	������[4, 65, 75, 7.7, 8, 44, 55, 33, 54]���е�ת"
		"����һλ�����һλ�������ڶ�λ�͵����ڶ�λ�������Դ����ƣ��������" << endl;
	cout << endl;

	float RankArr9[] = { 4, 65, 75, 7.7, 8, 44, 55, 33, 54 };
	for (int i = 0; i < (sizeof(RankArr9)/sizeof(float))/2; i++)
	{
		int j= (sizeof(RankArr9) / sizeof(float))-1-i;
			RankArr9[j] = RankArr9[j] + RankArr9[i];
			RankArr9[i] = RankArr9[j] - RankArr9[i];
			RankArr9[j] = RankArr9[j] - RankArr9[i];
	}
	cout << "���������������ǣ� "<<endl;
	for (int i = 0; i < sizeof(RankArr9) / sizeof(float); i++)
	{
		cout << RankArr9[i] << "\t";
	}
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "10.��ӡ������ͼͼ��" << endl;
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
	cout << "11.�������ͼ���������������" << endl;
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
	cout << "12.����̨����һ��������������λ������ӡ�����Ǽ�λ��������ÿһλ�ϵ����������" << endl;
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
	cout << "������Ϊ " << PlaceNum << " λ��"<<endl;

*/
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "13.һ��ֽ�ĺ����0.0001�ף���ֽ���ۣ����۶��ٴκ󣬺�Ƚ������߶�8848�ף�" << endl;
	cout << endl;
	int NumHill=0;
	for (double i=0.0001;i<8848;i*=2)
	{
		NumHill++;
	}
	cout << "����" << NumHill << "�κ󣬺�Ƚ������߶�8848�ס�";

/*
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "14.��ë����15Ԫһ������3Ԫһ����ˮ2Ԫһƿ��200Ԫ����"
		"ÿ����Ʒ������һ����һ���ж�����ƴ�տ��ܣ�" << endl;
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
	cout << "һ���� " << Num << " ��ƴ�տ���" << endl;


	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "15.���л�����ֵ1Ԫ��2Ԫ��5Ԫ���չ�20Ԫ��һ���ж�������Ϸ�����" << endl;
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
	cout << "һ���� " << NumMey << " ��ƴ�տ���" << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "16.��1-100�е��������ۼӣ���λ��λ3���������Ĳ���Ҫ���룬��ӡ�����Ľ����" << endl;
	cout << endl;
	int Sum16 = 0;
	for (int i=1;i<=100;i++)
	{
		if (i%10%3!=0||i%10==0)
		{
			Sum16 += i;
		} 
	}
	cout << "���Ϊ�� " << Sum16<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "17.�žų˷���ʹ��forѭ����" << endl;
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
	cout << "18.��һ�����̣�����64������"
		"�ڵ�һ�������������1��֥�飬����0.00001kg���ڶ�����2������������4����"
		"�������ƣ�������������ϵ�֥��������" << endl;
	cout << endl;
	double SumQua=0;
	for (int i=1;i<=64;i++)
	{
		double AnyQua = 0;
		AnyQua = pow(2, i);
		SumQua += (AnyQua*0.00001);
	}
	cout << "��������ϵ�֥������Ϊ�� " << SumQua << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "19.��һ�����ã�����һ���º󳤳�С�ã�С��һ���º󳤳ɳ��ò�����һ�����ã�"
		"��һ��󣬹��ж������ӣ��������ö��٣�С�ö��٣����ö��١�" << endl;
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
	cout << "���У� " << NumChild << "ֻ���ã�" << NumSmall << "ֻС�ã�" << NumOld << "ֻ���á�"<<endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "20.�ж�һ����λ���ǲ��ǻ�����" << endl;
	cout << endl;

	char NumHW[5];
	cin >> NumHW;
	if (NumHW[0] == NumHW[4]&& NumHW[1] == NumHW[3])
	{
		cout << "�����ǻ�������";
	}
	else
	{
		cout << "�������ǻ�������";
	}
	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "21.����һ�����飬�����������������ڵ�һλ����С�����������һλ" << endl;
	cout << endl;

	float NumArre[5];
	cout << "������5�����֣��Կո�ָ����س�������" << endl;
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
	cout << "22.����һ����ݣ��ж��Ƿ������꣨�ܱ�4���������ܱ�100����������ܱ�400���������������꣩" << endl;
	cout << endl;

	int year = 0;
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << "������������꣡����" << endl;
	}
	else
	{
		cout << "������Ĳ������꣡����" << endl;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "23.����̨����һ����������ת��Ϊ2������" << endl;
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
	cout << "24.����̨����һ����������ת��Ϊ8������" << endl;
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
	cout << "25.����̨����һ����������ת��Ϊ16������" << endl;
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
	cout << "26.�ڿ���̨����һ����λ������λ�룩������ת��Ϊ�죬ʱ���֣���" << endl;
	cout << endl;

	int Time;
	cin >> Time;
	int Sec = Time % 60;
	int Min = Time % (60 * 60) / 60;
	int Hour = (Time / 3600)%24;
	int Days = Time / (3600*24);

	cout << "������ �������ʱ�任����Ϊ��" << Days << "�죻" << Hour << "Сʱ��" << Min << "�֣�" << Sec << "�롣";


    cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "27.�ڿ���̨����һ�ε��ʣ��������е���ĸ�滻Ϊ��д��ĸ�������" << endl;
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
	cout << "28.���ʹ�����¹�ʽ������������ֻ�ܷ���+��-��" << endl;
	cout <<	"Ӧ�������������ʹ�ý��������12����34����56����78����9 = 59" << endl;
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
	cout << "29.ѭ��¼��ѧ�����ųɼ�������ƽ���ֲ���ӡ��"
		"���������90���ϣ���ӡA��80-90A-��70-89B��60-69C������D" << endl;
	cout << endl;
	int Score[5];
	int TotalScore = 0;
	for (int i=0;i<5;i++)
	{
		cout << "������� " << i + 1 << " �ųɼ���"<<endl;
		cin >> Score[i];
		TotalScore += Score[i];
	}
	if ((TotalScore/5)>90)
	{
		cout << "���ĳɼ�Ϊ�� A ��" << endl;
	} 
	else if ((TotalScore / 5)>=80)
	{
		cout << "���ĳɼ�Ϊ�� A- ��" << endl;
	} 
	else if ((TotalScore / 5)>=70)
	{
		cout << "���ĳɼ�Ϊ�� B ��" << endl;
	}
	else if ((TotalScore / 5) >= 60)
	{
		cout << "���ĳɼ�Ϊ�� C ��" << endl;
	}
	else
	{
		cout << "���ĳɼ�Ϊ�� D ��" << endl;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "30.���������գ��ж���һ����һ��ĵڼ��죨������ע�����꣩" << endl;
	cout << endl;

	int Year;
	cout << "�����������գ��Կո�ָ����س����������� "<<endl;
	cin >> Year;
	int Mouth;
	cin >> Mouth;
	if (Mouth>12||Mouth<1)
	{
		cout << "�Ƿ����룡��������" << endl;
	}
	int Day;
	cin >> Day;
	if (Day > 31 || Day < 1)
	{
		cout << "�Ƿ����룡��������" << endl;
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
	cout << "����" << Year << "��ĵ� " <<TotalDays+Day << " �졣";
*/
	system("Pause");
    return 0;
}

bool LeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		//����29�죻
		return true;
	}
	else
	{
		//����28�죻
		return false;
	}
}
