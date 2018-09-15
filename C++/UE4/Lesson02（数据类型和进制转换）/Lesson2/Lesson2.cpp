// Lesson2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <climits>

int main()
{
	// 注释快捷键Ctrl+K，C
	// 解除注释快捷键Ctrl+K,U

	using namespace std;

	cout << "Hello UE4!!!!" << endl;
	system("CLS");
	cout << "Hello World!!!!" << endl;
	cout << endl;
	int Age, i{ 99 };
	Age = 14;
	Age = i + Age;

	char C = 100;
	short S = 99;
	long long Lo = 99999;
	cout << "My age is " << Age << endl;
	cout << endl;
	system("CLS");

	cout << (int)C << " " << S << endl;
	cout << endl;
	system("color 1b");

	int cha = sizeof(char);
	int Size = sizeof(int);
	int Sh = sizeof(short);
	int sizel = sizeof(long);
	int long sizell = sizeof(long long);

	cout << "char的长度：" << cha << endl;
	cout << "Int的长度：" << Size << endl;
	cout << "short的长度:" << Sh << endl;
	cout << "Long的长度：" << sizel << endl;
	cout << "Long Long的长度：" << sizell << endl;
	cout << endl;

	cout << INT_MIN << endl;
	cout << INT_MAX << endl;
	cout << SHRT_MIN << endl;
	cout << SHRT_MAX << endl;
	cout << endl;

	cout << "sizeof(80)" << endl;
	cout << sizeof(8) << endl;
	cout << sizeof(80U) << endl;
	cout << sizeof(80L) << endl;
	cout << sizeof(80LL) << endl;
	cout << endl;

	char cdo = 200;
	unsigned char ucdo = 200;
	cout << (int)cdo << endl;
	cout << (int)ucdo << endl;
	cout << endl;

	int Num8 = 045;//八进制表示法
	int Num16 = 0xF;//十六进制表示法

	cout << (int)Num8 << endl;
	// Num= 4*8^1+4*8^0（八进制）
	cout << (int)Num16 << endl;
	// Num= f=15(十六进制最后一位为F)
	cout << endl;





	cin.get();

    return 0;
}

