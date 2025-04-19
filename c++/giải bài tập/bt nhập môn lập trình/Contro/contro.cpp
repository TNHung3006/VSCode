#include <iostream>

using namespace std;

// Hàm nhập mảng sử dụng con trỏ
void nhapMang(int *arr, int n) {
    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); // Tương đương arr[i]
    }
}

// Hàm hoán đổi giá trị sử dụng con trỏ
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng tăng dần sử dụng con trỏ (thuật toán Bubble Sort)
void sapXepTangDan(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) { // Tương đương arr[j] > arr[j+1]
                swap(arr + i, arr + j); // Tương đương &arr[j], &arr[j+1]
            }
        }
    }
}

// Hàm in mảng sử dụng con trỏ
void inMang(int *arr, int n) {
    cout << "Mang sau khi sap xep:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; // Tương đương arr[i]
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int *arr = new int[n]; // Cấp phát động bộ nhớ cho mảng

    nhapMang(arr, n);
    sapXepTangDan(arr, n);
    inMang(arr, n);

    return 0;
}