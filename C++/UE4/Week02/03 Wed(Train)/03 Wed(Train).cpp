// 03 Wed(Train).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;

int Fact(int Num);

int Num02H(int Num02);

int Num03H(int Num03);

bool isLetter(string Text);

string AaLetter(string AaText);

struct Student
{
	string Name;
	int NumStu;
	int Math;
	int Language;
	int English;
};

Student Message[]=
{
	{"��һ",21,82,63,99},
	{"����",52,54,80,67},
	{"ţ��",40,89,99,85},
	{"����",5,85,70,90},
	{"����",33,67,52,70},
	{"л��",22,70,66,84}
};

int Score(int NumStn);

int ScoreF(string sub);


class Cat
{
public:
	Cat();
	~Cat();
};

Cat::Cat()
{
	cout << "miaooo" << endl;
}

Cat::~Cat()
{
	cout << "Ooooo!!!" << endl;
}

void SpawnCat();

class Animal
{

};

class cat :public Animal
{
public:
	cat();

};

cat::cat()
{
	cout << "MiaooooM" << endl;
}

class dog : public Animal
{
public:
	dog();
};

dog::dog()
{
	cout << "Wangggggg" << endl;
}

class MyClass
{
public:
	string Name;
};


class MyStudent
{
public:
	//�������Ա����䡢c++�ɼ���ue4�ɼ�
	string Name;
	string Sex;
	int Age;
	int CCScore;
	int UE4Score;
	int * StudenttScore();
};

int * MyStudent::StudenttScore()
{
	int studenttScore[2];
	studenttScore[0] = CCScore + UE4Score;
	studenttScore[1] = (CCScore + UE4Score) / 2;
	return studenttScore;
}

class Human
{
public:
	//һ�����࣬����������ߣ����䣬����, �Ƿ��м��յ����ԣ���˵������·�ȷ���
	string Name;
	int Height;
	int Age;
	bool isDriving;

	void Talk();
	void Walk();
};

void Human::Talk()
{

}

void Human::Walk()
{

}

class carrier
{
public:
	//���أ��ٶȣ�����ٶȣ��ɳ�������˾�����˿͵� ���ϳ����³�����ʻ�������ȷ���
	int Load;
	int Speed;
	int MaxSpeed;
	int MaxPerson;
	Human Driver;
	Human Passenger;

	void UpCar();
	void DownCar();
	void Run();
	void Accident();
};

void carrier::UpCar()
{

}

void carrier::DownCar()
{

}

void carrier::Run()
{

}

void carrier::Accident()
{

}

int main00()
{
/*
	cout << "1.��дһ��������Ҫ���û�����һ�����֣��������ɸ����ֵĽ׳ˣ�����main�����е���" << endl;
	cout << endl;

	int Num;
	cout << "������һ�����֣� ";
	cin >> Num;
	cout << endl;
	cout << Num << "�Ľ׳�Ϊ�� " << Fact(Num) << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "2.	��дһ�������������ʵ�εľ���ֵ" << endl;
	cout << endl;

	int Num02;
	cout << "������һ�����֣� ";
	cin >> Num02;
	cout << endl;
	cout << Num02 << "�ľ���ֵΪ�� " << Num02H(Num02) << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "3.	��дһ��������������һ�α�����ʱ����0���Ժ�ÿ�α����÷���ֵ��1" << endl;
	cout << endl;
	int Num03 = 0;
	for (int i = 0;i<10;i++)
	{
		cout << Num03H(i) << "  ";
	}
	cout  << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "4.	��дһ���������ж�string���Ƿ������д��ĸ" << endl;
	cout << endl;

	string Letter;
	cout << "������һ���ַ��� ";
	cin >> Letter;
	cout << endl;

	if (isLetter(Letter))
	{
		cout << "string�а�����д��ĸ" << endl;
	} 
	else
	{
		cout << "string�в�������д��ĸ"<<endl;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "5.	��дһ����������string�еĴ�д��ĸ��ΪСд��ĸ" << endl;
	cout << endl;

	string ALetter;
	cout << "������һ���ַ��� ";
	cin >> ALetter;
	cout << endl;

	cout << AaLetter(ALetter) << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "6.	���һ�����򣬹���ѧ���ɼ���Ϣ" << endl;
	cout << endl;

	int StuNum;
	cout << "������һ��ѧ�ţ�21��52��40��50��33��22���� ";
	cin >> StuNum;
	Score(StuNum);


	string Subject;
	cout << "������һ��ѧ�ƣ�Eng��Math��Lang���� ";
	cin >> Subject;
	ScoreF(Subject);
	*/

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "8.	��дһ������������è��Ҫ����ʽ�������캯��������������"
		"�����ڹ��캯�������������зֱ�����ӡ��Ϣ���ڿ���̨��������ӡ��Ϣ" << endl;
	cout << endl;

	SpawnCat();

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "9.дһ������ĳ����࣬д�������๷���У�èè��" << endl;
	cout << endl;

	cat caca;
	dog dodo;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "10.���Լ�������࣬д�ڳ����С�" << endl;
	cout << endl;

	MyClass Ren;
	Ren.Name = "OK";

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "11.����һ��ѧ���࣬���������ԣ��ֱ�Ϊ�������Ա����䡢c++�ɼ���ue4�ɼ�" << endl;
	cout << endl;

	MyStudent StuScore;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "11.1.���к��������Լ���XX�����꼸���ˡ�����ͬѧ����Ůͬѧ�������Լ��ܷ�����ƽ���ֵķ�������ʾ��" << endl;
	cout << endl;

	MyStudent Mys;
	Mys.Name = "������";
	Mys.Age = 21;
	Mys.Sex = "Ů��";
	Mys.CCScore = 59;
	Mys.UE4Score = 69;
	int *aa = Mys.StudenttScore();
	cout << "�ҽ�" << Mys.Name << "������" << Mys.Age << "���ˡ�" << "��" << Mys.Sex << "Ŷ��"
		<< "Ŀǰ�ܷ֣�" << aa[0] << "ƽ���֣�" << aa[1]<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "11.2������һ�����࣬����������ߣ����䣬����,�Ƿ��м��յ����ԣ���˵������·�ȷ�����" << endl;
	cout << endl;




	system("Pause");
    return 0;
}




//1.
int Fact(int Num)
{
	int Total = 1;
	for (int i=1;i<=Num;i++)
	{
		Total *= i;
	}
	return Total;
}

//2.
int Num02H(int Num02)
{
	if (Num02<0)
	{
		return Num02*-1;
	}
	else
	{
		return Num02;
	}
}

//3.
int Num03H(int Num03)
{
	return Num03++;
}


//4.
bool isLetter(string Text)
{
	bool Bo = false;
	for (int i = 0; i < Text.length(); i++)
	{
		if ((char)Text[i] >= 65 && (char)Text[i] <= 90)
		{
			Bo=true;
		}
	}
	return Bo;
}


//5.
string AaLetter(string AaText)
{
	for (int i = 0; i < AaText.length(); i++)
	{
		if ((char)AaText[i] >= 65 && (char)AaText[i] <= 90)
		{
			(char)AaText[i] += 32;
		}
	}
	return AaText;
}

//6.
int Score(int NumStn)
{
	for (int i = 0;i<6;i++)
	{
		if (Message[i].NumStu==NumStn)
		{
			cout << "��ѧ�� " << Message[i].Math << "���ģ� " << Message[i].Language << "Ӣ� " << Message[i].English<<endl;
		}
	}
	return 0;
}


int ScoreF(string sub)
{
	int MaxS = 0;
	int MinS = 0;
	for (int i = 0; i < 6; i++)
	{
		if (sub == "Eng")
		{
			for (int j = 0; j < 6; j++)
			{
				MaxS = Message[0].English;
				MinS = Message[0].English;
				if (Message[j].English > MaxS)
				{
					MaxS = Message[j].English;
				}
				if (Message[j].English < MinS)
				{
					MinS = Message[j].English;
				}
			}
		}
		if (sub == "Math")
		{
			for (int j = 0; j < 6; j++)
			{
				MaxS = Message[0].Math;
				MinS = Message[0].Math;
				int MaxS = Message[0].Math;
				int MinS = Message[0].Math;
				if (Message[j].Math > MaxS)
				{
					MaxS = Message[j].Math;
				}
				if (Message[j].Math < MinS)
				{
					MinS = Message[j].Math;
				}
			}
		}
		if (sub == "Lang")
		{
			for (int j = 0; j < 6; j++)
			{
				MaxS = Message[0].Language;
				MinS = Message[0].Language;
				int MaxS = Message[0].Language;
				int MinS = Message[0].Language;
				if (Message[j].Language > MaxS)
				{
					MaxS = Message[j].Language;
				}
				if (Message[j].Language < MinS)
				{
					MinS = Message[j].Language;
				}
			}
		}
	}
	cout << "��ѧ����߷֣� " << MaxS << "��ͷ֣� " << MinS << endl;
	return 0;
}

//8.
void SpawnCat()
{
	Cat ca;
}

//11.1
