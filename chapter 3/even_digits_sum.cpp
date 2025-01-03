#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int even_sum=0;

	while(n>0) {
		int rem = n%10;
		n = n/10;
		if(rem%2==0) {
			even_sum+=rem;
		} else {
			continue;
		}
	}
	cout << even_sum <<"\n";

	return 0;
}
