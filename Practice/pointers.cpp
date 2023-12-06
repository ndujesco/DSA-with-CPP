#include <iostream>

using namespace std;

void print_reference(int &input)
{
    cout << &input << endl;
}

void print(int input)
{
    cout << &input << endl;
}

int main()
{

    int i = 9;
    int j = 10;
    int *i_ptr1 = &i;
    int &i_ptr2 = i;

    cout << &i_ptr2 << endl;
    print(i_ptr2);
    print_reference(i_ptr2);

    return 0;
}