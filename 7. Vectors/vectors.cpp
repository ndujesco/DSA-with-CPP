#include <iostream>
using namespace std;

int main()
{
    vector<int> *vp = new vector<int>();
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(3);
    v.push_back(58);
    v.push_back(78);
    v.push_back(100);
    v.push_back(0);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }
    cout << endl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }

    // cout << v.capacity() << endl;

    //  v[3] = 50; // NEVER USE THIS. If we use this the size of the vector will not increase. The memory location you are pushing to does not belong to you!

    // for (int i = 1; i < 100; i++)
    // {
    //     vp->push_back(i);
    //     cout << i << " " << vp->capacity() << endl;
    // }
    return 0;
}