#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int product=1;  // not 0 because product remain same for 1

	while(n>0) {
		int rem = n%10;
		n = n/10;
		product*=rem;   // product = product*rem
	}
	cout << product <<"\n";

	return 0;
}
