#include<bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m;
	cin >> n;

	for (int i=1 ; i<=m ; i++) {
	    
	    for (int j=1 ; j<=i ; j++) {
			cout << (char)(j+64) << " ";
			
		}

		cout << "\n";
	}

	return 0;
}