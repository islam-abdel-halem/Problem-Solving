#include <bits/stdc++.h>
using namespace std;
int main()
{
    string value;
    cin >> value;

    sort(value.begin(), value.end());

    int size = value.size(); 
    for (int i = 0; i < size; i++)
    {                      
        char c = value[i]; 
        int counter = 1;
        while (value[i] == value[++i])
        {              
            counter++; 
        }
        i--; 
        cout << c << " : " << counter << endl;
        
    }
}