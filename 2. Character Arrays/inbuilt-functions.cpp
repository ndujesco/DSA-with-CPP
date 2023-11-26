#include <iostream>
#include <cstring>

using namespace std;

/*
strlen(value)  finds the length up to the first space.
strcmp(value1, value2)  returns 0 if they match and some other integer (-1 OR 1), otherwise.
strcpy(dest_string, source_string)  
*/

int main()
{

    char str1[100];
    cin >> str1;
    int len = strlen(str1);

    

    cout << strcmp("zba", "azc") << endl; // 
    return 0;
}