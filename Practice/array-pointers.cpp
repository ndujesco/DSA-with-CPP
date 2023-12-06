#include <iostream>

using namespace std;

void pointer1()
{
    int ptr[5] = {1, 2, 3, 4, 5};
    cout << "First element: " << *ptr << endl;
    cout << "Second element: " << *(ptr + 1) << endl;
    cout << "Third element: " << *(ptr + 2) << endl;
    cout << "Fourth element: " << *(ptr + 3) << endl;
    cout << "Fifth element: " << *(ptr + 4) << endl;

    cout << endl;
};

void pointer2()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << "First element: " << *ptr << endl;
    cout << "Second element: " << *(ptr + 1) << endl;
    cout << "Third element: " << *(ptr + 2) << endl;
    cout << "Fourth element: " << *(ptr + 3) << endl;
    cout << "Fifth element: " << *(ptr + 4) << endl;

    cout << endl;
};

void pointer3()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int(*ptr)[5] = &arr; // ptr is a pointer to an array of 5 integers, initialized with the address of arr
    // note that in this case the pointer, ptr points to the array not the first element

    cout << "First element: " << *ptr << endl;
    cout << "Second element: " << *(*(ptr + 1)) << endl;
    cout << "Third element: " << *(ptr + 2) << endl;
    cout << "Fourth element: " << *(ptr + 3) << endl;
    cout << "Fifth element: " << *(ptr + 4) << endl;

    cout << endl;
}
int main()
{
    /*pointer 1 and 2 give the same output. The output is rather obvious*/
    pointer1();
    pointer2();

    pointer3();
}
