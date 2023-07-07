#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>

/*using namespace std;

bool btf(string);

int main()
{
    string name;
    int vcount;
    bool found = false;

    string mar[3] = { "Planet of Apes", "Back to the Future",
        "Spaceballs" };

    vector<string> vm(3);// declare vector of strings of size 3 called vm
    vector<string>::iterator vmit;// declare iterator vmit
    ostream_iterator<string> osit(cout, "\n");// declare iterator to cout osit

    copy(mar, mar + 3, vm.begin());// copy array from beginning to end to beginning of vector
    copy(vm.begin(), vm.end(), osit);// copy vector from beginning to end to output iterator

    cout << "Enter movie name to insert:  ";
    getline(cin, name, '\n');
    
    vm.push_back(name);// insert name at end of vector

    vcount = (int)count(vm.begin(), vm.end(), "Back to the Future"); // count "Back to the Future", save to vcount
    cout << vcount << " Back to the Futures\n";


    vmit = find_if(vm.begin(), vm.end(), btf); // search vector beginning to end if return of function btf, assign to iterator

    if (vmit < vm.end())// if vector iterator is less than the end of the vector
        cout << *vmit << endl;// print what found at iterator
    else
        cout << "Not found\n";

    vmit = max_element(vm.begin(), vm.end());    // find maximum of vector from beginning to end assign to vector iterator
    cout << "Maximum element is " << *vmit << " at spot " << vmit - vm.begin() << endl; // print maximum at iterator
    vmit = min_element(vm.begin(), vm.end());   // find minimum of vector from beginning to end assign to vector iterator
    cout << "Minimum element is " << *vmit << " at spot " << vmit - vm.begin() << endl;   // print minimum at iterator

    sort(vm.begin(), vm.end());   // sort vector from beginning to end

    cout << "You have " << vm.size() << " movies in vector" << endl;    // print number in vector
    copy(vm.begin(), vm.end(), osit);      // copy vector to output iterator
}

bool btf(string s)
{
    string b = "Back to the Future";

    if (s != b)
        return false;
    else
        return true;
}*/
