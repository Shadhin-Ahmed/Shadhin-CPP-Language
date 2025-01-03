#include<bits/stdc++.h>
using namespace std;

int main() {         // check metheod 3 must

	int n;           // n=5
	cin >> n;
	int arr[n];      // {4 1 5 7 6} 
	for(int i=0 ; i<n ; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0];

	for(int j=0 ; j<n ; j++) {
		if(arr[j]>max) {
			max = arr[j];
		} else{
			continue;
		}
	}

	for(int k=0 ; k<n ; k++) {
		if(arr[k]<min) {
			min = arr[k];
		} else{
			continue;
		}
	}

	cout << max <<"\n";
	cout << min <<"\n";

	return 0;
}


// Method 2 - built in max function

/*#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];

	for(int i=0 ; i<n ; i++) {
		cin >> arr[i];
	}

	int mx = arr[0];

	for(int j=0 ; j<n ; j++) {
		mx = max(mx,arr[j]);
	}

	cout<<mx;

	return 0;
}*/


// method 3 - Compare with INT_MIN/INT_MAX value 

/*#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];

	for(int i=0 ; i<n ; i++) {
		cin >> arr[i];
	}

	int mx = INT_MIN;  // compare with minimum integer value
	int mn = INT_MAX;  // compare with maximum integer value

	for(int j=0 ; j<n ; j++) {
		mx = max(mx,arr[j]);
	}

	for(int k=0 ; k<n ; k++) {
		mn = min(mn,arr[k]);
	}

	cout << mx <<"\n";
	cout << mn <<"\n";

	cout << INT_MIN <<"\n";  // int min = -2^31
	cout << INT_MAX <<"\n";  // int max = 2^31-1  (-1 is for extra 0)

	return 0;
}*/

// minimum integer value INT_MIN   used to compare elements for Max element
// maximum integer value INT_MAX   used to compare elements for Min element 
