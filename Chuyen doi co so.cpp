#include <bits/stdc++.h>
using namespace std;

long long ChuyenHeThapPhanSangNhiPhan(long long SoThapPhan){
long long SoNhiPhan = 0;
long long n = 1;
while(SoThapPhan != 0){
SoNhiPhan += (SoThapPhan%2)*n;
n*=10;
SoThapPhan/=2;
}
return SoNhiPhan;
}

bool KT(long long SoNhiPhan){
for(long long i = SoNhiPhan;i!=0;i/=10){
    if(i%10!=0&&i%10!=1) return false;
}
return true;
}

long long ChuyenNhiPhanSangThapPhan(long long SoNhiPhan){
long long n = 1;
long long SoThapPhan = 0;
for(long long i = SoNhiPhan;i!=0;i/=10){
    SoThapPhan+=(i%10)*n;
    n*=2;
}
return SoThapPhan;
}

string ChuyenHeThapPhanSangThapLucPhan(long long SoThapPhan){
if(SoThapPhan==0) return "0";
string SoThapLucPhan ="";
char chuoiGan[] ="0123456789ABCDEF";
while(SoThapPhan>0){
    int i = SoThapPhan%16;
    SoThapLucPhan=chuoiGan[i]+SoThapLucPhan;
    SoThapPhan/=16;
}
return SoThapLucPhan;
}

long long ChuyenHeThapLucPhanSangThapPhan(string SoThapLucPhan) {
    long long SoThapPhan = 0;
    for (int i = 0; i < SoThapLucPhan.length(); i++) {
        char c = SoThapLucPhan[i];
        int n;
        if (c >= '0' && c <= '9') {
            n = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            n = c - 'A' + 10;
        } else {
            cout << "Ky tu khong hop le trong he thap luc phan!" << endl;
            exit(0);
            }
      SoThapPhan = SoThapPhan * 16 + n;
    }

    return SoThapPhan;
}

void ChuyenNhiPhanSangThapLucPhan(long long SoNhiPhan){
vector<long long> v;
long long SoThapPhan = 0;
long long a;
if(SoNhiPhan==0) cout<<0;
while (SoNhiPhan > 0) {
        v.push_back(SoNhiPhan % 10000);
        SoNhiPhan /= 10000;
    }
for(auto it = v.rbegin();it!=v.rend();it++){
  auto y = ChuyenNhiPhanSangThapPhan(*it);
    if(y<10) {cout<<y;
    } else{
    cout<<char('A'+(y-10));
    }
}
}

string ChuyenThapLucPhanSangNhiPhan(string SoThapLucPhan){
string MangGanGiaTri[16]={
"0000", "0001", "0010", "0011",
"0100", "0101", "0110", "0111",
"1000", "1001", "1010", "1011",
"1100", "1101", "1110", "1111"};
string SoNhiPhan="";
int n;
    for (int i = 0; i < SoThapLucPhan.length(); i++) {
        char c = SoThapLucPhan[i];
        if (c >= '0' && c <= '9') {
            n = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            n = c - 'A' + 10;
        } else {
            cout << "Ky tu khong hop le trong he thap luc phan!" << endl;
            exit(0);
            }
        SoNhiPhan += MangGanGiaTri[n];
    }
    return SoNhiPhan;
}

int main() {
int n;
cout<<"Nhap lua chon de chuyen doi giua cac he so."<<endl<<"Vui Long Nhap tu 1 den 6."<<endl;
cout<<"1. Chuyen so THAP PHAN sang so NHI PHAN.\n";
cout<<"2. Chuyen so NHI PHAN sang so THAP PHAN.\n";
cout<<"3. Chuyen so THAP PHAN sang so THAP LUC PHAN.\n";
cout<<"4. Chuyen so THAP LUC PHAN sang so THAP PHAN.\n";
cout<<"5. Chuyen so NHI PHAN sang so THAP LUC PHAN.\n";
cout<<"6. Chuyen so Thap Luc Phan sang so Nhi Phan.\n";
cin>>n;
while(n<1||n>6){
    cout<<"Vui Long Nhap Lai: ";
    cin>>n;
}

switch(n){
case 1: {
    cout<<"Nhap so THAP PHAN: ";
    long long n;
    cin>>n;
    cout<<"KET QUA so NHI PHAN: "<<ChuyenHeThapPhanSangNhiPhan(n);

}
 break;

case 2: {
    cout<<"Nhap so NHI PHAN: ";
    long long n;
    cin>>n;
    if(KT(n)){
    cout<<"KET QUA so THAP PHAN: "<<ChuyenNhiPhanSangThapPhan(n);
    }
    else {cout<<"So Khong Hop Le.";}
}
 break;
case 3: {
    cout<<"Nhap so THAP PHAN: ";
    long long n;
    cin>>n;
    cout<<"KET QUA so THAP LUC PHAN: "<<ChuyenHeThapPhanSangThapLucPhan(n);
}
 break;
case 4: {
    cout<<"Nhap so THAP LUC PHAN: ";
    string n;
    cin>>n;
    cout<<"KET QUA so THAP PHAN: "<<ChuyenHeThapLucPhanSangThapPhan(n);
}
 break;
case 5: {
    cout<<"Nhap so NHI PHAN: ";
    long long n;
    cin>>n;
     if(KT(n)){
    cout<<"KET QUA so THAP LUC PHAN: ";
    ChuyenNhiPhanSangThapLucPhan(n);
     } else{cout<<"So Khong Hop Le.";}
}
 break;
case 6: {
    cout<<"Nhap so THAP LUC PHAN: ";
    string n;
    cin>>n;
    cout<<"KET QUA so NHI PHAN: "<<ChuyenThapLucPhanSangNhiPhan(n);
 break;
}
}
}
