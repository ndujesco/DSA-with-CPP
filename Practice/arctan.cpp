#include <iostream>
using namespace std;

double arctan_differential(double input)
{
    return 1 / (1 + pow(input, 2));
}

double arctan(double x)
{
    /*
        This uses the fact that arctan(x) is the integral from 0 to x of 1/(1 + u^2).
        Find the reinmann sum using a large value of n (midpoint rule)
    */

    int const n = 1000;

    double delta_x = x / n;
    double totalHeight = 0;

    for (int i = 0; i < n; i++)
    {
        totalHeight += arctan_differential(delta_x * (i + 0.5));
    }
    return (totalHeight * delta_x) * (180 / M_PI);
}

int main()
{
    cout << arctan(sqrt(3)) << endl;
    return 0;
}