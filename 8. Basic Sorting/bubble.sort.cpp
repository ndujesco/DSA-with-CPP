#include <iostream>

using namespace std;

void printArray(int a[], int n, string message)
{
    cout << message;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

int main()
{
    int n;
    cout << "How many numbers do you want to input? ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Input number " << (i + 1) << ": ";
        cin >> a[i];
    }

    printArray(a, n, "Your array before sorting: ");
    bubbleSort(a, n);
    printArray(a, n, "Your array after sorting: ");

    cout << endl;
    return 0;
}