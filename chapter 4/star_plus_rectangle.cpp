#include<bits/stdc++.h>
using namespace std;

int main() {

	int m;
	cin >> m;

	for(int i=1 ; i<=m ; i++) {
		for(int j=1 ; j<=m ; j++) {
			if(j==((m/2)+1) || i==((m/2)+1)) {
				cout << "*";
			} else {
				cout <<" ";
			}
		}
		cout <<"\n";
	}

	return 0;
}