/* Bill Wohlleber
Exercise 1-11b
This program will print a temperature table
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int fah, f1, f2;
	float cel;
	cout.setf(ios::showpoint|ios::fixed);

	cout << "Enter starting fahrenheit:  ";
	cin >> f1;
	cout << "Enter ending fahrenheit:  ";
	cin >> f2;

	cout << "Fahrenheit" << setw(12) << "Celsius" << endl;
	for (fah = f1; fah <= f2; fah++)
	{
		cel = (fah - 32) * 5 / 9.0;
		cout << setw(6) << resetiosflags(ios::showpos) << setfill(' ') << fah
			<< setw(16) << setiosflags(ios::showpos) << setfill('0')
				<< setprecision(3) << cel << endl;
	}
	return 0;
}
