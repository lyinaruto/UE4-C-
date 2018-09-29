#pragma once


class B
{
public:
	virtual void Walk();
	virtual void Say() = 0;
};

class B1:public B
{
public:
	void Walk() override;
	void Say() ;
};

class B2 :public B
{
public:
	void Walk() override;
	void Say() ;
};

class B3 :public B
{
public:
	void Walk() override;
	void Say() ;
};