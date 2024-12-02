//BÀI TẬP VỀ MẢNG.
/*
Bài 1. Viết chương trình nhập vào mảng. Nếu có giá trị trùng thì yêu cầu nhập lại mảng ấy. 
*/
#include <iostream>
#include <set>
using namespace std;
int main(){
int n; cin>>n;
multiset<int> tong;
for(int i = 0; i < n; i++){
    int x; cin>>x;
    if(tong.count(x)!=0){
        cout<<"Vui long nhap lai: "<<endl;
        i--;
    } else{
        tong.insert(x);}
}
cout<<endl;
cout<<"Cac gia tri trong mang la:"<<endl;
for (auto y: tong){
    cout<<y<<" ";
}
}
