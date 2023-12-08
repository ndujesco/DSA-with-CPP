#include <iostream>

#include "classes/dynamic-array.cpp"

using namespace std;
int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    cout << "Capacity after 5th element: " << d1.getCapacity() << endl;
    d1.add(60);
    cout << "Capacity after 6th element: " << d1.getCapacity() << endl;
    d1.add(70);
    d1.add(80);
    d1.add(90);
    d1.add(100);
    cout << "Capacity after 10th element: " << d1.getCapacity() << endl;
    d1.add(110);
    cout << "Capacity after 11th element: " << d1.getCapacity() << endl
         << endl;
    ;

    d1.print();

    cout << d1.getELement(9) << endl;

    DynamicArray d2(d1);
    d1.add(0, 0);

    d1.print();
    d2.print();

    return 0;
}

// int data[] = {1, 2, 3};
// delete[] data; this will not work because it was not dynamically created
// cout << data << endl;
// cout << "Penny and dime" << endl;