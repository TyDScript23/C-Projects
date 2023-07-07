/*Tyler Davis
Exercise 3-7

This program will randomly generate a sentence 
with proper grammar from words contained in arrays

The process will loop 10x
*/

#include<iostream>
#include<cstring>
#include<ctime>
#include<cmath>
#include<cctype>
/*using namespace std;

int main()
{
	char article[5][5] = { "the", "a", "one", "some", "any" };
	char noun[5][5] = { "boy", "girl", "dog", "town", "car" };
	char verb[5][8] = { "drove", "jumped", "ran", "walked", "skipped" };
	char preposition[5][6] = { "to", "from", "over", "under", "on" };
	char sent[36];
	int i;
	srand(time(NULL));

	for (i = 1; i <= 10; i++)
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

	return 0;
}*/