#include<bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m;
	cin >> n;

	for (int i=1 ; i<=m ; i++) {
	    
	    for (int j=1 ; j<=m+1-i ; j++) {
			cout << j << " ";
		}

		cout << "\n";
	}

	return 0;
}