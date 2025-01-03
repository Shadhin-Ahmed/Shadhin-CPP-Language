#include<bits/stdc++.h>
using namespace std;

int main() {

	int x = 5;

	int* p = &x;

	cout << "value of X = " << x << "\n";

	cout << "address of X = " << &x << "\n";

	cout << "value of pointer p = " << p << "\n"; // always equal to &x

	cout << "value stored in pointer p = " << *p << "\n";
	// star operator (*p) - fetch the value of stored address in pointer p

	cout << "address of pointer p = " << &p << "\n";


	return 0;
}
