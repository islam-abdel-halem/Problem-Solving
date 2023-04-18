#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    int minn = min(n, m);
    bool chack = 0;
    for (int i = 0; i < minn; i++){
        if (s[i] < t[i]){
            cout << s;
            return 0;
        }
        else if (s[i] > t[i]){
            cout << t;
            return 0;
        }else{
            chack = 1;
        }
    }
    if (chack){ 
        if (n < m){
            cout << s;
        }else{  
            cout << t;
        }
    }
        return 0;
}