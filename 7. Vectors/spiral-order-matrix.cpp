#include <iostream>
#include "classes/matrix.cpp"

using namespace std;

int main()
{
    vector<vector<int> > matrix;
    int m, n, input;

    cout << " How many rows should the matrix have? ";
    cin >> m;

    cout << " How many columns should the matrix have? ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        cout << "Enter the elements in row" << i + 1 << " ";
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            row.push_back(input);
        }
        matrix.push_back(row);
    }

    Matrix m1(matrix);

    cout << "MATRIX: " << endl;
    m1.viewMatrix();
    cout << endl;

    cout << "Spiral Order: ";
    m1.printSpiralOrder();

    return 0;
}
