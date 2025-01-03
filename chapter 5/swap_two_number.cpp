// Method final - XOR operator - recommended
#include<bits/stdc++.h>
using namespace std;

int main() {

	int x, y;

	cin >> x;
	cin >> y;

	x = x ^ y ;  //it is binary bitwise XOR operation between x & y
	y = x ^ y ;
	x = x ^ y ;

	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";


	return 0;
}



// // Method 1 - using temporary variable
// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int x, y, temp;

// 	cin >> x;
// 	cin >> y;

// 	temp = x;
// 	x = y;
// 	y = temp;

// 	cout << " X = " << x << "\n";
// 	cout << " Y = " << y << "\n";

// 	return 0;
// }



// // Method 2 - using subtraction / addition
// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int a, b;

// 	cin >> a;
// 	cin >> b;

// 	a = a+b;  // addition first method - my fvrt
// 	b = a-b;
// 	a = a-b;

// 	//a = a-b;  // subtraction first method
// 	//b = a+b;
// 	//a = b-a;

// 	cout << " a = " << a << "\n";
// 	cout << " b = " << b << "\n";

// 	return 0;
// }
