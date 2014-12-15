#include "DefaultGameView.h"
#include "UI\DefaultUI.h"
#include "UI\ui2014.h"

// UI�̐�����Ƃ͂����ōs���̂ŁAUI��ǉ�����ꍇ�͂����Ǝ����ł����t�@�C�������҂���B
// UI/�ȂǂɎ����̍����GameView���p������UI�̃w�b�_��ǂݍ��ށB
// UI�͕K��root��艺�̊K�w�Ƀw�b�_�ƃ\�[�X���i�[����B
// �@root�ɂ̓v���W�F�N�g�t�@�C����Ten-LAN�̃R�A�����̃R�[�h�����u���Ȃ��B

class GameView *GetTenLANUI( int type )
{
	switch( type )
	{
	case 0:
	default:
		return new UI2014();
	}
}

class GameView *GetTenLANBackGround( int type )
{
	switch(type)
	{
	case 0:
	default:
		return new BackGround();
	}
}

class GameView *GetTenLANStartUp( int type )
{
	switch(type)
	{
	case 0:
	default:
		return  new StartUp();
	}
}