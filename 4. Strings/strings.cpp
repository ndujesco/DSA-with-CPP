#include <iostream>

using namespace std;

int main()
{

    string sample = "penny and dime";
    string sp;

    sp = "dame";
    sp[0] = 'f';
    cout << sp << endl;


    vector<string> vect;
    vect.push_back(sample);
    vect.push_back("here I come");

    cout << sample + vect[1] << endl;

    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
        sort(vect[i].begin(), vect[i].end());
    }

    return 0;
}