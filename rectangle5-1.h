#pragma once

class rectangle51 {
private:
	float length, width, area, perimeter;
public:

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