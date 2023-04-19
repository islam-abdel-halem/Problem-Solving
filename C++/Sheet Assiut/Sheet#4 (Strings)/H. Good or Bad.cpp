#include <bits/stdc++.h>
using namespace std;
int main()
{
    int words; 
    cin >> words;
    while (words--)
    {
        string word;

        cin >> word;
        bool check=false;
        for (int i = 0; i < word.size() - 2; i++)
        { 
            if ((word[i] == '0' && word[i + 1] == '1' && word[i + 2] == '0') ||
                (word[i] == '1' && word[i + 1] == '0' && word[i + 2] == '1'))
            {
                check = true;
                break;
            }
        }
        if (check == true)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
}