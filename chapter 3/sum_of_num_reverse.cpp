#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int store_n = n;

	int reverse = 0;

	int count = 0;
	while (n>0) {
		int ld = n%10;
		reverse = reverse*10;
		reverse = reverse+ld;
		n = n/10;
		count++;	
	}
	cout << reverse+store_n << "\n";

	return 0;
}