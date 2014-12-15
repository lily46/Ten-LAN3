#include "../TenLAN.h"

// �f�t�H���g�̃Z���N�g��ʁB
class UI2014 : public GameView {
private:
	enum {
		UIMODE_SELECT,
		UIMODE_SETTING,
		UIMODE_INFO,
		UIMODE_INFOBACK,
		UIMODE_EXEC,
		UIMODE_OTHER,
	};
	int mode;  // ���[�h�B
	int timer; //�^�C�}�[�B
	int gamemax, minigamemax; // �Q�[�����A�~�j�Q�[�����B
	int *game, nowgames; // �Q�[���ԍ��ꗗ�Agame�ɓ����Ă�Q�[�����Bgame�̒��g�����������Ă��낢�����Ă�B
	int category; // ���݉�̃J�e�S���B-2���~�j�Q�[���܂Ƃ߂�,-1���S���B����ȍ~�͂��̃J�e�S���̃Q�[���B
	int tex; // �e�N�X�`���ԍ��B
	int ranTex; // �e�N�X�`���ԍ��B
	int stoptime;
	double scale;
	int boxsize;
	double centerline, stopline, radius;
	double moveasp, speedline, speedline_;

	int bgmnum;        // �f�t�H�܂߂��Ȑ�
	void PlayBgm();    // �����_����BGM����
	int selectgame;

	double infox, infoy, infospeed;
	int infonum;

	int fontsize;

	// �ݒ�p�̕ϐ��B
	int sselect[4];

	virtual int SetGames(int category);
	virtual int DrawBeginSelect(void);
	virtual int DrawSelect(int acinput = 1);
	virtual int DrawSetting(void);
	virtual int DrawInfomation(int acinput = 1);
	virtual int DrawInfomationBack(void);
	virtual int DrawBackground(void);
	virtual int DrawGameTitle(int gamenum);
	virtual int DrawGameList(int basex = 0, int basey = 0);
	virtual double DrawBox(int dx, int dy, int gamenum, double scl = 1.0, unsigned char alpha = 255);
	virtual int ExecGame(int gamenum);
	virtual int PrevSelectNumber(int select);
	virtual int NextSelectNumber(int select);
public:
	virtual void UserInit(void);
	virtual void Resume(void);
	virtual int MainLoop(void);
	virtual void CleanUp(void);
};
