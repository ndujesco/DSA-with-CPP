#include <iostream>

using namespace std;

string getPosition(int num)
{
    if (num % 10 == 1)
        return to_string(num) + "st";

    if (num % 10 == 2)
        return to_string(num) + "nd";

    return to_string(num) + "th";
}

int binarySearch(int arr[], int arrlen, int num)
{
    int lower_bound = 0;
    int upper_bound = arrlen - 1;
    int mid;

    while (lower_bound <= upper_bound)
    {
        mid = (lower_bound + upper_bound) / 2;

        if (arr[mid] == num)
            return mid + 1;

        if (arr[mid] > num)
            upper_bound = mid - 1;

        if (arr[mid] < num)
            lower_bound = mid + 1;
    }

    return 0;
}

int main()
{

    int n;
    cout << "How many numbers do you want this array to contain? ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " + getPosition(i + 1) + " number: ";
        cin >> arr[i];
    }

    cout << "Attaboy!" << endl;

    int num;
    cout << "What number do you want to search for? ";
    cin >> num;

    int pos = binarySearch(arr, n, num);

    cout << "The number " << num << (pos == 0 ? " does not exist in the array." : " is the " + getPosition(pos) + " element in the array.") << endl;

    return 0;
}