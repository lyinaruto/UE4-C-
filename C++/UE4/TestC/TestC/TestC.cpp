// Test C++.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Person.h"
#include "Sequence.h"
#include "Ti05.h"

using namespace std;

//遍历数组
void Array(string* N, int Size);
//1.写一个方法，可以将字符串数组反转，如：将字符串数组｛“中国”、“美国”、“英国”、“巴西”、“澳大利亚”、“加拿大”｝中的内容反转。（调换位置）
string Change(string* Nation, int Size);





int main()
{
	//5.商店系统

	Ti05main();

	//1.写一个方法，可以将字符串数组反转，如：将字符串数组｛“中国”、“美国”、“英国”、“巴西”、“澳大利亚”、“加拿大”｝中的内容反转。（调换位置）
	string Nation[] = { "中国","美国","英国","巴西","澳大利亚","加拿大"};
	int S = sizeof(Nation) / sizeof(string);

 	Change(Nation,S);
 	Array(Nation,S);
	cout << "=====================================" << endl;
	//2.设计一个程序，收集用户的姓名，年龄，然后提供查询功能可以查询响应的用户信息，例如名字输入，查询名字的人员信息，输入年龄列出所有年龄的人。

//  Ti02main();

//	Menu();

	//3.记者/司机/程序员。
    //（和第二题在同一个头文件下）
/*  Person* Drr = new Driver;
	Drr->Age;
	Drr->Name;
*/

	//4.给数组进行排序，数组内容如下 4，56，74，1，54，23，15，65，66，12，3，4
	//分别升序输出和降序输出
	int Seq[] = { 4,56,74,1,54,23,15,65,66,12,3,4 };
	int Size = sizeof(Seq) / sizeof(int);
	cout << "=====================================" << endl;
	cout << "升序排列：" << endl;
	Up(Seq,Size);
	Traversal(Seq,Size);

	cout << "=====================================" << endl;
	cout << "降序排列：" << endl;
	Down(Seq, Size);
	Traversal(Seq, Size);

	system("Pause");
	return 0;
}
