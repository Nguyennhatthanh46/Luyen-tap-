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
*/
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
