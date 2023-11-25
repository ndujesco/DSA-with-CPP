#include <iostream>
using namespace std;

void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return;
}

void swap2(int *a, int *b)
{
    *a = *b ^ *a;
    *b = *b ^ *a;
    *a = *b ^ *a;


    return;
}

int main()
{

    int a = 10;
    int b = 20;

    swap2(&a, &b);

    cout << "a: " << a << " b: " << b << endl; // "a: 20 b: 10

    return 0;
}