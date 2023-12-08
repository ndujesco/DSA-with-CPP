#include <iostream>
#include "classes/fraction.cpp"

using namespace std;

int main()
{
    Fraction f1(1, 3);
    Fraction f2(2, 6);

    Fraction f3 = ++(++f1);
    (f1 += f3) += f3;
    f3.print();
    f1.print(); // f3 == f1 because we returned by reference;

    // int i = 9;
    // int j = ++(++i);
    // cout << i << endl;
    // cout << j << endl;

    // if (f1 == f2)
    //     cout << "EQUAL" << endl;

    // Fraction f3 = f1 + f2;
    // Fraction f4 = f1 * f2;

    // f3.print();
    // f4.print();

    return 0;
}