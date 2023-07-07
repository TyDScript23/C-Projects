/*Tyler Davis
Exercise 2-13

This program will take three integers, floats, 
or characters and determine which one is the largest
numerically (characters use their corresponding ascii values) 
and return the result to console*/

#include <iostream>

using namespace std;

template <class T>
void findLargest(T, T, T);

int main()
{
	int choice, i1, i2, i3;
	float f1, f2, f3;
	char c1, c2, c3;
	cout << "Would you like to enter integers, floats, or characters? (1 = integers, 2 = floats, 3 = characters)" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter three integers here: " << endl;
		cin >> i1 >> i2 >> i3;
		findLargest(i1, i2, i3);
		break;
	case 2:
		cout << "Enter three floats here: " << endl;
		cin >> f1 >> f2 >> f3;
		findLargest(f1, f2, f3);
		break;
	case 3:
		cout << "Enter three characters here: " << endl;
		cin >> c1 >> c2 >> c3;
		findLargest(c1, c2, c3);
		break;
	}
}

template <class T>
void findLargest(T f, T s, T thir)
{
	if (f > s && f > thir)
	{
		cout << f << " is the largest" << endl;
	}
	else if (s > f && s > thir)
	{
		cout << s << " is the largest" << endl;
	}
	else if (thir > s && thir > f)
	{
		cout << thir << " is the largest" << endl;
	}
	else
	{
		cout << "Could not determine the largest value..." << endl;
	}
}