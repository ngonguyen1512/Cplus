#include <iostream>
using namespace std;
void nhapn(int &n) { 
    cout<<"Nhap n = ";
    cin>>n;
}
int Fibonacci(int n) // dung de quy
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
// int Fibonacci(int n)
// {
//     int a1 = 1, a2 = 1;
//     if (n == 1 || n == 2)
//         return 1;
//     int i = 3, a;
//     while (i <= n)
//     {
//         a = a1 + a2;
//         a1 = a2;
//         a2 = a;
//         i++;
//     }
//     return a;
// }
int main() { 
    int n;
    nhapn(n);
    cout<<"Fibonacci thu "<<n<<" la: "<<Fibonacci(n)<<endl;
    return 0;
}