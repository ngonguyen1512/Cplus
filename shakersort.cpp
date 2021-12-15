#include <iostream>
#include <cmath>
using namespace std;

/*
 2 | 9 | 6 | 10 | 5 | 15 | 1 | 3

 2 | 6 | 9 | 5 | 10 | 1 | 3 | 15

 2 | 6 | 5 | 9 | 1 | 3 | 10 | 15

 2 | 5 | 6 | 1 | 3 | 9 | 10 | 15 

 2 | 5 | 1 | 3 | 6 | 9 | 10 | 15

 2 | 1 | 3 | 5 | 6 | 9 | 10 | 15 

 1 | 2 | 3 | 5 | 6 | 9 | 10 | 15
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

void shakerSort(int a[], int n)
{
	int Left = 0; //biến ở đầu mảng
	int Right = n - 1; //biến ở cuối mảng
	int k = n-1; //định vị trí bắt đầu
	while (Left < Right)
	{
		//Luot di
		// duyệt vòng lặp for từ cuối mảng tới đầu mảng
		for (int i = Right; i > Left; i--)
			//nếu số trước lớn hơn số đầu
			if (a[i - 1] > a[i] ) {
				swap(a[i], a[i - 1]);
				k = i; //giá trị nhỏ nhất trong mảng về vị trí đầu tiên
			}
		Left = k;
		//Luot ve
		//duyệt từ đầu mảng đến cuối mảng bắt đầu từ vị trí k
		for (int i = Left; i < Right; i++)
			//nếu số trước lớn hơn số đầu
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				k = i;
			}
		//Dùng biến k đánh dấu để bỏ qua đoạn đã được sắp xếp thứ tự. Sau đó gán k = right
		Right = k;
	}
}

int main() {
    int n;
    int a[100];
    nhap(a,n);
    xuat(a,n);
    shakerSort(a,n);
    cout<<"Mang sau khi sap xep shakersort: "<<endl;
    xuat(a,n);
    return 0;
}