// difference the sums of even & odd indices

#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];

	int even_sum = 0;
	int odd_sum = 0;

	for(int i=0 ; i<n ; i++) {
		cin >> arr[i];
	}

	for(int j=0 ; j<n ; j++) {
		if(j%2==0) {
			even_sum+=arr[j];   // even indices sum
		} else {
			odd_sum+=arr[j];    // odd indices sum
		}
	}

	cout << (even_sum - odd_sum);

	return 0;
}
