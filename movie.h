/*
This program will create a "movie" object
using methods inherited from "media.h"

Object will consist of a name, author, 
and price of the book, which will be 
printed to console
*/

#pragma once

#include "media.h"
#include<iostream>
#include<iomanip>

using namespace std;

class movie : public media //movie class uses aspects inherited from super class
{
private:
	string rating;

public:
	movie() : media() //movie constructor uses super constructor as its base template
	{
		rating = " ";
	}

	movie(string n, float p, string r) : media(n, p) //movie overloaded constructor uses "name" and "price" 
	{                                                //variables from super class
		rating = r;
	}

	void print()
	{
		cout << "Movie" << endl;
		media::print(); //print function from super class
		cout << "Rating is " << rating << endl;
	}
};