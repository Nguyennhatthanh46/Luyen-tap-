/* Nhập mảng 1 chiều gồm N phần tử số nguyên int
Đếm số lượng phần tử trong máng có giá trị là các chữ số giống nhau. Nếu không có thì xuất ra màn hình "No Find".

Input
Nhập N và giá trị các phần tử trong mảng.

Output
Xuất số lượng phần tử trong mảng có giá trị là các chữ số giống nhau.
HOẶC 
Xuất "No Find" nếu không có phần tử nào có giá trị là các chữ số giống nhau trong mảng.

INPUT                              OUTPUT
------------------------------------------------
8
21 95 88 6 59 22 9 12              2
------------------------------------------------
5
6 3 8 12 63                        No Find
*/
#include <iostream>
#define MAX 1000
using namespace std;

int xetham(int n,int tong = 0){
if(n==0) return tong;
return xetham(n/10,tong*10+n%10);
}
void Input(int a[],int &n){
cin>>n;
for(int i = 0; i < n;i++){
    cin>>a[i];
}
}
void Fun(int a[],int n){

int tong = 0;
for(int i = 0; i < n;i++){
    int x = xetham(a[i]);
    if((a[i]-x==0)&&(a[i]>10)){
        tong++;
    }
}
if(tong!=0) cout<<tong;
else cout<<"No Find";
}

int main(){
int a[MAX];
int n;
Input(a,n);
Fun(a,n);
return 0;
}

