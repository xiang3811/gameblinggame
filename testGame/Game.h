#pragma once
#include <vector>

class CPlayer;
class CGame
{
public:
	CGame();
	~CGame();
public:
	void Init();
	void start();
	void end();
	void join(CPlayer* pPlayer);
	void exit(CPlayer* pPlayer);

private:
	std::vector<CPlayer*> m_vecPlayerList;
	std::vector<CPlayer*> m_vecWaitPlayerList;
};

