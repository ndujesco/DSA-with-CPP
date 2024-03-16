#include <iostream>

using namespace std;

int factorial(int a)
{
    if (a > 1)
        return a * factorial(a - 1);
    return a;
}

int main()
{
    cout << "Input the numbers you want to take the factorial of " << endl;
    int a;

    while (cin >> a)
        cout << factorial(a) << endl;

    cout << "penny and dime" << endl;
    return 0;
}