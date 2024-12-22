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


/* Nhập măng 1 chiều A gồm N phần từ số nguyên.
Xóa tất cả các phần tử là số nguyên tố trong màng A
Input
Nhập N và giá trị các phần tử trong màng.
    
Output
Xuất ra mảng A sau khi xóa tất cả các phần tử là số nguyên tố

INPUT                              OUTPUT
------------------------------------------------
1                                  9
9                                  
------------------------------------------------
5                                  1 4
1 2 3 4 5      
------------------------------------------------
3                                  9 1
9 5 1   
*/

#include <iostream>
#include <math.h>
#define MAX 1000
using namespace std;

bool songuyento(int n){
if(n<2) return false;
if(n>2&&n%2==0) return false;
for(int i = 2;i<=sqrt(n);i++){
    if(n%i==0)return false;
}
return true;
}
void Input(int a[],int &n){
cin>>n;
for(int i = 0; i < n;i++){
    cin>>a[i];
}
}
void Fun(int a[],int &n){
int b[MAX];
int j = 0;
for(int i = 0; i < n;i++){
    if(songuyento(a[i])==false){
        b[j++]=a[i];
    }
}
for(int i = 0; i<j;i++){
    a[i]=b[i];
}n = j;
}

void Output(int a[],int n){
for(int i = 0; i < n;i++){
    cout<<a[i]<<" ";
}
}

int main(){
int a[MAX];
int n;
Input(a,n);
Fun(a,n);
Output(a,n);
return 0;
}
