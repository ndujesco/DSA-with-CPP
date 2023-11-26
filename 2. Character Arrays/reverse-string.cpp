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

void reverse(char input[])
{
    int end = length(input) - 1;
    int start = 0;

    while (end > start)
    {
        swap(input[start], input[end]);

        start++;
        end--;
    }
}

int main()
{
    char name[30];
    cout << "What is your first name? ";
    cin.getline(name, 30, '\n');

    reverse(name);

    cout << "Your name in reverse is " << name << endl;

    return 0;
}
