#include <iostream>

using namespace std;

enum WeekDay
{
    monday = 8,
    tuesday,
    wednesday, // 10
    thursday,
    friday,
    saturday = 9,
    sunday // 10
};

int main()
{
    WeekDay today = tuesday;
    cout << "Today is " << today << endl;
    cout << "Sunday is " << sunday << endl;
    cout << "Wednesday is " << wednesday << endl;

    return 0;
}