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
/*
Chèn 1 giá trị cụ thể vào mảng
*/
#include <iostream>
using namespace std;

int main() {
    int n = 7, k = 3, x = 100; 
    int a[10] = {2, 3, 1, 5, 8, 9, 4}; 

   
    for (int i = n; i >= k; i--) { //Dịch các phần tử từ vị trí k-1 (chỉ số trong mảng) về sau sang bên phải để tạo chỗ trống cho phần tử mới x.
        a[i] = a[i - 1]; 
    }

    a[k - 1] = x; //Thế giá trị tương ứng vào mảng trên tại vị trí k - 1
    ++n; //tăng n lên để chèn đủ các giá trị mảng. 

    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }

    return 0;
}

/*
Ví dụ xóa 1 phần tử trong mảng
*/
#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int a[7] = {2, 3, 1, 5, 8, 9, 4}; 

    // Dịch chuyển các phần tử sau vị trí 4 sang trái
    for (int i = 4; i < n; i++) { 
        a[i - 1] = a[i];
    }
    --n; // Giảm số lượng phần tử sau khi xóa

    // In mảng sau khi xóa
    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

/* Kết quả bài tập dưới đây.
*/
#include <iostream>
using namespace std;
int fun(int arr[][6], int n)
{
    int i,j;
//Xét các từ trái sang phải xem các hàng có bằng 0 hoặc 1 hết hay không. 
   for (i=0; i < n; i++)
{     for (j=0;j<n;j++) //Xét từ cột xem thõa mãn hay không.
        if(arr[i][j]!=0) //Nếu gặp giá trị khác 0 thì kết thúc.
         break;
    if(j==n) return i; //Nếu kết thúc vòng lặp mà không gặp break, thì giá trị j==n (vì vi phạm điều kiện i<n)

   for (j=0;j<n;j++)
    if(arr[i][j]!=1)
        break;
    if(j==n) return i;
}
return -1;
}
int main()
{int a[6][6]={
{0,1,1,1,1,1},
{1,0,0,0,0,0},
{1,0,1,0,0,1},
{0,1,0,1,1,0},
{1,1,1,1,1,1},
{0,0,0,0,0,0},
};
cout<<fun(a,6);
return 0;
}
// Kết quả ra 1. Do các hàng 0 1 2 3, không liên tục. Riêng hàng 4 thì thỏa mãn điều kiện (do = 1) nên i = 4. 
