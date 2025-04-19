#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define row 4
#define col 4

bool CheckSnt(int n )
{
    if (n < 2) return false;
    for (int i = 2 ; i <= sqrt(n) ; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}


int timMax(int mt[][col], int m, int n)
{
	int i, j, max;
	max = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (mt[i][j] > max && CheckSnt(mt[i][j]))
				max = mt[i][j];
	return max;
}

int timMax2(int mt[][col], int m, int n)
{
	int i, j, max2;
	max2 = 0;
    if(timMax(mt, m, n) != 0){
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (mt[i][j] > max2 && CheckSnt(mt[i][j]) && mt[i][j] < timMax(mt, m, n))
				max2 = mt[i][j];
                
    }
    return max2;
}
    // 
void find(int mat[][col], int x, int y, int& xA, int& yA, int& xB, int& yB){
    
    int i, j;
    if(timMax(mat, x, y) != 0){
	for (i = 0; i < x; i++)
		for (j = 0; j < y; j++)
			if (mat[i][j] == timMax(mat, x, y)){
        xA = i;
        yA = j;
        break;
        }
 	for (i = 0; i < x; i++)
		for (j = 0; j < y; j++)
			if (mat[i][j] == timMax2(mat, x, y)){
        xB = i;
        yB = j;
        break;
        }   
    }else
    cout << "trong mang khong co so nguyen to";
}  
int main(){

    int xA = -1, xB = -1, yA = -1, yB = -1;

    int a[row][col] = {{1, 2, 3, 4},
        {12, 13, 14, 5},
		{11, 16, 15, 6},
		{10, 9, 8, 7}   };
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

    find(a, row, col,xA, yA, xB, yB);

    cout << "vi tri so lon thu nhat la: a[" << xA << "]" << "[" << yA << "]\n"; 
    cout << "vi tri so lon thu 2 la: a[" << xB << "]" << "[" << yB << "]\n";

    return 0; 

}
