#include<bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m;
	cin >> n;

	for (int i=1 ; i<=m ; i++) {

		if(i%2==1) {
			for(int j=1 ; j<=i ; j++) {
				cout << j << " ";
			}
		}
		else {
			for(int k=1 ; k<=i ; k++) {
					cout << (char)(k+64) << " ";
			    }
		}
	    
		cout << "\n";
	}

	return 0;
}