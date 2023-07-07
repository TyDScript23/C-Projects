/*#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctime>

using namespace std;

int valneg(int);
void pointneg(int*);
void refneg(int&);
void calcPoints(int&);
void tripleNum(int&, int*);
int getGrades(int[]);
void fillrolls(int[]);
void printrolls(int[]);

int main()
{
    int num1, num2, num3;
    cout << "Enter an integer to negate by value:  ";
    cin >> num1;
    num1 = valneg(num1);
    cout << "The value of num1 in main is " << num1 << endl;
    cout << "The address of num1 in main is " << &num1 << endl;
    cout << "Negate by value is " << num1 << endl;

    cout << "\nEnter an integer to negate by pointer:  ";
    cin >> num2;
    pointneg(&num2);
    cout << "The value of num2 in main is " << num2 << endl;
    cout << "The address of num2 in main is " << &num2 << endl;
    cout << "Negate by pointer is " << num2 << endl;

    cout << "\nEnter an integer to negate by reference:  ";
    cin >> num3;
    refneg(num3);
    cout << "The value of num3 in main is " << num3 << endl;
    cout << "The address of num3 in main is " << &num3 << endl;
    cout << "Negate by reference is " << num3 << endl;

    cout << endl << endl;

    int grade;

    cout << "Enter your grade here: " << endl;
    cin >> grade;
    calcPoints(grade);

    cout << endl << endl;

    int num;

    cout << "Enter your integer here: " << endl;
    cin >> num;
    tripleNum(num, &num);

    cout << endl << endl;

    int total = 0, ptArray[7] = { 7, 13, 11, 10, 6, 9, 24 };
    int* p, *arraySize;

    p = ptArray;
    arraySize = p + 7;

    while (p < arraySize)
    {
        total += *p;
        p++;
    }

    cout << "The total of the integers is " << total << endl;
    cout << endl << endl;

    int i = 0, stotal = 0, average, size = 0, grades[15] = {};
    int* point, *endpoint;
    point = grades;
    size = getGrades(grades);
    endpoint = point + size;

    while (point < endpoint)
    {
        stotal += *point;
        point++;
    }

    average = stotal / size;
    cout << "The average of your grades is: " << average << endl;

    cout << endl << endl;

    int rolls[7] = { 0 };
    srand(time(NULL));
    fillrolls(rolls);
    printrolls(rolls);

    cout << endl << endl;

    return 0;
}

void fillrolls(int *r)
{
    int x, num;
    for (x = 1; x <= 12000; x++)
    {
        num = rand() % 6 + 1;
        *(r + num) += 1;   // part b, change to pointer offset notation
    }
}

// part b, change all array notation to pointer notation
//part c, change for loop to a while loop with a limit pointer comparison, then instead of offsetting the pointer, increment the pointer through the array 

void printrolls(int *r)
{
    int x = 1;
    int* rlimit;
    rlimit = r + 7;
    cout << r << endl;
    r++;
    cout << "Number Rolls   Address\n";
    while (r < rlimit)
    {
        cout << setw(3) << x << setw(9) << *r << setw(10) << r << endl;
        x++;
        r++;
    }
    cout << r << endl;
    cout << rlimit << endl;
}

int getGrades(int gr[])
{
    int *p, size = 0;
    p = gr;

    cout << "Enter your grade here: (-1 to end)" << endl;
    cin >> *p;

    while (*p != -1)
    {
        p++;
        size++;
        cout << "Enter your grade here: " << endl;
        cin >> *p;
    }

    return size;
}

void tripleNum(int& x, int* y)
{
    cout << "Printing by reference..." << endl;
    cout << "Your number tripled is: " << x * 3 << endl;
    cout << endl;
    cout << "Printing by pointer..." << endl;
    cout << "Your number tripled is: " << *y * 3 << endl;
}

int valneg(int n)
{
    n = -n;
    cout << "The value of n in valneg is " << n << endl;
    cout << "The address of n in valneg is " << &n << endl;
    return n;
}

void calcPoints(int& x)
{
    int points;

    if (x <= 59)
        points = 0;
    else if (x <= 69)
        points = 1;
    else if (x <= 79)
        points = 2;
    else if (x <= 89)
        points = 3;
    else if (x <= 100)
        points = 4;

    cout << "You have earned " << points << " points!!!" << endl;
}

void pointneg(int* nptr)
{
    *nptr = -*nptr;
    cout << "The value of nptr in pointneg is " << nptr << endl;
    cout << "The address of nptr in pointneg is " << &nptr << endl;
    cout << "The value nptr is pointing to is " << *nptr << endl;
}

void refneg(int& nn)
{
    nn = -nn;
    cout << "The value of nn in refneg is " << nn << endl;
    cout << "The address of nn in refneg is " << &nn << endl;
}*/