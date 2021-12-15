#include<iostream>
#include<cmath>
using namespace std;
void nhap (int &n) { 
    cout<<"Nhap n = ";
    cin>>n;
}
int isprime(int n){
    //flag = 0 => không phải số nguyên tố
    //flag = 1 => số nguyên tố
    
    int flag = 1;

    if (n <2) return flag = 0; //Số nhỏ hơn 2 không phải số nguyên tố => trả về 0
    
    //Sử dụng vòng lặp while để kiểm tra có tồn tại ước số nào khác không
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; //Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp
        }
        i++;
    }

    return flag;
}
int main() { 
    int n;
    nhap(n);
    int check = isprime(n);
    int a[100];
    cout<<"Nhap kich thuoc mang: ";
    cin>>n;
    for(int i=0; i<n;i++) {
        cout<<"Nhap mang"<<endl;
        cin>>a[i];
    }
    if( check == 1 ) cout << n << " la so so nguyen to";
    else cout << n << " khong phai la la so nguyen to";
    return 0;
}