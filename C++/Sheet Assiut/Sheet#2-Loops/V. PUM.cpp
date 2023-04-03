#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int i = 1;
    while (1)
    {
        if (count == n)
        {
            break;
        }
        if (i % 4 == 0)
        {
            cout << "PUM" << endl;
            i++;
            count++;
            continue;
        }
        cout << i << ' ';
        i++;
    }
    return 0;
}