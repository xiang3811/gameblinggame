// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� GAMBLINGGAME_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// GAMBLINGGAME_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef GAMBLINGGAME_EXPORTS
#define GAMBLINGGAME_API __declspec(dllexport)
#else
#define GAMBLINGGAME_API __declspec(dllimport)
#endif

// �����Ǵ� gamblingGame.dll ������
class GAMBLINGGAME_API CgamblingGame {
public:
	CgamblingGame(void);
	// TODO:  �ڴ�������ķ�����
};

extern GAMBLINGGAME_API int ngamblingGame;

GAMBLINGGAME_API int fngamblingGame(void);
