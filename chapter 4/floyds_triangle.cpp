#include<bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m;
	cin >> n;

	int a = 1;

	for (int i=1 ; i<=m ; i++) {
	    
	    for (int j=1 ; j<=i ; j++) {
			cout << a << " ";   // i can use only a++ here
			a = a+1;   // i can use a++; also
		}

		cout << "\n";
	}

	return 0;
}