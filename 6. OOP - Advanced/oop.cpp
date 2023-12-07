#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    char *name;

    Student(Student const &s)
    {
        this->age = s.age;
        this->name = new char(strlen(s.name) + 1);
        strcpy(this->name, s.name);
    }
    Student(int age, char *name)
    {
        this->age = age;
        this->name = new char(strlen(name) + 1);
        strcpy(this->name, name);
        // this->name = name;   shalllow copy which should be ideally avoided.
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
    Student ugo(21, name);

    Student fisco(ugo);
    fisco.age -= 1;

    ugo.display();
    cout << endl;
    fisco.display();

    return 0;
}