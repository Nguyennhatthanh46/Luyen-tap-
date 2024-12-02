/*
Tìm giá trị lớn nhất (max) của mảng, cho biết trong mảng có bao nhiêu phần tử có giá trị bằng max.

Input
- Nhập số phần tử của mảng.
- Nhập mảng số nguyên.

Output
- Giá trị max
- Số phần tử bằng max.
*/

#include <iostream>
#include <set>
using namespace std;
int main(){
int n; cin>>n;
int a[n];
multiset<int> tong;
for(int i = 0; i < n;i++){
    cin>>a[i];
    tong.insert(a[i]);
}
int gtln = 0;
if(gtln<(*tong.rbegin())){
        gtln = *tong.rbegin();
}
cout<<gtln<<endl;
cout<<tong.count(*tong.rbegin());
}
