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
    cin.getline(name, 5);

    cout << "The length of characters in your name is " << length(name) << endl;

    return 0;
}