// Test C++.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Test.h"

using namespace std;

//遍历数组
void Array(string* N);
//1.写一个方法，可以将字符串数组反转，如：将字符串数组｛“中国”、“美国”、“英国”、“巴西”、“澳大利亚”、“加拿大”｝中的内容反转。（调换位置）
string Change(string* Nation);





int main()
{
	//1.写一个方法，可以将字符串数组反转，如：将字符串数组｛“中国”、“美国”、“英国”、“巴西”、“澳大利亚”、“加拿大”｝中的内容反转。（调换位置）
	string* Nation =new string[6] {"中国","美国","英国","巴西","澳大利亚","加拿大"};
	Change(Nation);
	Array(Nation);
	cout << "=====================================" << endl;
	//2.设计一个程序，收集用户的姓名，年龄，然后提供查询功能可以查询响应的用户信息，例如名字输入，查询名字的人员信息，输入年龄列出所有年龄的人。
	



	system("Pause");
    return 0;
}

//1.写一个方法，可以将字符串数组反转，如：将字符串数组｛“中国”、“美国”、“英国”、“巴西”、“澳大利亚”、“加拿大”｝中的内容反转。（调换位置）
string Change(string* Nation)
{
	for (int i = 0; i < 3; i++)
	{
		string Change;
		Change = Nation[i];
		Nation[i] = Nation[5 - i];
		Nation[5 - i] = Change;
	}
	return*Nation;
}

void Array(string* N)
{
	for (int i = 0; i < 6; i++)
	{
		cout << N[i] << "\t";
	}
	cout << endl;
}