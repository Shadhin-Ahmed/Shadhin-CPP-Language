#include<bits/stdc++.h>
using namespace std;

int main() {

	int n; cin >> n;
	int arr[n];
	for (int i=0 ; i<n ; i++) {
		cin >> arr[i];
	}
    for (int i=0 ; i<n ; i++) {
    	if (arr[i]!=arr[n-1-i]) {
    		cout << "not palindrom";
    		return 0;
    	}
    }	
    cout << "palindrome";
	return 0;
}
