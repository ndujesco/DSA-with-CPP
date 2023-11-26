#include <iostream>
#include <cstring>

using namespace std;

/*
strlen(string)                          finds the length up to the first space.
strcmp(string1, string2)                returns 0 if they match and some other integer (-1 OR 1), otherwise.
strcpy(dest_string, source_string)      after changing each character it inputs the null character to indicate the end.
strncpy(dest_string, source_string, n)  copies the first n characters from the source_string
strcat(string1, string2)                concactenates string2 after string1
*/

int mystrlen(char input[])
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

bool mystrcmp(char str1[], char str2[])
{
    if (mystrlen(str1) != mystrlen(str2))
        return false;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
            return false;
    }

    return true;
}

int main()
{
    char str1[] = "abeddd";
    char str2[] = "abc";

    // cout << mystrcmp(str1, str2) << endl; 
    strncpy(str1, str2, 4);
    cout << str1 << endl;

    return 0;
}