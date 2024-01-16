#include <iostream>
using namespace std;

struct Date
{
    int month, day, year;
} birth, death;

void setDate(Date &date, int day, int month, int year)
{
    date.day = day;
    date.month = month;
    date.year = year;
}

void printDate(Date date)
{
    cout << date.day << " / " << date.month << " / " << date.year << endl;
}

int main()
{
    setDate(birth, 26, 3, 2002);

    printDate(birth);
}