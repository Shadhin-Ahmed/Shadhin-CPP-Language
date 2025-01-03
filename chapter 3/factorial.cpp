#include<bits/stdc++.h>
using namespace std;

int main() {

	double n;         
	cin >> n;
	double fact = 1;   // use double, int is small for storing big fact values

	for(int i=n ; i>=1 ; i--) {
		fact = i*fact;
	}
	cout << fact <<"\n";

	return 0;
}
