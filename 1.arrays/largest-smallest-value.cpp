#include <iostream>

using namespace std;

void askForArrayLength(int *n)
{
    cout << "How many numbers should the array contain? " << endl;
    cin >> *n;
}

void askForArrayElements(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "input element in index " << i << endl;
        cin >> arr[i];
    }
}

void findMaxAndMin(int n, int arr[])
{
    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for (int i = 0; i < n; i++)

    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }

        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    cout << "The masximum value is " << maximum << " and the minmum is " << minimum << endl;
}

int main()
{
    int n;
    askForArrayLength(&n);

    int arr[n];
    askForArrayElements(n, arr);

    findMaxAndMin(n, arr);
}