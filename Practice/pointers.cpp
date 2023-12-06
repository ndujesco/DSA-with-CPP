#include <iostream>

using namespace std;

int main()
{

    int i = 9;
    int j = 10;
    int *i_ptr1 = &i;
    int &i_ptr2 = i;

    cout << i_ptr1 << " " << i_ptr2 << endl;
    cout << &i << " " << &i_ptr2 << endl;

    return 0;
}