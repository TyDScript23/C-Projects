#pragma once

#ifndef rectangle56a1_h
#define rectangle56a1_h
#include <iostream>

using namespace std;

class rectangle56a1
{
private:
	float length, width, area, perimeter;
public:
	rectangle56a1(float l = 0.0, float w = 0.0);
	void calcperimeter(float,float);
	void calcarea(float,float);
	void print(void);
	void initialize(float, float);
};

rectangle56a1::rectangle56a1(float l, float w)
{
	initialize(l, w);
	calcperimeter(l, w);
	calcarea(l, w);
}

void rectangle56a1::calcperimeter(float l , float w)
{
	perimeter = (2 * l) + (2 * w);
}

void rectangle56a1::calcarea(float l, float w)
{
	area = l * w;
}

void rectangle56a1::print(void)
{
	cout << endl;
	cout << "Length = " << length << endl;
	cout << "Width = " << width << endl;
	cout << "Perimeter = " << perimeter << endl;
	cout << "Area = " << area << endl;
}

void rectangle56a1::initialize(float l, float w)
{
	length = l;
	width = w;
}
#endif
