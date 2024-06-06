#include "audio.h"
#include "pad.h"
#include <graphics.h>
#include <vector>

// q-u, a-j, z-m
std::vector<bool> isDown(21, false);
std::vector<bool> canPlay(21, true);

std::vector<Pad> pads;

int main()
{
	const int FPS = 60;
	initgraph(630, 480);
	loadAudios();
	BeginBatchDraw();

	ExMessage msg;

	while (true)
	{
		DWORD frame_start_time = GetTickCount();
		while (peekmessage(&msg))
		{
			setKeyStatus(msg);
			playAudio();
		}

		static DWORD last_tick_time = GetTickCount();
		DWORD current_tick_time = GetTickCount();
		DWORD delta_tick = current_tick_time - last_tick_time;
		for (auto& pad : pads)
		{
			pad.update(delta_tick);
		}

		cleardevice();
		setbkcolor(RGB(200, 200, 200));
		rectangle(0, 0, 630, 480);
		setcolor(RGB(160, 160, 160));
		for (int i = 30; i < 630; i += 30)
			line(i, 0, i, 480);
		for (auto& pad : pads)
		{
			pad.draw();
		}
		FlushBatchDraw();

		for (int i = 0; i < pads.size(); i++)
		{
			if (pads[i].checkExceed())
			{
				std::swap(pads[i], pads.back());
				pads.pop_back();
			}
		}

		last_tick_time = current_tick_time;

		DWORD frame_end_time = GetTickCount();
		DWORD frame_delta_time = frame_end_time - frame_start_time;
		if (frame_delta_time < 1000 / FPS)
			Sleep(1000 / FPS - frame_delta_time);
	}
	EndBatchDraw();
	return 0;
}