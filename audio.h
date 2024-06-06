#ifndef _AUDIO_CPP_
#define _AUDIO_CPP_

#include <graphics.h>
#include <vector>
#include "pad.h"

#pragma comment(lib, "winmm.lib")

extern std::vector<bool> isDown;
extern std::vector<bool> canPlay;
extern std::vector<Pad> pads;

static void loadAudios()
{
	mciSendString(_T("open ./audios/c-2.mp3 alias q"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/d-2.mp3 alias w"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/e-2.mp3 alias e"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/f-2.mp3 alias r"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/g-2.mp3 alias t"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/a-2.mp3 alias y"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/b-2.mp3 alias u"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/c-1.mp3 alias a"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/d-1.mp3 alias s"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/e-1.mp3 alias d"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/f-1.mp3 alias f"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/g-1.mp3 alias g"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/a-1.mp3 alias h"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/b-1.mp3 alias j"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/c-.mp3 alias z"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/d-.mp3 alias x"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/e-.mp3 alias c"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/f-.mp3 alias v"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/g-.mp3 alias b"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/a-.mp3 alias n"), NULL, 0, NULL);
	mciSendString(_T("open ./audios/b-.mp3 alias m"), NULL, 0, NULL);
}

inline static void setKeyStatus(const ExMessage& msg)
{
	switch (msg.message)
	{
	case WM_KEYDOWN:
		switch (msg.vkcode)
		{
			// 'q'
		case 0x51:
			isDown[0] = true;
			break;
			// 'w'
		case 0x57:
			isDown[1] = true;
			break;
			// 'e'
		case 0x45:
			isDown[2] = true;
			break;
			// 'r'
		case 0x52:
			isDown[3] = true;
			break;
			// 't'
		case 0x54:
			isDown[4] = true;
			break;
			// 'y'
		case 0x59:
			isDown[5] = true;
			break;
			// 'u'
		case 0x55:
			isDown[6] = true;
			break;
			// 'a'
		case 0x41:
			isDown[7] = true;
			break;
			// 's'
		case 0x53:
			isDown[8] = true;
			break;
			// 'd'
		case 0x44:
			isDown[9] = true;
			break;
			// 'f'
		case 0x46:
			isDown[10] = true;
			break;
			// 'g'
		case 0x47:
			isDown[11] = true;
			break;
			// 'h'
		case 0x48:
			isDown[12] = true;
			break;
			// 'j'
		case 0x4A:
			isDown[13] = true;
			break;
			// 'z'
		case 0x5A:
			isDown[14] = true;
			break;
			// 'x'
		case 0x58:
			isDown[15] = true;
			break;
			// 'c'
		case 0x43:
			isDown[16] = true;
			break;
			// 'v'
		case 0x56:
			isDown[17] = true;
			break;
			// 'b'
		case 0x42:
			isDown[18] = true;
			break;
			// 'n'
		case 0x4E:
			isDown[19] = true;
			break;
			// 'm'
		case 0x4D:
			isDown[20] = true;
			break;
		}
		break;
	case WM_KEYUP:
		switch (msg.vkcode)
		{
			// 'q'
		case 0x51:
			isDown[0] = false;
			canPlay[0] = true;
			break;
			// 'w'
		case 0x57:
			isDown[1] = false;
			canPlay[1] = true;
			break;
			// 'e'
		case 0x45:
			isDown[2] = false;
			canPlay[2] = true;
			break;
			// 'r'
		case 0x52:
			isDown[3] = false;
			canPlay[3] = true;
			break;
			// 't'
		case 0x54:
			isDown[4] = false;
			canPlay[4] = true;
			break;
			// 'y'
		case 0x59:
			isDown[5] = false;
			canPlay[5] = true;
			break;
			// 'u'
		case 0x55:
			isDown[6] = false;
			canPlay[6] = true;
			break;
			// 'a'
		case 0x41:
			isDown[7] = false;
			canPlay[7] = true;
			break;
			// 's'
		case 0x53:
			isDown[8] = false;
			canPlay[8] = true;
			break;
			// 'd'
		case 0x44:
			isDown[9] = false;
			canPlay[9] = true;
			break;
			// 'f'
		case 0x46:
			isDown[10] = false;
			canPlay[10] = true;
			break;
			// 'g'
		case 0x47:
			isDown[11] = false;
			canPlay[11] = true;
			break;
			// 'h'
		case 0x48:
			isDown[12] = false;
			canPlay[12] = true;
			break;
			// 'j'
		case 0x4A:
			isDown[13] = false;
			canPlay[13] = true;
			break;
			// 'z'
		case 0x5A:
			isDown[14] = false;
			canPlay[14] = true;
			break;
			// 'x'
		case 0x58:
			isDown[15] = false;
			canPlay[15] = true;
			break;
			// 'c'
		case 0x43:
			isDown[16] = false;
			canPlay[16] = true;
			break;
			// 'v'
		case 0x56:
			isDown[17] = false;
			canPlay[17] = true;
			break;
			// 'b'
		case 0x42:
			isDown[18] = false;
			canPlay[18] = true;
			break;
			// 'n'
		case 0x4E:
			isDown[19] = false;
			canPlay[19] = true;
			break;
			// 'm'
		case 0x4D:
			isDown[20] = false;
			canPlay[20] = true;
			break;
		}
		break;
	default:
		break;
	}
}

inline static void playAudio()
{
	const int SCREEN_WIDTH = getwidth();

	for (int i = 0; i < 21; i++)
	{
		if (isDown[i] && canPlay[i])
		{
			switch (i)
			{
			case 0:
				mciSendString(_T("play q from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 14));
				canPlay[0] = false;
				break;
			case 1:
				mciSendString(_T("play w from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 15));
				canPlay[1] = false;
				break;
			case 2:
				mciSendString(_T("play e from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 16));
				canPlay[2] = false;
				break;
			case 3:
				mciSendString(_T("play r from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 17));
				canPlay[3] = false;
				break;
			case 4:
				mciSendString(_T("play t from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 18));
				canPlay[4] = false;
				break;
			case 5:
				mciSendString(_T("play y from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 19));
				canPlay[5] = false;
				break;
			case 6:
				mciSendString(_T("play u from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 20));
				canPlay[6] = false;
				break;
			case 7:
				mciSendString(_T("play a from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 7));
				canPlay[7] = false;
				break;
			case 8:
				mciSendString(_T("play s from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 8));
				canPlay[8] = false;
				break;
			case 9:
				mciSendString(_T("play d from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 9));
				canPlay[9] = false;
				break;
			case 10:
				mciSendString(_T("play f from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 10));
				canPlay[10] = false;
				break;
			case 11:
				mciSendString(_T("play g from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 11));
				canPlay[11] = false;
				break;
			case 12:
				mciSendString(_T("play h from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 12));
				canPlay[12] = false;
				break;
			case 13:
				mciSendString(_T("play j from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 13));
				canPlay[13] = false;
				break;
			case 14:
				mciSendString(_T("play z from 0"), NULL, 0, NULL);
				pads.push_back(Pad(0));
				canPlay[14] = false;
				break;
			case 15:
				mciSendString(_T("play x from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 1));
				canPlay[15] = false;
				break;
			case 16:
				mciSendString(_T("play c from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 2));
				canPlay[16] = false;
				break;
			case 17:
				mciSendString(_T("play v from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 3));
				canPlay[17] = false;
				break;
			case 18:
				mciSendString(_T("play b from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 4));
				canPlay[18] = false;
				break;
			case 19:
				mciSendString(_T("play n from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 5));
				canPlay[19] = false;
				break;
			case 20:
				mciSendString(_T("play m from 0"), NULL, 0, NULL);
				pads.push_back(Pad(SCREEN_WIDTH / 21 * 6));
				canPlay[20] = false;
				break;
			default:
				break;
			}
		}
	}
}

#endif // !_AUDIO_CPP_
