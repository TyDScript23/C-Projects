/*
This program will create a "book" object
using methods inherited from "media.h"

Object will consist of a name, author,
and price of the book, which will be
printed to console
*/

#pragma once

#include"media.h"
#include<iostream>
#include<iomanip>

using namespace std;

class book : public media //book class uses aspects inherited from super class
{
private:
	string author;

public:
	book() : media() //book constructor uses super constructor as its base template
	{
		author = " ";
	}

	book(string n, float p, string a) : media(n,p) //book overloaded constructor uses "name" and "price" 
	{                                              //variables from super class
		author = a;
	}

	void print()
	{
		cout << "Book" << endl;
		media::print(); //print function from super class
		cout << "Author is " << author << endl;
	}
};