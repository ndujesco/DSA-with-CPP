#include <iostream>

using namespace std;
/*
1.Static functions can only access static data members and can only call static functions.
2.They do not have this keysword
*/
class Student
{
    static int totalStudents;

public:
    int rollNumber;
    int age;

    Student(int age, int rollNumber) : age(age), rollNumber(rollNumber)
    {
        totalStudents++;
    }

    static int getTotalStudents()
    {
        return totalStudents;
    }
};

int Student::totalStudents = 0; // you can only initialize static properties outside the class

int main()
{

    Student ugo(21, 1);
    Student fisco(20, 2);

    cout << Student::getTotalStudents() << endl;

    cout << ugo.getTotalStudents() << endl;

    return 0;
}