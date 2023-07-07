#include<iostream>
#include<fstream>

/*using namespace std;

int main()
{
	int num[10], x, average, total = 0, i = 0;

	ifstream infile;
	ofstream outfile;

	infile.open("gradesin.txt", ios::in); //open as an input file
	outfile.open("gradesout.txt", ios::out); //output file

	if (!infile)		// see if exists
		cout << "Input file can't be opened" << endl;
	else if (!outfile)	// see if can exist
		cout << "Output file can't be opened" << endl;

	//else continued

	else 		// established connection to both files
	{
		while (!infile.eof())	// check for end of input file
		{
			infile >> num[i];
			total += num[i];
			i++;
		}

		average = total / i;
		outfile << average << endl;

		infile.close();	// close files when done
		outfile.close();
	}
	return 0;
}*/