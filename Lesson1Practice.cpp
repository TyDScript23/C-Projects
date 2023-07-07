// Lesson1Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include<iomanip>

/*using namespace std;

int main()
{
	//exercise 1
	float cel,far;
	cout << "Enter a temperature in Fahrenheit: " << endl;
	scanf_s("%f", &far);
	cel = (far - 32) * ((float)5.0 / 9);
	cout.setf(ios::fixed | ios::showpoint);
	printf("Your temperature in Celsius is %5.2f\n", cel);

	//exercise 2
	float miles, gallons, ratio;
	cout << "Enter the number of miles driven: " << endl;
	cin >> miles;
	cout << "Enter the number of gallons used: " << endl;
	cin >> gallons;
	ratio = miles / gallons;
	cout.setf(ios::fixed | ios::showpoint);
	cout << "The ratio of miles to gallons is " << setprecision(1) << ratio << endl << endl;

	//exercise 3
	float wage, hours, pay{}, overtime;
	cout << "Enter the number of hours you worked: " << endl;
	cin >> hours;
	cout << "Enter your hourly wage: " << endl;
	cin >> wage;
	if (hours > 40)
	{
		cout << "You are getting overtime pay..." << endl;
		overtime = hours - 40;
		pay = wage * hours - overtime;
		pay += (wage * 1.5) * overtime;
	}
	else
	{
		pay = wage * hours;
	}
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Your weekly pay is $" << setprecision(2) << pay << endl << endl;

	//exercise 4
	char position;
	pay = 0;
	cout << "Enter the number of hours you have worked: " << endl;
	cin >> hours;
	cout << "Enter a letter for your position: " << endl;
	cin >> position;
	switch (position)
	{
	case 'M':
		wage = 12;
		break;
	case 'L':
		wage = 8;
		break;
	case 'W':
		wage = 6;
		break;
	case 'T':
		wage = 5;
		break;
	default:
		cout << "Illegal choice detected!!!" << endl;
		break;
	}
	pay = hours * wage;

	cout.setf(ios::fixed | ios::showpoint);
	cout << "Your weekly pay is $" << setprecision(2) << pay << endl << endl;

	//exercise 5
	float principle = 0, rate = 0, interest;
	int days = 0;
	char choice;

	cout << "Would you like to calculate your interest? (Y or N)" << endl;
	cin >> choice;

	while (choice == 'Y' || choice == 'y')
	{
		cout << "Enter your starting amount: " << endl;
		cin >> principle;
		cout << "Enter the rate of interest: " << endl;
		cin >> rate;
		cout << "Enter the number of days: " << endl;
		cin >> days;
		interest = principle * rate * days;
		cout.setf(ios::fixed | ios::showpoint);
		cout << "Your calculated total after interest is $" << setprecision(2) << interest << endl;
		cout << "Would you like to calculate another payment?" << endl;
		cin >> choice;
	}

	cout << "Thank you for using our calculator!!!" << endl << endl;

	//exercise6
	float salary, crate, sales;
	choice = ' ';
	cout << "Would you like to calculate an employee salary? (Y or N)" << endl;
	cin >> choice;
	while (choice == 'Y' || choice == 'y')
	{
		cout << "Enter the salary of the employee: " << endl;
		cin >> salary;
		cout << "Enter the commission rate for the employee: " << endl;
		cin >> crate;
		cout << "Enter the sales accumulated by the employee: " << endl;
		cin >> sales;
		salary += crate * sales;
		cout << "The total salary for this employee is " << salary << endl;
		cout << "Would you like to enter another employee? (Y or N)" << endl;
		cin >> choice;
	}

	cout << "Thank you for using our calculator!!!" << endl << endl;

	//exercise 7
	int product = 0, amount = 0;
	double price = 0.0, total = 0.0;
	choice = ' ';
	cout << "Would you like to purchase a product? (Y or N)" << endl;
	cin >> choice;

	while (choice == 'Y' || choice == 'y')
	{

		cout << "Enter the number product you would like to purchase: " << endl;
		cin >> product;
		cout << "How much of this product would you like to purchase?" << endl;
		cin >> amount;

		switch (product)
		{
		case 1:
			price = 2.98;
		case 2:
			price = 4.50;
		case 3:
			price = 9.98;
		case 4:
			price = 4.49;
		case 5:
			price = 6.87;
		}
		total += price * amount;

		cout << "Would you like to purchase another product? " << endl;
		cin >> choice;
	}

	cout.setf(ios::fixed | ios::showpoint);
	cout << "Your price total is $" << setprecision(2) << total << endl;
	cout << "Thank you for using our calculator!!!" << endl << endl;

	//exercise 8
	int numint = 0, i = 0, value = 0;
	float average;
	total = 0;
	cout << "How many integers do you wish to enter? " << endl;
	cin >> numint;

	if (numint != 0)
	{
		for (i = 1; i <= numint; i++)
		{
			cout << "Enter number " << i << " : " << endl;
			cin >> value;
			total += value;
		}
		average = total / numint;
		cout << "Your average is " << average << endl;
	}
	else
	{
		cout << "Well goodbye then..." << endl;
	}

	cout << "Thank you for using our calculator!!!" << endl << endl;

	//exercise 9

	int j;

	cout << "Here is an ASCII Table: ";

	for (j = 0; j <= 255; j++)
	{
		printf("Letter: %8c\tDecimal: %d\tHexadecimal: %x\tOctadeciaml %o\n", (char)j, j, j, j);
	}

	cout << "Finished!!!" << endl << endl;

	//exercise 10

	int k;

	cout << "Here is the numebrs 1-50 and there corresponding hex values: " << endl;

	for (k = 1; k <= 50; k++)
	{
		cout << setw(9) << setfill('.') << "Decimal: " << dec << k << setw(9) << setfill('.') << "  Hexidecimal: " << hex << k << endl;
	}

	cout << "Finished!!!" << endl << endl;

	//exercise 11

	int m, end;

	cout << "Input the starting Fahrenheit temperature: " << endl;
	scanf_s("%d", &m);
	cout << "Input the ending Fahrenheit temperature: " << endl;
	scanf_s("%d", &end);

	for (m = 0; m <= end; m++)
	{
		cout << "\tFarhenheit\tCelsius";
		printf("Fahrenheit: %d\tCelsius %d\n", m, (m - 32) * ((float)5 / 9));
	}

	cout << "Finished!!!" << endl << endl;

	//exercise 12
	int first, second, answer;

	for (first = 0; first <= 12; first++)
	{
		for (second = 0; second <= 12; second++)
		{
			answer = first * second;
			cout << dec << first << " * " << dec << second << "=   " << dec << answer << endl;
		}

		cout << endl << endl;
	}

	return 0;
}*/