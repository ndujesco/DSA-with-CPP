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

double geoSeries(int k)
{

    if (k == 0)
    {
        return 1;
    }

    return power(2, -k) + geoSeries(k - 1);
}

int main()
{
    int k;
    cout << "k is what?  ";
    cin >> k;

    cout << "The answer is " << geoSeries(k) << endl;

    return 0;
}