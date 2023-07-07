/*Tyler Davis
Lab Exercise 1-5
This program will accept a decimal or hexidecimal number
and apply an action to it based on user choice

Actions:
1. Cosine Functions
2. Logarithmic Functions
3. Hexidecimal/Decimal Conversions
4. Exiting the program
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int choice, subchoice;
	string snum;
	double num;
	char permission;
	bool lower;

	cout << "Would you like to enter a number? (y or n)" << endl;
	cin >> permission;
	cout << endl;
	//prompts user to start processes
	while (permission == 'y' || permission == 'Y')
	{
		cout << "Which function do you want to apply to your number? " << endl;
		cout << endl;
		cout << "1 = Cosine\n2 = Logarithms\n3 = Decimal and Hex Conversions\n4 = Exit the program " << endl;
		cout << endl;
		cout << "Put choice here: " << endl;
		cin >> choice;
		cout << endl;
		//accepts user's desired action

		if (choice == 1)
		{
			cout << "Input your number: " << endl;
			cin >> snum;
			num = stod(snum);
			cout << "\nWould you like to find the cosine, arc cosine, or hyperbolic cosine?" << endl;
			cout << endl;
			cout << "1 = Cosine\n2 = Arc Cosine\n3 = Hyperbolic Cosine " << endl;
			cout << endl;
			cout << "Put choice here: " << endl;
			cin >> subchoice;

			if (subchoice == 1)
			{
				cout << "\nThe cosine of " << num << " is " << cos(num);
			}
			else if (subchoice == 2)
			{
				cout << "\nThe arc cosine of " << num << " is " << acos(num);
			}
			else if (subchoice == 3)
			{
				cout << "\nThe hyperbolic cosine of " << num << " is " << cosh(num);
			}
			else
			{
				cout << "\nThat is not an option!!!" << endl;
			}
		}
		else if (choice == 2)
		{
			cout << "Input your number: " << endl;
			cin >> snum;
			num = stod(snum);
			cout << "Would you like to find the common or natural logarithm? " << endl;
			cout << endl;
			cout << "1 = Common Logarithm\n2 = Natural Logarithm " << endl;
			cout << endl;
			cout << "Put choice here: " << endl;
			cin >> subchoice;

			if (subchoice == 1)
			{
				cout << "\nThe common logarithm of " << num << " is " << log10(num);
			}
			else if (subchoice == 2)
			{
				cout << "\nThe natural logarithm of " << num << " is " << log(num);
			}
			else
			{
				cout << "\nThat is not an option!!!" << endl;
			}
		}
		else if (choice == 3)
		{
			cout << "Input your number: " << endl;
			cin >> snum;
			cout << "Would you like to convert from decimal to hexidecimal or hexidecimal to decimal? " << endl;
			cout << endl;
			cout << "1 = Decimal to Hexidecimal\n2 = Hexidecimal to Decimal " << endl;
			cout << endl;
			cout << "Put choice here: " << endl;
			cin >> subchoice;

			if (subchoice == 1)
			{
				num = stoi(snum);
				cout << "\nWould you like to use lowercase or uppercase letters in the answer? " << endl;
				cout << endl;
				cout << "Lowercase = true\nUppercase = false" << endl;
				cout << endl;
				cout << "Put choice here: " << endl;
				cin >> boolalpha >> lower;

				//user chooses how to format the conversion

				if (lower)
				{
					cout << "\n" << num << " converted to hexidecimal is " << hex << (int)num << endl;
					cout << dec << endl;
				}
				else if (!lower)
				{
					cout << "\n" << num << " converted to hexidecimal is " << uppercase << hex << (int)num << endl;
					cout << dec << nouppercase << endl;
				}
				else
				{
					cout << "That is not an option!!!" << endl;
				}
			}
			else if (subchoice == 2)
			{
				num = stoi(snum,nullptr, 16);
				//formats integer to specified base (hexidecimal)
				cout << "\n" << hex << (int)num << " converted to decimal is " << num << endl;
			}
			else
			{
				cout << "\nThat is not an option!!!" << endl;
			}
		}
		else if (choice == 4)
		{
			cout << "\nYou have chosen to exit the program..." << endl;
			return 0;
			//forced exit
		}
		else
		{
			cout << "\nThat is not an accepted choice!!!" << endl;
		}

		cout << "\nWould you like to choose another option? (y or n)" << endl;
		cin >> permission;
		cout << endl;

		//allows for the while loop to start over (input another number)
	}
	return 0;
}