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
selection sort sắp xếp một mảng bằng cách đi tìm phần tử có giá trị nhỏ nhất

a[] = 62 24 15 22 1
 Tìm thấy số nhỏ nhất là 1 đưa lên đầu
[1] 24 15 22 62
tìm thấy số nhỏ thứ 2 là 15 đưa lên sau 1
1 [15] 24 22 62
tìm thấy số nhỏ thứ 3 là 22 đưa lên sau 15
1 15 [22] 24 62

11 12 22 [24] 62
*/
void SelectionSort(int a[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i; // tạm thời xem a[i] là nhỏ nhất
        // Tìm phẩn tử nhỏ nhất trong đoạn từ a[i] đến a[n - 1]
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min]) // a[j] mà nhỏ hơn a[min] thì a[j] là nhỏ nhất
                min = j; // lưu lại vị trí a[min] mới vừa tìm được
        if (min != i) // nếu như a[min] không phải là a[i] ban đầu thì đổi chỗ
            swap(a[i], a[min]);
    }
}

int main() {
    int n;
    int a[100];
    nhap(a,n);
    xuat(a,n);
    cout<<endl;
    SelectionSort(a,n);
    cout<<"Mang sau khi sap xep selectionsort: "<<endl;
    xuat(a,n);
    return 0;
}