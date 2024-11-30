// Tìm giá trị lớn nhất trong mỗi đoạn con có độ dài cố định 𝑘 của một mảng 𝑎 gồm 𝑛 phần tử. 
#include <iostream>
#include <set>

using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n];
for(int &x : a) cin>>x;
multiset<int> giatri;
for(int i = 0; i<k;i++){
    giatri.insert(a[i]);
}
for(int i = k; i <n;i++){
    cout<<*giatri.rbegin()<<" ";
    giatri.erase(giatri.find(a[i-k]));  
  //Xóa phần tử đầu tiên của đoạn con trước đó (a[i-k]), vì đoạn con mới đã dịch sang phải.
    giatri.insert(a[i]);  //Thêm phần tử mới (a[i]) vào đoạn con.
}cout<<*giatri.rbegin()<<endl; //in ra giá trị của đoạn cuối cùng sau khi dịch chuyển. 
}
