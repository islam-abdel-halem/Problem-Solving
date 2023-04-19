#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    cout << n << " " << m << endl;
    cout << s + t << endl;
    swap(s[0],t[0]);
    cout << s << " " << t << endl;
    return 0;
}