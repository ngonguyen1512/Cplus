#include <iostream>
#include <cmath>
using namespace std;
/*
Lần lặp đầu tiên:
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ),  5 > 1. doi cho
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), 5 > 4. doi cho
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), 5 > 2. doi cho
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ),  8 > 5, khong doi cho.

Lần lặp thứ 2:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), 4 > 2 doi cho
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
*/
void nhap(int a[], int &n) { 
    cout<<"Nhap kich thuoc mang n = "; cin>>n;
    cout<<"Nhap gia tri mang"<<endl;
    for(int i=0; i<n; i++) 
        cin>>a[i];
}

void xuat(int a[], int &n) { 
    for(int i=0; i<n; i++)
        cout<<" "<<a[i];
}

void swap(int &x, int &y) {
    int temp = x; // gán giá trị x vào temp
    x = y; // gán giá trị y vào x
    y = temp; // gán giá trị temp vào y
}
 
// Hàm sắp xếp bubble sort
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) 
    // các phần tử cuối đã có
        for (int j = 0; j < n-i-1; j++) 
            if (a[j] > a[j+1]) 
                swap(a[j], a[j+1]);
}

int main() {
    int n;
    int a[100];
    nhap(a,n);
    xuat(a,n);
    bubbleSort(a,n);
    cout<<"Mang sau khi sap xep bubblesort: "<<endl;
    xuat(a,n);
    return 0;
}