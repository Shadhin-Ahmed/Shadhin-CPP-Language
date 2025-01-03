#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {

	if(n==1 || n==2) return 1; // fibo(1)=1 - fibo(2)=1

	return fibo(n-1) + fibo(n-2);
}

int main() {

	int n;
	cin >> n;

	cout << fibo(n);

	return 0;
}

// this code work like root - called : eulers tour tree
