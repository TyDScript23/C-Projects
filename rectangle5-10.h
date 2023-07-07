#ifndef rectangle58b_h
#define rectangle58b_h
#include<iostream>

using namespace std;

class rectangle510
{
protected:
	float length;
	float width;
	float area;
	float perimeter;

public:
	rectangle510()
	{
		length = 1;
		width = 1;
		area = 1;
		perimeter = 4;
	}

	rectangle510(float l, float w)
	{
		length = l;
		width = w;
		area = length * width;
		perimeter = 2 * (length + width);
	}

	float operator+(rectangle510 rt)
	{
		float total;
		total = length + width + rt.length + rt.width;
		return total;
	}

	float operator-(rectangle510 rt)
	{
		float diff;
		diff = (length + width) - (rt.length + rt.width);
		return diff;
	}

	bool operator>(rectangle510 rt)
	{
		if (area > rt.area)
			return true;
		else
			return false;
	}

	bool operator< (rectangle510 rt)
	{
		if (area < rt.area)
			return true;
		else
			return false;
	}

	bool operator== (rectangle510 rt)
	{
		if (area == rt.area)
			return true;
		else
			return false;
	}

	bool operator!=(rectangle510 rt)
	{
		if (area != rt.area)
			return true;
		else
			return false;
	}

	void print()
	{
		cout << "Length is " << length << endl;
		cout << "Width is " << width << endl;
		cout << "Area is " << area << endl;
		cout << "Perimeter is " << perimeter << endl;
	}
};

#endif
