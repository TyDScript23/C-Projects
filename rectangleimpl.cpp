#include <iostream>
#include "rectangle5-6int.h"

using namespace std;

rectangle56a2::rectangle56a2(float l, float w)
{
	initialize(l, w);
	calcperimeter(l, w);
	calcarea(l, w);
}

void rectangle56a2::calcperimeter(float l, float w)
{
	perimeter = (2 * l) + (2 * w);
}

void rectangle56a2::calcarea(float l, float w)
{
	area = l * w;
}

void rectangle56a2::print(void)
{
	cout << endl;
	cout << "Length = " << length << endl;
	cout << "Width = " << width << endl;
	cout << "Perimeter = " << perimeter << endl;
	cout << "Area = " << area << endl;
}

void rectangle56a2::initialize(float l, float w)
{
	length = l;
	width = w;
}