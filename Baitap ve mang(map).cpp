/* BÀI 1
Đếm số lần xuất hiện của các phần tử trong mảng có n phần tử
Ví dụ:
10
9 8 -5 6 2 3 7 -7 2 -5
Output:
-7 1
-5 2
2 2
3 1
6 1
7 1
8 1
9 1
*/
#include <iostream>
#include <map>
using namespace std;
int main(){
int n; cin>>n;
map<int,int> taphop;
for(int i = 0; i <n; i++){
    int a; cin>>a;
    taphop[a]++; //Khi map chỉ đến phần tử nào mà chưa được khai báo thì mặc định là 0 nên nó sẽ cộng lên 1.
}
for(auto x:taphop){
    cout<<x.first<<"  "<<x.second<<endl;
}
}

/*
BÀI 2
Đếm số lần xuất hiện của các phần tử trong mảng có n phần tử. In ra các giá trị theo thứ tự xuất hiện trong mảng và số lần của chúng. 
Ví dụ:
4
9 9 8 -5
Output
9 2
8 1
-5 1
*/
  
#include <iostream>
#include <map>
using namespace std;
int main(){
int n; cin>>n;
int a[n];
map<int,int> taphop;
for(int i = 0; i <n; i++){
    cin>>a[i];
    taphop[a[i]]++;
}
for(int i = 0; i <n; i++){
    if(taphop[a[i]]!=0)
    cout<<a[i]<<"  "<<taphop[a[i]]<<endl;
    taphop[a[i]]=0; 
/*Nếu số lần xuất hiện của phần tử chưa được in ra (khác 0), in phần tử đó cùng tần suất xuất hiện.
Sau khi in, đặt giá trị tần suất về 0 để tránh in lại phần tử.*/
}
}

/* BÀI 3.
Đếm số lần xuất hiện của các phần tử xâu kí tự trong mảng có n phần tử. In ra giá trị và số lần của phần tử xuất hiện nhiều nhất. Phần tử đó có giá trị chữ kí tự lớn nhất. /bé nhất.
*/

#include <iostream>
#include <map>
using namespace std;
int main(){
int n; cin>>n;
map<string,int> taphop;
for(int i = 0; i <n; i++){
    string s;cin>>s;
    taphop[s]++;
}
int gtln = 0;
    string a;
for( auto u: taphop){
    if(gtln < u.second){ //thay dấu <= thì nó sẽ in ra phần tử có kí tự lớn hơn. 
        gtln = u.second;
        a = u.first;
    }
} cout<<a<<"  "<<gtln<<endl;
}

//multimap
/* Không thể gán giá trị cho nhiều key được. Nên khai báo bằng insert */
#include <iostream>
#include <map>
using namespace std;
int main(){
multimap<int, int> mang;
mang.insert({1,100});
mang.insert({2,100});
mang.insert({1,100});
for(auto u:mang){
    cout<<u.first<<" "<<u.second<<endl;
}
cout<<endl;
cout<<mang.count(1)<<endl; //có 2 lần key 1
}



