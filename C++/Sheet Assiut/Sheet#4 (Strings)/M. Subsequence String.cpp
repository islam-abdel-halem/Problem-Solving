#include <bits/stdc++.h>
using namespace std;
int main()
{
    string value; 
    cin >> value;

    string myValue = "hello";
    int i = 0; 
    int z = 0;
    while (true)
    {
        if (i == value.size() || z == myValue.size())
        {
            break;
        }
        if (value[i] == myValue[z])
        {
            z++; 
        }
        i++;
    }
    if (z == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}