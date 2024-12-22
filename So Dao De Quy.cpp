#include <iostream>
#include <math.h>
using namespace std;

long long sodao(int n,int tong = 0){
if(n==0) return tong;
return sodao(n/10,tong*10+n%10);
}

long long Fun(int n){
if(n==sodao(n)&&sodao(n)>10){ cout<<"YES";}
else cout<<"NO";
}

int main(){
long long n; cin>>n;
Fun(n);
return 0;
}
