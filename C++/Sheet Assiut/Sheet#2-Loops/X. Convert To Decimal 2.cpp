#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cunt = 0;
        cin >> n;
        while (n != 0)
        {
            int digt = n % 2;
            if (digt == 1)
            {
                cunt++;
            }
            n /= 2;
        }
        int p = 0, des = 0;
        while (cunt--)
        {
            des += (1 * pow(2, p));
            p++;
        }
        cout << des << endl;
    }
    return 0;
}