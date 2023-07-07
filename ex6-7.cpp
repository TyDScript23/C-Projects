#include<iostream>
#include<string>
#include"llist6-7.h"

using namespace std;

int main()
{
    llist67<string> movienames;
    string mname;

    cout << "Enter a movie name (-1 to end):  ";
    getline(cin, mname);

    while (mname != "-1")
    {
        movienames.addn(mname);

        cout << "Enter a movie name (-1 to end):  ";
        getline(cin, mname);
    }

    cout << "Enter movie to search:  ";
    getline(cin, mname);

    if (movienames.search(mname))
        cout << "Found\n";
    else
        cout << "Not found\n";

    movienames.display();
}