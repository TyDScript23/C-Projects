/*
Tyler Davis
Week 14-- List Random Numbers

This program will generate a list of
random integers from 1 to 150 and
print them out to console. It will then 
calculate the sum, mean, median, and range 
of the set of numbers
*/

#include<iostream>
#include<iomanip>
#include<list>
#include<iterator>
#include<algorithm>

/*using namespace std;

int main()
{
	list<int> lm;
	list<int>::iterator lmit;
	ostream_iterator<int> osit(cout, "\n");
	int count, i, j, seed, sum = 0, median = 0, range;
	float mean;

	cout << "How many numbers would you like to add? " << endl;
	cin >> count;
	cout << endl;

	seed = time(NULL);
	srand(seed);

	for (i = 0; i < count; i++) //loop to generate random number list - size is specified
	{
		lm.push_back(rand() % 150);
	}

	lm.sort();
	copy(lm.begin(), lm.end(), osit);
	cout << endl;

	for (lmit = lm.begin(); lmit != lm.end(); lmit++) //adds whatever the iterator is pointing to to "total", then increments the iterator
	{                                                
		sum += *lmit;
	}

	mean = (float)sum / lm.size(); //calculates the average of the data set
	
	for (lmit = lm.begin(), j = 0; j <= (lm.size() / 2);lmit++, j++) //iterator increments half way through the data set and sets "median" 
	{                                                               //to each value it points at - "j" is used to limit loop repetitions
		median = *lmit;
	}

	range = *max_element(lm.begin(), lm.end()) - *min_element(lm.begin(), lm.end()); //range is max value minus min value

	cout << "Sum: " << sum << endl;
	cout.setf(ios::showpoint | ios::fixed);
	cout << "Mean: " << setprecision(3) << mean << endl;
	cout << "Median: " << median << endl;
	cout << "Range: " << range << endl;

	return 0;
}*/