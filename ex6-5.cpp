#include<iostream>
#include<map>
#include<string>
#include<iterator>
#include<algorithm>

/*using namespace std;

int main()
{
    string name;
    int ans, pos;
    bool found = false;

    map<string, string> vm; // declare map of two string fields vm
    map<string, string>::iterator vmit; // declare map iterator vmit

    int dans;
    string mkey;

    cout << "Enter movie name (-1 to end):  ";
    getline(cin, name, '\n');

    while (name != "-1")
    {
        mkey = name.substr(0, 3);

        vm[mkey] = name; // insert name at mkey spot using [] notation

        cout << "Enter movie name (-1 to end):  ";
        getline(cin, name, '\n');
    }

    cout << "Enter 1 to insert, 2 to delete, 3 to search:  ";
    cin >> ans;

    if (ans == 1)
    {
        cout << "Enter movie name:  ";
        cin.ignore(1, '\n');
        getline(cin, name, '\n');

        mkey = name.substr(0, 3);

        vmit = vm.find(mkey); // search for mkey in map, assign address to iterator

        if (vmit == vm.end()) // if iterator reached end of map
        {
            vm[mkey] = name; // insert name at mkey spot with []
            cout << "Inserted " << vm[mkey] << endl;  // tell name inserted with []
        }
        else
            cout << "Already in map is " << vm[mkey] << endl; // tell name is in map with []
    }
    else if (ans == 2)
    {
        cout << "Enter 1 to delete by name value or 2 by key:  ";
        cin >> dans;

        if (dans == 1)
        {
            cout << "Enter movie name to delete:  ";
            cin.ignore(1, '\n');
            getline(cin, name, '\n');

            vmit = vm.find(name);// search for name, assign to iterator

            if (vmit != vm.end()) // if iterator reached end of map
            {
                cout << name << " erased\n";
                vm.erase(name); // delete by name value
            }
            else
                cout << name << " not in set\n";
        }
        else
        {
            cout << "Enter movie key to delete:  ";
            cin.ignore(1, '\n');
            getline(cin, mkey, '\n');

            vmit = vm.find(mkey);// search for mkey, assign to iterator

            if (vmit != vm.end()) // if iterator reached end of map
            {
                cout << "Erasing " << vmit->first << endl;  // print by name what will be deleted
                vm.erase(mkey); // delete by mkey key
            }
            else 
                cout << mkey << " not in map\n";
        }
    }

    else if (ans == 3)
    {
        cout << "Enter 1 to search by name or 2 by key:  ";
        cin >> dans;

        if (dans == 1)
        {
            cout << "Enter movie name to search for:  ";
            cin.ignore(1, '\n');
            getline(cin, name, '\n');

            for (vmit = vm.begin(); vmit != vm.end(); vmit++) // iterator loop
                if (name == vmit->second)// see if name equals iterator's second value field
                {
                    cout << "Key is " << vmit->first << endl;// print value of iterator's first key field
                    found = true;
                    break;
                }

            if (!found)
                cout << "Not found\n";
        }
        else
        {
            cout << "Enter movie key to search for:  ";
            cin.ignore(1, '\n');
            getline(cin, mkey, '\n');

            for (vmit = vm.begin(); vmit != vm.end(); vmit++) // iterator loop 
                if (mkey == vmit->first)// see if mkey equals iterator's first key field
                {
                    cout << "Name is " << vmit->second << endl; // print what name is iterator's second value field
                    found = true;
                    break;
                }

            if (!found)
                cout << "Not found\n";
        }
    }
    cout << "Number of movies in map is " << vm.size() << endl;  // print number of movies
    for (vmit = vm.begin(); vmit != vm.end(); vmit++) // iterator loop
    {
        cout << "Key is " << vmit->first << endl;// print key iterator first field
        cout << "Value is " << vmit->second << endl; // print value iterator second field
    }
}*/