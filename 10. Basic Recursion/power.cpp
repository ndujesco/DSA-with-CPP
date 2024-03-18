#include <iostream>

using namespace std;

double power(int x, int n)
{
    if (n < 0)
    {
        return (double)1 / power(x, n * -1);
    }
    if (n == 0)
    {
        return 1;
    }

    return x * power(x, n - 1);
}

int main()
{
    int x, n;

    cout << "Raise X to the power of N" << endl;

    cout << "Raise ";
    cin >> x;
    cout << "to the power of ";
    cin >> n;

    cout << "The answer is " << power(x, n) << endl;

    return 0;
}