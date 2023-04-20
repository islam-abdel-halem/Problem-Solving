#include <bits/stdc++.h>
using namespace std;
int main()
{
    string value; 
    cin >> value;
    int size = value.size(); 
    for (int i = 0; i < size / 2; i++)
    { 
        if (value[i] != value[size - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}