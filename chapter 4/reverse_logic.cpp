#include<bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m;
	cin >> n;

	for (char ch='A' ; ch<='D' ; ch++) {
	    
	    for (int i=1 ; i<=n ; i++) {
			cout << ch << " ";
		}
		
		cout << "\n";
	}

	return 0;
}