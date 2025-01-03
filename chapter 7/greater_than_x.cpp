// number of elements greater than x

#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];

	int x = 5;
	int count = 0;  // initialize is must to store & update value

	for(int i=0 ; i<n ; i++) {
		cin >> arr[i];
	}

	for(int j=0 ; j<n ; j++) {
		if(arr[j]>x) {
			count+=1;
		}
	}
	cout << count;

	return 0;
}
