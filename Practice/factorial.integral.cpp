#include <iostream>

using namespace std;

double integrand(double variable, double num)
{
    return pow(variable, num) / exp(variable);
}

double reinmannSum(double num)
{
    /*
        This uses the fact that arctan(x) is the integral from 0 to x of 1/(1 + u^2).
        Find the reinmann sum using a large value of n (midpoint rule)
    */

    long long const n = 10000000;
    double x = 10000;

    double delta_x = x / n;
    double totalHeight = 0;

    for (int i = 0; i < n; i++)
    {
        totalHeight += integrand(delta_x * (i + 0.5), num);
    }
    return (totalHeight * delta_x);
}

void factorial(double num)
{
    cout << "The factorial of " << num << " is " << to_string((reinmannSum(num))) << endl;
}

int main()
{
    int n;
    char again;
    do
    {
        cout << "What integer do you want to get the factorial of? ";
        cin >> n;

        factorial(n);

        cout << "Do you want to go again? (Y or y for yes, anything otherwise) ";
        cin >> again;
        cout << endl;
    } while (again == 'y' || again == 'Y');

    return 0;
}