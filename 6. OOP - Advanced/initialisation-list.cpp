#include <iostream>

using namespace std;

class Student
{
    // Once rollNumber is set, it cannot be changed
public:
    int age;
    const int rollNumber;

    Student(int rollNumber, int age) : rollNumber(rollNumber), age(age) // initialization list
    {
    }
};

int main()
{
    int const b = 10;
    // int const b; it cannot work because a constant value cannot hold a garbage value.

    int i = 5;
    int &j = i;
    //  int &j; it is compulsory to give the value of the reference variable at the time of memory allocation.

    Student ugo(9, 21);

    cout << ugo.rollNumber << endl;
    return 0;
}