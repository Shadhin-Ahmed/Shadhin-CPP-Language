#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n-1];

	for(int i=1 ; i<=n ; i++) {      // stored in array
		int element = i*i;
		arr[i-1] = element;
	}

	for(int j=0 ; j<(n-1) ; j++) {   // printing the array
		cout << arr[j] <<" ";
	}

	return 0;
}
