#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b) {   // store the address value - using *
	int temp = *a; 
	*a = *b;  // basically *a = value of y - exchange the pointers value
	*b = temp;
}


int main() {

	int x, y;
	cin >> x;
	cin >> y;

	cout << x << " " << y << "\n";

	swap(&x,&y);   // pass the address of x y - pass by refference

	cout << x << " " << y << "\n";

	return 0;
}
