#include <iostream>

using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index_of_smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[index_of_smallest] > a[j])
                index_of_smallest = j;
        }
        if (a[index_of_smallest] < a[i])
            swap(a[i], a[index_of_smallest]);
    }
}

void printArray(int a[], int n, string message)
{
    cout << message;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
    selectionSort(a, n);
    printArray(a, n, "Your array after sorting: ");

    cout << endl;
    return 0;
}