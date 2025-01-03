#include<bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m;
	cin >> n;

	for (int i=1 ; i<=2*m-1 ; i+=2) {
	    
	    for (int j=1 ; j<=i ; j+=2) {
			cout << j << " ";
		}

		cout << "\n";
	}

	return 0;
}