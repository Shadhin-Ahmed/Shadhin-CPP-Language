// if 1=Base-Case - 2=Work - 3=Call  then output n to 1  -  ulta
// if 1=Base-Case - 2=Call - 3=Work  then output 1 to n  - sidha

#include<bits/stdc++.h>
using namespace std;

void print(int n) {

	if(n==0) {     // base case
		return;
	}

	print(n-1);    // call

	cout << n << "\n";  // work
}

int main() {

	int n;
	cin >> n;

	print(n);

	return 0;
}


// Method : 2

// #include<bits/stdc++.h>
// using namespace std;

// void print(int x, int n) {

// 	if(x>n) {
// 		return;
// 	}

// 	cout << x << "\n";
// 	print(x+1, n);
// }

// int main() {

// 	int n;
// 	cin >> n;

// 	print(1, n);

// 	return 0;
// }
