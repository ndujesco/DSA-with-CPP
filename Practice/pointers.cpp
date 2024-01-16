#include <iostream>

using namespace std;

void print_reference(int &input)
{
    cout << &input << endl;
}

void print(int &input)
{
    // if I do not add the ampersand it would be a problem because my manipulation will not affect the original input passed
    input++;

    cout << input << endl;
}

struct Coefficient
{
    float SecondOrderCoeff;
    float FirstOrderCoeff;
    float ConstantCoeff;
};

int main()
{

    Coefficient coeff1;
    coeff1.ConstantCoeff = 7;
    coeff1.FirstOrderCoeff = 7;
    coeff1.SecondOrderCoeff = 7;

    Coefficient coeff2;

    coeff2 = coeff1;

    // int i = 9;
    // int j = 10;
    // int *i_ptr1 = &i;
    // int &i_ptr2 = i;

    // cout << &i_ptr2 << endl;
    // print(i_ptr2);
    // print(i_ptr2);

    // print_reference(i_ptr2);

    return 0;
}