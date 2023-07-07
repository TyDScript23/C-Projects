#include<iostream>
#include<iomanip>
#include<cstring>
#include<cctype>
#include<cstdlib>

/*using namespace std;

int main()
{
    int num, den = 0, i;
    float ans;
    char snum[10], sden[10];
    cout.setf(ios::fixed | ios::showpoint);
    cout << "Enter fraction (ex. 2/3):  ";
    cin.getline(snum, sizeof(snum), '/');    // numerator until /
    cin.getline(sden, sizeof(sden), '\n');  // denomiator until enter
    // add try block
    try {
        for (i = 0; i < strlen(snum); i++)
            if (!isdigit(snum[i]))
                // if not digit, throw the char
                throw(snum[i]);
                // convert all digit cstring to int numerator
        num = atoi(snum);
                // repeat for denomiator

        den = atoi(sden);

        for (i = 0; i < strlen(sden); i++)
        {
            if (!isdigit(sden[i]))
                throw(sden[i]);
            // check if denominator is zero
            if (den == 0)
                throw(den);
            // if true, throw the int denominator
        }

        ans = (float)num / den;
        cout << "Decimal answer is " << ans << endl;
    }
    catch(char e) {
        cout << e << " is not a digit" << endl;
    }
    catch (int e){
        cout << e << " is not a valid denominator" << endl;
    }
    // catch block for char -
    // print that not a digit

    // print that not valid denominator
    return 0;
}*/