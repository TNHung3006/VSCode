#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool snt(int x) // x = 2
{
    for(int i = 2;i <= sqrt(x);i++) // sqrt(x) = 2. < i; 2 3 4 5
        if(x % i == 0)
            return false;
    return x > 1; // x = 0 => retuen false;
    // if(x > 1)
    //     return true;
    // else
    //     return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];                   // i = 0 1 2 3 4 5 6 7 8 9
    for(int i = 0;i < n;i++) // n = 10; a[] = 0 1 2 3 4 5 6 7 8 9
        if(snt(a[i])) // a[i] = a[2] = 2
            cout << a[i] << " ";
    return 0;
}


// 2 3 5 7