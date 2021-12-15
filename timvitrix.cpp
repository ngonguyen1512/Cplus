#include <iostream>
using namespace std;
void nhapm(int a[], int &n) { 
    cout<<"Nhap kich thuoc n = "; cin>>n;
    cout<<"Nhap gia tri mang: "<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
}
void nhapx(int &x) { 
    cout<<"Nhap phan tu x can tim: "; cin>>x;
}
int vitrix(int a[], int n, int x) {
    int vitrix = 0;
    cout << "\nvi tri phan tu x trong mang ";
    for (int i = 0; i < n; i++)
        if (a[i] == x) {
            vitrix = i; //gán vị trí i tìm thấy vào vitrix
            cout << vitrix << "\t"; 
            return vitrix;
        }
}
int main() {
    int n,x;
    int a[100];
    nhapm(a,n);
    nhapx(x);
    vitrix(a,n,x);
}