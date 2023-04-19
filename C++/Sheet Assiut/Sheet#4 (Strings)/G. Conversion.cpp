#include <bits/stdc++.h>
using namespace std;
int main()
{
    string value;
    cin >> value;
    for (int i = 0; i < value.size(); i++)
    {
        if (value[i] == ',')
        {
            cout << " ";
        }
        else if (value[i] >= 'a' && value[i] <= 'z')
        {
            int as = value[i] - 32; 
            char res = as;          
            cout << res;
        }
        else
        {
            int as = value[i] + 32; 
            char res = as;          
            cout << res;
        }
    }
}