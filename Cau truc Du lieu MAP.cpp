#include <iostream>
#include <map>
using namespace std;
int main(){
map<int,int> taphop; //cú pháp khai báo
taphop[100] = 200; //khai báo các giá trị nhập vào với mỗi key. 
taphop[200] = 300;
taphop.insert({300,400}); //khai báo bằng insert. 
taphop.insert({400,500});
taphop[100] = 300; //sau khi chèn giá trị khác thì thì key sẽ nhận gia trị đó. 
for(pair<int,int> x:taphop){
    cout<<x.first<<" "<<x.second<<endl; //in ra các key (theo thứ tự) và các giá trị tương ứng. 
}
cout<<endl;
for(auto a: taphop){ // Kiểu khác.
    cout<<a.first<<" "<<a.second<<endl;
}
}

/*
for(map<int,int>::iterator u = taphop.begin(); u != taphop.end();++u){
    cout<<(*u).first<<" "<<(*u).second<<endl;
}
Khai báo bằng iterator. 
*/

#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
map<int,int> taphop;
taphop[100] = 200;
taphop[200] = 300;
taphop.insert({300,400});
taphop.insert({400,500});
if(taphop.count(100)!=0){ //Xét xem có giá trị key nào bằng 100 không. Ở đây là có. do đã khai báo "taphop.[100] = 200"
    cout<<"YES"<<endl;
}else cout<<"NO"<<endl;
}
/* có thể thay bằng (taphop.find(100) != taphop.end())  */
// dùng taphop.erase(100) để xóa cả key và giá trị trong map. 
