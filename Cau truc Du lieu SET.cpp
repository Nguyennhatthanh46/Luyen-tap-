#include <iostream>
#include <set> //Khai báo thư viện
// Độ phức tạp O(logn)
using namespace std;
int main(){
    set<int> tong; //Khai báo kiểu dữ liệu và đặt tên.
    tong.insert(100); //Hàm insert thêm 1 phần tử vào trong set. 
    tong.insert(200);
    tong.insert(300);
    tong.insert(200);
    tong.insert(100);
  //{100,200,300} . Nếu Insert thêm 1 số giống thì số lượng phần tử vẫn là 3. 
    cout<<tong.size()<<endl; //Hàm size() trả về số lượng phần tử trong set.
    return 0;
}

//Các phần tử luôn sắp xếp từ bé đến lớn. 

// Các dạng khác
#include <iostream>
#include <set>
using namespace std;
int main(){
  set<int> x;
  for(int i = 0; i < 10; i++){
    x.insert(i);
  } cout<<x.size()<<endl; //xuất ra 10 phần tử.
  if(x.count(5)!=0){ //Số 5 có tồn tại 1 lần nên giá trị đúng. nếu thay 5 bằng 0 thì vẫn thỏa mãn vì biến đếm xác nhận số 0 xuất hiện 1 lầ nên nó vẫn đúng. 
    cout<<"Co"<<endl;
  } else{
    cout<<"Khong"<<endl;
  }
return 0;
}

// Có thể thay câu lệnh x.count(5) bằng " x.find(5)!=x.end() " để xét xem nó khác phần tử x.end (phần tử sau phần tử cuối cùng trong set) không. 
Nếu có thì nó sẽ xuất ra kết quả Co. 
Hàm count dễ dùng hơn. 


#include <iostream>
#include <set>
using namespace std;
int main(){
  set<int> x;
  for(int i = 0; i < 10; i++){
    x.insert(i);
  }  
 x.erase(4); //xóa giá trị 5 khỏi set. Sau khi xóa thì còn 9 phần tử. 
 cout<<x.size()<<endl; 
return 0;
}

//Xuất ra các phần tử trong set
#include <iostream>
#include <set>
using namespace std;
int main(){
  set<int> x;
  for(int i = 0; i < 10; i++){
    x.insert(i);
  }
 for(int a : x){
 cout<<a<<" "; //Xuất ra các phần tử từ 0 đến 9. 
   }
  cout<<endl;
  x.erase(4);
  for(int a : x){            //có thể dùng for(auto....) 
    cout<<a<<" "; //sau khi xóa đi thì không có phần tử 4 nữa. 
  }
}

/*
for(set<int>::iterator u = x.begin();u!=x.end();++u){
        cout<<*u<<" ";
  }
  Khai báo bằng iterator cũng được áp dụng. 
*/

//Xuất 1 phần tử cụ thể. 
#include <iostream>
#include <set>
using namespace std;
int main(){
  set<int> x;
  for(int i = 0; i < 10; i++){
    x.insert(i);
  }
cout<<*x.begin()<<endl; //xuất ra phần tử nhỏ nhất, bắt đầu trong set. 
cout<<*x.rbegin()<<endl;//phần tử cuối cùng. 
}

