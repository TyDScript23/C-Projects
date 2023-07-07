/* Bill Wohlleber
Exercise 6-2 movie
This class will define a movie
*/
#include<iostream>
#include<string>
using namespace std;

class movie62
{
private:
	string name;
	int year;

public:
	movie62()
	{
		name = "";
		year = 0;
	}
	movie62(string n, int y)
	{
		name = n;
		year = y;
	}

	string getname()
	{
		return name;
	}
	int getyear()
	{
		return year;
	}

	void print()
	{
		cout << "Movie Name = " << name << endl;
		cout << "Movie Year = " << year << endl;
	}
};

