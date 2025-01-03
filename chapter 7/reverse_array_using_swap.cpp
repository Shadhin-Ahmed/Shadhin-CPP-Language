#include<bits/stdc++.h>
using namespace std;

int main() {

	int arr[] = {2,3,4,5,6,7};
	int n = sizeof(arr)/4;
	int i=0, j=n-1;              // 0 to n-1 array
	for (int k=0 ; k<n ; k++) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	
	for (int i=0 ; i<n ; i++) {
	    cout << arr[i] <<" ";
	}

	return 0;
}
