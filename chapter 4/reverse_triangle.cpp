#include<bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m;
	cin >> n;

	for (int i=1 ; i<=m ; i++) {
	    
	    for (int j=i ; j<=m ; j++) {
			cout << '*' << " ";
			
		}

		cout << "\n";
	}

	return 0;
}