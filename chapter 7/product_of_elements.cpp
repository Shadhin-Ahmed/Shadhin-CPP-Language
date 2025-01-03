#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];

	for(int i=0 ; i<n ; i++) {
		cin >> arr[i];
	}

	int product = 1;

	for(int j=0 ; j<n ; j++) {
		product*=arr[j];
	}

	cout<<product;

	return 0;
}
