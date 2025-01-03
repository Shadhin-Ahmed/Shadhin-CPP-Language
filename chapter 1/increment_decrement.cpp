#include<bits/stdc++.h>
using namespace std;

int main() {        // increment/decrement value autometically save in the variable

	int x=7;
	cout << x <<"\n";
	x++;                // post increment 
	cout << x <<"\n";
	x--;                // post decrement
	cout << x <<"\n";
	++x;                // pre increment
	cout << x <<"\n";
	--x;                // pre decrement
	cout << x <<"\n";
	cout <<"\n";

	int y=3;
	cout << y++ <<"\n";  // first use then increment
	cout << y <<"\n";    // y=4

	cout << y-- <<"\n";  // here y=4 cause increment value auto saved in variable
	cout << y <<"\n";    // y=3 

	cout << ++y <<"\n";  // here y=3  // first increment then use
	cout << y <<"\n";    // y=4

	cout << --y <<"\n";  // here y=4
	cout << y <<"\n";    // y=3

	return 0;
}
