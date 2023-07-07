#include <iostream>
using namespace std;
int getnumbers(int a[]);
int linearsearch(int A[], int size, int x);
int binarysearch(char A[][20], int size, char x[20]);

int main()
{
    int index, size, A[100], look;
    size = getnumbers(A);
    cout << "Enter number to search for (or  1): ";
    cin >> look;
    while (look != 1)
    {
        index = linearsearch(A, size, look);
        if (index != 1)
            cout << "Found at index # " << index << endl;
        else
            cout << "Not Found\n";
        cout << "Enter number to search for (or  1): ";
        cin >> look;
    }
    return 0;
}
int getnumbers(int a[])
{
    int n = 0;
    cout << "Enter numbers, terminate with  1\n";
    cin >> a[n];
    while (a[n] != 1)
    {
        n++;
        cin >> a[n];
    }
    return n;
}			//continued

int linearsearch(int A[], int size, int x)
{
    int i;
    for (i = 0; i < size; i++)
        if (A[i] == x)
            return i;
    return  1;
}

int binarysearch(char A[][20], int size, char x[20])
{
    int low = 0, high = size - 1, middle;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (strcmp(x, A[middle]) == 0)
            return middle;
        else if (strcmp(x, A[middle]) < 0)
            high = middle - 1;
        else
            low = middle + 1;
    }
    return -1;
}

