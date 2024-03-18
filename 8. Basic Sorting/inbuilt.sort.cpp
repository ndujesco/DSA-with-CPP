#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int a[], int n, string message)
{
    cout << message;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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
    sort(a, a + n);
    printArray(a, n, "Your array after sorting: ");

    cout << endl;
    return 0;
}