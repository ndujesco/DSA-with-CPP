#include <iostream>

using namespace std;

/*
Imagine we wa t to implement a tic tac toe game
*/

int main()
{
    int matrix[100][100];
    int m, n;

    cout << "How many rows do you want? ";
    cin >> m;

    cout << "How many columns do you want? ";
    cin >> n;

    cout << endl;

    // cout << "Input the values: ";
    for (int i = 0; i < m; i++)
    {
        cout << "Input the values in row " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }  
    cout << endl;

    cout << "Your matrix rowwise is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    cout << "Your matrix columnwise is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}