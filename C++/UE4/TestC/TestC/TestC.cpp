// Test C++.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Person.h"
#include "Sequence.h"
#include "Ti05.h"

using namespace std;

//��������
void Array(string* N, int Size);
//1.дһ�����������Խ��ַ������鷴ת���磺���ַ�����������й�����������������Ӣ�������������������Ĵ����ǡ��������ô󡱣��е����ݷ�ת��������λ�ã�
string Change(string* Nation, int Size);





int main()
{
	//5.�̵�ϵͳ

	Ti05main();

	//1.дһ�����������Խ��ַ������鷴ת���磺���ַ�����������й�����������������Ӣ�������������������Ĵ����ǡ��������ô󡱣��е����ݷ�ת��������λ�ã�
	string Nation[] = { "�й�","����","Ӣ��","����","�Ĵ�����","���ô�"};
	int S = sizeof(Nation) / sizeof(string);

 	Change(Nation,S);
 	Array(Nation,S);
	cout << "=====================================" << endl;
	//2.���һ�������ռ��û������������䣬Ȼ���ṩ��ѯ���ܿ��Բ�ѯ��Ӧ���û���Ϣ�������������룬��ѯ���ֵ���Ա��Ϣ�����������г�����������ˡ�

//  Ti02main();

//	Menu();

	//3.����/˾��/����Ա��
    //���͵ڶ�����ͬһ��ͷ�ļ��£�
/*  Person* Drr = new Driver;
	Drr->Age;
	Drr->Name;
*/

	//4.������������������������� 4��56��74��1��54��23��15��65��66��12��3��4
	//�ֱ���������ͽ������
	int Seq[] = { 4,56,74,1,54,23,15,65,66,12,3,4 };
	int Size = sizeof(Seq) / sizeof(int);
	cout << "=====================================" << endl;
	cout << "�������У�" << endl;
	Up(Seq,Size);
	Traversal(Seq,Size);

	cout << "=====================================" << endl;
	cout << "�������У�" << endl;
	Down(Seq, Size);
	Traversal(Seq, Size);

	system("Pause");
	return 0;
}
