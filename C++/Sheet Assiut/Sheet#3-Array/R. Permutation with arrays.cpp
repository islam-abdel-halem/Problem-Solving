#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    for (i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}