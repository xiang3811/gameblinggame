// gamblingGame.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "gamblingGame.h"


// ���ǵ���������һ��ʾ��
GAMBLINGGAME_API int ngamblingGame=0;

// ���ǵ���������һ��ʾ����
GAMBLINGGAME_API int fngamblingGame(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� gamblingGame.h
CgamblingGame::CgamblingGame()
{
    return;
}
