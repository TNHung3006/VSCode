#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define T 10007

// nhập vào mảng số nguyên dương x và xuất ra x số ngẫu nhiên từ 1 -> x
int main(){
    int x, y;
    srand(time(NULL));
    int a[T];
    cout << "nhap so luong phan tu: ";
    cin >> x;
    // nhap mang
    for (int i = 0; i < x; i++){
        a[i] = rand() % x + 1;   
    }
    
    // xuat mang
    for (int i = 0; i < x; i ++){
        sort (a + 0, a + x);
        cout << "array[" << i << "] = " << a[i] << endl;
    }
    return 0;
}