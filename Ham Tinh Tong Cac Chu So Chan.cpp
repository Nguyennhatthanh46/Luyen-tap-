/*
Tính tổng các chữ số chẵn trong một số không âm.

INPUT
số nguyên không âm (mặc định nhập đúng điều kiện)

OUTPUT
Một số nguyên dương

EXAMPLE
Input	                Output
--------------------------------
0	                    0
________________________________
5	                    0
________________________________
1546	                10
*/


#include <iostream>
int TongChuSoChan(int n, int &sum){
int x;
for(int i=n;i!=0;i/=10){
x = i%10;
if(x%2==0){
	sum+=x;
}
}
return sum;
}
void input(int &n){
    std::cin >> n;
}
int main(){
    int a, sum=0;
    input(a);
    TongChuSoChan(a, sum);
    std::cout << sum;
    return 0;
}

