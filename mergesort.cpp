#include <iostream>
#include <cmath>
using namespace std;


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
/*
        8 | 4 | 5 | 3 | 9 | 7 | 10           chia 2 
           /                      \
    8 | 4 | 5 | 3              9 | 7 | 10
     /         \                /       \
  8 | 4       5 | 3          9 | 7      10
  /   \       /   \          /   \       |
 8     4     5     3        9     7     10
  \   /       \   /          \    /      |
  4 | 8       3 | 5           7 | 9     10
     \         /                 \      /
    3 | 4 | 5 | 8              7 | 9 |10
            \                    /
          3 | 4 | 5 | 7 | 8 | 9 | 10
*/
// Hàm trộn hai mảng con vào nhau theo đúng thứ tự
void merge(int a[], int l, int m, int r) 
{ 
    int n1 = m - l + 1; // Số phần tử của mảng thứ nhất
    int n2 = r - m; // Số phần tử của mảng thứ hai
  
    // Tạo hai mảng tạm để lưu hai mảng con
    int L[n1], R[n2]; 
  
    // Sao chép phần tử 2 mảng con vào mảng tạm
    for(int i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for(int j = 0; j < n2; j++) 
        R[j] = a[m + 1 + j]; 
  
    int i = 0, j = 0;   
    // current là vị trí hiện tại trong mảng a
    int current = l; 
    
    // Trộn hai mảng vào nhau theo đúng thứ tự
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) { 
            a[current] = L[i]; 
            i++; 
        } 
        else { 
            a[current] = R[j]; 
            j++; 
        } 
        current++; 
    } 
  
    // Nếu mảng thứ nhất còn phần tử thì copy nó vào mảng a
    while (i < n1)  { 
        a[current] = L[i]; 
        i++; 
        current++; 
    } 
  
    // Nếu mảng thứ hai còn phần tử thì copy nó vào mảng a
    while (j < n2) { 
        a[current] = R[j]; 
        j++; 
        current++; 
    } 
} 
  
// Hàm chia đôi mảng và gọi hàm trộn
void mergeSort(int a[], int l, int r) 
{ 
    // Kiểm tra xem còn chia đôi mảng nữa không
    if (l < r) {   
        // left + (right - left) / 2 tương đương với (left + right) / 2
        int m = l + (r - l) / 2; 
  
        // Sắp xếp mảng thứ nhất
        mergeSort(a, l, m); 
        // Sắp xếp mảng thứ hai
        mergeSort(a, m + 1, r); 
  
        // Trộn hai mảng đã sắp xếp
        merge(a, l, m, r); 
    } 
} 
  
int main() {
    int n;
    int a[100];
    nhap(a,n);
    xuat(a,n);
    mergeSort(a,0,n-1);
    cout<<"Mang sau khi sap xep mergesort: "<<endl;
    xuat(a,n);
    return 0;
}