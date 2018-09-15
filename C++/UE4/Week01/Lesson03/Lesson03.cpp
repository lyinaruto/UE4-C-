// Lesson03.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <climits>
#include <cfloat>
#include <string>

int main()
{
	using namespace std;
	system("color 1d");
	int i = 3527;
	double d = 3.1234567890;
	float f = 5.4389F;
	long double ld = 8.579;
	string s = "aaaaaa";
	cout << d << " " << f << " " << ld << endl;
	system("CLS");

	float fl = 3.1234567890;
	int a = 25 % 3;
	float num = 10 / 3.0F;

	int tt=20;
	tt *= 20 / 4;
	cout.precision(20);
	cout << fl << endl;
	cout << FLT_MAX << endl;
	cout << s << endl;
	cout << num << endl;
	cout << a << endl;
	cout << tt;
	system("CLS");

	//圆的面积
	int Circle_r = 30;
	double Scircle = Circle_r*Circle_r *3.14;

	//矩形面积/周长
	float Act_L = 23.2, Act_W = 50.01;
	float SAct = Act_W*Act_L, ZAct = (Act_L+Act_W) * 2;

	//梯形面积
	float Trap_Up = 31.2, Trap_Down = 12.2, Trap_H = 8;
	float STrap = (Trap_Down+Trap_Up) * Trap_H / 2;

	//路程时间
	auto Distance = 50.0F;
	auto Speed = 15.0F;
	auto PerKM_Min = 60/Speed;
	//auto Time = Distance / Speed*60;
	auto Time = Distance*PerKM_Min;

	cout << "圆的面积：" << Scircle << endl;
	cout << "矩形的面积：" << SAct << "周长：" <<ZAct << endl;
	cout << "梯形的面积：" << STrap<< endl;
	cout << "到达B点用时：" << Time<<"min"<< endl;
	system("CLS");

	wcout.imbue(locale("chs")); //设置宽字符输出流 为本地字符输出。
	wchar_t c = L'好';
	wcout << c << endl;
	char16_t C_16 = u'是';
	char32_t C_32 = U'否';
	wcout << C_16 << endl<<C_32<<endl;




	cin.get();

	return 0;
}
