#include <iostream>

using namespace std;

int linearSearch(int arr[], int arrlen, int num)
{
    for (int i = 0; i < arrlen; i++)
    {
        if (arr[i] == num)
            return (i + 1);
    }
    return 0;
}

string getPosition(int num)
{
    if (num % 10 == 1)
        return to_string(num) + "st";

    if (num % 10 == 2)
        return to_string(num) + "st";

    return to_string(num) + "th";
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    cout << "What number do you want to search for? ";
    cin >> num;

    int pos = linearSearch(arr, sizeof(arr) / sizeof(int), num);

    cout << "The number " << num << (pos == 0 ? " does not exist in the array." : " is the " + getPosition(pos) + " element in the array.") << endl;

    return 0;
}