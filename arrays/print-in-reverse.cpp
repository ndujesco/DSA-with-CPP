#include <iostream>

using namespace std;

void askForArrayLength(int *n)
{
    cout << "How many numbers should the array contain? " << endl;
    cin >> *n;
}

void askForArrayElements(int n, int arr[])
{
    cout << "Enter the numbers ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void printForwardAndReserve(int n, int arr[])
{
    cout << "Forward: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Reverse: ";
    for (int i = n - 1; i > -1; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    askForArrayLength(&n);

    int arr[n];
    askForArrayElements(n, arr);

    printForwardAndReserve(n, arr);

    return 0;
}