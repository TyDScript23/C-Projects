/*Tyler Davis
Lab Exercise 1-5
This program will calculate interest on multiple loans
*/

#include <iostream>
#include <iomanip>

using namespace std;

/*int main() {
	double principle = 0, rate = 0, interest;
	int days = 0;

	//principle amount is first entered for the loop
	cout << "Enter principle (-1 to end)" << endl;
	cin >> principle;

	while (principle != -1)
	{
		//interest rate is prompted and entered
		cout << "Enter annual interest rate (as a decimal):" << endl;
		cin >> rate;

		//number of days is prompted and entered
		cout << "Enter number of days: " << endl;
		cin >> days;

		//interest is calculated
		interest = principle * rate / 365 * days;

		cout.setf(ios::fixed | ios::showpoint);

		//interest is formatted and printed to console
		cout << "Interest is " << setprecision(2) << interest << endl;
		cout << "Enter principle (-1 to end): " << endl;
		cin >> principle;
	}
}*/