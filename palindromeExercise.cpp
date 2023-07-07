/* Tyler Davis
Cstring Palindromes 10-8

This program will ask the user how many 
sentences they would like the enter and then
request the specified number of sentences
in order to apply each of them to a function
that will test whether or not they are a palindrome
*/

#include <iostream>
#include <cstring>

/*using namespace std;

const char* ignorecase(char[]);
bool checkpalindrome(char[]);

int main()
{
	int i, amount;
	char sent[1000][1000];
	cout << "How many phrases would you like to enter? " << endl;
	cin >> amount;
	cout << "Enter your phrases here: " << endl;
	
	cin.ignore(80, '\n');

	for (i = 0; i < amount; i++)
	{
		//gets the sentence inputted through the console
		cin.getline(sent[i], sizeof(sent[i]), '\n');

		//replaces input string with its ignorecase version
		strcpy_s(sent[i], ignorecase(sent[i]));
	}

	cout << endl;

	for (i = 0; i < amount; i++)
	{
		if (checkpalindrome(sent[i]))
			cout << sent[i] << " is a palindrome" << endl;
		else
			cout << sent[i] << " is not a palindrome" << endl;
	}

	return 0;
}

bool checkpalindrome(char e[])
{
	int i, length = strlen(e);
	bool ispal = 0;

	//checks to see if the letters equidistant
	//from middle of sentences are equal (is a palindrome)

	for (i = 0; i < length; i++) {
		if (e[i] != e[length - i - 1]) {
			ispal = 1;
		}
	}

	if (ispal) {
		return false;
	}
	else {
		return true;
	}
}

const char* ignorecase(char e[])
{
	int i;
	char* p;
	char* tokenptr;
	char concat[1000] = {};

	tokenptr = strtok_s(e, " .:?!;,", &p);

	//each word in the sentence is concatenated
	while (tokenptr != NULL)
	{
		strcat_s(concat,sizeof(concat), tokenptr);
		tokenptr = strtok_s(NULL, " .:?!;,", &p);
	}

	//cstring is changed to lowercase
	for (i = 0; i < strlen(concat); i++)
	{
		concat[i] = tolower(concat[i]);
	}

	return concat;
}*/