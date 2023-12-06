#include <iostream>
#include <cstdlib>
#include "classes/student.cpp"

using namespace std;

struct Me
{
    string name;
    int age;
    vector<string> girlfriends;
};

int main()
{
    /*
        Me me;
    me.name = "Ndujekwu Ugochukwu";
    me.age = 21;
    me.girlfriends.push_back("Cynthia");

    */

    Student ugo;

    strcpy(ugo.name, "Ndujekwu Ugochukwu Peter");
    strcpy(ugo.course, "Electrical and Electronics Engineering");
    ugo.setAge(21, 123);

    Student *fisayo = new Student;

    fisayo->setAge(20, 123); // OR (*fisayo).setAge(20, 123)
    strcpy(fisayo->name, "Adeolu Oluwafisayomi Treasure");
    strcpy((*fisayo).course, "Mechanical Enginerring");

    ugo.printInfo();
    cout << endl;
    (*fisayo).printInfo();

    return 0;
}
