#pragma once
class Test
{
public:
	void SetHP(int hp);
private:
	int HP;
	virtual void Say();
};

class Son:public Test
{
public:
	void Say() override;
};


namespace ZZ
{
	int za = 10;
}