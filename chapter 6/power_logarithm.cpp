#include<bits/stdc++.h>
using namespace std;

int powerlog(int a, int b) {

	if(b==0) return 1;

	if(b==1) return a;

	int x = powerlog(a, b/2);

	if(b%2==0){
		return x*x;      // powerlog(a, b/2) * powerlog(a, b/2)
	} 
	else {
		return x*x*a;    // powerlog(a, b/2) * powerlog(a, b/2) * a
	}
}

int main() {

	int a, b;
	cin >> a;
	cin >> b;

	cout << powerlog(a,b);

	return 0;
}
