#include <iostream>
using namespace std;

class Student
{
    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        this->name = name;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{

    char name[] = "Ndujekwu";
    Student ugo(20, name);
    ugo.display();

    return 0;
}