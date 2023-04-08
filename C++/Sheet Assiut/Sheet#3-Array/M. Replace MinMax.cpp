#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i] == min){
            arr[i] = max;
        }
        else if(arr[i] == max){
            arr[i] = min;
        }
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

// Another Solution

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     int Arr[N];
//     for (int i = 0; i < N; ++i)
//     {
//         cin >> Arr[i];
//     }

//     int Min_Pos = 1, Max_Pos = 1;
//     for (int i = 0; i < N; ++i)
//     {
//         if (Arr[i] < Arr[Min_Pos])
//             Min_Pos = i;

//         if (Arr[i] > Arr[Max_Pos])
//             Max_Pos = i;
//     }

//     swap(Arr[Min_Pos], Arr[Max_Pos]);

//     for (int i = 0; i < N; ++i)
//     {
//         cout << Arr[i] << " ";
//     }

//     return 0;
// }

// Another Solution
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size;
//     cin >> size;   
//     int arr[size]; 
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     int min = arr[0]; 
//     int max = arr[0]; 
//     int minIndex = 0;
//     int maxIndex = 0;
//     for (int i = 1; i < size; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i]; 
//             minIndex = i;
//         }
//         if (max < arr[i])
//         {
//             max = arr[i];
//             maxIndex = i;
//         }
//     }
//     arr[minIndex] = max;
//     arr[maxIndex] = min;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// Another Solution

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size;
//     cin >> size;
//     int arr[size];
//     int maxx = INT_MIN;
//     int minn = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//         maxx = max(maxx,arr[i]);
//         minn = min(minn,arr[i]);
//     }
//     int posmax,posmin;
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] == maxx)
//             posmax = i;
//         else if(arr[i] == minn)
//             posmin = i;
//     }
//     arr[posmax] = minn;
//     arr[posmin] = maxx;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
