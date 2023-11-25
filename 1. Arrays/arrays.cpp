#include <iostream>

using namespace std;
int main()
{
    int a[9];

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        a[i] = i * i;
        cout << a[i] << " ";
    }
        cout << endl;


    return 0;
}