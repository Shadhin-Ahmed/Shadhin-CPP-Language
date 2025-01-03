#include<bits/stdc++.h>
using namespace std;

int fact(int x) {
	int f = 1;
	for(int i=1 ; i<=x ; i++) {
		f *= i;  // fact = fact * i
	}
	return f;
}


int main() {

	int n, r;
	cin >> n;
	cin >> r;	

	int p = fact(n);
	int q = fact(n-r);

	cout << (p/q) << "\n";

	return 0;
}
