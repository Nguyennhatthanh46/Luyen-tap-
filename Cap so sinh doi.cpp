/*
Các số nguyên tố sinh đôi (twin prime) là các số nguyên tố mà khoảng cách giữa chúng là 2. Hãy in tất cả cặp số sinh đôi nhỏ hơn một số nguyên dương cho trước (số nguyên dương này < 1000).
*/

#include<iostream>
#include<cmath>
using namespace std;
    bool kt(int a){
	if (a<2){
		return false;
	}
	if(a!=2 && a%2==0){
		return false;
	}
	for(int i = 2; i <=sqrt(a);i++){
		if(a%i==0){
	return false;		
	}
	} return true;
}
void demsnt(int n,int &x){
    x=0;
    for(int i=3;i<n-2;i++){
        if(kt(i)&&kt(i+2)){
            cout<<i<<", "<<i+2<<endl;
            x++;
        }
    }
}
int main(){
    int x;
    int n;
    cin>>n;
    demsnt(n,x);
    cout<<"Tong: "<<x<<" cap so sinh doi < "<<n;
    return 0;
}
