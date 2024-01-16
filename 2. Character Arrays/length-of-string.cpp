#include <iostream>
using namespace std;

int length(char input[])
{
    int count = 0;
    char value = input[count];

    while (value != '\0')
    {
        count++;
        value = input[count];
    }

    return count;
}

int main()
{
    char name[100];

    cout << "Enter your name: ";
    cin.getline(name, 50); // I can taje 4 characters because the last is going to be null

    cout << "The length of characters in your name, " << name << " is " << length(name) << endl;

    return 0;
}