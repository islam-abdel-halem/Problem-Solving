#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    if (S[A] != '-')
    {
        cout << "No";
        return 0;
    }
    bool Flag = 0;
    for (int i = 0; i < (int)S.size() && Flag == 0; ++i)
    {

        if ((S[i] < '0' || S[i] > '9') && i != A)
            Flag = 1;
    }

    if (Flag == 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

// Another Solution
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num1, num2; 
//     cin >> num1 >> num2;
//     string code; 
//     cin >> code;
//     if (num1 + num2 + 1 != code.size())
//     {
//         cout << "No" << endl;
//         return 0;
//     }
//     if (code[num1] != '-')
//     {
//         cout << "No" << endl;
//         return 0;
//     }
//     int counter = 0;
//     for (int i = 0; i < code.size(); i++)
//     {
//         if (code[i] >= 48 && code[i] <= 57 && i != num1)
//         {
//             counter++; 
//         }
//     }
//     if (counter == num1 + num2)
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }
// }