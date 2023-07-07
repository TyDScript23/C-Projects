// Chapter2Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <ctime>

/*using namespace std;

int triple(int);
void makeSquare(int, char);
int power(int,int);
int gcd(int, int);
void perfect(int);
void seedrandoms(void);
int getdice(void);
int throw2dice(void);
void rethrow(int);
double getTax(int);
void applyCurve(double, double c = .20);
void printReceipt(double, double);
void findSalary(int, double);
void findSalary(int, double, int);

template <class T>
void findLargest(T,T,T);

int main()
{
	/*char ch;

	cout << "Input characters (<ctrl>z to end): ";

	while ((ch = cin.get()) != EOF)
	{
		cout.put(ch);
	}

	float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	double distance;

	cout << "Input the coordinates of the first point (x y): " << endl;
	cin >> x1 >> y1;
	cout << "input the coordinates for the second point (x y): " << endl;
	cin >> x2 >> y2;

	distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	cout << "The distance between the two points is " << distance << endl;
	cout << endl << endl;

	int first = 0, second = 0, answer = 0, guess = 0, seed;

	seed = time(NULL);
	srand(seed);

	first = rand() % 13;
	second = rand() % 13;
	answer = first * second;

	cout << "Your multiplication problem is: " << first << " * " << second << endl;
	cout << "What is the answer? " << endl;

	cin >> guess;

	while (guess != answer)
	{
		cout << "Sorry, that is wrong. Try again..." << endl;
		cin >> guess;
	}

	cout << "You got it right!!!" << endl;

	cout << endl << endl;

	int toss, i, heads = 0, tails = 0;

	seed = time(NULL);
	srand(seed);

	for (i = 1; i <= 100; i++)
	{
		toss = rand() % 2;
		if (toss == 0)
			heads++;
		else
			tails++;
	}
	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;

	cout << endl << endl;

	//game of craps

	int sum;
	seedrandoms();
	sum = throw2dice();

	switch (sum)
	{
	case 7: case 11:
		cout << "You win!\n";
		break;
	case 2: case 3: case 12:
		cout << "You lose!\n";
		break;
	default:
		rethrow(sum);
	}

	cout << endl << endl;

	int card1, card2, total;
	char choice;
	srand(seed);

	cout << "Would you like to draw your cards? " << endl;
	cin >> choice;

	while (choice == 'Y' || choice == 'y') {

		card1 = rand() % 14 + 1;
		card2 = rand() % 14 + 1;

		total = card1 + card2;
		
		if (total <= 21)
		{
			cout << "You drew " << card1 << " and " << card2 << endl;
			cout << "You win!!!" << endl;
			cout << "you were " << 21 - total << " away from 21." << endl;
			cout << "Would you liek to try again? (y or n)" << endl;
			cin >> choice;
		}
		else
		{
			cout << "You drew " << card1 << " and " << card2 << endl;
			cout << "You lose!!!" << endl;
			choice = ' ';
		}
	}
	cout << endl << endl;

	int num = 0;

	cout << "Enter an integer here: " << endl;
	cin >> num;

	cout << "The number entered x3 is: " << triple(num) << endl;


	cout << endl << endl;

	int length;
	char material;

	cout << "Enter the length of the square here: " << endl;
	cin >> length;
	cout << "Enter the character you want the square to be made out of here: " << endl;
	cin >> material;

	makeSquare(length, material);

	cout << endl << endl;

	int base, exponent;

	cout << "Enter the number here: " << endl;
	cin >> base;
	cout << "Enter the power you want to raise the number to here: " << endl;
	cin >> exponent;

	cout << "Your answer is: " << power(base, exponent) << endl;
	cout << endl << endl;

	int fir, sec;

	cout << "Enter you two numbers here: " << endl;
	cin >> fir >> sec;

	cout << "The greatest common divisor is: " << gcd(fir, sec) << endl;
	cout << endl << endl;

	cout << "Here is a list of perfect numbers: " << endl;

	for (i = 1; i <= 1000; i++)
		perfect(i);

	cout << endl << endl;

	int itemID, itemNum;
	double tax, subtotal;

	cout << "Which item would you like to purchase? (1,2,or 3)" << endl;
	cin >> itemID;
	cout << "How many of this item would you like to purchase? " << endl;
	cin >> itemNum;

	switch (itemID)
	{
	case 1:
		subtotal = 10 * itemNum;
		tax = getTax(subtotal);
		break;
	case 2:
		subtotal = 12 * itemNum;
		tax = getTax(subtotal);
		break;
	case 3:
		subtotal = 14 * itemNum;
		tax = getTax(subtotal);
		break;
	}

	printReceipt(subtotal, tax);

	cout << endl << endl;

	double agrade, curve;

	cout << "Enter the class average here: " << endl;
	cin >> agrade;

	if (agrade >= 85 && agrade < 100)
	{
		curve = .10;
		applyCurve(agrade, curve);
	}
	else if (agrade >= 60 && agrade < 85)
		applyCurve(agrade);
	else if (agrade >= 0 && agrade < 60)
	{
		curve = .30;
		applyCurve(agrade, curve);
	}
	else
	{
		cout << "That is not a valid grade!!!" << endl;
	}

	cout << endl << endl;

	int choice2, i1, i2, i3;
	float f1, f2, f3;
	char c1, c2, c3;
	cout << "Would you like to enter integers, floats, or characters? (1 = integers, 2 = floats, 3 = characters)" << endl;
	cin >> choice2;

	switch (choice2)
	{
	case 1:
		cout << "Enter three integers here: " << endl;
		cin >> i1 >> i2 >> i3;
		findLargest(i1, i2, i3);
		break;
	case 2:
		cout << "Enter three floats here: " << endl;
		cin >> f1 >> f2 >> f3;
		findLargest(f1, f2, f3);
		break;
	case 3:
		cout << "Enter three characters here: " << endl;
		cin >> c1 >> c2 >> c3;
		findLargest(c1, c2, c3);
		break;
	}

	cout << endl << endl;

	int hours, overtime;
	double rate;
	char response;

	cout << "How many hours did you work this week? " << endl;
	cin >> hours;
	cout << "What is your rate of pay? " << endl;
	cin >> rate;
	cout << "Did you work any overtime this week? (y or n)" << endl;
	cin >> response;

	if (response == 'Y' || response == 'y')
	{
		cout << "How many hours of overtime did you work? " << endl;
		cin >> overtime;
		cout << "Calculating pay..." << endl;
		findSalary(hours, rate, overtime);
	}
	else
	{
		cout << "Calculating pay..." << endl;
		findSalary(hours, rate);
	}

	cout << endl << endl;
}

int triple(int x)
{
	x *= 3;
	return x;
}

void makeSquare(int l, char m)
{
	int i , j;
	for(i = 1; i <= l; i++)
	{
		for (j = 1; j <= l; j++)
		{
			cout << m;
		}
		cout << endl;
	}
}

int power(int b, int p)
{
	int first,i;
	first = b;

	for (i = 1; i < p; i++)
	{
		b *= first;
	}

	return b;
}

int gcd(int f, int s)
{
	int gcd,i;

	for (i = 1; i <= f && i <= s; i++)
	{
		if (f % i == 0 && s % i == 0)
			gcd = i;
	}

	return gcd;
}

void perfect(int num)
{
	int j, sum = 0;

	for (j = 1; j < num; j++)
	{
		if (num % j == 0)
			sum += j;
	}

	if (num == sum)
		cout << num << " is a perfect number." << endl;
}

void seedrandoms(void)
{
	int seed;
	seed = time(NULL);
	srand(seed);
}

int getdie(void)
{
	return rand() % 6 + 1;
}

int throw2dice(void)
{
	int throw1, throw2;
	throw1 = getdie();
	throw2 = getdie();
	cout << "You threw " << throw1 << " and " << throw2 << endl;
	return throw1 + throw2;
}

void rethrow(int oldsum)
{
	int newsum;
	do
		newsum = throw2dice();
	while (newsum != 7 && newsum != oldsum);
	
	if (newsum == 7)
		cout << "You lose!\n";
	else
		cout << "You win!\n";
}

double getTax(int stot)
{
	return stot * .0825;
}

void printReceipt(double tot, double tax)
{
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Subtotal: $" << setprecision(2) << tot
		<< endl << "Tax: $" << tax << endl
		<< "------------------------" << endl << "Total: $"
		<< tot + tax << endl;
}

void applyCurve(double g, double c)
{
	g += (g*c);
	cout << "The curve being applied to the grade is " << (int)(c * 100) << "%" << endl;
	cout << "Your new grade is: " << g << endl;
}

template <class T>
void findLargest(T f, T s, T thir)
{
	if (f > s && f > thir)
	{
		cout << f << " is the largest" << endl;
	}
	else if (s > f && s > thir)
	{
		cout << s << " is the largest" << endl;
	}
	else if (thir > s && thir > f)
	{
		cout << thir << " is the largest" << endl;
	}
	else
	{
		cout << "Could not determine the largest value..." << endl;
	}
}

void findSalary(int h, double r, int oh)
{
	double pay;
	pay = (h * r) + (oh * (r * 1.5));
	cout << "Your final pay is $" << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << setw(5) << pay << endl;
}

void findSalary(int h, double r)
{
	double pay;
	pay = h * r;
	cout << "Your final pay is $" << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << setw(5) << pay << endl;
}*/