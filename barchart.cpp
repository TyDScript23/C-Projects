/*
Tyler Davis
Bar Chart - Reference Variables and Pointers

This program will create three pointers of
size 30 and will fill them with characters up 
to the point specified by three random integer values
between 1 and 30 that correspond with that particular
array

Output - printed to console
*/

#include<iostream>

/*using namespace std;

void refrandom(int*, int*, int*);
void pointfill(int, char, char*);

int main()
{
	int len1, len2, len3, i;
	char bar1[30], bar2[30], bar3[30];
	srand(time(NULL));

	//inputs 3 values a changes them using pointers
	refrandom(&len1, &len2, &len3);

	cout << len1 << " " << len2 << " " << len3 << endl;

	//sends each array to a function to be filled
	pointfill(len1, '@', bar1);
	pointfill(len2, '~', bar2);
	pointfill(len3, ';', bar3);

	cout << bar1 << endl;
	cout << bar2 << endl;
	cout << bar3 << endl;

	return 0;
}

void pointfill(int x, char y, char *z)
{
	char *endpt;
	endpt = z + x;

	//sets each space to the desired character
	while (z < endpt)
	{
		*z = y;
		z ++;
	}
	
	//provides an endpoint for the array
	*z = '\0';
}

void refrandom(int *x, int *y, int *z)
{
	//each integer variable is set to a random
	//integer between 1 and 30
	*x = rand() % 30 + 1;
	*y = rand() % 30 + 1;
	*z = rand() % 30 + 1;
}*/