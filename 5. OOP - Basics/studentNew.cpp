#include <iostream>
#include "classes/student.cpp"

using namespace std;

int main()
{
    char ugo_name[] = "Ndujekwu";
    Student ugo(ugo_name, 21);
    strcpy(ugo.course, "Electrical and Electronics Engineering");

    Student fisayo;
    strcpy(fisayo.course, "Mechanical Engineering");
    fisayo.setAge(ugo.getAge() - 1, 123);
    strcpy(fisayo.name, ugo.name);

    Student ugo_doppelganger(ugo);
    ugo_doppelganger.printInfo();
    return 0;
}