/* Bill Wohlleber
Exercise 6-2a
This program will create a movie vector
*/
#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
#include"movie6-2.h"

/*using namespace std;

int main()
{
    string name;
    int ans, pos, year;
    movie62 m;
    bool found = false;

    vector<movie62> vm; // declare vector of movie62 objects called vm
    vector<movie62> ::iterator vmit;// declare vector iterator of movie62 objects vmit
    ostream_iterator<movie62> osit(cout, "\n");// declare iterator to cout osit

    cout << "Enter movie name (-1 to end):  ";
    getline(cin, name, '\n');

    while (name != "-1")
    {
        cout << "Enter year:  ";
        cin >> year;
        m = movie62(name, year);

        vm.push_back(m);// insert new movie at end of vector
        cin.ignore(1, '\n');
        cout << "Enter movie name (-1 to end):  ";
        getline(cin, name, '\n');
    }

    cout << "Enter movie name to search for:  ";
    getline(cin, name, '\n');

    for (vmit = vm.begin(); vmit < vm.end(); vmit++)// iterator loop
        if (name == vmit->getname())// test input name against name field at iterator
        {
            cout << "Movie made in year " << vmit->getyear() <<
                " is in vector\n";// print year field at iterator
            found = true;
            break;
        }

    if (!found)
        cout << "Movie not in vector\n";

    cout << "Number of movies in vector is " << vm.size() <<
        " movies in vector\n";// print number of movies

    for (vmit = vm.begin(); vmit < vm.end(); vmit++)  // iterator loop
        vmit->print(); // call print function of movie object where iterator is
}*/
