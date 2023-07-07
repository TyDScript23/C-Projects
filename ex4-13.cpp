/* Bill Wohlleber
Exercise 4-13d
This program will make a student structure
*/
#include<iostream>
#include"student4-13.h"   // define student and address structures
using namespace std;

void printStudent(student*);

int main()
{
    student s;  // array of two student structures
    int i, j = 0;
    student* p;
    s.length = 2;

    for (i = 0; i < 2; i++)
    {
        cout << "Enter Student First Name:  ";
        cin >> s[i].first;   // input into the ith student's first name field
        cout << "Enter Student Last Name:  ";
        cin.ignore(1, '\n');   // clear enter
        cin >> s[i].last;
        cout << "Enter Street Address:  ";
        cin.ignore(1, '\n');
        cin.getline(s[i].home.street, sizeof(s[i].home.street), '\n'); // whole line for street
        cout << "Enter City:  ";
        cin.getline(s[i].home.city, sizeof(s[i].home.city), '\n');
        cout << "Enter State (ex. NY):  ";
        cin >> s[i].home.state;
        cout << "Enter Zip Code:  ";
        cin.ignore(1, '\n');
        cin >> s[i].home.zip;
        cout << "Enter Class Year:  ";
        cin >> s[i].year;
        cout << endl;
    }

    p = s;

    // pass student array to separate function - student pointer

    while (p != s + 2) // change to while pointer comparison loop
    {
        printStudent(p);
        p++;
    }
}

void printStudent(student* s)
{
        cout << "\n\n";    // change to print fields using pointer and arrow operator
        cout << s -> first << " " << s -> last << "  " << s -> year << endl;
        cout << s -> home.street << endl;
        cout << s -> home.city << ", " << s -> home.state << "  " << s -> home.zip << endl;
}