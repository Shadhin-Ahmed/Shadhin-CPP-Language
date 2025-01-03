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
			even_sum+=arr[j];
		} else {
			odd_sum+=arr[j];
		}
	}

	cout << ;

	return 0;
}
