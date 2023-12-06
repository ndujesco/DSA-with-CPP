#include <iostream>

using namespace std;

class Student
{
    float age;

public:
    Student()
    {
        cout << "Default constructor called." << endl;
    }

    Student(char n[])
    {
        cout << "The address is " << this << endl;
        cout << "Setting name to: " << n << " ..." << endl;

        int count = 0;
        char value = n[count];

        while (value != '\0')
        {
            name[count] = value;

            count++;
            value = n[count];
        }
    }

    Student(char n[], int age)
    {
        cout << "Setting name to: " << n << " ..." << endl;

        int count = 0;
        char value = n[count];

        while (value != '\0')
        {
            name[count] = value;

            count++;
            value = n[count];
        }

        cout << "Setting age to: " << age << " ..." << endl;
        this->age = age;
    }

    char name[50];
    char course[50];

    void setAge(int input, int password)
    {
        if (input >= 0 && password == 123)
            age = input;
    }

    int getAge()
    {
        return age;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};