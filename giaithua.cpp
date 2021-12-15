#include<iostream>
using namespace std;
void nhap(int &n) { 
    cout<<"Nhap n = ";
    cin>>n;
}
int giaithua(int n){
    if(n==1)
        return 1;
    else
        return n*giaithua(n-1);
}
int main () {
    int n;
    nhap(n);
    cout<<n<<"! = "<<giaithua(n)<<endl;
    return 0;
}