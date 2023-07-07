/* d2-2
User will input a float number to find the next highest number (rounded
up), it will be printed in a field width of five and a fill character
of ~,  with a plus sign preceeding positive numbers but the plus sign at
the beginning of the field width and the number at the end.
Then the user will enter a character and if the character is a letter
or number they will find out the integer ascii value, which has to be
positive, so you don't need the plus sign.
*/
#include<iostream>
#include<iomanip>

/*using namespace std;

int main()
{
	float num, highernum;
	char ascii;

	cout << "Enter float number:  ";
	cin >> num;

	highernum = (int)(num + 1);	// round up
		// add formatting to cout
	cout << "Number rounded up is " << setw(5) << setfill('~') << left << showpos << right << highernum << endl;

	cout << "Enter a character to find ascii:  ";
	cin >> ascii;

	if (isalpha(ascii) || isdigit(ascii))		// check if letter or number to print ascii
		cout << "ASCII is " << noshowpos << (int)ascii << endl;
	else
		cout << "You don't have to know that ascii\n";
}*/



