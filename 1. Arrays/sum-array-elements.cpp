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

int addArrayElements(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)

    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    askForArrayLength(&n);

    int arr[n];
    askForArrayElements(n, arr);

    int sum = addArrayElements(n, arr);

    cout << "The total is " << sum << endl;
}