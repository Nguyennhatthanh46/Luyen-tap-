/*
Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n. (Dùng Hàm)
Ví dụ: 1568 có chữ số đầu tiên là 1.
*/

#include <iostream>

using namespace std;

int ChuSoDauTien(int a, int &b){
	for (int i = a;i!=0;i/=10){
		b=i%10;
	}
	return b;
}
void input(int &n){
    std::cin >> n;
}

int main(){
    int a, first;
    input(a);
    ChuSoDauTien(a, first);
    std::cout << first;
    return 0;
}
