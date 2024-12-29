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



//Bài 2. Cho biết kết quả đoạn chương trình sau. 
#include <iostream>
#include <cmath>
using namespace std;
struct Point {
int x,y;
};
int main() {
Point A = {5,2}, *B;
B = &A;
A.x = 1;
(*B).y = 10;
cout<<A.x<<" "<<A.y<<endl;
cout<<(*B).x<<" "<<B->y<<endl;
return 0;
}
/*Kết quả: 1 10
           1 10 
Khai báo con trỏ *B, sau đó B lấy địa chỉ của A. 
Khai báo và gán giá trị A.x = 1. (*B).y = 10 vào 2 thuộc tính x,y. 
Xuất lệnh A.x và A.y hoặc (*B).x và B->y đều được. */


//Bài 3.
#include <iostream>
using namespace std;
struct NGAYTHANGNAM {
int a,m,y;
};
struct SINHVIEN {
int MASV;
NGAYTHANGNAM ngaysinh;
};
int main() {
SINHVIEN sv1 = {7520045,27,05,1989};
cout<<sv1.MASV<<sv1.ngaysinh.a<<sv1.ngaysinh.m<<sv1.ngaysinh.y<<endl;
return 0;
}
/*
Khai báo hàm cấu trúc NGAYTHANG NAM và SINHVIEN. Trong đó định nghĩa NGAYTHANGNAM ngaysinh là thuộc tính của SINHVIEN. 
Khai báo và gán cái giá trị của SINHVIEN thì phải đủ 4 thuộc tính. Gồm cả thuộc tính con ngaysinh.
Khi xuất giá trị, các số gần nhau và không tính số 0 ở đầu các giá trị khi gán.
KẾT QUẢ: 75200452751989.
*/


//Bài 4.
#include <iostream>
#include <string.h>
using namespace std;
struct PERSON {
char hoten[30];
PERSON *ba, *me;
};
int main() {
PERSON A,B,C;
strcpy(A.hoten, "Yen");
strcpy(B.hoten, "Luong");
strcpy(C.hoten, "Nguyen");
A.ba = &B;
A.me = &C;
B.ba = B.me = NULL;
C.ba = C.me = NULL;
cout<<A.ba->hoten<<", "<<B.hoten<<", "<<A.me->hoten<<endl;
return 0;
}
/*
A.ba = &B;:
- Con trỏ ba của A trỏ đến địa chỉ của B, nghĩa là B là cha của A.
A.me = &C;:
- Con trỏ me của A trỏ đến địa chỉ của C, nghĩa là C là mẹ của A.
B.ba = B.me = NULL;:
- B không có thông tin về cha mẹ, nên cả hai con trỏ ba và me của B được gán NULL.
C.ba = C.me = NULL;:
- C cũng không có thông tin về cha mẹ, nên cả hai con trỏ ba và me của C được gán NULL.
KẾT QUẢ: Luong, Luong, Nguyen
*/



//Bài 5. 2 đoạn code đây đúng hay sai, sai ở đâu?

//1.
#include <iostream>
#include <string.h>
using namespace std;
struct SINHVIEN{
char Hoten[30];
float diemtoan, diemhoa, diemly;
} sv1;
int main(){
sv1.Hoten = "NGUYEN VAN A";
sv1.diemtoan = 10;
sv1.diemhoa = 6.5;
sv1.diemly = 9;
return 0;
}

//2.
#include <iostream>
#include <string.h>
using namespace std;
struct SINHVIEN{
char Hoten[30];
float diemtoan, diemhoa, diemly;
};
int main(){
SINHVIEN *sv2;
strcpy(sv2->Hoten, "NGUYEN VAN A");
sv2->diemtoan = 10;
sv2->diemhoa = 6.5;
sv2->diemly = 9;
return 0;
}

/*
Đoạn code 1 sai ở cách gán chuỗi ký tự. Không thể gán trực tiếp chuỗi vào 1 thuộc tính.
Thay vào đó nên thay bằng lệnh gán chuỗi kí tự trong hàm <string.h>.
Thay dòng ' sv1.Hoten = "NGUYEN VAN A"; '  thành ' strcpy(sv1.Hoten,"NGUYEN VAN A"); '

Đoạn code 2. sv2 là một con trỏ kiểu SINHVIEN, nhưng chưa được gán đến một vùng nhớ hợp lệ.
Khi thực hiện thao tác:
strcpy(sv2->Hoten, "NGUYEN VAN A");
Con trỏ sv2 đang trỏ đến vùng nhớ không xác định, dẫn đến lỗi truy cập bộ nhớ.
Sửa lại:
int main(){
SINHVIEN *sv2 = new SINHVIEN; //Cấp bộ nhớ
strcpy(sv2->Hoten, "NGUYEN VAN A");
sv2->diemtoan = 10;
sv2->diemhoa = 6.5;
sv2->diemly = 9;
delete sv2; //Xóa vùng nhớ.
return 0;
*/



/* Bài 6.
Điền vào các vị trí trống để hoàn chỉnh một chương trình cho phép nhập một đa giác (DAGIAC) có n điểm (DIEM), với 3 ≤ n ≤ 10. 
Chương trình yêu cầu người dùng nhập số điểm của đa giác, sau đó nhập tọa độ của từng điểm. Ví dụ, khi nhập đa giác ABCD, cần phải nhập tọa độ của 4 điểm (A, B, C, D) tạo thành đa giác. 
Chú ý, không cần kiểm tra tỉnh hợp lệ của đa giác và phải tận dụng được hàm nhập một điểm (NhapMotDiem) trong hàm nhập một đa giác NhapMotDaGiac).
*/
#include <iostream>
using namespace std;
#define MAXN 10
struct DIEM {
int x,y;
};
struct DAGIAC{
int n;
DIEM *p;
};

void NhapMotDiem([1]){
[2]
}

[3] NhapMotDaGiac([4]){
[5]
[6]
[7]
[8]
[9]
}

int main(){
DAGIAC A;
A = NhapMotDaGiac();
return 0;
}
/*
Đáp án:
#include <iostream>
using namespace std;
#define MAXN 10
struct DIEM {
int x,y;
};
struct DAGIAC{
int n;
DIEM *p;
};
void NhapMotDiem(DIEM &a){
cin>>a.x>>a.y;
}
DAGIAC NhapMotDaGiac(){
DAGIAC d;
cin>>d.n;
d.p = new DIEM[d.n];
for(int i = 0; i<d.n;i++){
    NhapMotDiem(d.p[i]);
}
return d;
}
int main(){
DAGIAC A;
A = NhapMotDaGiac();
delete[] A.p;
return 0;
}
*/



//Bài 6.
/* Điền vào các vị trí trống để hoàn chỉnh đoạn chương trình nhập Đa thức thưa một biến. Định nghĩa: Đa thức một biển f(x) có dạng:
S=an.x^n + an-1.x^(n-1)+...+ ao
Với ai (i: 0..n) là hệ số, x là biển, n là số mũ lớn nhất trong đa thức.
Ví dụ đa thức thưa: 3x^4+6x^10-9x^100
*/
#include <iostream>
using namespace std;
#define MAXN 1000
struct DONTHUC{
float heso;
int somu;
};
struct DATHUC{
[1]
int soluong;
};
void Nhap([2]){
cin>>a.heso>>a.somu;
}
DATHUC Nhap(){
DATHUC A;
cin>>A.soluong;
for(int i = 0;i<A.soluong;i++){
 Nhap([3]);
}
return A;
}
int main(){
DATHUC B;
B = Nhap();
}
//Đáp án: 
/* [1] DONTHUC donthuc[MAXN];
[2] DONTHUC &a;
[3] A.donthuc[i];
*/



//VI DU ve chuong trinh:
#include <iostream>
#include <cstring>
using namespace std;
struct SACH{
char Ten[100];
char Tacgia[50];
float Gia;
};
int main(){
SACH x;
SACH *p = &x;
cin.getline(p->Ten,100);
cin.getline(p->Tacgia,50);
cin>>p->Gia;
cout<<"TEN: "<<p->Ten<<endl;
cout<<"TACGIA: "<<p->Tacgia<<endl;
cout<<"GIA: "<<p->Gia<<endl;
return 0;
}



