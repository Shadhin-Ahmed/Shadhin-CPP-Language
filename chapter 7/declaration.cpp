#include<bits/stdc++.h>
using namespace std;

int main() {

    // initialization = declaration
    // int arr[] = {1,2,3};  valied

	int arr[5] = {2, 3, 4, 5, 6};

	for(int i=0 ; i<=4 ; i++) {
		cout << arr[i] << "\n";
	}

	arr[2] = 100;   // update the value of index [2]
	
    for(int j=0 ; j<=4 ; j++) {
		cout << arr[j] << "\n";
	}

	for(int k=0 ; k<=4 ; k++) {
		cout << arr[k]*5 << "\n";   // outputs = 5 times of inputs
	}

	return 0;
}
