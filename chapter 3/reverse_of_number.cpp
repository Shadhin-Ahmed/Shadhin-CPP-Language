#include<bits/stdc++.h>       // actual mathematical method
using namespace std;

int main() {

	int n;
	cin >> n;
	int reverse = 0;

	int count = 0;
	while (n>0) {
		int ld = n%10;
		reverse = reverse*10;
		reverse = reverse+ld;
		n = n/10;
		count++;	
	}
	cout << reverse << "\n";

	return 0;
}



// #include<bits/stdc++.h>    // just print method
// using namespace std;

// int main() {

// 	int n;
// 	cin >> n;

// 	int count = 0;
// 	while (n>0) {
// 		int m = n%10;
// 		n = n/10;
//     	cout << m;
// 	}

// 	return 0;
// } 
