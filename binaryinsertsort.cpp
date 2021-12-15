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

int binarySearch(int a[], int item, int low, int high) 
{ 
    if (high <= low) 
        return (item > a[low])?  (low + 1): low; 
  
    int mid = (low + high)/2; 
  
    if(item == a[mid]) 
        return mid+1; 
  
    if(item > a[mid]) 
        return binarySearch(a, item, mid+1, high); 
    return binarySearch(a, item, low, mid-1); 
} 
  
//hàm sắp xếp chèn mảng a a[] có kích thước n không có biến trả về
void insertionSort(int a[], int n) { 
    int loc, k, x; 
  
    for (int i = 1; i < n; i++) { 
        x = a[i]; //lưu lại giá trị của x tránh bị ghi đè khi dịch chuyển các phần tử
        k = i - 1; 
        
        // tìm vị trí nơi sẽ được chọn
        loc = binarySearch(a, selected, 0, j); 
  
        // Di chuyển tất cả các phần tử này đến vị trí khác để tạo không gian
        while (j >= loc) { 
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
    cout<<"Mang sau khi sap xep binary insertion sort: "<<endl;
    xuat(a,n);
    return 0;
}