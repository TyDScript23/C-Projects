#include<iostream>
#include"rectangle5-1.h"   // class definition header file

/*using namespace std;

int main()
{
    rectangle51 r[3];
    float len, wid;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        cout << "Enter length for Rectangle " << (i + 1) << ": ";
        cin >> len;
        r[i].setlength(len);  // change r's length data field
        cout << "Enter width for Rectangle " << (i + 1) << ": ";
        cin >> wid;
        r[i].setwidth(wid);
        r[i].calcarea();      // call method to update r's area field
        r[i].calcperimeter();
        cout << endl;
        // look up r's private data fields   
    }

    for (j = 0; j < 3; j++)
    {
        cout << "Rectangle " << j + 1 << ": " << endl << endl;
        cout << "Rectangle's length = " << r[j].getlength() << endl;
        cout << "Rectangle's width = " << r[j].getwidth() << endl;
        cout << "Rectangle's area = " << r[j].getarea() << endl;
        cout << "Rectangle's perimeter = " << r[j].getperimeter() << endl;
        cout << endl << endl;
    }
}*/