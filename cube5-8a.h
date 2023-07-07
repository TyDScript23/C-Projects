#pragma once

#include "rectangle5-8a.h"

class cube58a : public rectangle58a
{
private:
	float depth;
public:
	cube58a()
	{
		rectangle58a();
		depth = 1.0;
	}

	void calcarea()
	{
		area = (length * width) * 6;
	}

	void calcperimeter()
	{
		perimeter = (length * 4) + (width * 4) + (depth * 4);
	}

	void setdepth(float d)
	{
		depth = d;
	}

	float getdepth()
	{
		return depth;
	}
};
