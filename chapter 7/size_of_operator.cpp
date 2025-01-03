#include<bits/stdc++.h>
using namespace std;

int main() {

	int arr[]={1,2,3,4,5};       
	cout << sizeof(arr) <<'\n';    // 5 int elements == 5x4 == 20 bytes
	cout << sizeof(arr)/4 <<'\n';  // int so size/4 == num of elements
	// float then size/4 == num of elements
	// long long then size/8 == num of elements

	int x;
	cout << sizeof(x) <<'\n';   // int so 4 bytes

	char z;
	cout <<sizeof(z) <<'\n';    // char so 1 byte


	bool a;
	cout << sizeof(a) <<'\n';   // bool so 1 byte

	// float = 4, double = 8, long long = 8

	return 0;
}
