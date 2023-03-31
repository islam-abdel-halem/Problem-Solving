#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j;
    cin >> n >> m;
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (int k = m - 1, j = 0; j < m / 2; j++, k--)
        {
            swap(arr[i][j], arr[i][k]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}