#include <iostream>

using namespace std;


int main() {
    for (int num = 10000; num <= 99999; num++) {
        int a[10] = { 0 }; // Mảng đếm số lần xuất hiện của từng chữ số từ 0 đến 9
        int b = num;

        // Đếm số lần xuất hiện của từng chữ số trong số num
        while (b > 0) {      //b 10001
            int digit = b % 10;
            a[digit]++; 
            b /= 10;
        }

        // Kiểm tra có đúng 2 chữ số bằng nhau
        int count = 0;
        for (int i = 0; i < 10; i++) {
            if (a[i] == 2) {    // vẫn là số 10001 thì đếm đc 3 số 0 và 2 số 1 => a[0]=3, a[1]=2 
                count++;    //nếu số chữ số bằng 2 thì cộng thêm 1
            }
        }

        // Nếu có đúng 2 chữ số bằng nhau, xuất số num
        if (count == 2) {   // điều kiện nếu có 2 số chữ số bằng nhau thì in ra
            cout << num << endl;
        }
    }

    return 0;
}