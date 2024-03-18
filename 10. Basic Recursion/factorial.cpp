#include <iostream>

using namespace std;

long long factorial(int n)
{
    if (n < 0)
        return -1;

    if (n != 0)
        return n * factorial(n - 1);

    return 1;
}

int main()
{
    int n;
    char again;
    do
    {
        cout << "What integer do you want to get the factorial of? ";
        cin >> n;

        long long fact = factorial(n);

        cout << "The factorial of " << n << " is " << (fact == -1 ? "undefined" : to_string(fact)) << endl
             << endl;

        cout << "Do you want to go again? (Y or y for yes, anything otherwise) ";
        cin >> again;
        cout << endl;
    } while (again == 'y' || again == 'Y');

    return 0;
}