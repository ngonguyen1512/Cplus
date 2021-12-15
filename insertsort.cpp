#include <iostream>
#include <cmath>
using namespace std;
/*
  4 | 3 | 2 | 9 | 15 | 1 | 7

3 < 4 dua 3 len truoc 4

  3 | 4 | 2 | 9 | 15 | 1 | 7

2 < 4 đưa 2 len truoc 4

  3 | 2 | 4 | 9 | 15 | 1 | 7 

2 < 3 dua 2  len trước 3

  2 | 3 | 4 | 9 | 15 | 1 | 7 

9 > 4 nen giu nguyen

  2 | 3 | 4 | 9 | 15 | 1 | 7 

  2 | 3 | 4 | 9 | 15 | 1 | 7

  1 | 2 | 3 | 4 | 9 | 15 | 7

  1 | 2 | 3 | 4 | 7 | 9 | 15
*/
void nhap(int a[], int &n) { 
    cout<<"Nhap kich thuoc mang n = "; cin>>n;
    cout<<"Nhap gia tri mang"<<endl;
    for(int i=0; i<n; i++) { 
        cin>>a[i];
    }
}

void xuat(int a[], int &n) { 
    for(int i=0; i<n; i++) { 
        cout<<" "<<a[i];
    }
}

/* Hàm sắp xếp sử dụng thuật toán sắp xếp chèn */
void insertionSort(int a[], int n)
{
   int k, x;
   for (int i = 1; i < n; i++)
   {
       x = a[i];// lưu lại giá trị của x tránh bị ghi đè khi dịch chuyển các phần tử
       k = i-1;
        
       /* Di chuyển các phần tử có giá trị lớn hơn giá trị 
       k về sau một vị trí so với vị trí ban đầu
       của nó */
       while (k >= 0 && a[k] > x) {
           // dịch chuyển phần tử sang phải để chừa chỗ cho x
           a[k+1] = a[k];
           k--;
       }
       // chèn x vào vị trí đã tìm được
       a[k+1] = x;
   }
}

int main() {
    int n;
    int a[100];
    nhap(a,n);
    xuat(a,n);
    insertionSort(a,n);
    cout<<"Mang sau khi sap xep insertsort: "<<endl;
    xuat(a,n);
    return 0;
}