#pragma once
#include <iostream>

using namespace std;

class rectangle55 {
private:
	float length, width, area, perimeter;
public:

	rectangle55(float l, float w) : length(l), width(w)
	{
		cout << "Creating Rectangle..." << endl;
		calcarea();
		calcperimeter();
		cout << endl;
	}

	void calcarea()
	{
		area = length * width;
	}

	void calcperimeter()
	{
		perimeter = (2.0 * length) + (2.0 * width);
	}

	void print()
	{
		cout << "Rectangle Measurements: " << endl;
		cout << endl;
		cout << "Length = " << length << endl;
		cout << "Width = " << width << endl;
		cout << "Area = " << area << endl;
		cout << "Perimeter = " << perimeter << endl;
	}
};