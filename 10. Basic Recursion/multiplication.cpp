#include <iostream>

using namespace std;

double multiplication(int m, int n)
{

    if (n == 0)
    {
        return 0;
    }

    return m + multiplication(m, n - 1);
}

int main()
{
    int m, n;

    cout << "Multiply m with n" << endl;

    cout << "Multiply ";
    cin >> m;
    cout << "with ";
    cin >> n;

    if (n > m)
    {
        n = m ^ n;
        m = m ^ n;
        n = m ^ n;
    }

    cout << "The answer is " << to_string(multiplication(m, n)) << "." << endl;

    return 0;
}