#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int i;   // digit is total number of running the loop
	for (i=1 ; i<=n ; i++) {
		n = n/10;
		if (n==0) {
			break;
		}
	}
	cout << i << "\n";

	return 0;
}



//2nd approach - using while loop

// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n;
// 	cin >> n;
// 	int count=0;
// 	while (n>0) {
// 		n = n/10;
// 		count++;
// 	}
// 	cout << count << "\n";

// 	return 0;
// }