#include<iostream>
using namespace std;
const int dong=100;
const int cot=100;
void nhaps(int &n, int &m) {
    cout<<"Nhap n = "; cin>>n; //n la dong
    cout<<"Nhap m = "; cin>>m; //m la cot
}
void nhapm(int a[][cot], int n, int m) { 
    cout<<"Nhap gia tri mang: "<<endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
}
void xuatm(int a[][cot], int n, int m) {
    cout<<"Mang"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) 
            cout<<" "<<a[i][j];
        cout<<" "<<endl;
    }
}
int dcheochinh(int a[][cot], int n, int m) {
    int sum=0;
    for (int i = 0; i < n; i++) 
      for (int j = 0; j < m; j++) 
         if (i == j)
            sum = sum + a[i][j];
   return sum;
}
int dcheophu(int a[][cot],int n, int m)// tong duong cheo phu
{
	int tong=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(j==n-i-1)
				tong+=a[i][j];
	return tong;
}

void ChuyenMang(int a[][100], int m, int n, int B[], int &p)
{
    p = m*n;    //p là số phần tử của mảng B
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            B[i*n + j] = a[i][j];
}
void SapXep1Chieu(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}
void ZicZacXeo(int a[][cot], int n, int m)
{
    int B[100];
    int p;
    ChuyenMang(a,m,n,B,p);
    SapXep1Chieu(B,p);
    int vt = 0;
    int trai = 1, phai = 1;
    int i = 0, j = 0;
    a[i][j] = B[vt++];
    do {
        if (j == n - 1)
            i++;
        else
            j++;
        a[i][j] = B[vt++];
        cout<<"a["<<i<<"]["<<j<<"]= "<<a[i][j];
        while (i < m - 1 && j > 0) {
            i++;
            j--;
            a[i][j] = B[vt++];
            cout<<" a["<<i<<"]["<<j<<"]= "<<a[i][j];
        }
        if (i == m - 1)
            j++;
        else
            i++;
        a[i][j] = B[vt++];
        cout<<" a["<<i<<"]["<<j<<"]= "<<a[i][j];
        while (i > 0 && j < n - 1) {
            i--;
            j++;
            a[i][j] = B[vt++];
            cout<<" a["<<i<<"]["<<j<<"]= "<<a[i][j];
        }
    } while (i < m - 1 || j < n - 1);
}
void Zigzag(int a[][cot],int n,int m)
{
     int dem=1;
     for(int i=0;i<n;i++)
     {
             if(i%2==0)
             for(int j=0;j<m;j++)
               a[i][j]=dem++;
             else
             for(int j=m-1;j>=0;j--)
               a[i][j]=dem++;
     }
}
void menu(int &k) {
    cout<<"================================================================"<<endl;
    cout<<"1.Nhap mang"<<endl;
    cout<<"2. Xuat mang"<<endl;
    cout<<"3. Tong duong cheo chinh"<<endl;
    cout<<"4. Tong duong cheo phu"<<endl;
    cout<<"5. Sap xep zigzag"<<endl;
    cout<<"6. Sap xep ziczac xeo"<<endl;
    cout<<"================================================================"<<endl;
    
}
int main() {
    int n,m,k;
    int a[dong][cot];
    menu(k);
    do { 
        cout<<"Nhap lua chon";
        cin>>k;
        switch(k) {
            case 1: {
                nhaps(n,m);
                nhapm(a,n,m);
                break;
            }
            case 2: {
                xuatm(a,n,m);
                break;
            }
            case 3: {
                cout<<"Tong duong cheo chinh la: "<<dcheochinh(a,n,m)<<endl;
                break;
            }
            case 4: {
                cout<<"Tong duong cheo phu la: "<<dcheophu(a,n,m)<<endl;
                break;
            }
            case 5: {
                Zigzag(a,n,m);
                xuatm(a,n,m);
                break;
            }
            case 6: { 
                ZicZacXeo(a,n,m);
                xuatm(a,n,m);
                break;
            }
        }
    } while(k!=7);
    return 0;
}