#ifndef _PAD_CPP_
#define _PAD_CPP_

#include <graphics.h>

class Pad
{
private:
	float fallingSpeed;
	int width, height;
	int color;
	POINT pos;

public:
	Pad(int x) : fallingSpeed(0.1f), width(getwidth()/21), height(10), color(RGB(255, 255, 255))
	{
		pos.x = x;
		pos.y = -height;
	}
	~Pad() = default;
	void update(int dtime)
	{
		pos.y += (int)(fallingSpeed * (float)dtime);
	}
	void draw() const
	{
		setfillcolor(color);
		fillrectangle(pos.x, pos.y, pos.x + width, pos.y + height);
	}
	bool checkExceed() const
	{
		return pos.y > getheight();
	}
};

#endif // !_PAD_CPP_
