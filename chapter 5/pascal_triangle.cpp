#include<bits/stdc++.h>
using namespace std;

int factorial(int a) {
	int fact = 1;
	for(int k=1 ; k<=a ; k++) {
		fact *= k;
	}
	return fact;
}

int nCr(int n, int r) {
	return factorial(n)/(factorial(r)*factorial(n-r));
}


int main() {

	int m;
	cin >> m;

	for(int i=0 ; i<=m ; i++) {

		for(int k=0 ; k<=m-i ; k++) {   // this loop is for space
			cout << " ";   // more space needed for large input m
		}   // it's better to skip this loop and print half triangle

		for(int j=0 ; j<=i ; j++) {
			cout << nCr(i,j) << " ";
		}
		cout << "\n";
	}

	return 0;
}
