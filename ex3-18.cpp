#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sent, subsent;
    int index, len;
    cout << "Enter a sentence:  ";
    getline(cin, sent, '\n');
    cout << "Enter starting spot:  ";
    cin >> index;
    cout << "Enter length:  ";
    cin >> len;
    /* Add try block, where you try to save the substring into subsent
       and print the substring */
    try {
        if (index + len > sent.length())
            throw(len);
        subsent = sent.substr(index, index + len);

        cout << subsent << endl;
    }
    catch (int l)
    {
        cout << l << " is out of range" << endl;
    }
       /* Add a catch block with an out_of_range object, print the
          substring is out of range and print the what */
    return 0;
}