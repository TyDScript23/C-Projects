/*Tyler Davis
Lab Exercise 1-5
This program will display a list of tempertures in both Fahrenheit and Celsius
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double m;

	cout << "Fahrenheit" << setw(20) << "Celsius" << endl;

	for (m = 0; m <= 212; m++)
	{
		cout.setf(ios::fixed);
		cout << "   " << setw(3) << setprecision(0) << setfill(' ') << noshowpos << m << setw(17)
			<< right << setfill('.') << " " << right << setprecision(3) << showpos << (m - 32) * ((double)5 / 9) << endl;
	}
}