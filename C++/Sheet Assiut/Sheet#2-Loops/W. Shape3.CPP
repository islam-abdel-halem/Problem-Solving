#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, Star = 1;
    cin >> N;
    int Space = N - 1;

    for (int i = 0; i < N; ++i)
    {

        for (int i = Space; i > 0; i--)
        {
            cout << " ";
        }
        Space--;
        for (int i = 0; i < Star; ++i)
        {
            cout << "*";
        }
        Star += 2;
        cout << endl;
    }
    Star -= 2;
    Space = 1;
    for (int i = 0; i < N; ++i)
    {

        for (int i = 1; i < Space; i++)
        {
            cout << " ";
        }
        Space++;
        for (int i = Star; i > 0; --i)
        {
            cout << "*";
        }
        Star -= 2;
        cout << endl;
    }
    return 0;
}