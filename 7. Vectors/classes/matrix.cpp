#include <iostream>

using namespace std;

class Matrix
{
    int m;
    int n;
    vector<vector<int> > &matrix;

public:
    Matrix(vector<vector<int> > &matrix) : matrix(matrix)
    {
        m = matrix.size();
        n = matrix[0].size();
    }

    vector<int> spiralOrder()
    {
        vector<int> ans;

        if (m == 0)
            return ans;

        if (n == 0)
            return ans;

        int sr = 0, er = m - 1, sc = 0, ec = n - 1;

        int count = 0;

        while (sr <= er && sc <= ec)
        {

            // print sr
            for (int i = sc; i <= ec; i++)
            {
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            if (count == m * n)
                return ans;

            // print ec
            for (int i = sr; i <= er; i++)
            {

                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            if (count == m * n)
                return ans;

            // print er
            for (int i = ec; i >= sc; i--)
            {

                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            if (count == m * n)
                return ans;

            // print sc
            for (int i = er; i >= sr; i--)
            {
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
            if (count == m * n)
                return ans;
        }
        return ans;
    }

    void viewMatrix()
    {

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
    }

    void printSpiralOrder()
    {
        vector<int> ans = spiralOrder();

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
};
