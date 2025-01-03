#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	for(int i=2 ; i<=(n/2) ; i++) {
		if(n%i==0) {
			cout << "Composite" <<"\n";
			return 0;
		}
	}

	cout << "Prime" <<"\n";


	return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n;
// 	cin >> n;
// 	bool flag = 1;

// 	for (int i=2 ; i<=n/2 ; i++) {
// 		if (n%i==0) {
// 			flag = 0;
// 			break;
// 		}
// 	}

// 	if (n==1) {
// 		cout << "Neither Prime nor Composite";
// 	}
// 	else if(flag==1) {
// 		cout << "Prime" << "\n";
// 	} else {
// 		cout << "Composite" << "\n";
// 	}

// 	return 0;
// }
