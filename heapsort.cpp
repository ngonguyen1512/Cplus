#include <iostream>
#include <cmath>
using namespace std;
/*
Dữ liệu đầu vào: 4, 10, 3, 5, 1

        4 (0)
       /     \
   10 (1).   3 (2)
   /    \
5 (3)   1 (4)

Áp dụng quy trình chất đống cho chỉ mục 1:

        4 (0)
       /     \
   10 (1).   3 (2)
   /    \
5 (3)   1 (4)

Áp dụng quy trình chất đống cho chỉ mục 0:

        10(0)
       /     \
    5(1).   3 (2)
   /    \
 4(3)   1 (4)
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

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
} 

// Thuật toán sắp xếp vun đống
// Hàm vun đống cho một đỉnh
void heapify(int a[], int n, int i){  // mảng a, n - số phần tử, i - đỉnh cần vun đống
    int max =i;    // Lưu vị trí đỉnh max ban đầu
    int l = i*2+1;   // Vị trí con trái
    int r = l+1;    // Vị trí con phải
    if(l<n && a[l] > a[max]) // vị trí con bên trái tồn tại và lớn hơn mảng gốc
        max = l; //gán max = L
    
    if(r<n && a[r] > a[max])   // Nếu con phải lớn hơn a[max] hiện tại,
        max = r;// gán max = r

    if(max != i){      // Nếu max != i, tức là cha không phải lớn nhất
        swap(a[i], a[max]);   // Đổi chỗ cho phần tử lớn nhất làm cha
        heapify(a ,n , max);    // Đệ quy vun các node phía dưới
    }
    
}

// Ham sap xep vun dong
void heapSort(int a[], int n){
    
    // vun đống từ dưới lên để thành heap
    for(int i = n/2 - 1; i>=0; i--)   // i chạy từ n/2 - 1 về 0 sẽ có n/2 đỉnh 
        heapify(a,n, i);   // Vun từng đỉnh
    
    // Vòng lặp để thực hiện vun đống và lấy phần tử
    for(int j = n-1 ; j>0; j--){   // chạy hết j == 1 sẽ dừng
    // mỗi lần j - 1, tương đương với k xét phần tử cuối 
        swap(a[0], a[j] );  // đổi chỗ phần tử lớn nhất
        heapify(a, j, 0);    // vun đống lại , 
    }
}

int main() {
    int n;
    int a[100];
    nhap(a,n);
    xuat(a,n);
    cout<<endl;
    heapSort(a,n);
    cout<<"Mang sau khi sap xep heapsort: "<<endl;
    xuat(a,n);
    return 0;
}