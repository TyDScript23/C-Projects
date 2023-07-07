/*
This program will create a "media" object
which will be used as the base template for
all objects that inherit from it

All media objects will consist
of at least a name and a price that
will printed to console

This function will also allow for a comparison
between media objects for sorting purposes
*/

#pragma once

#ifndef media_h
#define media_h
#include<iostream>
#include<iomanip>

using namespace std;

class media
{
protected: //allows for variables to be used by all subclasses
	float price;
	string name;

public:
	media()
	{
		name = " ";
		price = 1.00;
	}

	media(string n, float p)
	{
		name = n;
		price = p;
	}

	bool operator< (media rt)
	{
		if (name < rt.name) //object passed to the operator is compared with
			return true;    //the object using the operator
		else
			return false;
	}

	void virtual print()
	{
		cout.setf(ios::fixed); //decimal point is fixed
		cout << "Name is " << name << endl;
		cout << "Price is " << setprecision(2)<< price << endl; //prices are formatted to two decimal places
	}
};
#endif 
