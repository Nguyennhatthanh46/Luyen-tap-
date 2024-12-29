#include <iostream>
using namespace std;

int test(int a){
a = a*2 -7;
return -a;
}

int main()
{
	int a = 7;
	int &b=a;
	cout<<test(a)<<", ";
	b=100;
	a = b-a+1;
	b++;
	cout<<a<<", "<<b;
	return 0;
}
//KẾT QUẢ: -7, 2, 2
/*
Do biến b là tham chiếu của a nên a biến đổi thì b biến đổi.
*/
