#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int num = 0, minn = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        num = 0;
        while (arr[i] % 2 == 0)
        {
            num++;
            arr[i] /= 2;
        }
        minn = min(num, minn);
    }
    cout << minn << endl;
    return 0;
}