#include<bits/stdc++.h>
using namespace std;

int main() {

	int a, b;
	cin >> a;
	cin >> b;

	cout << a%b <<"\n"; 

	// modulus operator %
	// a%b = remainder
	// a%b = a when a<b
	// a%a = remainder 0
	// a%(-b) = a%b // 8%3=2 and 8%(-3)=2
	// (-a)%b = -(a%b)
	// a%b=0 then a is divisible by b


	return 0;
}
