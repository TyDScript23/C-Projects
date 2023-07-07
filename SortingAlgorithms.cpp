#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void bubblesort(char str[][20], int N);
void selectsort(char str[][20], int N);
void swap(char str[][20], int i, int j);

int main()
{
	char cstring[][20] = { "Tyler", "Evan", "Gretchen", "Steve", "Tinker"};
	char cstring2[][20] = { "Tyler", "Evan", "Gretchen", "Steve", "Tinker" };
	int i;

	cout << "Sorting list using Bubble Sort..." << endl;
	bubblesort(cstring, 6);

	for (i = 0; i <= 4; i++)
	{
		cout << cstring[i] << " ";
	}

	cout << endl << endl;

	cout << "Sorting list by Selection Sort..." << endl;

	selectsort(cstring2, 6);

	for (i = 0; i <= 4; i++)
	{
		cout << cstring2[i] << " ";
	}

	cout << endl << endl;

	return 0;
	
}
void bubblesort(char str[][20], int N)
{
	int pass, j;
	for (pass = 1; pass <= N - 1; pass++)  // passes
		for (j = 0; j < N - pass; j++)  // in each pass
			if (strcmp(str[j], str[j + 1]) > 0)
				swap(str, j, j + 1);
}

void selectsort(char str[][20], int N)
{
	int pass, j, min;
	for (pass = 0; pass <= N - 2; pass++)  // passes
	{
		min = pass;
		for (j = pass + 1; j < N; j++)  // in each pass
			if (strcmp(str[min], str[j]) > 0)
				min = j;
		swap(str, min, pass);
	}
}

void swap(char str[][20], int i, int j)
{
	char temp[20];
	strcpy_s(temp, str[i]);
	strcpy_s(str[i], str[j]);
	strcpy_s(str[j], temp);
}
