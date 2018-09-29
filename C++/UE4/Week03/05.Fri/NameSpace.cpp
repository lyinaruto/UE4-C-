#include "stdafx.h"
#include "NameSpace.h"
using namespace std;

int MyInt::Age = 0;

void MyInt::INN()
{
	
}

SingleCase* SingleCase::Build()
{
	static SingleCase* SC = new SingleCase;
	return SC;
}

SingleCase::SingleCase()
{

}
