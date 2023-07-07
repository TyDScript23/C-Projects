/* Bill Wohlleber
Exercise 6-3a
This program will create a movie list
*/
#include<iostream>
#include<list>
#include<string>
#include<iterator>
#include<algorithm>

/*using namespace std;

int main()
{
    string name;
    int ans, pos;
    bool found = false;
    
    list<string> vm;// declare list of strings called vm
    list<string>::iterator vmit;// declare list iterator vmit
    ostream_iterator<string> osit(cout, "\n");// declare iterator to cout osit

    cout << "Enter movie name (-1 to end):  ";
    getline(cin, name, '\n');

    while (name != "-1")
    {
        vm.push_back(name); // insert name at end of list
        cout << "Enter movie name (-1 to end):  ";
        getline(cin, name, '\n');
    }

    cout << "Enter 1 to insert, 2 to delete:  ";
    cin >> ans;

    if (ans == 1)
    {
        cout << "Enter movie name:  ";
        cin.ignore(1, '\n');
        getline(cin, name, '\n');
        vm.push_front(name); // insert name at beginning of list
    }
    else if (ans == 2)
    {
        cout << "Enter movie name to delete:  ";
        cin.ignore(1, '\n');
        getline(cin, name, '\n');
        vm.remove(name);// delete name from list
    }

    cout << "Number of movies in list is " << vm.size() << endl; // print number of movies
    vm.sort(); // sort list
    copy(vm.begin(), vm.end(), osit);// copy list to cout iterator
}*/