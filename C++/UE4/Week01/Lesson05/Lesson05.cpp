// Lesson05.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>


int main()
{
	using namespace std;
	
	/*float t;
	while (true)
	{
		cout << "�������������£�";
		cin >> t;
		if (t < 36.5f)
		{
			cout << "��û����";
		}
		else if (t > 50.0f)
		{
			cout << "��ȥ���᳡��";
		}
		else
		{
			cout << "��������";
		}
		cout << endl;
		system("Pause");
	}*/

	/*//65����Ʊ��18��65ȫ�ۣ�12��18���ۣ�12��������Ʊ��
	int age;
	while (true)
	{
		cout << "�������������䣺";
		cin >> age;
		if (age > 65)
		{
			cout << "Free";
		}
		else if (age > 18)
		{
			cout << "ԭ��";
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

		/*//1.	������4�������ҳ������ 50 1 22 90 20
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
	
	/*//2.��������У��ϵͳ��Ҫ���û��ӿ�̨�������룬������벻����123456���ӡ������������ȷ�����ӡ��ȷ
	int PW;
	cout << "���������룺";
	cin >> PW;
	int PassWord = 123456;
	if (PW == PassWord)
	{
		cout << "������ȷ";
	}
	else
	{
		cout << "�������";
	}*/

	//3.��ʾ�û��������룬������벻���ڡ�a123456��������ʾ�û����󣬲�Ҫ���û��ٴ����룬����ٴ�������ȷ����ʾ��ȷ�������������ʾ�û���Ȩ�ٴβ���
	for(int i=0;i<3;i++)
	{
		string password;
		cout << "���������룺";
		cin >> password;
		string PW = "a123456";
		if (PW==password)
		{
			cout << "������ȷ" << endl;
			break;
		} 
		else if(i==2)
		{
			cout << "����������Ĵ������þ�����Ȩ�ٴ����룡"<<endl;
		}
		else
		{
			cout << "����������������룡"<<endl;
		}
	}

	    /*//4.����0 - 100�е�������������������ܱ�4���������ĺ�
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
       //5.	һֻ����������������3�ף����ϵ�1�ף�����10�ף��������ܼ������������������ʼ�Ӱ������� welldepth 
        int day=0;
		int i;
		for (i = 0; i < 10; i=i+3)
		{
			i = i - 1;
			day=day+1;
		}
		cout << day;*/

       /* //6.�ҳ�100-999֮���ˮ�ɻ���������153 = 1*1*1 + 5*5*5+3*3*3
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

        /*//7.����һ������������������ż�������ӡ��Your input is even���������ӡ��Your input is odd����
        int i;
		cout << "������һ������" << endl;
		cin >> i;
		if (i%2==0)
		{
			cout << "Your input is even" << endl;
		} 
		else
		{
			cout << "Your input is odd" << endl;
		}*/

        /*//8.�������䣬���������10-18����25-30��Χ�ڣ���������Է��ʡ�������������ܾ����ʡ���
        int i;
		cout << "����������" << endl;
		cin >> i;
		if ((i>10&&i<18)||(i>25&&i<30))
		{
			cout << "���Է���";
		} 
		else
		{
			cout << "�ܾ�����";
		}*/

		/*//9.��дһ����������û�������ַ������������ַ���0-9�����е�һ��������ʾ����������һ�����֡���������ʾ�ⲻ��һ�����֡�
        int i;
        cout << "������һ������" << endl;
        cin >> i;
		if (i>=0&&i<=9)
		{
			cout << "��������һ������" << endl;
		} 
		else
		{
			cout << "�ⲻ��һ������" << endl;
		}*/
		
        
        /*10.	������ ��chinese math english�� �ɼ�������������һ����������������ǳ������������ͣ�����
            ���ĳɼ�����70 ���� ��ѧ�ɼ�����80 ����Ӣ��ɼ�����90
            ���ĳɼ�����100������ѧ�ɼ�����100����Ӣ��ɼ�����100
            ���ĳɼ�����90 ���� ������������1�ųɼ�����70* /
            int Eng;
            int Math;
            int Cn;
			cout << "���������� ��ѧ Ӣ��ɼ�(�����ÿո�ָ����س�����)" << endl;
			cin >> Cn;
			cin >> Math;
			cin >> Eng;
			if ((Cn>70&&Math>80&&Eng>90)||(Cn==100||Eng==100||Math==100)||(Cn>90&&(Math>70||Eng>70)))
			{
				cout << "�ǳ������������ͣ�" << endl;
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

        //�ܱ�13����������5621�� 4564 �� 54545 169 2514 124 458 13��
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


     /*   //����1��100 �����ܱ�7�����������ĺͣ�������continue��
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


