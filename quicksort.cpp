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

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
} 

/*
Quick Sort (Sắp xếp nhanh) sử dụng cách thức chia để trị
            9 | -3 | 5 |2 | 6 | 8 | -6 | 1 | 3
      <=3     /                           \   >=3
     -3 | 2 | -6 | 1        3         8 | 5 | 9 | 6
 <=1 /          \ >=1              <=6 /        \ >=6
 -3 | -6   1     2                    5    6   9 | 8
  /   \ >=-6                                    / \>=8
 -6   -3                                       8   9
*/
int partition (int a[], int low, int high)
{
    int pivot = a[high];    // chọn phần tử cuối làm chốt
    int left = low; //left là vị trí đầu
    int right = high - 1; // right là vị trí sau pivot
    while(true){
        while(left <= right && a[left] < pivot) 
            left++; // Tìm phần tử >= a[pivot]
        while(right >= left && a[right] > pivot)      
            right--; // Tìm phần tử <= a[pivot]
        if (left >= right) 
            break; // Đã duyệt xong thì thoát vòng lặp
        swap(&a[left], &a[right]); // Nếu chưa xong, đổi chỗ.
        left++; // Vì left hiện tại đã xét, nên cần tăng
        right--; // Vì right hiện tại đã xét, nên cần giảm
    }
    swap(&a[left], &a[high]);
    return left; // Trả về chỉ số sẽ dùng để chia đổi mảng
}

void quickSort(int a[], int low, int high)
{
    if (low < high) {
        /* p là chỉ số nơi phần tử này đã đứng đúng vị trí
         và là phần tử chia mảng làm 2 mảng con trái & phải */
        int p = partition(a, low, high);
 
        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int n;
    int a[100];
    nhap(a,n);
    xuat(a,n);
    cout<<endl;
    QuickSort(a,n);
    cout<<"Mang sau khi sap xep quicksort: "<<endl;
    xuat(a,n);
    return 0;
}