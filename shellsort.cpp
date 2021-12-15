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
interval = 4
35 | 33 | 42 | 10 | 14 | 19 | 27 | 44 
 |   |    |    |    |     |    |    | 
 35  |    |    |    14    |    |    |
     33   |    |          19   |    | 
          42   |               27   |
               10                  44
14 | 19 | 27 | 10 | 35 | 33 | 42 | 44 

interval = 2
14 | 19 | 27 | 10 | 35 | 33 | 42 | 44 
 |   |    |    |    |    |    |    |
 14  |    27   |    35   |    42   |
     19       10         33        44
14 | 19 | 27 | 10 | 35 | 33 | 42 | 44 

interval = 1
14 | 19 | 27 | 10 | 35 | 33 | 42 | 44  (green 14)

14 | 19 | 27 | 10 | 35 | 33 | 42 | 44 (green 19)

14 | 19 | 27 | 10 | 35 | 33 | 42 | 44 (green 27)

14 | 19 | 27 | 10 | 35 | 33 | 42 | 44 (red 10)

14 | 19 | 10 | 27 | 35 | 33 | 42 | 44 (red 10)

14 | 10 | 19 | 27 | 35 | 33 | 42 | 44 (red 10)

10 | 14 | 19 | 27 | 35 | 33 | 42 | 44 (green 10)

10 | 14 | 19 | 27 | 35 | 33 | 42 | 44 (green 35)

10 | 14 | 19 | 27 | 35 | 33 | 42 | 44 (red 33)

10 | 14 | 19 | 27 | 33 | 35 | 42 | 44 (green 33)

10 | 14 | 19 | 27 | 35 | 33 | 42 | 44

*/
/* Hàm sắp xếp sử dụng theo thuật toán sắp xếp chèn insertsort */
void shellSort(int a[], int n){
	int interval, i, j, temp; //khoảng interval sẽ nhận giá trị n/2, n/4... cho đến 1
	for(interval = n/2; interval > 0; interval /= 2){
		for(i = interval; i < n; i++){
            /* chọn giá trị để chèn */
			temp = a[i];
            /*dịch chuyển phần tử sang phải*/
			for(j = i; j >= interval && a[j - interval] > temp; j -= interval){
				a[j] = a[j - interval];				
			}
            /* chèn giá trị vào vị trí trên */
			a[j] = temp;
		}
    }
}

int main() {
    int n;
    int a[100];
    nhap(a,n);
    xuat(a,n);
    cout<<endl;
    shellSort(a,n);
    cout<<"Mang sau khi sap xep shellsort: "<<endl;
    xuat(a,n);
    return 0;
}