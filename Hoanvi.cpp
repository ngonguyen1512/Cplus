#include <iostream>
using namespace std;

void hoanvi(int &a, int &b)  
{
    int temp = a;
    a = b;
    b = temp;
}
 
void nhap(int &a, int &b) {
    cout<<"Nhap 2 so a va b"<<endl;
    cin>>a>>b;
}

void xuat(int a, int b) {
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

int main()
{
    int a, b;
    nhap(a,b);
    xuat(a,b);
    hoanvi(a, b);
    cout<<"Sau khi hoan vi"<<endl;
    xuat(a,b);
    return 0;
}