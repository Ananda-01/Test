#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int row, col;
        cin >> row >> col;
        int a[row][col];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> a[i][j];
            }
        }
        int up, down, left, right;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i > 0)
                    up = a[i - 1][j];
                else
                    up = 0;
                if (j > 0)
                    left = a[i][j - 1];
                else
                    left = 0;
                if (j < col - 1)
                    right = a[i][j + 1];
                else
                    right = 0;
                if (i < row - 1)
                    down = a[i + 1][j];
                else
                    down = 0;

                int mx = max(max(up, down), max(left, right));
                if (a[i][j] > mx)
                {
                    a[i][j] = mx;
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}