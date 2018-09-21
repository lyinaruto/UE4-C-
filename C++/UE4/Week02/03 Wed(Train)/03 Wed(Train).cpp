// 03 Wed(Train).cpp : 定义控制台应用程序的入口点。
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
	{"刘一",21,82,63,99},
	{"王二",52,54,80,67},
	{"牛三",40,89,99,85},
	{"赵四",5,85,70,90},
	{"张五",33,67,52,70},
	{"谢六",22,70,66,84}
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
	//姓名、性别、年龄、c++成绩、ue4成绩
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
	//一个人类，有姓名，身高，年龄，对象, 是否有驾照等属性，有说话，走路等方法
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
	//载重，速度，最大速度，可乘人数，司机及乘客等 有上车，下车，行驶，车祸等方法
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
	cout << "1.编写一个函数，要求用户输入一个数字，计算生成该数字的阶乘，并在main函数中调用" << endl;
	cout << endl;

	int Num;
	cout << "请输入一个数字： ";
	cin >> Num;
	cout << endl;
	cout << Num << "的阶乘为： " << Fact(Num) << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "2.	编写一个函数，输出其实参的绝对值" << endl;
	cout << endl;

	int Num02;
	cout << "请输入一个数字： ";
	cin >> Num02;
	cout << endl;
	cout << Num02 << "的绝对值为： " << Num02H(Num02) << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "3.	编写一个函数，当它第一次被调用时返回0，以后每次被调用返回值加1" << endl;
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
	cout << "4.	编写一个函数，判断string中是否包含大写字母" << endl;
	cout << endl;

	string Letter;
	cout << "请输入一串字符： ";
	cin >> Letter;
	cout << endl;

	if (isLetter(Letter))
	{
		cout << "string中包含大写字母" << endl;
	} 
	else
	{
		cout << "string中不包含大写字母"<<endl;
	}

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "5.	编写一个函数，把string中的大写字母改为小写字母" << endl;
	cout << endl;

	string ALetter;
	cout << "请输入一串字符： ";
	cin >> ALetter;
	cout << endl;

	cout << AaLetter(ALetter) << endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "6.	设计一个程序，管理学生成绩信息" << endl;
	cout << endl;

	int StuNum;
	cout << "请输入一个学号（21，52，40，50，33，22）： ";
	cin >> StuNum;
	Score(StuNum);


	string Subject;
	cout << "请输入一个学科（Eng，Math，Lang）： ";
	cin >> Subject;
	ScoreF(Subject);
	*/

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "8.	编写一个类用来描述猫，要求显式构建构造函数，析构函数，"
		"并且在构造函数和析构函数中分别加入打印信息，在控制台输出两句打印信息" << endl;
	cout << endl;

	SpawnCat();

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "9.写一个动物的抽象类，写两个子类狗狗叫，猫猫叫" << endl;
	cout << endl;

	cat caca;
	dog dodo;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "10.将自己抽象的类，写在程序中。" << endl;
	cout << endl;

	MyClass Ren;
	Ren.Name = "OK";

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "11.定义一个学生类，有五种属性，分别为姓名、性别、年龄、c++成绩、ue4成绩" << endl;
	cout << endl;

	MyStudent StuScore;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "11.1.打招呼：介绍自己叫XX，今年几岁了。是男同学还是女同学。计算自己总分数和平均分的方法并显示。" << endl;
	cout << endl;

	MyStudent Mys;
	Mys.Name = "邹晗琪";
	Mys.Age = 21;
	Mys.Sex = "女生";
	Mys.CCScore = 59;
	Mys.UE4Score = 69;
	int *aa = Mys.StudenttScore();
	cout << "我叫" << Mys.Name << "，今年" << Mys.Age << "岁了。" << "是" << Mys.Sex << "哦。"
		<< "目前总分：" << aa[0] << "平均分：" << aa[1]<<endl;

	cout << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "11.2、定义一个人类，有姓名，身高，年龄，对象,是否有驾照等属性，有说话，走路等方法。" << endl;
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
			cout << "数学： " << Message[i].Math << "语文： " << Message[i].Language << "英语： " << Message[i].English<<endl;
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
	cout << "该学科最高分： " << MaxS << "最低分： " << MinS << endl;
	return 0;
}

//8.
void SpawnCat()
{
	Cat ca;
}

//11.1
