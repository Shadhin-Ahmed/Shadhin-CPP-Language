#include<bits/stdc++.h>
using namespace std;

int main() {

	int x = 5;
    cout << x <<"\n";
    x = 7;              // updation of variable
    cout << x <<"\n";

    x = x+2;
    cout << x <<"\n";
    cout << x*2 <<"\n";   // just output x*2 but x=x+2 remain
    cout << x <<"\n";     // here x=x+2 cause no updation after x=x+2
    cout << x-10 <<"\n";  // so ans is (x+2)-10 so its -1

    // x=x+2 or  x += 2;
    // x=x-3 or  x -= 3;
    // x=x*4 or  x *= 4;
    // x=x/3 or  x /= 3;

	return 0;
}
