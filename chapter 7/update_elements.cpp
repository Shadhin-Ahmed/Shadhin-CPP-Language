// update odd element to its second multiple & even element increment 10

#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];

	for(int i=0 ; i<n ; i++) {
		cin >> arr[i];
	}

	for(int j=0 ; j<n ; j++) {
		if(j%2==0) {
			arr[j] = arr[j]+10;  // even = increment 10
		} else {
			arr[j] = 2*arr[j];   // odd = multiple of 2
		}
	}

	for(int k=0 ; k<n ; k++) {
		cout << arr[k] <<" ";
	}

	return 0;
}