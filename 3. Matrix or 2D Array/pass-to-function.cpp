#include <iostream>

using namespace std;

/*
1.  While number of rows is optional, the number of columns must ne specified when initializing the matrix and when passing it into a function.
2.  It is because of the fact that systems use the row major approach.
3.  Let's say you want to access matrix[2][0], since it is stored as a one-dimensional arrray it will have to skip
    2 rows, and how can it know how many elements are in the row if the no. of column is not specified.
*/

void printMatrix(int matrix[][5], int m, int n)
{
    cout << "Your matrix rowwise is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int matrix[5][5] = {{0}};

    printMatrix(matrix, 5, 5);

    return 0;
}