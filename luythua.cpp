#include <iostream> 
using namespace std;

void nhap(int &a, int &n) {
    cout<<"Nhap co so a = ";
    cin>>a;
    cout<<"Nhap mu n = ";
    cin>>n;
}
int luythua(int a, int n) {
    int luythua=1;
    for(int i=1; i<=n; i++) {
        luythua=a*luythua;
    }
    return luythua;
}
int main(){
    int a,n;
    nhap(a,n);
    cout<<a<<"^"<<n<<" = "<<luythua(a,n)<<endl;
    return 0;
}
