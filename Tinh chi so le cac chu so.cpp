//Cách 1. Dùng vòng lặp.
#include <iostream>
using namespace std;
int tinh(int n){
     int sodao = 0;int sochuso = 0;
for(int i = n;i!=0;i/=10){
    sodao = sodao*10 + i%10;
    sochuso++;
}
int tong  = 0;
for(int i = 1; i <=sochuso; i++){
        int t = sodao%10;
    if(i%2!=0){
        tong+=t;
    }
sodao/=10;
}
return tong;
}
int tinhdequy(int n){

}
int main() {
    int n;
    cin >> n;
    cout <<tinh(n)<< endl;
    return 0;
}

//Cách 2. Dùng đệ quy.
#include <iostream>
using namespace std;

int sodao(int n,int tong = 0){
if(n==0) return tong;
return sodao(n/10,tong*10+n%10);
}

int tinh(int n, int gan =1){
    if(n==0){
        return 0;
    }
    int so = n%10;
    if(gan%2!=0){
        return so + tinh(n/10,gan+1);
    }else return tinh(n/10,gan+1);

}
int main(){
int n; cin>>n;
cout<<tinh(sodao(n));
}

