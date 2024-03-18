#include <iostream>

using namespace std;

int sumZeroes(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return ((n % 10) == 0 ? 1 : 0) + sumZeroes(n / 10);
}

int main()
{
    cout << sumZeroes(990009009) << endl;
}