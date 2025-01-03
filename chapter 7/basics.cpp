#include<bits/stdc++.h>
using namespace std;

int main() {

	int arr[5];   // initialization
	// array size n : index 0 to n-1 : values = 6,2,8,5,0

	for(int i=0 ; i<=4 ; i++) {
		cin >> arr[i];
	}
	// arr[0] = 6;   // set values
	// arr[1] = 2;
	// arr[2] = 8;
	// arr[3] = 5;
	// arr[4] = 0;

	for(int j=0 ; j<=4 ; j++) {
		cout << arr[j] << "\n";
	}
	// cout << arr[0] << "\n";
	// cout << arr[1] << "\n";
	// cout << arr[2] << "\n";
	// cout << arr[3] << "\n";
	// cout << arr[4] << "\n";

    int a[3] = {2, 3, 4};   // valied
    int array[] = {2, 3, 4};   // valied

	int size=10, b[size];
	//int b[size], size=10;   - error for first use then declare

	int num[5];
	// num[0] - 1st element - 0th index 
	// num[4] - 5th element - 4th index
	// num[n] - (n+1)th element - nth index

	return 0;
}
