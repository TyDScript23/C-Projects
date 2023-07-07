
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <ctime>
#include <cstring>

#ifdef  _MSC_VER
#define  _CRT_SECURE_NO_WARNINGS
#endif

/*using namespace std;

int getgrades(int[]);
int sumarray(int[], int);
int main()
{
	int grades[4], size, i, sum = 0;
	float average;

	size = getgrades(grades);

	for (i = 0; i <= 2; i++)
	{
		sum += grades[i];
	}

	average = sum / 3.0;

	average = round(10 * average) / 10;

	for (i = 0; i <= 2; i++)
	{
		cout << i << "\t" << grades[i] << "\t" << &grades[i] << endl;
	}

	cout << "Your average is " << average << endl;

	cout << endl << endl;

	int j, seed, num, rolls[7];
	seed = time(NULL);
	srand(seed);
	for (j = 1; j <= 6; j++)
		rolls[j] = 0;
	for (j = 0; j < 10000; j++)
	{
		num = rand() % 6 + 1;
		rolls[num]++;
	}
	cout << "Number\tRolls\n";
	for (j = 1; j <= 6; j++)
		cout << j << "\t" << rolls[j] << endl;

	cout << endl << endl;

	int total;
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size2 = sizeof(a) / sizeof(int);
	total = sumarray(a, size2);
	cout << "Total is " << total << endl;

	cout << endl << endl;

	char name[20], course[50];
	char grade;

	cout << "What is you name? " << endl;
	cin.ignore(80, '\n');
	cin.getline(name, sizeof(name), '\n');
	cout << "Hi " << name << "!!!" << endl;
	cout << "What is the grade that you want to get in this course? " << endl;
	cin.get(grade);
	cout << "What is the name of your course? " << endl;
	cin.ignore(80, '\n');
	cin.getline(course, sizeof(course), '\n');

	cout << "Thank you for taking " << course << endl;
	cout << "Let's hope you get a/an " << grade << endl;

	cout << endl << endl;

	char article[5][5] = { "the", "a", "one", "some", "any" };
	char noun[5][5] = { "boy", "girl", "dog", "town", "car" };
	char verb[5][8] = { "drove", "jumped", "ran", "walked", "skipped" };
	char preposition[5][6] = { "to", "from", "over", "under", "on" };
	char sent[36];
	int k;

	srand(time(NULL));

	for (k = 1; k <= 10; k++)
	{
		strcpy_s(sent, article[rand() % 5]);
		sent[0] = toupper(sent[0]);
		strcat_s(sent, " ");
		strcat_s(sent, noun[rand() % 5]);
		strcat_s(sent, " ");
		strcat_s(sent, verb[rand() % 5]);
		strcat_s(sent, " ");
		strcat_s(sent, preposition[rand() % 5]);
		strcat_s(sent, " ");
		strcat_s(sent, article[rand() % 5]);
		strcat_s(sent, " ");
		strcat_s(sent, noun[rand() % 5]);
		strcat_s(sent, ".");
		cout << sent << endl;
	}

	cout << endl << endl;

	char* tokenptr;	// char pointer
	char c111[] =
		"i love programming";
	char* p;
	int index;

	tokenptr = strtok_s(c111, " .", &p); // address of c-string
 //end token at space or period
	while (tokenptr != NULL) // NULL marked at end of c-string
	{
		if (tokenptr[0] == 'a' || tokenptr[0] == 'e' || tokenptr[0] == 'i' || tokenptr[0] == 'o' || tokenptr[0] == 'u')
			cout << tokenptr << "way ";
		else
		{
			for (index = 1; index <= strlen(tokenptr); index++)
				cout << tokenptr[index];
			cout << tokenptr[0] << "ay ";
		}
		tokenptr = strtok_s(NULL, " .", &p);
		//continue search from where left off at NULL
	}

	cout << endl << endl;

	string str1, str2;

	cout << "Enter your two strings here: " << endl;
	cin >> str1 >> str2;

	if (str1 > str2)
		cout << str1 << " is greater than " << str2 << endl;
	else if (str1 < str2)
		cout << str2 << "is greater than " << str1 << endl;
	else
		cout << "The two strings are equal!!!" << endl;

	cout << endl << endl;	

	return 0;
}

int sumarray(int numarray[], int size)
{
	if (size == 1)
	{
		cout << "Returning 1" << endl;
		return 1;
	}
	else
	{
		cout << "Returning " << numarray[size- 1] << 
			" plus return from calling array with first " << 
			size - 1 << " elements" << endl;
		return (numarray[size - 1] + sumarray(numarray, size - 1));
	}

}

int getgrades(int a[])
{
	int n = 0;
	cout << "Enter grades, terminate with a  -1\n";
	cin >> a[n];
	while (a[n] != -1)
	{
		n++;
		cin >> a[n];
	}
	return n;
}*/
