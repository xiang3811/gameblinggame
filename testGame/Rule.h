#pragma once

class CRuleLog
{
public:
	CRuleLog() {}
	~CRuleLog() {};

private:

};
class CRule
{
public:
	CRule() {}
	~CRule() {}
};

class CRoulette :public CRule
{
public:
	CRoulette();
	~CRoulette();

private:
	int GetRandomResoult();
};

