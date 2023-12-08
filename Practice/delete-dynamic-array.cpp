#include <iostream>

using namespace std;
int main()
{
    /*
     int data[] = {1, 2, 3};
        delete[] data; // this will not work because it was not dynamically created

    */

    int *data = new int[5];
    data[0] = 9;
    data[1] = 9;
    data[2] = 9;

    cout << data << endl;
    cout << data[0] << endl;

    cout << endl;
    delete[] data;

    cout << data << endl;
    cout << data[0] << endl;

    return 0;
}
