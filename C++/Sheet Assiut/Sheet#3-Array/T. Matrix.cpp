#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    int prime = 0;
    for (int i = 0, j = 0; i < size; i++, j++)
    {
        prime += arr[i][j];
    }
    int second = 0;
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        second += arr[i][j];
    }
    cout << abs(prime - second);
    return 0;
}