// Lesson2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <climits>

int main()
{
	// ע�Ϳ�ݼ�Ctrl+K��C
	// ���ע�Ϳ�ݼ�Ctrl+K,U

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

	cout << "char�ĳ��ȣ�" << cha << endl;
	cout << "Int�ĳ��ȣ�" << Size << endl;
	cout << "short�ĳ���:" << Sh << endl;
	cout << "Long�ĳ��ȣ�" << sizel << endl;
	cout << "Long Long�ĳ��ȣ�" << sizell << endl;
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

	int Num8 = 045;//�˽��Ʊ�ʾ��
	int Num16 = 0xF;//ʮ�����Ʊ�ʾ��

	cout << (int)Num8 << endl;
	// Num= 4*8^1+4*8^0���˽��ƣ�
	cout << (int)Num16 << endl;
	// Num= f=15(ʮ���������һλΪF)
	cout << endl;





	cin.get();

    return 0;
}

