#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int a = 1;

	for(int i=1 ; i<=n ; i++) {
		cout << a <<"\n";
		a = a+2;
	}

	return 0;
}
	

// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n;
// 	cin >> n;

// 	// for(int i=1 ; i<=(2*n)-1 ; i+=2) {
// 	// 	cout << i <<"\n";
// 	// }

// 	for(int i=1 ; i<=n ; i++) {
// 		cout << (2*i)-1 <<"\n";
// 	}

// 	return 0;
// }
