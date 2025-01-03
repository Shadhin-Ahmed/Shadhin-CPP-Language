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

	int a = fact(n);
	int b = fact(r);
	int c = fact(n-r);

	cout << a/(b*c) << "\n";

	return 0;
}
