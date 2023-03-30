#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, base = 0, next = 1;
    cin >> n;
    if (n == 1)
    {
        cout << base << endl;
    }
    else if (n == 2)
    {
        cout << base << " " << next << endl;
    }
    else
    {
        cout << base << " " << next << " ";
        for (int i = 2; i < n; i++)
        {
            int fib = base + next;
            cout << fib << " ";
            base = next;
            next = fib;
        }
    }
    return 0;
}