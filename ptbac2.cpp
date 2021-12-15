#include <iostream>
#include <math.h>
using namespace std;
void nhap(int &a, int &b, int &c) { 
    cout<<"Nhap a = "; cin>>a; 
    cout<<"Nhap b = "; cin>>b; 
    cout<<"Nhap c = "; cin>>c; 
}
void xuatpt(int a, int b, int c) { 
    cout<<" "<<a<<".x^2 + "<<b<<".x + "<<c<<" = 0"<<endl;
}
int giaipt(int a, int b, int c) {
    // kiem tra cac he so
    if (a == 0) {
        if (b == 0) {
            cout<<"Phuong trinh vo nghiem!"<<endl;
        } else {
            cout<<"Phuong trinh co mot nghiem: x = "<<(-c / b)<<endl;
        }
    } else {
        // tinh delta
        float delta = b*b - 4*a*c;
        float x1;
        float x2;
        float k=sqrt(delta);
        // tinh nghiem
        if (delta > 0) {
            x1 = (float) ((-b + k) / (2*a));
            x2 = (float) ((-b - k) / (2*a));
            cout<<"Phuong trinh co 2 nghiem la: "<<endl;
            cout<<"x1="<<x1<<endl;
            cout<<"x2="<<x2<<endl;
        } else if (delta == 0) {
            x1 = (-b / (2 * a));
            cout<<"Phong trinh co nghiem kep: x1 = x2 = "<< x1;
        } else 
            cout<<"Phuong trinh vo nghiem!";

    }
}

int main() {
    int a,b,c;
    float x1,x2;
    nhap(a,b,c);
    xuatpt(a,b,c);
    giaipt(a,b,c);
    return 0;
}