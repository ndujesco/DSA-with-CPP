#include <iostream>

using namespace std;

void print(int n)
{

    if (n == 0)
    {
        return;
    }

    print(n - 1);
    cout << n << endl;
    return;

}

void print_descend(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    print_descend(n - 1);
    return;

}

int main()
{
    print(22); cout << endl << endl;
    print_descend(22); 
    return 0;
}