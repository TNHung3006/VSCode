#include <iostream>
#include <math.h>
using namespace std;

#define maxC 107
#define maxR 107

void Nhapmang(int a[][maxC], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
}
void Xuatmang(int a[][maxC], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl; 
    }
}
int laSCP(int x){
    int tmp = sqrt(x);
    if(tmp*tmp == x) return 1;
    return 0;
}
void Sochinhphuong(int a[][maxC], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            if(laSCP(a[i][j]))
                cout << a[i][j] << " ";
    }
}

int TongSCPDCP(int a[][maxC], int m, int n) {
    int S = 0;
    for (int i = 0; i < n; i++) {
        if (laSCP(a[i][n - 1 - i]))
            S += a[i][n - 1 - i];
    }
    return S;
}
int TongSCP(int a[][maxC], int m, int n) {
    int S = 0;
    for (int i = 0; i < n; i++) {
        if (laSCP(a[i][n - 1 - i]))
            S += a[i][n - 1 - i];
    }
    return S;
}
int laSNT(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int KTSNT(int a[][maxC], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            if(laSNT(a[i][j]) == 0)
                return 0;
    }
    return 1;
}
int KTmangdoixung(int a[][maxC], int m, int n){
    if(m != n) return 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            if(a[i][j] != a[j][i])
                return 0;
    }
    return 1;
}
void MaTranHoanvi(int a[][maxC], int m, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[j][i] << " ";
        }
        cout << endl; 
    }
}
int main(){
    int arr[maxR][maxC], m, n;
    cout << "nhap so phan tu hang: ";
    cin >> m;
    cout << "nhap so phan tu cot: ";
    cin >> n;

    cout << "\nnhap cac gia tri trong mang: ";
    Nhapmang(arr, m, n);
    cout << "\nmang ban dau co dang: \n";
    Xuatmang(arr, m, n);

    //in ra số chính phương
    // cout << "\nso chinh phuong: ";
    // Sochinhphuong(arr, m, n);

    //tổng số chính phương trên đường chéo phụ
    //cout << "\nTong so chinh phuong: " << TongSCP-DCP(arr, m, n);

    // //kiểm tra mang co toàn snt
    // if(KTSNT(arr, m, n) == 1) cout << "\nmang chua toan so nguyen to ";
    // else cout << "\nmang khong chua toan so nguyen to";

    //kiểm tra xem mảng có đối xứng 0
    // if(KTmangdoixung(arr, m, n) == 1) cout << "\nmang doi xung";
    // else cout << "\nmang khong doi xung";

    //in ra ma trận hoán vị của ma trận đã nhập
    MaTranHoanvi(arr, m, n);

    return 0;
}