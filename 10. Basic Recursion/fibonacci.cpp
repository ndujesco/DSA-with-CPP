#include <iostream>

using namespace std;

int fibonnaci(int n)
{
    if (n <= 0)
        return -1;

    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    return fibonnaci(n - 1) + fibonnaci(n - 2);
}

int main()
{
    int n;
    cout << "Fibonacci sequence up to what term? ";
    cin >> n;

    for (int i = 0; i <= n; i++)
        cout << fibonnaci(i + 1) << " ";
    cout << endl;
    return 0;
}