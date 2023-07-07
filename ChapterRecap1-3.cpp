#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char e = 'D';

	cout << (char)tolower(e) << setw(7) << boolalpha << (bool)isdigit(e) << endl;

	float b = 5, c = 3;

	cout << fixed << setprecision(2) << pow(b, c) << endl;

	char A[4] = "HOT";

	cout << strlen(A) << endl;

	char s = 't';

	cout << s << endl;

	int x = 47;

	cout << setw(7) << setfill('*') << showpos << x << endl;

	//for this code only

	cout << noshowpos << noboolalpha;

	float y = 318.8239;

	cout << scientific << setprecision(2) << y << endl;

	bool z = 0;

	cout << !z << endl;
	return 0;
}