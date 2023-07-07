#include<iomanip>
#include<iostream>
#include<cstdlib>
#include<string>

/*using namespace std;

int main(int argc, char* argv[])	//argc - number of arguments and *argv[] - array of pointers to each of rest of arguements
{
	int i, answer = 1;

	for (i = 1; i < argc; i++)
	{
		cout << atoi(argv[i]) << endl;
		try {
			if (isdigit(* argv[i]))
				answer *= atoi(argv[i]);
			else
				throw(argv[i]);
		}
		catch (char* e)
		{
			cout << "WARNING: Non-digit argument detected!!!" << endl;
			cout << e << " is not a digit" << endl;
			return 0;
		}
	}

	cout << "Your answer is " << answer << endl;

	return 0;
}*/