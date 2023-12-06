#include <iostream>

using namespace std;

int main()
{

    int i = 9;
    int j = 10;
    int *i_ptr1 = &i;
    int &i_ptr2 = i;

    i_ptr2 = 99;

    cout << i_ptr1 << " " << i << endl;
    cout << &i << " " << &i_ptr2 << endl;

    return 0;
}