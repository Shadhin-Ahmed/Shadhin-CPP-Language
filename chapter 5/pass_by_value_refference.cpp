// swap two number - 
#include<bits/stdc++.h>
using namespace std;

// pass by value - just tranfer value from main function to this fn
// main functions x y and this functions x y  are different varibles
// so it doesn't swap main functions x y -
void swap(int x, int y) {  
	int temp = x;
	x = y;
	y = temp;
}


int main() {

	int x, y;

	cin >> x;
	cin >> y;

	swap(x,y);

	cout << " X = " << x << "\n";
	cout << " Y = " << y << "\n";

	return 0;
}



// // swap two number
// #include<bits/stdc++.h>
// using namespace std;

// // pass by refference - add & for refference of x y of main function
// // it swap because &x &y are variable refference of main function
// void swap(int& x, int& y) {  
// 	int temp = x;
// 	x = y;
// 	y = temp;
// }


// int main() {

// 	int x, y;

// 	cin >> x;
// 	cin >> y;

// 	swap(x,y);

// 	cout << " X = " << x << "\n";
// 	cout << " Y = " << y << "\n";

// 	return 0;
// }