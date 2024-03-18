#include <iostream>

using namespace std;

int countdigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + countdigits(n / 10);
}

int main()
{
    cout << countdigits(99999) << endl;
}