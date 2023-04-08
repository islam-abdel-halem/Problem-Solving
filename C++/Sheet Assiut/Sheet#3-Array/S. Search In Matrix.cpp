#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, column;
    cin >> row >> column;
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int search;
    cin >> search;
    bool found = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == search)
            {
                found = true;
                cout << "will not take number" << endl;
                return 0;
            }
        }
    }
    if (found == false)
    {
        cout << "will take number" << endl;
    }
}
