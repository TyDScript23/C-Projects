#pragma once

class rectangle58a {
protected:
	float length, width, area, perimeter;
public:
	rectangle58a()
	{
		length = 1.0;
		width = 1.0;
		area = 1.0;
		perimeter = 4.0;
	}
	void setlength(float x)
	{
		length = x;
	}

	void setwidth(float y)
	{
		width = y;
	}

	void calcarea()
	{
		area = length * width;
	}

	void calcperimeter()
	{
		perimeter = (2 * length) + (2 * width);
	}

	float getlength()
	{
		return length;
	}

	float getwidth()
	{
		return width;
	}

	float getarea()
	{
		return area;
	}

	float getperimeter()
	{
		return perimeter;
	}
};
