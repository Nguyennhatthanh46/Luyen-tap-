#include <iostream>
using namespace std;
int main()
{
int n=5;
int *a = new int[n];
int *p=a;
a[0] = 2023;
for(int i=1; i<n; i++)
*(p+i) = a[i-1] + i;
for(int i=0; i<n; i++)
cout<<a[i]<<" ";
return 0;
}
//Kết quả: 2023 2024 2026 2029 2033
/*
int *a = new int[n];: Dùng toán tử new để cấp phát động một khối nhớ đủ chứa 5 số nguyên. 
Con trỏ a sẽ trỏ đến phần tử đầu tiên của mảng này.

int *p=a;: Khai báo một con trỏ p và gán nó bằng giá trị của con trỏ a. 
Lúc này, cả a và p đều trỏ đến cùng một địa chỉ trong bộ nhớ, tức là phần tử đầu tiên của mảng.

a[0] = 2023 gán phần tử đầu tiên cho mảng a. 
Sau đó là vòng lặp và gán các giá trị từ a[0] nhờ con trỏ *(p+i) rồi in ra kết quả của từng số. 
*/
