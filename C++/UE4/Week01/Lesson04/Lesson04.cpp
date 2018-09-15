// Lesson04.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>

int main()
{
	using namespace std;

	/*
		cout << "Hello World!!!" << endl;
		system("CLS");*/

		/*
			char32_t zh = U'好';
			cout << zh << endl;
			system("ClS");*/

			/*
				int iarrey[5] = { 1,2,3,4,5.5 };
				cout << iarrey[1] << endl;
				system("CLS");*/

				/*
					short farrey[8] = {};
					cout << sizeof(farrey)/sizeof(short) << endl;//获取数组长度；
					system("CLS");*/

					/*
						char ffarray[] = { 'a','b','c' };//使用字符数组；
						char name[] = { 'a','b','c','\0' };//使用字符串；
						cout << ffarray<< "\n"<<name<<"\n";
						system("CLS");*/

						/*
							char Cchar[10] = { "哈利路亚" };//  '/0'占据最后一位；
							cout << Cchar << endl;
							if (Cchar[4]=='\0')
							{
								cout << "OK" << endl;
							}
							cin >> Cchar ;
							cout << Cchar << endl;
							system("CLS");*/

							/*cout << "请输入：";
							cin.getline(name, 11);//获取整行，遇到回车返回；
							cout << name << endl;*/

	string str;
	/*
		cout << sizeof(str)<<endl;
		cout << "请输入一行文本，回车结束" << endl;
		cin >> str;//输入获取一段语句 会被空格影响；
		cout << str << endl;
		cout << sizeof(str)<<endl;
		cout << str.length();*/

		/*cout << "请输入一行文本，回车结束" << endl;
		getline(cin,str); //输入一整行，不会被空格键所影响；
		cout << str << endl;*/

		/*
			string a = "hello",
				b = "OK";
			string t = b + a;
			cout << t << endl;*/

			/*//二维数组
			int Data[2][3] = {
				{1,2,3},
				{4,5,6},
			};
			cout << Data[1][2] << endl;

			//三维数组
			int Data3[3][2][4] = {
				{{1,2,3,4},{5,6,7,8}},
				{{9,10,11,12},{13,14,15,16}},
				{}
			};
			cout << Data3[1][0][2] << endl;*/

			/*for (int i = 0; i < 10; i++)
			{
				cout << "OK" <<i<< endl;
			}*/

			/*//++i i++ 区别
			int j=0,k=0, i=1;
			j = i++;
			i = 1;
			k = ++i;
			cout << j <<endl<< k << endl;*/

			/*int map[5]{ 2,4,3,1,4 };
			for (int i=0;i<5; i++)
			{
				cout << map[i] << endl;
			}

			for (int i = 0; i < 10; i++)
			{
				cout << "火星"<<i+1 << endl;
			}

			int sum=0;
			for (int i = 1; i <= 100; i++)
			{
				sum = sum + i;
			}
			cout << sum << endl;

			int sum2=0;
			for (int i =2;i<=100;i+=2)
			{
				sum2 = sum2 + i;
			}
			cout << sum2 << endl;*/

				for (int i =0;i<10;i++)
				{
					if (i==0||i==9)
					{
						for (int j = 0; j < 3; j++)
						{
							cout << " ";
						}
						for (int k = 0; k < 3; k++)
						{
							cout << "*" ;
						}
						cout << endl;
					}
					else
					{
						if (i == 1 || i == 8)
						{
							for (int j = 0; j < 7; j++)
							{
								if (j == 2 || j == 6)
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
						else
						{
							for (int j = 0; j < 8; j++)
							{
								if (j == 1 || j == 7)
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
				}


	/*int Data3[3][2][4] = {
			{ { 1,2,3,4 },{ 5,6,7,8 } },
			{ { 9,10,11,12 },{ 13,14,15,16 } },
			{{17,18,19,20},{21,22,23,24}}
	};
	for (int i = 0; i < (sizeof(Data3) / sizeof(Data3[0])); i++)
	{
		for (int j = 0; j < (sizeof(Data3[0]) / sizeof(Data3[0][0])); j++)
		{
			for (int k = 0; k < (sizeof(Data3[0][0]) / sizeof(Data3[0][0][0])); k++)
			{
				cout << Data3[i][j][k]<<",";
			}
			cout << endl;
		}
		cout << endl;
	}
*/

	system("pause");
	return 0;
}

