//Bài 1. Điền vào chỗ trống những [1] và [2]
#include <iostream>
using namespace std;
struct Point {
int td;
int hd;
};
void Nhap(Point &x){
cin>>x.hd>>x.td;
}
void Xuat(Point *x){
cout<<"("<<x->hd<<", "<<x->td<<")";
}
int main() {
Point A;
Nhap([1]);
Xuat([2]);
return 0;
}
/*Đáp án: A và &A. 
Gọi Nhap(A) để nhập dữ liệu cho A.
Gọi Xuat(&A) để xuất tọa độ của A. &A lấy địa chỉ của A, phù hợp với tham số con trỏ của hàm Xuat. */
